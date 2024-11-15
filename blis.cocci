// remove empty arguments lists
@@
type t;
identifier f;
@@

 t f ( 
-void
 );


@fm@
identifier cf =~ "bli_.*";
parameter list [N={1...28}] PL;
expression list E;
@@

__attribute__((visibility("default"))) void cf(PL@E);

@script: python@
pl << fm.PL;
ff << fm.cf;
@@

BLIS_C2F_DICT = {
		   'int': 'integer(c_int)',
	   'timpl_t': 'integer(c_int)',
		 'dim_t': 'integer(dim_t)',
		 'inc_t': 'integer(inc_t)',
		'doff_t': 'integer(doff_t)',
		 'float': 'real(c_float)',
		'double': 'real(c_double)',
	'scomplex': 'complex(c_float)',
	'dcomplex': 'complex(c_double)',
	 'trans_t': 'integer(trans_t)',
		'conj_t': 'integer(conj_t)',
		'side_t': 'integer(side_t)',
		'uplo_t': 'integer(uplo_t)',
		'diag_t': 'integer(diag_t)'
}

unwanted = ["obj_t", "void", "blksz_t", "char", "num_t", 
		    "cntl_t", "cntx_t", "_Bool", "dir_t", "opid_t", 
		    "FILE", "f77_int", "machval_t", "ind_t",
		    "errlev_t", "bli_pthread_once_t", "getopt_t",
		    "subpart_t", "rntm_t", "thrinfo_t", "thrcomm_t"]

SUB_HEAD = "subroutine {name}({parameters}) bind(c)\n"
SUB_IMPORT = "    use blis_kinds\n"
SUB_BODY = "{declarations}\n"
SUB_END = "end subroutine"

SUB_STRING = SUB_HEAD + SUB_IMPORT + SUB_BODY + SUB_END

def fortran_subroutine(name,parameters,declarations,indent = 2):
	"""Generate a Fortran subroutine interface."""

	if indent > 0:
		prefix = ' '*indent
		declarations = [prefix + d for d in declarations]

	return SUB_STRING.format(
		name=name,
		parameters=', '.join(parameters),
		declarations='\n'.join(declarations)
		)

def parameter_and_declaration_lists(cf,pl,C2F_DICT=BLIS_C2F_DICT):
	"""Break a list C declarations into Fortran form"""

	parameters = []
	declarations = []

	for pl_str in pl:

		intent = 'inout'
		attributes = []

		# Break string into pieces
		parts = pl_str.split(' ')

		# Last element is dummy argument
		arg = parts.pop()
		parameters.append(arg)

		t = ' '.join(parts)
		if t.endswith('*'):
			parts.pop()
			if (arg != "alpha" and arg != "beta"):
				# it's an array
				attributes.append('dimension(*)') # We have an array
		else:
			attributes.append('value') # We have a scalar
			intent = 'in'

		if t.startswith('const'):
			parts.pop(0)
			intent = 'in'

		attributes.append('intent({})'.format(intent))

		c_type = parts.pop()

		if c_type in unwanted:
			print(f"! skipped the procedure using {c_type}")
			print(f"! void {cf}({pl});\n")
			return None, None

		decl_type = C2F_DICT[c_type]
		decl_attr = ', '.join(attributes)

		d = "{type}, {attributes} :: {arg}".format(
			type=decl_type,
			attributes=decl_attr,
			arg=arg)

		declarations.append(d)

	return parameters, declarations



params, decls = parameter_and_declaration_lists(ff,pl)

if params is not None:
	print("interface")
	print("! void {name}({args})".format(name=ff,args=", ".join(pl)))
	print(fortran_subroutine(ff,params,decls))
	print("end interface\n")

