#include <klic/basic.h>
#include <klic/predinfo.h>

extern Const struct predicate predicate_timer_xtimer__loop_5;
static Const struct predinfo predinfo_timer_xtimer__loop_5 = {
  (unsigned char *)"timer_loop",
  &predicate_timer_xtimer__loop_5
};

extern Const struct predicate predicate_timer_xsub_3;
static Const struct predinfo predinfo_timer_xsub_3 = {
  (unsigned char *)"sub",
  &predicate_timer_xsub_3
};

extern Const struct predicate predicate_timer_xinstantiate__every_3;
static Const struct predinfo predinfo_timer_xinstantiate__every_3 = {
  (unsigned char *)"instantiate_every",
  &predicate_timer_xinstantiate__every_3
};

extern Const struct predicate predicate_timer_xinstantiate__at_2;
static Const struct predinfo predinfo_timer_xinstantiate__at_2 = {
  (unsigned char *)"instantiate_at",
  &predicate_timer_xinstantiate__at_2
};

extern Const struct predicate predicate_timer_xinstantiate__after_3;
static Const struct predinfo predinfo_timer_xinstantiate__after_3 = {
  (unsigned char *)"instantiate_after",
  &predicate_timer_xinstantiate__after_3
};

extern Const struct predicate predicate_timer_xinstantiate__after_2;
static Const struct predinfo predinfo_timer_xinstantiate__after_2 = {
  (unsigned char *)"instantiate_after",
  &predicate_timer_xinstantiate__after_2
};

extern Const struct predicate predicate_timer_xget__time__of__day_1;
static Const struct predinfo predinfo_timer_xget__time__of__day_1 = {
  (unsigned char *)"get_time_of_day",
  &predicate_timer_xget__time__of__day_1
};

extern Const struct predicate predicate_timer_xcompare_3;
static Const struct predinfo predinfo_timer_xcompare_3 = {
  (unsigned char *)"compare",
  &predicate_timer_xcompare_3
};

extern Const struct predicate predicate_timer_xadd_3;
static Const struct predinfo predinfo_timer_xadd_3 = {
  (unsigned char *)"add",
  &predicate_timer_xadd_3
};

static Const struct predinfo * Const preds_in_timer[] = {
  &predinfo_timer_xtimer__loop_5,
  &predinfo_timer_xsub_3,
  &predinfo_timer_xinstantiate__every_3,
  &predinfo_timer_xinstantiate__at_2,
  &predinfo_timer_xinstantiate__after_3,
  &predinfo_timer_xinstantiate__after_2,
  &predinfo_timer_xget__time__of__day_1,
  &predinfo_timer_xcompare_3,
  &predinfo_timer_xadd_3,
  0
};
extern Const struct predicate predicate_unix_xwrite__open_2;
static Const struct predinfo predinfo_unix_xwrite__open_2 = {
  (unsigned char *)"write_open",
  &predicate_unix_xwrite__open_2
};

extern Const struct predicate predicate_unix_xupdate__open_2;
static Const struct predinfo predinfo_unix_xupdate__open_2 = {
  (unsigned char *)"update_open",
  &predicate_unix_xupdate__open_2
};

extern Const struct predicate predicate_unix_xunlink_2;
static Const struct predinfo predinfo_unix_xunlink_2 = {
  (unsigned char *)"unlink",
  &predicate_unix_xunlink_2
};

extern Const struct predicate predicate_unix_xunix_1;
static Const struct predinfo predinfo_unix_xunix_1 = {
  (unsigned char *)"unix",
  &predicate_unix_xunix_1
};

extern Const struct predicate predicate_unix_xumask_2;
static Const struct predinfo predinfo_unix_xumask_2 = {
  (unsigned char *)"umask",
  &predicate_unix_xumask_2
};

extern Const struct predicate predicate_unix_xumask_1;
static Const struct predinfo predinfo_unix_xumask_1 = {
  (unsigned char *)"umask",
  &predicate_unix_xumask_1
};

extern Const struct predicate predicate_unix_xtimes_4;
static Const struct predinfo predinfo_unix_xtimes_4 = {
  (unsigned char *)"times",
  &predicate_unix_xtimes_4
};

extern Const struct predicate predicate_unix_xsystem_2;
static Const struct predinfo predinfo_unix_xsystem_2 = {
  (unsigned char *)"system",
  &predicate_unix_xsystem_2
};

extern Const struct predicate predicate_unix_xstdout_1;
static Const struct predinfo predinfo_unix_xstdout_1 = {
  (unsigned char *)"stdout",
  &predicate_unix_xstdout_1
};

extern Const struct predicate predicate_unix_xstdio_1;
static Const struct predinfo predinfo_unix_xstdio_1 = {
  (unsigned char *)"stdio",
  &predicate_unix_xstdio_1
};

extern Const struct predicate predicate_unix_xstdin_1;
static Const struct predinfo predinfo_unix_xstdin_1 = {
  (unsigned char *)"stdin",
  &predicate_unix_xstdin_1
};

extern Const struct predicate predicate_unix_xstderr_1;
static Const struct predinfo predinfo_unix_xstderr_1 = {
  (unsigned char *)"stderr",
  &predicate_unix_xstderr_1
};

extern Const struct predicate predicate_unix_xsignal__stream_3;
static Const struct predinfo predinfo_unix_xsignal__stream_3 = {
  (unsigned char *)"signal_stream",
  &predicate_unix_xsignal__stream_3
};

extern Const struct predicate predicate_unix_xsignal__stream_2;
static Const struct predinfo predinfo_unix_xsignal__stream_2 = {
  (unsigned char *)"signal_stream",
  &predicate_unix_xsignal__stream_2
};

extern Const struct predicate predicate_unix_xsend__mcast_2;
static Const struct predinfo predinfo_unix_xsend__mcast_2 = {
  (unsigned char *)"send_mcast",
  &predicate_unix_xsend__mcast_2
};

extern Const struct predicate predicate_unix_xready__mcast_5;
static Const struct predinfo predinfo_unix_xready__mcast_5 = {
  (unsigned char *)"ready_mcast",
  &predicate_unix_xready__mcast_5
};

extern Const struct predicate predicate_unix_xready__mcast2_4;
static Const struct predinfo predinfo_unix_xready__mcast2_4 = {
  (unsigned char *)"ready_mcast2",
  &predicate_unix_xready__mcast2_4
};

extern Const struct predicate predicate_unix_xread__open_2;
static Const struct predinfo predinfo_unix_xread__open_2 = {
  (unsigned char *)"read_open",
  &predicate_unix_xread__open_2
};

extern Const struct predicate predicate_unix_xputenv_2;
static Const struct predinfo predinfo_unix_xputenv_2 = {
  (unsigned char *)"putenv",
  &predicate_unix_xputenv_2
};

extern Const struct predicate predicate_unix_xpipe_1;
static Const struct predinfo predinfo_unix_xpipe_1 = {
  (unsigned char *)"pipe",
  &predicate_unix_xpipe_1
};

extern Const struct predicate predicate_unix_xnet__convert_3;
static Const struct predinfo predinfo_unix_xnet__convert_3 = {
  (unsigned char *)"net_convert",
  &predicate_unix_xnet__convert_3
};

extern Const struct predicate predicate_unix_xmktemp_2;
static Const struct predinfo predinfo_unix_xmktemp_2 = {
  (unsigned char *)"mktemp",
  &predicate_unix_xmktemp_2
};

extern Const struct predicate predicate_unix_xmake__argv__list_3;
static Const struct predinfo predinfo_unix_xmake__argv__list_3 = {
  (unsigned char *)"make_argv_list",
  &predicate_unix_xmake__argv__list_3
};

extern Const struct predicate predicate_unix_xkill_3;
static Const struct predinfo predinfo_unix_xkill_3 = {
  (unsigned char *)"kill",
  &predicate_unix_xkill_3
};

extern Const struct predicate predicate_unix_xgetenv_2;
static Const struct predinfo predinfo_unix_xgetenv_2 = {
  (unsigned char *)"getenv",
  &predicate_unix_xgetenv_2
};

extern Const struct predicate predicate_unix_xfork__with__pipes_2F1_240_6;
static Const struct predinfo predinfo_unix_xfork__with__pipes_2F1_240_6 = {
  (unsigned char *)"fork_with_pipes/1$0",
  &predicate_unix_xfork__with__pipes_2F1_240_6
};

extern Const struct predicate predicate_unix_xfork__with__pipes_1;
static Const struct predinfo predinfo_unix_xfork__with__pipes_1 = {
  (unsigned char *)"fork_with_pipes",
  &predicate_unix_xfork__with__pipes_1
};

extern Const struct predicate predicate_unix_xfork_1;
static Const struct predinfo predinfo_unix_xfork_1 = {
  (unsigned char *)"fork",
  &predicate_unix_xfork_1
};

extern Const struct predicate predicate_unix_xexit_1;
static Const struct predinfo predinfo_unix_xexit_1 = {
  (unsigned char *)"exit",
  &predicate_unix_xexit_1
};

extern Const struct predicate predicate_unix_xdummy_0;
static Const struct predinfo predinfo_unix_xdummy_0 = {
  (unsigned char *)"dummy",
  &predicate_unix_xdummy_0
};

extern Const struct predicate predicate_unix_xcont_3;
static Const struct predinfo predinfo_unix_xcont_3 = {
  (unsigned char *)"cont",
  &predicate_unix_xcont_3
};

extern Const struct predicate predicate_unix_xconnected__mcast_2;
static Const struct predinfo predinfo_unix_xconnected__mcast_2 = {
  (unsigned char *)"connected_mcast",
  &predicate_unix_xconnected__mcast_2
};

extern Const struct predicate predicate_unix_xconnect__sub_5;
static Const struct predinfo predinfo_unix_xconnect__sub_5 = {
  (unsigned char *)"connect_sub",
  &predicate_unix_xconnect__sub_5
};

extern Const struct predicate predicate_unix_xconnect__sub_4;
static Const struct predinfo predinfo_unix_xconnect__sub_4 = {
  (unsigned char *)"connect_sub",
  &predicate_unix_xconnect__sub_4
};

extern Const struct predicate predicate_unix_xconnect_4;
static Const struct predinfo predinfo_unix_xconnect_4 = {
  (unsigned char *)"connect",
  &predicate_unix_xconnect_4
};

extern Const struct predicate predicate_unix_xconnect_2;
static Const struct predinfo predinfo_unix_xconnect_2 = {
  (unsigned char *)"connect",
  &predicate_unix_xconnect_2
};

extern Const struct predicate predicate_unix_xconnect2__sub_5;
static Const struct predinfo predinfo_unix_xconnect2__sub_5 = {
  (unsigned char *)"connect2_sub",
  &predicate_unix_xconnect2__sub_5
};

extern Const struct predicate predicate_unix_xconnect2__sub_4;
static Const struct predinfo predinfo_unix_xconnect2__sub_4 = {
  (unsigned char *)"connect2_sub",
  &predicate_unix_xconnect2__sub_4
};

extern Const struct predicate predicate_unix_xconnect2_4;
static Const struct predinfo predinfo_unix_xconnect2_4 = {
  (unsigned char *)"connect2",
  &predicate_unix_xconnect2_4
};

extern Const struct predicate predicate_unix_xconnect2_2;
static Const struct predinfo predinfo_unix_xconnect2_2 = {
  (unsigned char *)"connect2",
  &predicate_unix_xconnect2_2
};

