@fm@
identifier cf =~ "bli_.*";
@@

void cf(void);

@script: python@
ff << fm.cf;
@@

SUB = "  ! void {name}()\n" \
      "  subroutine {name}() bind(c,name='{name}')\n" \
      "  end subroutine\n"

INTERFACE = "interface\n" \
            "{}"\
            "end interface\n".format(SUB)

def gen_interface(name):
    return INTERFACE.format(name=name)

print(gen_interface(ff))


