# spatch 
// temporary name
@@
attribute name BLIS_EXPORT_BLIS;
identifier f =~ "\(.*obj.*\|_ex$\)";
type t;
@@

- t f ( ... );