extern Const struct predicate predicate_unix_xchmod_3;
static Const struct predinfo predinfo_unix_xchmod_3 = {
  (unsigned char *)"chmod",
  &predicate_unix_xchmod_3
};

extern Const struct predicate predicate_unix_xcd_2;
static Const struct predinfo predinfo_unix_xcd_2 = {
  (unsigned char *)"cd",
  &predicate_unix_xcd_2
};

extern Const struct predicate predicate_unix_xbound__sock_4;
static Const struct predinfo predinfo_unix_xbound__sock_4 = {
  (unsigned char *)"bound_sock",
  &predicate_unix_xbound__sock_4
};

extern Const struct predicate predicate_unix_xbound__mcast_3;
static Const struct predinfo predinfo_unix_xbound__mcast_3 = {
  (unsigned char *)"bound_mcast",
  &predicate_unix_xbound__mcast_3
};

extern Const struct predicate predicate_unix_xbind__mcast_2;
static Const struct predinfo predinfo_unix_xbind__mcast_2 = {
  (unsigned char *)"bind_mcast",
  &predicate_unix_xbind__mcast_2
};

extern Const struct predicate predicate_unix_xbind_4;
static Const struct predinfo predinfo_unix_xbind_4 = {
  (unsigned char *)"bind",
  &predicate_unix_xbind_4
};

extern Const struct predicate predicate_unix_xbind_2;
static Const struct predinfo predinfo_unix_xbind_2 = {
  (unsigned char *)"bind",
  &predicate_unix_xbind_2
};

extern Const struct predicate predicate_unix_xasync__output_4;
static Const struct predinfo predinfo_unix_xasync__output_4 = {
  (unsigned char *)"async_output",
  &predicate_unix_xasync__output_4
};

extern Const struct predicate predicate_unix_xasync__io_5;
static Const struct predinfo predinfo_unix_xasync__io_5 = {
  (unsigned char *)"async_io",
  &predicate_unix_xasync__io_5
};

extern Const struct predicate predicate_unix_xasync__input_4;
static Const struct predinfo predinfo_unix_xasync__input_4 = {
  (unsigned char *)"async_input",
  &predicate_unix_xasync__input_4
};

extern Const struct predicate predicate_unix_xargv_1;
static Const struct predinfo predinfo_unix_xargv_1 = {
  (unsigned char *)"argv",
  &predicate_unix_xargv_1
};

extern Const struct predicate predicate_unix_xargc_1;
static Const struct predinfo predinfo_unix_xargc_1 = {
  (unsigned char *)"argc",
  &predicate_unix_xargc_1
};

extern Const struct predicate predicate_unix_xappend__open_2;
static Const struct predinfo predinfo_unix_xappend__open_2 = {
  (unsigned char *)"append_open",
  &predicate_unix_xappend__open_2
};

extern Const struct predicate predicate_unix_xaccess_3;
static Const struct predinfo predinfo_unix_xaccess_3 = {
  (unsigned char *)"access",
  &predicate_unix_xaccess_3
};

static Const struct predinfo * Const preds_in_unix[] = {
  &predinfo_unix_xwrite__open_2,
  &predinfo_unix_xupdate__open_2,
  &predinfo_unix_xunlink_2,
  &predinfo_unix_xunix_1,
  &predinfo_unix_xumask_2,
  &predinfo_unix_xumask_1,
  &predinfo_unix_xtimes_4,
  &predinfo_unix_xsystem_2,
  &predinfo_unix_xstdout_1,
  &predinfo_unix_xstdio_1,
  &predinfo_unix_xstdin_1,
  &predinfo_unix_xstderr_1,
  &predinfo_unix_xsignal__stream_3,
  &predinfo_unix_xsignal__stream_2,
  &predinfo_unix_xsend__mcast_2,
  &predinfo_unix_xready__mcast_5,
  &predinfo_unix_xready__mcast2_4,
  &predinfo_unix_xread__open_2,
  &predinfo_unix_xputenv_2,
  &predinfo_unix_xpipe_1,
  &predinfo_unix_xnet__convert_3,
  &predinfo_unix_xmktemp_2,
  &predinfo_unix_xmake__argv__list_3,
  &predinfo_unix_xkill_3,
  &predinfo_unix_xgetenv_2,
  &predinfo_unix_xfork__with__pipes_2F1_240_6,
  &predinfo_unix_xfork__with__pipes_1,
  &predinfo_unix_xfork_1,
  &predinfo_unix_xexit_1,
  &predinfo_unix_xdummy_0,
  &predinfo_unix_xcont_3,
  &predinfo_unix_xconnected__mcast_2,
  &predinfo_unix_xconnect__sub_5,
  &predinfo_unix_xconnect__sub_4,
  &predinfo_unix_xconnect_4,
  &predinfo_unix_xconnect_2,
  &predinfo_unix_xconnect2__sub_5,
  &predinfo_unix_xconnect2__sub_4,
  &predinfo_unix_xconnect2_4,
  &predinfo_unix_xconnect2_2,
  &predinfo_unix_xchmod_3,
  &predinfo_unix_xcd_2,
  &predinfo_unix_xbound__sock_4,
  &predinfo_unix_xbound__mcast_3,
  &predinfo_unix_xbind__mcast_2,
  &predinfo_unix_xbind_4,
  &predinfo_unix_xbind_2,
  &predinfo_unix_xasync__output_4,
  &predinfo_unix_xasync__io_5,
  &predinfo_unix_xasync__input_4,
  &predinfo_unix_xargv_1,
  &predinfo_unix_xargc_1,
  &predinfo_unix_xappend__open_2,
  &predinfo_unix_xaccess_3,
  0
};
extern Const struct predicate predicate_unparser_xunwparse__cons_5;
static Const struct predinfo predinfo_unparser_xunwparse__cons_5 = {
  (unsigned char *)"unwparse_cons",
  &predicate_unparser_xunwparse__cons_5
};

extern Const struct predicate predicate_unparser_xunwparse__cdr_5;
static Const struct predinfo predinfo_unparser_xunwparse__cdr_5 = {
  (unsigned char *)"unwparse_cdr",
  &predicate_unparser_xunwparse__cdr_5
};

extern Const struct predicate predicate_unparser_xunwparse_6;
static Const struct predinfo predinfo_unparser_xunwparse_6 = {
  (unsigned char *)"unwparse",
  &predicate_unparser_xunwparse_6
};

extern Const struct predicate predicate_unparser_xunwparse_4;
static Const struct predinfo predinfo_unparser_xunwparse_4 = {
  (unsigned char *)"unwparse",
  &predicate_unparser_xunwparse_4
};

extern Const struct predicate predicate_unparser_xunscan__after__op_4;
static Const struct predinfo predinfo_unparser_xunscan__after__op_4 = {
  (unsigned char *)"unscan_after_op",
  &predicate_unparser_xunscan__after__op_4
};

extern Const struct predicate predicate_unparser_xunscan_4;
static Const struct predinfo predinfo_unparser_xunscan_4 = {
  (unsigned char *)"unscan",
  &predicate_unparser_xunscan_4
};

extern Const struct predicate predicate_unparser_xunparse__with__op_10;
static Const struct predinfo predinfo_unparser_xunparse__with__op_10 = {
  (unsigned char *)"unparse_with_op",
  &predicate_unparser_xunparse__with__op_10
};

extern Const struct predicate predicate_unparser_xunparse__vector_5;
static Const struct predinfo predinfo_unparser_xunparse__vector_5 = {
  (unsigned char *)"unparse_vector",
  &predicate_unparser_xunparse__vector_5
};

extern Const struct predicate predicate_unparser_xunparse__vecelems_7;
static Const struct predinfo predinfo_unparser_xunparse__vecelems_7 = {
  (unsigned char *)"unparse_vecelems",
  &predicate_unparser_xunparse__vecelems_7
};

extern Const struct predicate predicate_unparser_xunparse__string_3;
static Const struct predinfo predinfo_unparser_xunparse__string_3 = {
  (unsigned char *)"unparse_string",
  &predicate_unparser_xunparse__string_3
};

extern Const struct predicate predicate_unparser_xunparse__int_3;
static Const struct predinfo predinfo_unparser_xunparse__int_3 = {
  (unsigned char *)"unparse_int",
  &predicate_unparser_xunparse__int_3
};

extern Const struct predicate predicate_unparser_xunparse__general_6;
static Const struct predinfo predinfo_unparser_xunparse__general_6 = {
  (unsigned char *)"unparse_general",
  &predicate_unparser_xunparse__general_6
};

extern Const struct predicate predicate_unparser_xunparse__float_3;
static Const struct predinfo predinfo_unparser_xunparse__float_3 = {
  (unsigned char *)"unparse_float",
  &predicate_unparser_xunparse__float_3
};

extern Const struct predicate predicate_unparser_xunparse__elems_7;
static Const struct predinfo predinfo_unparser_xunparse__elems_7 = {
  (unsigned char *)"unparse_elems",
  &predicate_unparser_xunparse__elems_7
};

extern Const struct predicate predicate_unparser_xunparse__cons_5;
static Const struct predinfo predinfo_unparser_xunparse__cons_5 = {
  (unsigned char *)"unparse_cons",
  &predicate_unparser_xunparse__cons_5
};

extern Const struct predicate predicate_unparser_xunparse__comma__list__elem_5;
static Const struct predinfo predinfo_unparser_xunparse__comma__list__elem_5 = {
  (unsigned char *)"unparse_comma_list_elem",
  &predicate_unparser_xunparse__comma__list__elem_5
};

extern Const struct predicate predicate_unparser_xunparse__cdr_5;
static Const struct predinfo predinfo_unparser_xunparse__cdr_5 = {
  (unsigned char *)"unparse_cdr",
  &predicate_unparser_xunparse__cdr_5
};

extern Const struct predicate predicate_unparser_xunparse__bin__op_3;
static Const struct predinfo predinfo_unparser_xunparse__bin__op_3 = {
  (unsigned char *)"unparse_bin_op",
  &predicate_unparser_xunparse__bin__op_3
};

extern Const struct predicate predicate_unparser_xunparse__atom_3;
static Const struct predinfo predinfo_unparser_xunparse__atom_3 = {
  (unsigned char *)"unparse_atom",
  &predicate_unparser_xunparse__atom_3
};

extern Const struct predicate predicate_unparser_xunparse_6;
static Const struct predinfo predinfo_unparser_xunparse_6 = {
  (unsigned char *)"unparse",
  &predicate_unparser_xunparse_6
};

extern Const struct predicate predicate_unparser_xunparse_4;
static Const struct predinfo predinfo_unparser_xunparse_4 = {
  (unsigned char *)"unparse",
  &predicate_unparser_xunparse_4
};

extern Const struct predicate predicate_unparser_xstr__elem__chars_3;
static Const struct predinfo predinfo_unparser_xstr__elem__chars_3 = {
  (unsigned char *)"str_elem_chars",
  &predicate_unparser_xstr__elem__chars_3
};

extern Const struct predicate predicate_unparser_xstr__chars_5;
static Const struct predinfo predinfo_unparser_xstr__chars_5 = {
  (unsigned char *)"str_chars",
  &predicate_unparser_xstr__chars_5
};

extern Const struct predicate predicate_unparser_xquoted__atom__chars_4;
static Const struct predinfo predinfo_unparser_xquoted__atom__chars_4 = {
  (unsigned char *)"quoted_atom_chars",
  &predicate_unparser_xquoted__atom__chars_4
};

