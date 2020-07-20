#include <klic/basic.h>
unsigned char * Const init_atomname[] = {
	(unsigned char *)"call",
	(unsigned char *)"element",
	(unsigned char *)"size",
	(unsigned char *)"set_element",
	(unsigned char *)"split",
	(unsigned char *)"join",
	(unsigned char *)"vector",
	(unsigned char *)"string",
	(unsigned char *)"element_size",
	(unsigned char *)"search_character",
	(unsigned char *)"less_than",
	(unsigned char *)"not_less_than",
	(unsigned char *)"estring",
	(unsigned char *)"print",
	(unsigned char *)"int",
	(unsigned char *)"sin",
	(unsigned char *)"cos",
	(unsigned char *)"tan",
	(unsigned char *)"asin",
	(unsigned char *)"acos",
	(unsigned char *)"atan",
	(unsigned char *)"sinh",
	(unsigned char *)"cosh",
	(unsigned char *)"tanh",
	(unsigned char *)"asinh",
	(unsigned char *)"acosh",
	(unsigned char *)"atanh",
	(unsigned char *)"exp",
	(unsigned char *)"log",
	(unsigned char *)"sqrt",
	(unsigned char *)"ceil",
	(unsigned char *)"floor",
	(unsigned char *)"round",
	(unsigned char *)"plus",
	(unsigned char *)"minus",
	(unsigned char *)"add",
	(unsigned char *)"subtract",
	(unsigned char *)"multiply",
	(unsigned char *)"divide",
	(unsigned char *)"pow",
	(unsigned char *)"not_greater_than",
	(unsigned char *)"greater_than",
	(unsigned char *)"equal",
	(unsigned char *)"not_equal",
	(unsigned char *)"float",
	(unsigned char *)"module",
	(unsigned char *)"name",
	(unsigned char *)"arity",
	(unsigned char *)"apply",
	(unsigned char *)"predicate",
	(unsigned char *)"defined",
	(unsigned char *)"reduce",
	(unsigned char *)"step",
	(unsigned char *)"arg",
	(unsigned char *)"setarg",
	(unsigned char *)"id",
	(unsigned char *)"set_predicate",
	(unsigned char *)"normal",
	(unsigned char *)"get_atom",
	(unsigned char *)"get_atom_name",
	(unsigned char *)"intern",
	(unsigned char *)"power",
	(unsigned char *)"eof",
	(unsigned char *)"end_of_file",
	(unsigned char *)"[",
	(unsigned char *)"{",
	(unsigned char *)" (",
	(unsigned char *)"(",
	(unsigned char *)"-",
	(unsigned char *)"]",
	(unsigned char *)"never",
	(unsigned char *)"}",
	(unsigned char *)")",
	(unsigned char *)"|",
	(unsigned char *)",",
	(unsigned char *)"fx",
	(unsigned char *)"fy",
	(unsigned char *)"xfx",
	(unsigned char *)"xfy",
	(unsigned char *)"yfx",
	(unsigned char *)"xf",
	(unsigned char *)"yf",
	(unsigned char *)"none",
	(unsigned char *)"yes",
	(unsigned char *)"no",
	(unsigned char *)"abnormal",
	(unsigned char *)"variable",
	(unsigned char *)"error",
	(unsigned char *)"number",
	(unsigned char *)"integer",
	(unsigned char *)"floating_point",
	(unsigned char *)"prefix",
	(unsigned char *)"infix",
	(unsigned char *)"ops",
	(unsigned char *)"postfix",
	(unsigned char *)"op",
	(unsigned char *)"atom",
	(unsigned char *)"list",
	(unsigned char *)"functor",
	(unsigned char *)"!",
	(unsigned char *)";",
	(unsigned char *)"void",
	(unsigned char *)"escaped_newline",
	(unsigned char *)"hexadecimal",
	(unsigned char *)"getc",
	(unsigned char *)"vtab",
	(unsigned char *)"=",
	(unsigned char *)"var",
	(unsigned char *)"octal",
	(unsigned char *)"ungetc",
	(unsigned char *)"stderr",
	(unsigned char *)"linecount",
	(unsigned char *)"putc",
	(unsigned char *)"fwrite",
	(unsigned char *)"fflush",
	(unsigned char *)"s",
	(unsigned char *)"open",
	(unsigned char *)"unknown",
	(unsigned char *)"nl",
	(unsigned char *)"&",
	(unsigned char *)"?-",
	(unsigned char *)"implicit",
	(unsigned char *)"local_implicit",
	(unsigned char *)"mode",
	(unsigned char *)"nospy",
	(unsigned char *)"public",
	(unsigned char *)"spy",
	(unsigned char *)"with_macro",
	(unsigned char *)"~",
	(unsigned char *)"$~",
	(unsigned char *)"\\+",
	(unsigned char *)"#",
	(unsigned char *)"$$:=",
	(unsigned char *)"$$<",
	(unsigned char *)"$$<=",
	(unsigned char *)"$$=:=",
	(unsigned char *)"$$=<",
	(unsigned char *)"$$=\\=",
	(unsigned char *)"$$>",
	(unsigned char *)"$$>=",
	(unsigned char *)"$:=",
	(unsigned char *)"$<",
	(unsigned char *)"$<=",
	(unsigned char *)"$=:=",
	(unsigned char *)"$=<",
	(unsigned char *)"$=\\=",
	(unsigned char *)"$>",
	(unsigned char *)"$>=",
	(unsigned char *)"&<",
	(unsigned char *)"&<=",
	(unsigned char *)"&=<",
	(unsigned char *)"&>",
	(unsigned char *)"&>=",
	(unsigned char *)"$+=",
	(unsigned char *)"$-=",
	(unsigned char *)"$*=",
	(unsigned char *)"$/=",
	(unsigned char *)"*",
	(unsigned char *)"**",
	(unsigned char *)"+",
	(unsigned char *)"-->",
	(unsigned char *)"->",
	(unsigned char *)"/",
	(unsigned char *)"//",
	(unsigned char *)"/\\",
	(unsigned char *)":",
	(unsigned char *)":-",
	(unsigned char *)"::",
	(unsigned char *)":=",
	(unsigned char *)"<",
	(unsigned char *)"<<",
	(unsigned char *)"<<=",
	(unsigned char *)"<=",
	(unsigned char *)"<==",
	(unsigned char *)"=..",
	(unsigned char *)"=:=",
	(unsigned char *)"=<",
	(unsigned char *)"==",
	(unsigned char *)"=>",
	(unsigned char *)"=\\=",
	(unsigned char *)">",
	(unsigned char *)">=",
	(unsigned char *)"+=",
	(unsigned char *)"-=",
	(unsigned char *)"*=",
	(unsigned char *)"/=",
	(unsigned char *)">>",
	(unsigned char *)"@",
	(unsigned char *)"@<",
	(unsigned char *)"@=<",
	(unsigned char *)"@>",
	(unsigned char *)"@>=",
	(unsigned char *)"\\/",
	(unsigned char *)"\\=",
	(unsigned char *)"\\==",
	(unsigned char *)"^",
	(unsigned char *)"is",
	(unsigned char *)"mod",
	(unsigned char *)"xor",
	(unsigned char *)"++",
	(unsigned char *)"--",
	(unsigned char *)"stdin",
	(unsigned char *)"stdout",
	(unsigned char *)"read_open",
	(unsigned char *)"write_open",
	(unsigned char *)"append_open",
	(unsigned char *)"update_open",
	(unsigned char *)"unix",
	(unsigned char *)"string_output",
	(unsigned char *)"string_input",
	(unsigned char *)"gett",
	(unsigned char *)"getwt",
	(unsigned char *)"putt",
	(unsigned char *)"puttq",
	(unsigned char *)"putwt",
	(unsigned char *)"putwtq",
	(unsigned char *)"addop",
	(unsigned char *)"rmop",
	(unsigned char *)"on_error",
	(unsigned char *)"connect",
	(unsigned char *)"bind",
	(unsigned char *)"accept",
	(unsigned char *)"connect2",
	(unsigned char *)"accept2",
	(unsigned char *)"sym",
	(unsigned char *)"unparser",
	(unsigned char *)"unparse",
	(unsigned char *)"unwparse",
	(unsigned char *)"qtd",
	(unsigned char *)"alf",
	(unsigned char *)"do",
	(unsigned char *)"empty",
	(unsigned char *)"put",
	(unsigned char *)"get",
	(unsigned char *)"get_if_any",
	(unsigned char *)"get_all",
	(unsigned char *)"carbon_copy",
	(unsigned char *)"get_max_if_any",
	(unsigned char *)"get_min_if_any",
	(unsigned char *)"get_if_any_and_put",
	(unsigned char *)"get_and_put_if_any",
	(unsigned char *)"get_and_put",
	(unsigned char *)"comparator",
	(unsigned char *)"sort",
	(unsigned char *)"pool",
	(unsigned char *)"n",
	(unsigned char *)"time",
	(unsigned char *)"signal_stream",
	(unsigned char *)"pipe",
	(unsigned char *)"system",
	(unsigned char *)"cd",
	(unsigned char *)"unlink",
	(unsigned char *)"mktemp",
	(unsigned char *)"access",
	(unsigned char *)"chmod",
	(unsigned char *)"umask",
	(unsigned char *)"getenv",
	(unsigned char *)"putenv",
	(unsigned char *)"kill",
	(unsigned char *)"fork",
	(unsigned char *)"fork_with_pipes",
	(unsigned char *)"inet",
	(unsigned char *)"fread",
	(unsigned char *)"feof",
	(unsigned char *)"sync",
	(unsigned char *)"parent",
	(unsigned char *)"child",
	(unsigned char *)"fseek",
	(unsigned char *)"ftell",
	(unsigned char *)"fclose",
	(unsigned char *)"stdio",
	(unsigned char *)"flush",
	(unsigned char *)"puts",
	(unsigned char *)"bind_mcast",
	(unsigned char *)"send_mcast",
	(unsigned char *)"kumon",
};
Const unsigned long initial_atoms = 276;
unsigned char **atomname = (unsigned char **)init_atomname;