extern Const struct predicate predicate_unparser_xquoted__atom__chars_2F4_240_3;
static Const struct predinfo predinfo_unparser_xquoted__atom__chars_2F4_240_3 = {
  (unsigned char *)"quoted_atom_chars/4$0",
  &predicate_unparser_xquoted__atom__chars_2F4_240_3
};

extern Const struct predicate predicate_unparser_xmax__op_4;
static Const struct predinfo predinfo_unparser_xmax__op_4 = {
  (unsigned char *)"max_op",
  &predicate_unparser_xmax__op_4
};

extern Const struct predicate predicate_unparser_xmax_3;
static Const struct predinfo predinfo_unparser_xmax_3 = {
  (unsigned char *)"max",
  &predicate_unparser_xmax_3
};

extern Const struct predicate predicate_unparser_xmake__atom__string_4;
static Const struct predinfo predinfo_unparser_xmake__atom__string_4 = {
  (unsigned char *)"make_atom_string",
  &predicate_unparser_xmake__atom__string_4
};

extern Const struct predicate predicate_unparser_xjudge__quoted_6;
static Const struct predinfo predinfo_unparser_xjudge__quoted_6 = {
  (unsigned char *)"judge_quoted",
  &predicate_unparser_xjudge__quoted_6
};

extern Const struct predicate predicate_unparser_xint__chars_3;
static Const struct predinfo predinfo_unparser_xint__chars_3 = {
  (unsigned char *)"int_chars",
  &predicate_unparser_xint__chars_3
};

extern Const struct predicate predicate_unparser_xins__if__greater__than_5;
static Const struct predinfo predinfo_unparser_xins__if__greater__than_5 = {
  (unsigned char *)"ins_if_greater_than",
  &predicate_unparser_xins__if__greater__than_5
};

extern Const struct predicate predicate_unparser_xins__backslash_3;
static Const struct predinfo predinfo_unparser_xins__backslash_3 = {
  (unsigned char *)"ins_backslash",
  &predicate_unparser_xins__backslash_3
};

extern Const struct predicate predicate_unparser_xfirst__char__kind_2;
static Const struct predinfo predinfo_unparser_xfirst__char__kind_2 = {
  (unsigned char *)"first_char_kind",
  &predicate_unparser_xfirst__char__kind_2
};

extern Const struct predicate predicate_unparser_xfind__operator_3;
static Const struct predinfo predinfo_unparser_xfind__operator_3 = {
  (unsigned char *)"find_operator",
  &predicate_unparser_xfind__operator_3
};

extern Const struct predicate predicate_unparser_xdelimit_4;
static Const struct predinfo predinfo_unparser_xdelimit_4 = {
  (unsigned char *)"delimit",
  &predicate_unparser_xdelimit_4
};

extern Const struct predicate predicate_unparser_xchartype_2F2_240_2;
static Const struct predinfo predinfo_unparser_xchartype_2F2_240_2 = {
  (unsigned char *)"chartype/2$0",
  &predicate_unparser_xchartype_2F2_240_2
};

extern Const struct predicate predicate_unparser_xchartype_2;
static Const struct predinfo predinfo_unparser_xchartype_2 = {
  (unsigned char *)"chartype",
  &predicate_unparser_xchartype_2
};

extern Const struct predicate predicate_unparser_xchar__kind_2;
static Const struct predinfo predinfo_unparser_xchar__kind_2 = {
  (unsigned char *)"char_kind",
  &predicate_unparser_xchar__kind_2
};

extern Const struct predicate predicate_unparser_xcall__unparser_6;
static Const struct predinfo predinfo_unparser_xcall__unparser_6 = {
  (unsigned char *)"call_unparser",
  &predicate_unparser_xcall__unparser_6
};

extern Const struct predicate predicate_unparser_xatom__kind_3;
static Const struct predinfo predinfo_unparser_xatom__kind_3 = {
  (unsigned char *)"atom_kind",
  &predicate_unparser_xatom__kind_3
};

extern Const struct predicate predicate_unparser_xatom__kind_2F3_240_4;
static Const struct predinfo predinfo_unparser_xatom__kind_2F3_240_4 = {
  (unsigned char *)"atom_kind/3$0",
  &predicate_unparser_xatom__kind_2F3_240_4
};

static Const struct predinfo * Const preds_in_unparser[] = {
  &predinfo_unparser_xunwparse__cons_5,
  &predinfo_unparser_xunwparse__cdr_5,
  &predinfo_unparser_xunwparse_6,
  &predinfo_unparser_xunwparse_4,
  &predinfo_unparser_xunscan__after__op_4,
  &predinfo_unparser_xunscan_4,
  &predinfo_unparser_xunparse__with__op_10,
  &predinfo_unparser_xunparse__vector_5,
  &predinfo_unparser_xunparse__vecelems_7,
  &predinfo_unparser_xunparse__string_3,
  &predinfo_unparser_xunparse__int_3,
  &predinfo_unparser_xunparse__general_6,
  &predinfo_unparser_xunparse__float_3,
  &predinfo_unparser_xunparse__elems_7,
  &predinfo_unparser_xunparse__cons_5,
  &predinfo_unparser_xunparse__comma__list__elem_5,
  &predinfo_unparser_xunparse__cdr_5,
  &predinfo_unparser_xunparse__bin__op_3,
  &predinfo_unparser_xunparse__atom_3,
  &predinfo_unparser_xunparse_6,
  &predinfo_unparser_xunparse_4,
  &predinfo_unparser_xstr__elem__chars_3,
  &predinfo_unparser_xstr__chars_5,
  &predinfo_unparser_xquoted__atom__chars_4,
  &predinfo_unparser_xquoted__atom__chars_2F4_240_3,
  &predinfo_unparser_xmax__op_4,
  &predinfo_unparser_xmax_3,
  &predinfo_unparser_xmake__atom__string_4,
  &predinfo_unparser_xjudge__quoted_6,
  &predinfo_unparser_xint__chars_3,
  &predinfo_unparser_xins__if__greater__than_5,
  &predinfo_unparser_xins__backslash_3,
  &predinfo_unparser_xfirst__char__kind_2,
  &predinfo_unparser_xfind__operator_3,
  &predinfo_unparser_xdelimit_4,
  &predinfo_unparser_xchartype_2F2_240_2,
  &predinfo_unparser_xchartype_2,
  &predinfo_unparser_xchar__kind_2,
  &predinfo_unparser_xcall__unparser_6,
  &predinfo_unparser_xatom__kind_3,
  &predinfo_unparser_xatom__kind_2F3_240_4,
  0
};
extern Const struct predicate predicate_scanner_xungetc_3;
static Const struct predinfo predinfo_scanner_xungetc_3 = {
  (unsigned char *)"ungetc",
  &predicate_scanner_xungetc_3
};

extern Const struct predicate predicate_scanner_xscan__unsigned__exponent_9;
static Const struct predinfo predinfo_scanner_xscan__unsigned__exponent_9 = {
  (unsigned char *)"scan_unsigned_exponent",
  &predicate_scanner_xscan__unsigned__exponent_9
};

extern Const struct predicate predicate_scanner_xscan__string_8;
static Const struct predinfo predinfo_scanner_xscan__string_8 = {
  (unsigned char *)"scan_string",
  &predicate_scanner_xscan__string_8
};

extern Const struct predicate predicate_scanner_xscan__string_2F8_240_8;
static Const struct predinfo predinfo_scanner_xscan__string_2F8_240_8 = {
  (unsigned char *)"scan_string/8$0",
  &predicate_scanner_xscan__string_2F8_240_8
};

extern Const struct predicate predicate_scanner_xscan__sname_7;
static Const struct predinfo predinfo_scanner_xscan__sname_7 = {
  (unsigned char *)"scan_sname",
  &predicate_scanner_xscan__sname_7
};

extern Const struct predicate predicate_scanner_xscan__rest_4;
static Const struct predinfo predinfo_scanner_xscan__rest_4 = {
  (unsigned char *)"scan_rest",
  &predicate_scanner_xscan__rest_4
};

extern Const struct predicate predicate_scanner_xscan__octal__escape__2_9;
static Const struct predinfo predinfo_scanner_xscan__octal__escape__2_9 = {
  (unsigned char *)"scan_octal_escape_2",
  &predicate_scanner_xscan__octal__escape__2_9
};

extern Const struct predicate predicate_scanner_xscan__octal__escape__2_2F9_240_9;
static Const struct predinfo predinfo_scanner_xscan__octal__escape__2_2F9_240_9 = {
  (unsigned char *)"scan_octal_escape_2/9$0",
  &predicate_scanner_xscan__octal__escape__2_2F9_240_9
};

extern Const struct predicate predicate_scanner_xscan__octal__escape_9;
static Const struct predinfo predinfo_scanner_xscan__octal__escape_9 = {
  (unsigned char *)"scan_octal_escape",
  &predicate_scanner_xscan__octal__escape_9
};

extern Const struct predicate predicate_scanner_xscan__number_9;
static Const struct predinfo predinfo_scanner_xscan__number_9 = {
  (unsigned char *)"scan_number",
  &predicate_scanner_xscan__number_9
};

extern Const struct predicate predicate_scanner_xscan__number_2F9_241_8;
static Const struct predinfo predinfo_scanner_xscan__number_2F9_241_8 = {
  (unsigned char *)"scan_number/9$1",
  &predicate_scanner_xscan__number_2F9_241_8
};

extern Const struct predicate predicate_scanner_xscan__number_2F9_240_9;
static Const struct predinfo predinfo_scanner_xscan__number_2F9_240_9 = {
  (unsigned char *)"scan_number/9$0",
  &predicate_scanner_xscan__number_2F9_240_9
};

extern Const struct predicate predicate_scanner_xscan__name_7;
static Const struct predinfo predinfo_scanner_xscan__name_7 = {
  (unsigned char *)"scan_name",
  &predicate_scanner_xscan__name_7
};

extern Const struct predicate predicate_scanner_xscan__hex__escape_9;
static Const struct predinfo predinfo_scanner_xscan__hex__escape_9 = {
  (unsigned char *)"scan_hex_escape",
  &predicate_scanner_xscan__hex__escape_9
};

extern Const struct predicate predicate_scanner_xscan__fraction_9;
static Const struct predinfo predinfo_scanner_xscan__fraction_9 = {
  (unsigned char *)"scan_fraction",
  &predicate_scanner_xscan__fraction_9
};

extern Const struct predicate predicate_scanner_xscan__fraction_2F9_240_11;
static Const struct predinfo predinfo_scanner_xscan__fraction_2F9_240_11 = {
  (unsigned char *)"scan_fraction/9$0",
  &predicate_scanner_xscan__fraction_2F9_240_11
};

extern Const struct predicate predicate_scanner_xscan__exponent_9;
static Const struct predinfo predinfo_scanner_xscan__exponent_9 = {
  (unsigned char *)"scan_exponent",
  &predicate_scanner_xscan__exponent_9
};

extern Const struct predicate predicate_scanner_xscan__escape_8;
static Const struct predinfo predinfo_scanner_xscan__escape_8 = {
  (unsigned char *)"scan_escape",
  &predicate_scanner_xscan__escape_8
};

extern Const struct predicate predicate_scanner_xscan__comment__line_5;
static Const struct predinfo predinfo_scanner_xscan__comment__line_5 = {
  (unsigned char *)"scan_comment_line",
  &predicate_scanner_xscan__comment__line_5
};

extern Const struct predicate predicate_scanner_xscan__comment_5;
static Const struct predinfo predinfo_scanner_xscan__comment_5 = {
  (unsigned char *)"scan_comment",
  &predicate_scanner_xscan__comment_5
};

extern Const struct predicate predicate_scanner_xscan__comment_2F5_240_5;
static Const struct predinfo predinfo_scanner_xscan__comment_2F5_240_5 = {
  (unsigned char *)"scan_comment/5$0",
  &predicate_scanner_xscan__comment_2F5_240_5
};

extern Const struct predicate predicate_scanner_xscan__based__number_9;
static Const struct predinfo predinfo_scanner_xscan__based__number_9 = {
  (unsigned char *)"scan_based_number",
  &predicate_scanner_xscan__based__number_9
};

extern Const struct predicate predicate_scanner_xscan__based__number_2F9_242_9;
static Const struct predinfo predinfo_scanner_xscan__based__number_2F9_242_9 = {
  (unsigned char *)"scan_based_number/9$2",
  &predicate_scanner_xscan__based__number_2F9_242_9
};

extern Const struct predicate predicate_scanner_xscan__based__number_2F9_241_9;
static Const struct predinfo predinfo_scanner_xscan__based__number_2F9_241_9 = {
  (unsigned char *)"scan_based_number/9$1",
  &predicate_scanner_xscan__based__number_2F9_241_9
};

extern Const struct predicate predicate_scanner_xscan__based__number_2F9_240_9;
static Const struct predinfo predinfo_scanner_xscan__based__number_2F9_240_9 = {
  (unsigned char *)"scan_based_number/9$0",
  &predicate_scanner_xscan__based__number_2F9_240_9
};

extern Const struct predicate predicate_scanner_xscan__after__atom_8;
static Const struct predinfo predinfo_scanner_xscan__after__atom_8 = {
  (unsigned char *)"scan_after_atom",
  &predicate_scanner_xscan__after__atom_8
};

extern Const struct predicate predicate_scanner_xscan_6;
static Const struct predinfo predinfo_scanner_xscan_6 = {
  (unsigned char *)"scan",
  &predicate_scanner_xscan_6
};

extern Const struct predicate predicate_scanner_xscan_3;
static Const struct predinfo predinfo_scanner_xscan_3 = {
  (unsigned char *)"scan",
  &predicate_scanner_xscan_3
};

extern Const struct predicate predicate_scanner_xscan_2F6_243_7;
static Const struct predinfo predinfo_scanner_xscan_2F6_243_7 = {
  (unsigned char *)"scan/6$3",
  &predicate_scanner_xscan_2F6_243_7
};

extern Const struct predicate predicate_scanner_xscan_2F6_243_2F7_240_7;
static Const struct predinfo predinfo_scanner_xscan_2F6_243_2F7_240_7 = {
  (unsigned char *)"scan/6$3/7$0",
  &predicate_scanner_xscan_2F6_243_2F7_240_7
};

extern Const struct predicate predicate_scanner_xscan_2F6_242_8;
static Const struct predinfo predinfo_scanner_xscan_2F6_242_8 = {
  (unsigned char *)"scan/6$2",
  &predicate_scanner_xscan_2F6_242_8
};

extern Const struct predicate predicate_scanner_xscan_2F6_241_8;
static Const struct predinfo predinfo_scanner_xscan_2F6_241_8 = {
  (unsigned char *)"scan/6$1",
  &predicate_scanner_xscan_2F6_241_8
};

extern Const struct predicate predicate_scanner_xscan_2F6_240_6;
static Const struct predinfo predinfo_scanner_xscan_2F6_240_6 = {
  (unsigned char *)"scan/6$0",
  &predicate_scanner_xscan_2F6_240_6
};

extern Const struct predicate predicate_scanner_xmake__new__string_2;
static Const struct predinfo predinfo_scanner_xmake__new__string_2 = {
  (unsigned char *)"make_new_string",
  &predicate_scanner_xmake__new__string_2
};

extern Const struct predicate predicate_scanner_xlookup__var_8;
static Const struct predinfo predinfo_scanner_xlookup__var_8 = {
  (unsigned char *)"lookup_var",
  &predicate_scanner_xlookup__var_8
};

extern Const struct predicate predicate_scanner_xgetchar_4;
static Const struct predinfo predinfo_scanner_xgetchar_4 = {
  (unsigned char *)"getchar",
  &predicate_scanner_xgetchar_4
};

extern Const struct predicate predicate_scanner_xget0_3;
static Const struct predinfo predinfo_scanner_xget0_3 = {
  (unsigned char *)"get0",
  &predicate_scanner_xget0_3
};

extern Const struct predicate predicate_scanner_xfinalize__vars_2F1_240_2;
static Const struct predinfo predinfo_scanner_xfinalize__vars_2F1_240_2 = {
  (unsigned char *)"finalize_vars/1$0",
  &predicate_scanner_xfinalize__vars_2F1_240_2
};

extern Const struct predicate predicate_scanner_xfinalize__vars_1;
static Const struct predinfo predinfo_scanner_xfinalize__vars_1 = {
  (unsigned char *)"finalize_vars",
  &predicate_scanner_xfinalize__vars_1
};

extern Const struct predicate predicate_scanner_xescape__char_2;
static Const struct predinfo predinfo_scanner_xescape__char_2 = {
  (unsigned char *)"escape_char",
  &predicate_scanner_xescape__char_2
};

extern Const struct predicate predicate_scanner_xchartype_2;
static Const struct predinfo predinfo_scanner_xchartype_2 = {
  (unsigned char *)"chartype",
  &predicate_scanner_xchartype_2
};

extern Const struct predicate predicate_scanner_xchar__list__to__int_3;
static Const struct predinfo predinfo_scanner_xchar__list__to__int_3 = {
  (unsigned char *)"char_list_to_int",
  &predicate_scanner_xchar__list__to__int_3
};

extern Const struct predicate predicate_scanner_xchar__list__to__float_3;
static Const struct predinfo predinfo_scanner_xchar__list__to__float_3 = {
  (unsigned char *)"char_list_to_float",
  &predicate_scanner_xchar__list__to__float_3
};

extern Const struct predicate predicate_scanner_xatom__chars_2;
static Const struct predinfo predinfo_scanner_xatom__chars_2 = {
  (unsigned char *)"atom_chars",
  &predicate_scanner_xatom__chars_2
};

static Const struct predinfo * Const preds_in_scanner[] = {
  &predinfo_scanner_xungetc_3,
  &predinfo_scanner_xscan__unsigned__exponent_9,
  &predinfo_scanner_xscan__string_8,
  &predinfo_scanner_xscan__string_2F8_240_8,
  &predinfo_scanner_xscan__sname_7,
  &predinfo_scanner_xscan__rest_4,
  &predinfo_scanner_xscan__octal__escape__2_9,
  &predinfo_scanner_xscan__octal__escape__2_2F9_240_9,
  &predinfo_scanner_xscan__octal__escape_9,
  &predinfo_scanner_xscan__number_9,
  &predinfo_scanner_xscan__number_2F9_241_8,
  &predinfo_scanner_xscan__number_2F9_240_9,
  &predinfo_scanner_xscan__name_7,
  &predinfo_scanner_xscan__hex__escape_9,
  &predinfo_scanner_xscan__fraction_9,
  &predinfo_scanner_xscan__fraction_2F9_240_11,
  &predinfo_scanner_xscan__exponent_9,
  &predinfo_scanner_xscan__escape_8,
  &predinfo_scanner_xscan__comment__line_5,
  &predinfo_scanner_xscan__comment_5,
  &predinfo_scanner_xscan__comment_2F5_240_5,
  &predinfo_scanner_xscan__based__number_9,
  &predinfo_scanner_xscan__based__number_2F9_242_9,
  &predinfo_scanner_xscan__based__number_2F9_241_9,
  &predinfo_scanner_xscan__based__number_2F9_240_9,
  &predinfo_scanner_xscan__after__atom_8,
  &predinfo_scanner_xscan_6,
  &predinfo_scanner_xscan_3,
  &predinfo_scanner_xscan_2F6_243_7,
  &predinfo_scanner_xscan_2F6_243_2F7_240_7,
  &predinfo_scanner_xscan_2F6_242_8,
  &predinfo_scanner_xscan_2F6_241_8,
  &predinfo_scanner_xscan_2F6_240_6,
  &predinfo_scanner_xmake__new__string_2,
  &predinfo_scanner_xlookup__var_8,
  &predinfo_scanner_xgetchar_4,
  &predinfo_scanner_xget0_3,
  &predinfo_scanner_xfinalize__vars_2F1_240_2,
  &predinfo_scanner_xfinalize__vars_1,
  &predinfo_scanner_xescape__char_2,
  &predinfo_scanner_xchartype_2,
  &predinfo_scanner_xchar__list__to__int_3,
  &predinfo_scanner_xchar__list__to__float_3,
  &predinfo_scanner_xatom__chars_2,
  0
};
extern Const struct predicate predicate_variable_xwrap__vec__elems_4;
static Const struct predinfo predinfo_variable_xwrap__vec__elems_4 = {
  (unsigned char *)"wrap_vec_elems",
  &predicate_variable_xwrap__vec__elems_4
};

extern Const struct predicate predicate_variable_xwrap__funct__elems_6;
static Const struct predinfo predinfo_variable_xwrap__funct__elems_6 = {
  (unsigned char *)"wrap_funct_elems",
  &predicate_variable_xwrap__funct__elems_6
};

extern Const struct predicate predicate_variable_xwrap__bound_2;
static Const struct predinfo predinfo_variable_xwrap__bound_2 = {
  (unsigned char *)"wrap_bound",
  &predicate_variable_xwrap__bound_2
};

extern Const struct predicate predicate_variable_xwrap_2F2_240_3;
static Const struct predinfo predinfo_variable_xwrap_2F2_240_3 = {
  (unsigned char *)"wrap/2$0",
  &predicate_variable_xwrap_2F2_240_3
};

extern Const struct predicate predicate_variable_xwrap_2;
static Const struct predinfo predinfo_variable_xwrap_2 = {
  (unsigned char *)"wrap",
  &predicate_variable_xwrap_2
};

extern Const struct predicate predicate_variable_xunwrap__vector_6;
static Const struct predinfo predinfo_variable_xunwrap__vector_6 = {
  (unsigned char *)"unwrap_vector",
  &predicate_variable_xunwrap__vector_6
};

extern Const struct predicate predicate_variable_xunwrap__functor_8;
static Const struct predinfo predinfo_variable_xunwrap__functor_8 = {
  (unsigned char *)"unwrap_functor",
  &predicate_variable_xunwrap__functor_8
};

extern Const struct predicate predicate_variable_xunwrap_4;
static Const struct predinfo predinfo_variable_xunwrap_4 = {
  (unsigned char *)"unwrap",
  &predicate_variable_xunwrap_4
};

extern Const struct predicate predicate_variable_xunwrap_3;
static Const struct predinfo predinfo_variable_xunwrap_3 = {
  (unsigned char *)"unwrap",
  &predicate_variable_xunwrap_3
};

extern Const struct predicate predicate_variable_xunwrap_2;
static Const struct predinfo predinfo_variable_xunwrap_2 = {
  (unsigned char *)"unwrap",
  &predicate_variable_xunwrap_2
};

extern Const struct predicate predicate_variable_xunbound_2;
static Const struct predinfo predinfo_variable_xunbound_2 = {
  (unsigned char *)"unbound",
  &predicate_variable_xunbound_2
};

extern Const struct predicate predicate_variable_xget__variable_4;
static Const struct predinfo predinfo_variable_xget__variable_4 = {
  (unsigned char *)"get_variable",
  &predicate_variable_xget__variable_4
};

extern Const struct predicate predicate_variable_xget__variable2_4;
static Const struct predinfo predinfo_variable_xget__variable2_4 = {
  (unsigned char *)"get_variable2",
  &predicate_variable_xget__variable2_4
};

static Const struct predinfo * Const preds_in_variable[] = {
  &predinfo_variable_xwrap__vec__elems_4,
  &predinfo_variable_xwrap__funct__elems_6,
  &predinfo_variable_xwrap__bound_2,
  &predinfo_variable_xwrap_2F2_240_3,
  &predinfo_variable_xwrap_2,
  &predinfo_variable_xunwrap__vector_6,
  &predinfo_variable_xunwrap__functor_8,
  &predinfo_variable_xunwrap_4,
  &predinfo_variable_xunwrap_3,
  &predinfo_variable_xunwrap_2,
  &predinfo_variable_xunbound_2,
  &predinfo_variable_xget__variable_4,
  &predinfo_variable_xget__variable2_4,
  0
};
extern Const struct predicate predicate_functor__table_xsetarg_5;
static Const struct predinfo predinfo_functor__table_xsetarg_5 = {
  (unsigned char *)"setarg",
  &predicate_functor__table_xsetarg_5
};

extern Const struct predicate predicate_functor__table_xsetarg_4;
static Const struct predinfo predinfo_functor__table_xsetarg_4 = {
  (unsigned char *)"setarg",
  &predicate_functor__table_xsetarg_4
};

extern Const struct predicate predicate_functor__table_xnew__functor_3;
static Const struct predinfo predinfo_functor__table_xnew__functor_3 = {
  (unsigned char *)"new_functor",
  &predicate_functor__table_xnew__functor_3
};

extern Const struct predicate predicate_functor__table_xlength_3;
static Const struct predinfo predinfo_functor__table_xlength_3 = {
  (unsigned char *)"length",
  &predicate_functor__table_xlength_3
};

extern Const struct predicate predicate_functor__table_xfunctor_4;
static Const struct predinfo predinfo_functor__table_xfunctor_4 = {
  (unsigned char *)"functor",
  &predicate_functor__table_xfunctor_4
};

extern Const struct predicate predicate_functor__table_xfunctor_3;
static Const struct predinfo predinfo_functor__table_xfunctor_3 = {
  (unsigned char *)"functor",
  &predicate_functor__table_xfunctor_3
};

extern Const struct predicate predicate_functor__table_xfill__args_4;
static Const struct predinfo predinfo_functor__table_xfill__args_4 = {
  (unsigned char *)"fill_args",
  &predicate_functor__table_xfill__args_4
};

extern Const struct predicate predicate_functor__table_xarg_4;
static Const struct predinfo predinfo_functor__table_xarg_4 = {
  (unsigned char *)"arg",
  &predicate_functor__table_xarg_4
};

extern Const struct predicate predicate_functor__table_xarg_3;
static Const struct predinfo predinfo_functor__table_xarg_3 = {
  (unsigned char *)"arg",
  &predicate_functor__table_xarg_3
};

extern Const struct predicate predicate_functor__table_x_3D_2E_2E_2;
static Const struct predinfo predinfo_functor__table_x_3D_2E_2E_2 = {
  (unsigned char *)"=..",
  &predicate_functor__table_x_3D_2E_2E_2
};

static Const struct predinfo * Const preds_in_functor__table[] = {
  &predinfo_functor__table_xsetarg_5,
  &predinfo_functor__table_xsetarg_4,
  &predinfo_functor__table_xnew__functor_3,
  &predinfo_functor__table_xlength_3,
  &predinfo_functor__table_xfunctor_4,
  &predinfo_functor__table_xfunctor_3,
  &predinfo_functor__table_xfill__args_4,
  &predinfo_functor__table_xarg_4,
  &predinfo_functor__table_xarg_3,
  &predinfo_functor__table_x_3D_2E_2E_2,
  0
};
extern Const struct predicate predicate_parser_xwrap__list_2;
static Const struct predinfo predinfo_parser_xwrap__list_2 = {
  (unsigned char *)"wrap_list",
  &predicate_parser_xwrap__list_2
};

extern Const struct predicate predicate_parser_xwrap__functor_2;
static Const struct predinfo predinfo_parser_xwrap__functor_2 = {
  (unsigned char *)"wrap_functor",
  &predicate_parser_xwrap__functor_2
};

extern Const struct predicate predicate_parser_xwrap__functor1_2;
static Const struct predinfo predinfo_parser_xwrap__functor1_2 = {
  (unsigned char *)"wrap_functor1",
  &predicate_parser_xwrap__functor1_2
};

extern Const struct predicate predicate_parser_xwparse_5;
static Const struct predinfo predinfo_parser_xwparse_5 = {
  (unsigned char *)"wparse",
  &predicate_parser_xwparse_5
};

extern Const struct predicate predicate_parser_xwparse_4;
static Const struct predinfo predinfo_parser_xwparse_4 = {
  (unsigned char *)"wparse",
  &predicate_parser_xwparse_4
};

extern Const struct predicate predicate_parser_xwparse_3;
static Const struct predinfo predinfo_parser_xwparse_3 = {
  (unsigned char *)"wparse",
  &predicate_parser_xwparse_3
};

extern Const struct predicate predicate_parser_xwparse_2F5_244_5;
static Const struct predinfo predinfo_parser_xwparse_2F5_244_5 = {
  (unsigned char *)"wparse/5$4",
  &predicate_parser_xwparse_2F5_244_5
};

extern Const struct predicate predicate_parser_xwparse_2F5_244_2F5_242_2;
static Const struct predinfo predinfo_parser_xwparse_2F5_244_2F5_242_2 = {
  (unsigned char *)"wparse/5$4/5$2",
  &predicate_parser_xwparse_2F5_244_2F5_242_2
};

extern Const struct predicate predicate_parser_xwparse_2F5_244_2F5_241_5;
static Const struct predinfo predinfo_parser_xwparse_2F5_244_2F5_241_5 = {
  (unsigned char *)"wparse/5$4/5$1",
  &predicate_parser_xwparse_2F5_244_2F5_241_5
};

extern Const struct predicate predicate_parser_xwparse_2F5_244_2F5_240_6;
static Const struct predinfo predinfo_parser_xwparse_2F5_244_2F5_240_6 = {
  (unsigned char *)"wparse/5$4/5$0",
  &predicate_parser_xwparse_2F5_244_2F5_240_6
};

extern Const struct predicate predicate_parser_xwparse_2F5_244_2F5_240_2F6_240_6;
static Const struct predinfo predinfo_parser_xwparse_2F5_244_2F5_240_2F6_240_6 = {
  (unsigned char *)"wparse/5$4/5$0/6$0",
  &predicate_parser_xwparse_2F5_244_2F5_240_2F6_240_6
};

extern Const struct predicate predicate_parser_xwparse_2F5_243_5;
static Const struct predinfo predinfo_parser_xwparse_2F5_243_5 = {
  (unsigned char *)"wparse/5$3",
  &predicate_parser_xwparse_2F5_243_5
};

extern Const struct predicate predicate_parser_xwparse_2F5_242_4;
static Const struct predinfo predinfo_parser_xwparse_2F5_242_4 = {
  (unsigned char *)"wparse/5$2",
  &predicate_parser_xwparse_2F5_242_4
};

extern Const struct predicate predicate_parser_xwparse_2F5_242_2F4_240_4;
static Const struct predinfo predinfo_parser_xwparse_2F5_242_2F4_240_4 = {
  (unsigned char *)"wparse/5$2/4$0",
  &predicate_parser_xwparse_2F5_242_2F4_240_4
};

extern Const struct predicate predicate_parser_xwparse_2F5_241_4;
static Const struct predinfo predinfo_parser_xwparse_2F5_241_4 = {
  (unsigned char *)"wparse/5$1",
  &predicate_parser_xwparse_2F5_241_4
};

extern Const struct predicate predicate_parser_xwparse_2F5_241_2F4_240_4;
static Const struct predinfo predinfo_parser_xwparse_2F5_241_2F4_240_4 = {
  (unsigned char *)"wparse/5$1/4$0",
  &predicate_parser_xwparse_2F5_241_2F4_240_4
};

extern Const struct predicate predicate_parser_xwparse_2F5_240_4;
static Const struct predinfo predinfo_parser_xwparse_2F5_240_4 = {
  (unsigned char *)"wparse/5$0",
  &predicate_parser_xwparse_2F5_240_4
};

extern Const struct predicate predicate_parser_xwparse_2F5_240_2F4_240_5;
static Const struct predinfo predinfo_parser_xwparse_2F5_240_2F4_240_5 = {
  (unsigned char *)"wparse/5$0/4$0",
  &predicate_parser_xwparse_2F5_240_2F4_240_5
};

extern Const struct predicate predicate_parser_xwait__parse_2F2_240_2;
static Const struct predinfo predinfo_parser_xwait__parse_2F2_240_2 = {
  (unsigned char *)"wait_parse/2$0",
  &predicate_parser_xwait__parse_2F2_240_2
};

extern Const struct predicate predicate_parser_xwait__parse_2;
static Const struct predinfo predinfo_parser_xwait__parse_2 = {
  (unsigned char *)"wait_parse",
  &predicate_parser_xwait__parse_2
};

extern Const struct predicate predicate_parser_xunwrap_2;
static Const struct predinfo predinfo_parser_xunwrap_2 = {
  (unsigned char *)"unwrap",
  &predicate_parser_xunwrap_2
};

extern Const struct predicate predicate_parser_xselect__better_3;
static Const struct predinfo predinfo_parser_xselect__better_3 = {
  (unsigned char *)"select_better",
  &predicate_parser_xselect__better_3
};

extern Const struct predicate predicate_parser_xselect__better_2F3_241_4;
static Const struct predinfo predinfo_parser_xselect__better_2F3_241_4 = {
  (unsigned char *)"select_better/3$1",
  &predicate_parser_xselect__better_2F3_241_4
};

extern Const struct predicate predicate_parser_xselect__better_2F3_240_4;
static Const struct predinfo predinfo_parser_xselect__better_2F3_240_4 = {
  (unsigned char *)"select_better/3$0",
  &predicate_parser_xselect__better_2F3_240_4
};

extern Const struct predicate predicate_parser_xprefixop_4;
static Const struct predinfo predinfo_parser_xprefixop_4 = {
  (unsigned char *)"prefixop",
  &predicate_parser_xprefixop_4
};

extern Const struct predicate predicate_parser_xprefixop_2F4_240_4;
static Const struct predinfo predinfo_parser_xprefixop_2F4_240_4 = {
  (unsigned char *)"prefixop/4$0",
  &predicate_parser_xprefixop_2F4_240_4
};

extern Const struct predicate predicate_parser_xpostfixop_5;
static Const struct predinfo predinfo_parser_xpostfixop_5 = {
  (unsigned char *)"postfixop",
  &predicate_parser_xpostfixop_5
};

extern Const struct predicate predicate_parser_xpostfixop_2F5_240_5;
static Const struct predinfo predinfo_parser_xpostfixop_2F5_240_5 = {
  (unsigned char *)"postfixop/5$0",
  &predicate_parser_xpostfixop_2F5_240_5
};

extern Const struct predicate predicate_parser_xparse__comma__list_8;
static Const struct predinfo predinfo_parser_xparse__comma__list_8 = {
  (unsigned char *)"parse_comma_list",
  &predicate_parser_xparse__comma__list_8
};

extern Const struct predicate predicate_parser_xparse__comma__list_6;
static Const struct predinfo predinfo_parser_xparse__comma__list_6 = {
  (unsigned char *)"parse_comma_list",
  &predicate_parser_xparse__comma__list_6
};

extern Const struct predicate predicate_parser_xparse__comma__list_2F8_240_8;
static Const struct predinfo predinfo_parser_xparse__comma__list_2F8_240_8 = {
  (unsigned char *)"parse_comma_list/8$0",
  &predicate_parser_xparse__comma__list_2F8_240_8
};

extern Const struct predicate predicate_parser_xparse__comma__list_2F8_240_2F8_240_8;
static Const struct predinfo predinfo_parser_xparse__comma__list_2F8_240_2F8_240_8 = {
  (unsigned char *)"parse_comma_list/8$0/8$0",
  &predicate_parser_xparse__comma__list_2F8_240_2F8_240_8
};

extern Const struct predicate predicate_parser_xparse__comma__list_2F8_240_2F8_240_2F8_240_5;
static Const struct predinfo predinfo_parser_xparse__comma__list_2F8_240_2F8_240_2F8_240_5 = {
  (unsigned char *)"parse_comma_list/8$0/8$0/8$0",
  &predicate_parser_xparse__comma__list_2F8_240_2F8_240_2F8_240_5
};

extern Const struct predicate predicate_parser_xparse__comma__list_2F8_240_2F8_240_2F8_240_2F5_240_4;
static Const struct predinfo predinfo_parser_xparse__comma__list_2F8_240_2F8_240_2F8_240_2F5_240_4 = {
  (unsigned char *)"parse_comma_list/8$0/8$0/8$0/5$0",
  &predicate_parser_xparse__comma__list_2F8_240_2F8_240_2F8_240_2F5_240_4
};

extern Const struct predicate predicate_parser_xparse_3;
static Const struct predinfo predinfo_parser_xparse_3 = {
  (unsigned char *)"parse",
  &predicate_parser_xparse_3
};

extern Const struct predicate predicate_parser_xlookup__op_4;
static Const struct predinfo predinfo_parser_xlookup__op_4 = {
  (unsigned char *)"lookup_op",
  &predicate_parser_xlookup__op_4
};

extern Const struct predicate predicate_parser_xlonger_3;
static Const struct predinfo predinfo_parser_xlonger_3 = {
  (unsigned char *)"longer",
  &predicate_parser_xlonger_3
};

extern Const struct predicate predicate_parser_xlist__to__comma__list_2;
static Const struct predinfo predinfo_parser_xlist__to__comma__list_2 = {
  (unsigned char *)"list_to_comma_list",
  &predicate_parser_xlist__to__comma__list_2
};

extern Const struct predicate predicate_parser_xlast__check_2;
static Const struct predinfo predinfo_parser_xlast__check_2 = {
  (unsigned char *)"last_check",
  &predicate_parser_xlast__check_2
};

extern Const struct predicate predicate_parser_xinfixop_5;
static Const struct predinfo predinfo_parser_xinfixop_5 = {
  (unsigned char *)"infixop",
  &predicate_parser_xinfixop_5
};

extern Const struct predicate predicate_parser_xinfixop_2F5_240_5;
static Const struct predinfo predinfo_parser_xinfixop_2F5_240_5 = {
  (unsigned char *)"infixop/5$0",
  &predicate_parser_xinfixop_2F5_240_5
};

extern Const struct predicate predicate_parser_xafter__term_6;
static Const struct predinfo predinfo_parser_xafter__term_6 = {
  (unsigned char *)"after_term",
  &predicate_parser_xafter__term_6
};

extern Const struct predicate predicate_parser_xafter__term_2F6_242_8;
static Const struct predinfo predinfo_parser_xafter__term_2F6_242_8 = {
  (unsigned char *)"after_term/6$2",
  &predicate_parser_xafter__term_2F6_242_8
};

extern Const struct predicate predicate_parser_xafter__term_2F6_242_2F8_241_7;
static Const struct predinfo predinfo_parser_xafter__term_2F6_242_2F8_241_7 = {
  (unsigned char *)"after_term/6$2/8$1",
  &predicate_parser_xafter__term_2F6_242_2F8_241_7
};

extern Const struct predicate predicate_parser_xafter__term_2F6_242_2F8_240_9;
static Const struct predinfo predinfo_parser_xafter__term_2F6_242_2F8_240_9 = {
  (unsigned char *)"after_term/6$2/8$0",
  &predicate_parser_xafter__term_2F6_242_2F8_240_9
};

extern Const struct predicate predicate_parser_xafter__term_2F6_242_2F8_240_2F9_240_7;
static Const struct predinfo predinfo_parser_xafter__term_2F6_242_2F8_240_2F9_240_7 = {
  (unsigned char *)"after_term/6$2/8$0/9$0",
  &predicate_parser_xafter__term_2F6_242_2F8_240_2F9_240_7
};

extern Const struct predicate predicate_parser_xafter__term_2F6_241_5;
static Const struct predinfo predinfo_parser_xafter__term_2F6_241_5 = {
  (unsigned char *)"after_term/6$1",
  &predicate_parser_xafter__term_2F6_241_5
};

extern Const struct predicate predicate_parser_xafter__term_2F6_240_5;
static Const struct predinfo predinfo_parser_xafter__term_2F6_240_5 = {
  (unsigned char *)"after_term/6$0",
  &predicate_parser_xafter__term_2F6_240_5
};

static Const struct predinfo * Const preds_in_parser[] = {
  &predinfo_parser_xwrap__list_2,
  &predinfo_parser_xwrap__functor_2,
  &predinfo_parser_xwrap__functor1_2,
  &predinfo_parser_xwparse_5,
  &predinfo_parser_xwparse_4,
  &predinfo_parser_xwparse_3,
  &predinfo_parser_xwparse_2F5_244_5,
  &predinfo_parser_xwparse_2F5_244_2F5_242_2,
  &predinfo_parser_xwparse_2F5_244_2F5_241_5,
  &predinfo_parser_xwparse_2F5_244_2F5_240_6,
  &predinfo_parser_xwparse_2F5_244_2F5_240_2F6_240_6,
  &predinfo_parser_xwparse_2F5_243_5,
  &predinfo_parser_xwparse_2F5_242_4,
  &predinfo_parser_xwparse_2F5_242_2F4_240_4,
  &predinfo_parser_xwparse_2F5_241_4,
  &predinfo_parser_xwparse_2F5_241_2F4_240_4,
  &predinfo_parser_xwparse_2F5_240_4,
  &predinfo_parser_xwparse_2F5_240_2F4_240_5,
  &predinfo_parser_xwait__parse_2F2_240_2,
  &predinfo_parser_xwait__parse_2,
  &predinfo_parser_xunwrap_2,
  &predinfo_parser_xselect__better_3,
  &predinfo_parser_xselect__better_2F3_241_4,
  &predinfo_parser_xselect__better_2F3_240_4,
  &predinfo_parser_xprefixop_4,
  &predinfo_parser_xprefixop_2F4_240_4,
  &predinfo_parser_xpostfixop_5,
  &predinfo_parser_xpostfixop_2F5_240_5,
  &predinfo_parser_xparse__comma__list_8,
  &predinfo_parser_xparse__comma__list_6,
  &predinfo_parser_xparse__comma__list_2F8_240_8,
  &predinfo_parser_xparse__comma__list_2F8_240_2F8_240_8,
  &predinfo_parser_xparse__comma__list_2F8_240_2F8_240_2F8_240_5,
  &predinfo_parser_xparse__comma__list_2F8_240_2F8_240_2F8_240_2F5_240_4,
  &predinfo_parser_xparse_3,
  &predinfo_parser_xlookup__op_4,
  &predinfo_parser_xlonger_3,
  &predinfo_parser_xlist__to__comma__list_2,
  &predinfo_parser_xlast__check_2,
  &predinfo_parser_xinfixop_5,
  &predinfo_parser_xinfixop_2F5_240_5,
  &predinfo_parser_xafter__term_6,
  &predinfo_parser_xafter__term_2F6_242_8,
  &predinfo_parser_xafter__term_2F6_242_2F8_241_7,
  &predinfo_parser_xafter__term_2F6_242_2F8_240_9,
  &predinfo_parser_xafter__term_2F6_242_2F8_240_2F9_240_7,
  &predinfo_parser_xafter__term_2F6_241_5,
  &predinfo_parser_xafter__term_2F6_240_5,
  0
};
extern Const struct predicate predicate_atom__table_xset__atom__string_5;
static Const struct predinfo predinfo_atom__table_xset__atom__string_5 = {
  (unsigned char *)"set_atom_string",
  &predicate_atom__table_xset__atom__string_5
};

extern Const struct predicate predicate_atom__table_xmake__atom_2;
static Const struct predinfo predinfo_atom__table_xmake__atom_2 = {
  (unsigned char *)"make_atom",
  &predicate_atom__table_xmake__atom_2
};

extern Const struct predicate predicate_atom__table_xintern_2;
static Const struct predinfo predinfo_atom__table_xintern_2 = {
  (unsigned char *)"intern",
  &predicate_atom__table_xintern_2
};

extern Const struct predicate predicate_atom__table_xget__atom__string_2;
static Const struct predinfo predinfo_atom__table_xget__atom__string_2 = {
  (unsigned char *)"get_atom_string",
  &predicate_atom__table_xget__atom__string_2
};

extern Const struct predicate predicate_atom__table_xget__atom__name_2;
static Const struct predinfo predinfo_atom__table_xget__atom__name_2 = {
  (unsigned char *)"get_atom_name",
  &predicate_atom__table_xget__atom__name_2
};

extern Const struct predicate predicate_atom__table_xcache__table_1;
static Const struct predinfo predinfo_atom__table_xcache__table_1 = {
  (unsigned char *)"cache_table",
  &predicate_atom__table_xcache__table_1
};

extern Const struct predicate predicate_atom__table_xatom__number_2;
static Const struct predinfo predinfo_atom__table_xatom__number_2 = {
  (unsigned char *)"atom_number",
  &predicate_atom__table_xatom__number_2
};

static Const struct predinfo * Const preds_in_atom__table[] = {
  &predinfo_atom__table_xset__atom__string_5,
  &predinfo_atom__table_xmake__atom_2,
  &predinfo_atom__table_xintern_2,
  &predinfo_atom__table_xget__atom__string_2,
  &predinfo_atom__table_xget__atom__name_2,
  &predinfo_atom__table_xcache__table_1,
  &predinfo_atom__table_xatom__number_2,
  0
};
extern Const struct predicate predicate_klic__reader_xwrite__tokens_4;
static Const struct predinfo predinfo_klic__reader_xwrite__tokens_4 = {
  (unsigned char *)"write_tokens",
  &predicate_klic__reader_xwrite__tokens_4
};

extern Const struct predicate predicate_klic__reader_xwrite__string_3;
static Const struct predinfo predinfo_klic__reader_xwrite__string_3 = {
  (unsigned char *)"write_string",
  &predicate_klic__reader_xwrite__string_3
};

extern Const struct predicate predicate_klic__reader_xwrite__one__token_3;
static Const struct predinfo predinfo_klic__reader_xwrite__one__token_3 = {
  (unsigned char *)"write_one_token",
  &predicate_klic__reader_xwrite__one__token_3
};

extern Const struct predicate predicate_klic__reader_xwrite__number_3;
static Const struct predinfo predinfo_klic__reader_xwrite__number_3 = {
  (unsigned char *)"write_number",
  &predicate_klic__reader_xwrite__number_3
};

extern Const struct predicate predicate_klic__reader_xwrite__decimal_3;
static Const struct predinfo predinfo_klic__reader_xwrite__decimal_3 = {
  (unsigned char *)"write_decimal",
  &predicate_klic__reader_xwrite__decimal_3
};

extern Const struct predicate predicate_klic__reader_xwrite__char_3;
static Const struct predinfo predinfo_klic__reader_xwrite__char_3 = {
  (unsigned char *)"write_char",
  &predicate_klic__reader_xwrite__char_3
};

extern Const struct predicate predicate_klic__reader_xwrite__atom_3;
static Const struct predinfo predinfo_klic__reader_xwrite__atom_3 = {
  (unsigned char *)"write_atom",
  &predicate_klic__reader_xwrite__atom_3
};

extern Const struct predicate predicate_klic__reader_xwparse__one__term__reporting__errors_4;
static Const struct predinfo predinfo_klic__reader_xwparse__one__term__reporting__errors_4 = {
  (unsigned char *)"wparse_one_term_reporting_errors",
  &predicate_klic__reader_xwparse__one__term__reporting__errors_4
};

extern Const struct predicate predicate_klic__reader_xwparse__one__term__reporting__errors_2F4_240_8;
static Const struct predinfo predinfo_klic__reader_xwparse__one__term__reporting__errors_2F4_240_8 = {
  (unsigned char *)"wparse_one_term_reporting_errors/4$0",
  &predicate_klic__reader_xwparse__one__term__reporting__errors_2F4_240_8
};

extern Const struct predicate predicate_klic__reader_xreport__syntax__error_7;
static Const struct predinfo predinfo_klic__reader_xreport__syntax__error_7 = {
  (unsigned char *)"report_syntax_error",
  &predicate_klic__reader_xreport__syntax__error_7
};

extern Const struct predicate predicate_klic__reader_xreport__syntax__error_2F7_240_2;
static Const struct predinfo predinfo_klic__reader_xreport__syntax__error_2F7_240_2 = {
  (unsigned char *)"report_syntax_error/7$0",
  &predicate_klic__reader_xreport__syntax__error_2F7_240_2
};

extern Const struct predicate predicate_klic__reader_xparse__one__term__reporting__errors_4;
static Const struct predinfo predinfo_klic__reader_xparse__one__term__reporting__errors_4 = {
  (unsigned char *)"parse_one_term_reporting_errors",
  &predicate_klic__reader_xparse__one__term__reporting__errors_4
};

extern Const struct predicate predicate_klic__reader_xparse__one__term__reporting__errors_2F4_240_8;
static Const struct predinfo predinfo_klic__reader_xparse__one__term__reporting__errors_2F4_240_8 = {
  (unsigned char *)"parse_one_term_reporting_errors/4$0",
  &predicate_klic__reader_xparse__one__term__reporting__errors_2F4_240_8
};

extern Const struct predicate predicate_klic__reader_xlength_3;
static Const struct predinfo predinfo_klic__reader_xlength_3 = {
  (unsigned char *)"length",
  &predicate_klic__reader_xlength_3
};

extern Const struct predicate predicate_klic__reader_xlength_2;
static Const struct predinfo predinfo_klic__reader_xlength_2 = {
  (unsigned char *)"length",
  &predicate_klic__reader_xlength_2
};

extern Const struct predicate predicate_klic__reader_xblank_2;
static Const struct predinfo predinfo_klic__reader_xblank_2 = {
  (unsigned char *)"blank",
  &predicate_klic__reader_xblank_2
};

static Const struct predinfo * Const preds_in_klic__reader[] = {
  &predinfo_klic__reader_xwrite__tokens_4,
  &predinfo_klic__reader_xwrite__string_3,
  &predinfo_klic__reader_xwrite__one__token_3,
  &predinfo_klic__reader_xwrite__number_3,
  &predinfo_klic__reader_xwrite__decimal_3,
  &predinfo_klic__reader_xwrite__char_3,
  &predinfo_klic__reader_xwrite__atom_3,
  &predinfo_klic__reader_xwparse__one__term__reporting__errors_4,
  &predinfo_klic__reader_xwparse__one__term__reporting__errors_2F4_240_8,
  &predinfo_klic__reader_xreport__syntax__error_7,
  &predinfo_klic__reader_xreport__syntax__error_2F7_240_2,
  &predinfo_klic__reader_xparse__one__term__reporting__errors_4,
  &predinfo_klic__reader_xparse__one__term__reporting__errors_2F4_240_8,
  &predinfo_klic__reader_xlength_3,
  &predinfo_klic__reader_xlength_2,
  &predinfo_klic__reader_xblank_2,
  0
};
extern Const struct predicate predicate_klicio_xupdt_3;
static Const struct predinfo predinfo_klicio_xupdt_3 = {
  (unsigned char *)"updt",
  &predicate_klicio_xupdt_3
};

extern Const struct predicate predicate_klicio_xupdate__lc_3;
static Const struct predinfo predinfo_klicio_xupdate__lc_3 = {
  (unsigned char *)"update_lc",
  &predicate_klicio_xupdate__lc_3
};

extern Const struct predicate predicate_klicio_xtermupdt_2;
static Const struct predinfo predinfo_klicio_xtermupdt_2 = {
  (unsigned char *)"termupdt",
  &predicate_klicio_xtermupdt_2
};

extern Const struct predicate predicate_klicio_xtermout_2;
static Const struct predinfo predinfo_klicio_xtermout_2 = {
  (unsigned char *)"termout",
  &predicate_klicio_xtermout_2
};

extern Const struct predicate predicate_klicio_xtermin_2;
static Const struct predinfo predinfo_klicio_xtermin_2 = {
  (unsigned char *)"termin",
  &predicate_klicio_xtermin_2
};

extern Const struct predicate predicate_klicio_xstring__output_4;
static Const struct predinfo predinfo_klicio_xstring__output_4 = {
  (unsigned char *)"string_output",
  &predicate_klicio_xstring__output_4
};

extern Const struct predicate predicate_klicio_xstring__input_5;
static Const struct predinfo predinfo_klicio_xstring__input_5 = {
  (unsigned char *)"string_input",
  &predicate_klicio_xstring__input_5
};

extern Const struct predicate predicate_klicio_xset__string__elements_6;
static Const struct predinfo predinfo_klicio_xset__string__elements_6 = {
  (unsigned char *)"set_string_elements",
  &predicate_klicio_xset__string__elements_6
};

extern Const struct predicate predicate_klicio_xsend__unix_3;
static Const struct predinfo predinfo_klicio_xsend__unix_3 = {
  (unsigned char *)"send_unix",
  &predicate_klicio_xsend__unix_3
};

extern Const struct predicate predicate_klicio_xrmop_4;
static Const struct predinfo predinfo_klicio_xrmop_4 = {
  (unsigned char *)"rmop",
  &predicate_klicio_xrmop_4
};

extern Const struct predicate predicate_klicio_xrmop2_4;
static Const struct predinfo predinfo_klicio_xrmop2_4 = {
  (unsigned char *)"rmop2",
  &predicate_klicio_xrmop2_4
};

extern Const struct predicate predicate_klicio_xoutput__stream_2;
static Const struct predinfo predinfo_klicio_xoutput__stream_2 = {
  (unsigned char *)"output_stream",
  &predicate_klicio_xoutput__stream_2
};

extern Const struct predicate predicate_klicio_xout_3;
static Const struct predinfo predinfo_klicio_xout_3 = {
  (unsigned char *)"out",
  &predicate_klicio_xout_3
};

extern Const struct predicate predicate_klicio_xklicio_2;
static Const struct predinfo predinfo_klicio_xklicio_2 = {
  (unsigned char *)"klicio",
  &predicate_klicio_xklicio_2
};

extern Const struct predicate predicate_klicio_xklicio_1;
static Const struct predinfo predinfo_klicio_xklicio_1 = {
  (unsigned char *)"klicio",
  &predicate_klicio_xklicio_1
};

extern Const struct predicate predicate_klicio_xin_3;
static Const struct predinfo predinfo_klicio_xin_3 = {
  (unsigned char *)"in",
  &predicate_klicio_xin_3
};

extern Const struct predicate predicate_klicio_xfork__io_2;
static Const struct predinfo predinfo_klicio_xfork__io_2 = {
  (unsigned char *)"fork_io",
  &predicate_klicio_xfork__io_2
};

extern Const struct predicate predicate_klicio_xfill__string_4;
static Const struct predinfo predinfo_klicio_xfill__string_4 = {
  (unsigned char *)"fill_string",
  &predicate_klicio_xfill__string_4
};

extern Const struct predicate predicate_klicio_xdefault__operator__table_1;
static Const struct predinfo predinfo_klicio_xdefault__operator__table_1 = {
  (unsigned char *)"default_operator_table",
  &predicate_klicio_xdefault__operator__table_1
};

extern Const struct predicate predicate_klicio_xcompute__string__length_3;
static Const struct predinfo predinfo_klicio_xcompute__string__length_3 = {
  (unsigned char *)"compute_string_length",
  &predicate_klicio_xcompute__string__length_3
};

extern Const struct predicate predicate_klicio_xclose__unix_1;
static Const struct predinfo predinfo_klicio_xclose__unix_1 = {
  (unsigned char *)"close_unix",
  &predicate_klicio_xclose__unix_1
};

extern Const struct predicate predicate_klicio_xbound__sock_2;
static Const struct predinfo predinfo_klicio_xbound__sock_2 = {
  (unsigned char *)"bound_sock",
  &predicate_klicio_xbound__sock_2
};

extern Const struct predicate predicate_klicio_xbind_2;
static Const struct predinfo predinfo_klicio_xbind_2 = {
  (unsigned char *)"bind",
  &predicate_klicio_xbind_2
};

extern Const struct predicate predicate_klicio_xaddop_5;
static Const struct predinfo predinfo_klicio_xaddop_5 = {
  (unsigned char *)"addop",
  &predicate_klicio_xaddop_5
};

extern Const struct predicate predicate_klicio_xaddop2_5;
static Const struct predinfo predinfo_klicio_xaddop2_5 = {
  (unsigned char *)"addop2",
  &predicate_klicio_xaddop2_5
};

static Const struct predinfo * Const preds_in_klicio[] = {
  &predinfo_klicio_xupdt_3,
  &predinfo_klicio_xupdate__lc_3,
  &predinfo_klicio_xtermupdt_2,
  &predinfo_klicio_xtermout_2,
  &predinfo_klicio_xtermin_2,
  &predinfo_klicio_xstring__output_4,
  &predinfo_klicio_xstring__input_5,
  &predinfo_klicio_xset__string__elements_6,
  &predinfo_klicio_xsend__unix_3,
  &predinfo_klicio_xrmop_4,
  &predinfo_klicio_xrmop2_4,
  &predinfo_klicio_xoutput__stream_2,
  &predinfo_klicio_xout_3,
  &predinfo_klicio_xklicio_2,
  &predinfo_klicio_xklicio_1,
  &predinfo_klicio_xin_3,
  &predinfo_klicio_xfork__io_2,
  &predinfo_klicio_xfill__string_4,
  &predinfo_klicio_xdefault__operator__table_1,
  &predinfo_klicio_xcompute__string__length_3,
  &predinfo_klicio_xclose__unix_1,
  &predinfo_klicio_xbound__sock_2,
  &predinfo_klicio_xbind_2,
  &predinfo_klicio_xaddop_5,
  &predinfo_klicio_xaddop2_5,
  0
};
extern Const struct predicate predicate_main_xrand__0__or__1_5;
static Const struct predinfo predinfo_main_xrand__0__or__1_5 = {
  (unsigned char *)"rand_0_or_1",
  &predicate_main_xrand__0__or__1_5
};

extern Const struct predicate predicate_main_xmake__row_11;
static Const struct predinfo predinfo_main_xmake__row_11 = {
  (unsigned char *)"make_row",
  &predicate_main_xmake__row_11
};

extern Const struct predicate predicate_main_xmake__col_15;
static Const struct predinfo predinfo_main_xmake__col_15 = {
  (unsigned char *)"make_col",
  &predicate_main_xmake__col_15
};

extern Const struct predicate predicate_main_xmain_0;
static Const struct predinfo predinfo_main_xmain_0 = {
  (unsigned char *)"main",
  &predicate_main_xmain_0
};

extern Const struct predicate predicate_main_xlife_6;
static Const struct predinfo predinfo_main_xlife_6 = {
  (unsigned char *)"life",
  &predicate_main_xlife_6
};

extern Const struct predicate predicate_main_xinit__col_6;
static Const struct predinfo predinfo_main_xinit__col_6 = {
  (unsigned char *)"init_col",
  &predicate_main_xinit__col_6
};

extern Const struct predicate predicate_main_xinit_5;
static Const struct predinfo predinfo_main_xinit_5 = {
  (unsigned char *)"init",
  &predicate_main_xinit_5
};

extern Const struct predicate predicate_main_xgo_1;
static Const struct predinfo predinfo_main_xgo_1 = {
  (unsigned char *)"go",
  &predicate_main_xgo_1
};

extern Const struct predicate predicate_main_xdisplay_1;
static Const struct predinfo predinfo_main_xdisplay_1 = {
  (unsigned char *)"display",
  &predicate_main_xdisplay_1
};

extern Const struct predicate predicate_main_xcount__sub_3;
static Const struct predinfo predinfo_main_xcount__sub_3 = {
  (unsigned char *)"count_sub",
  &predicate_main_xcount__sub_3
};

extern Const struct predicate predicate_main_xcount__1_2;
static Const struct predinfo predinfo_main_xcount__1_2 = {
  (unsigned char *)"count_1",
  &predicate_main_xcount__1_2
};

extern Const struct predicate predicate_main_xconnect__row_6;
static Const struct predinfo predinfo_main_xconnect__row_6 = {
  (unsigned char *)"connect_row",
  &predicate_main_xconnect__row_6
};

extern Const struct predicate predicate_main_xcompute__node_4;
static Const struct predinfo predinfo_main_xcompute__node_4 = {
  (unsigned char *)"compute_node",
  &predicate_main_xcompute__node_4
};

extern Const struct predicate predicate_main_xcheck__stream_1;
static Const struct predinfo predinfo_main_xcheck__stream_1 = {
  (unsigned char *)"check_stream",
  &predicate_main_xcheck__stream_1
};

extern Const struct predicate predicate_main_xchange_3;
static Const struct predinfo predinfo_main_xchange_3 = {
  (unsigned char *)"change",
  &predicate_main_xchange_3
};

extern Const struct predicate predicate_main_xcell_11;
static Const struct predinfo predinfo_main_xcell_11 = {
  (unsigned char *)"cell",
  &predicate_main_xcell_11
};

extern Const struct predicate predicate_main_xcell1_11;
static Const struct predinfo predinfo_main_xcell1_11 = {
  (unsigned char *)"cell1",
  &predicate_main_xcell1_11
};

static Const struct predinfo * Const preds_in_main[] = {
  &predinfo_main_xrand__0__or__1_5,
  &predinfo_main_xmake__row_11,
  &predinfo_main_xmake__col_15,
  &predinfo_main_xmain_0,
  &predinfo_main_xlife_6,
  &predinfo_main_xinit__col_6,
  &predinfo_main_xinit_5,
  &predinfo_main_xgo_1,
  &predinfo_main_xdisplay_1,
  &predinfo_main_xcount__sub_3,
  &predinfo_main_xcount__1_2,
  &predinfo_main_xconnect__row_6,
  &predinfo_main_xcompute__node_4,
  &predinfo_main_xcheck__stream_1,
  &predinfo_main_xchange_3,
  &predinfo_main_xcell_11,
  &predinfo_main_xcell1_11,
  0
};
extern Const struct predicate predicate_generic_xnew_3;
static Const struct predinfo predinfo_generic_xnew_3 = {
  (unsigned char *)"new",
  &predicate_generic_xnew_3
};

extern Const struct predicate predicate_generic_xgeneric_2;
static Const struct predinfo predinfo_generic_xgeneric_2 = {
  (unsigned char *)"generic",
  &predicate_generic_xgeneric_2
};

static Const struct predinfo * Const preds_in_generic[] = {
  &predinfo_generic_xnew_3,
  &predinfo_generic_xgeneric_2,
  0
};
extern Const struct predicate predicate_unify__term__dcode_xunify__pf_2;
static Const struct predinfo predinfo_unify__term__dcode_xunify__pf_2 = {
  (unsigned char *)"unify_pf",
  &predicate_unify__term__dcode_xunify__pf_2
};

extern Const struct predicate predicate_unify__term__dcode_xunify__goal_2;
static Const struct predinfo predinfo_unify__term__dcode_xunify__goal_2 = {
  (unsigned char *)"unify_goal",
  &predicate_unify__term__dcode_xunify__goal_2
};

extern Const struct predicate predicate_unify__term__dcode_xunify__args_3;
static Const struct predinfo predinfo_unify__term__dcode_xunify__args_3 = {
  (unsigned char *)"unify_args",
  &predicate_unify__term__dcode_xunify__args_3
};

extern Const struct predicate predicate_unify__term__dcode_xunify_2;
static Const struct predinfo predinfo_unify__term__dcode_xunify_2 = {
  (unsigned char *)"unify",
  &predicate_unify__term__dcode_xunify_2
};

static Const struct predinfo * Const preds_in_unify__term__dcode[] = {
  &predinfo_unify__term__dcode_xunify__pf_2,
  &predinfo_unify__term__dcode_xunify__goal_2,
  &predinfo_unify__term__dcode_xunify__args_3,
  &predinfo_unify__term__dcode_xunify_2,
  0
};
extern Const struct predicate predicate_integer__arithmetics_xsubtract_3;
static Const struct predinfo predinfo_integer__arithmetics_xsubtract_3 = {
  (unsigned char *)"subtract",
  &predicate_integer__arithmetics_xsubtract_3
};

extern Const struct predicate predicate_integer__arithmetics_xshift__right_3;
static Const struct predinfo predinfo_integer__arithmetics_xshift__right_3 = {
  (unsigned char *)"shift_right",
  &predicate_integer__arithmetics_xshift__right_3
};

extern Const struct predicate predicate_integer__arithmetics_xshift__left_3;
static Const struct predinfo predinfo_integer__arithmetics_xshift__left_3 = {
  (unsigned char *)"shift_left",
  &predicate_integer__arithmetics_xshift__left_3
};

extern Const struct predicate predicate_integer__arithmetics_xplus_2;
static Const struct predinfo predinfo_integer__arithmetics_xplus_2 = {
  (unsigned char *)"plus",
  &predicate_integer__arithmetics_xplus_2
};

extern Const struct predicate predicate_integer__arithmetics_xor_3;
static Const struct predinfo predinfo_integer__arithmetics_xor_3 = {
  (unsigned char *)"or",
  &predicate_integer__arithmetics_xor_3
};

extern Const struct predicate predicate_integer__arithmetics_xmultiply_3;
static Const struct predinfo predinfo_integer__arithmetics_xmultiply_3 = {
  (unsigned char *)"multiply",
  &predicate_integer__arithmetics_xmultiply_3
};

extern Const struct predicate predicate_integer__arithmetics_xmodulo_3;
static Const struct predinfo predinfo_integer__arithmetics_xmodulo_3 = {
  (unsigned char *)"modulo",
  &predicate_integer__arithmetics_xmodulo_3
};

extern Const struct predicate predicate_integer__arithmetics_xminus_2;
static Const struct predinfo predinfo_integer__arithmetics_xminus_2 = {
  (unsigned char *)"minus",
  &predicate_integer__arithmetics_xminus_2
};

extern Const struct predicate predicate_integer__arithmetics_xexclusive__or_3;
static Const struct predinfo predinfo_integer__arithmetics_xexclusive__or_3 = {
  (unsigned char *)"exclusive_or",
  &predicate_integer__arithmetics_xexclusive__or_3
};

extern Const struct predicate predicate_integer__arithmetics_xdivide_3;
static Const struct predinfo predinfo_integer__arithmetics_xdivide_3 = {
  (unsigned char *)"divide",
  &predicate_integer__arithmetics_xdivide_3
};

extern Const struct predicate predicate_integer__arithmetics_xcomplement_2;
static Const struct predinfo predinfo_integer__arithmetics_xcomplement_2 = {
  (unsigned char *)"complement",
  &predicate_integer__arithmetics_xcomplement_2
};

extern Const struct predicate predicate_integer__arithmetics_xand_3;
static Const struct predinfo predinfo_integer__arithmetics_xand_3 = {
  (unsigned char *)"and",
  &predicate_integer__arithmetics_xand_3
};

extern Const struct predicate predicate_integer__arithmetics_xadd_3;
static Const struct predinfo predinfo_integer__arithmetics_xadd_3 = {
  (unsigned char *)"add",
  &predicate_integer__arithmetics_xadd_3
};

static Const struct predinfo * Const preds_in_integer__arithmetics[] = {
  &predinfo_integer__arithmetics_xsubtract_3,
  &predinfo_integer__arithmetics_xshift__right_3,
  &predinfo_integer__arithmetics_xshift__left_3,
  &predinfo_integer__arithmetics_xplus_2,
  &predinfo_integer__arithmetics_xor_3,
  &predinfo_integer__arithmetics_xmultiply_3,
  &predinfo_integer__arithmetics_xmodulo_3,
  &predinfo_integer__arithmetics_xminus_2,
  &predinfo_integer__arithmetics_xexclusive__or_3,
  &predinfo_integer__arithmetics_xdivide_3,
  &predinfo_integer__arithmetics_xcomplement_2,
  &predinfo_integer__arithmetics_xand_3,
  &predinfo_integer__arithmetics_xadd_3,
  0
};
Const struct modinfo defined_modules[] = {
  (unsigned char *)"timer",
  preds_in_timer,
  (unsigned char *)"unix",
  preds_in_unix,
  (unsigned char *)"unparser",
  preds_in_unparser,
  (unsigned char *)"scanner",
  preds_in_scanner,
  (unsigned char *)"variable",
  preds_in_variable,
  (unsigned char *)"functor_table",
  preds_in_functor__table,
  (unsigned char *)"parser",
  preds_in_parser,
  (unsigned char *)"atom_table",
  preds_in_atom__table,
  (unsigned char *)"klic_reader",
  preds_in_klic__reader,
  (unsigned char *)"klicio",
  preds_in_klicio,
  (unsigned char *)"main",
  preds_in_main,
  (unsigned char *)"generic",
  preds_in_generic,
  (unsigned char *)"unify_term_dcode",
  preds_in_unify__term__dcode,
  (unsigned char *)"integer_arithmetics",
  preds_in_integer__arithmetics,
  0, 0
};
