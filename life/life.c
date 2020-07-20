/* Compiled by KLIC compiler version 3.005 (Thu Feb  13 17:11:01 JST 2003) */
#include <klic/klichdr.h>
#include "atom.h"
#include "funct.h"

module module_main();
Const struct predicate predicate_main_xmain_0 =
   { module_main, 0, 0 };
Const struct predicate predicate_main_xcheck__stream_1 =
   { module_main, 1, 1 };
Const struct predicate predicate_main_xgo_1 =
   { module_main, 2, 1 };
Const struct predicate predicate_main_xdisplay_1 =
   { module_main, 3, 1 };
Const struct predicate predicate_main_xcount__1_2 =
   { module_main, 4, 2 };
Const struct predicate predicate_main_xcount__sub_3 =
   { module_main, 5, 3 };
Const struct predicate predicate_main_xlife_6 =
   { module_main, 6, 6 };
Const struct predicate predicate_main_xinit_5 =
   { module_main, 7, 5 };
Const struct predicate predicate_main_xinit__col_6 =
   { module_main, 8, 6 };
Const struct predicate predicate_main_xrand__0__or__1_5 =
   { module_main, 9, 5 };
Const struct predicate predicate_main_xmake__row_11 =
   { module_main, 10, 11 };
Const struct predicate predicate_main_xconnect__row_6 =
   { module_main, 11, 6 };
Const struct predicate predicate_main_xmake__col_15 =
   { module_main, 12, 15 };
Const struct predicate predicate_main_xcompute__node_4 =
   { module_main, 13, 4 };
Const struct predicate predicate_main_xcell_11 =
   { module_main, 14, 11 };
Const struct predicate predicate_main_xcell1_11 =
   { module_main, 15, 11 };
Const struct predicate predicate_main_xchange_3 =
   { module_main, 16, 3 };
extern Const struct predicate predicate_integer__arithmetics_xadd_3;
extern Const struct predicate predicate_integer__arithmetics_xsubtract_3;
extern Const struct predicate predicate_klicio_xklicio_1;

module module_main(glbl, qp, allocp, toppred)
  struct global_variables *glbl;
  struct goalrec *qp;
  register q *allocp;
  Const struct predicate *toppred;
{
  static Const q cons_const_0[] = {
    NILATOM,
    makesym(atom_nl),
  };
  q a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14;

  q *reasonp;
 module_top:
  switch_on_pred() {
    case_pred(0, main_0_top);
    case_pred(1, check__stream_1_top);
    case_pred(2, go_1_top);
    case_pred(3, display_1_top);
    case_pred(4, count__1_2_top);
    case_pred(5, count__sub_3_top);
    case_pred(6, life_6_top);
    case_pred(7, init_5_top);
    case_pred(8, init__col_6_top);
    case_pred(9, rand__0__or__1_5_top);
    case_pred(10, make__row_11_top);
    case_pred(11, connect__row_6_top);
    case_pred(12, make__col_15_top);
    case_pred(13, compute__node_4_top);
    case_pred(14, cell_11_top);
    case_pred(15, cell1_11_top);
    last_case_pred(16, change_3_top);
  }

 main_0_top: {
  q x0, x1, x2;
  qp = qp->next;
 main_0_clear_reason:
  reasonp = reasons;
 main_0_0:
  allocp[0] = (q)qp;
  allocp[1] = (q)(&predicate_main_xcheck__stream_1);
  allocp[2] = x0 = makeref(&allocp[2]);
  allocp[3] = makesym(functor_stdout_1);
  allocp[4] = x0;
  x1 = makefunctor(&allocp[3]);
  allocp[5] = NILATOM;
  allocp[6] = x1;
  x2 = makecons(&allocp[5]);
  allocp[7] = (q)(struct goalrec*)&allocp[0];
  allocp[8] = (q)(&predicate_klicio_xklicio_1);
  allocp[9] = x2;
  qp = (struct goalrec*)&allocp[7];
  allocp += 10;
  proceed();
 main_0_ext_interrupt:
  reasonp = 0l;
 main_0_interrupt:
  goto interrupt_0;
 }

 check__stream_1_top: {
  q x0, x1, x2, x3;
  a0 = qp->args[0];
  qp = qp->next;
 check__stream_1_clear_reason:
  reasonp = reasons;
 check__stream_1_0:
 check__stream_1_1:
  switch (ptagof(a0)) {
 case ATOMIC:
  if (a0 != makesym(atom_abnormal)) goto check__stream_1_interrupt;
  proceed();
 case FUNCTOR:
  if (functor_of(a0) != makesym(functor_normal_1)) goto check__stream_1_interrupt;
  allocp[0] = makesym(functor_putt_1);
  allocp[1] = x1 = makeref(&allocp[1]);
  x0 = makefunctor(&allocp[0]);
  allocp[2] = makecons(cons_const_0);
  allocp[3] = x0;
  x2 = makecons(&allocp[2]);
  x3 = arg(a0, 0);
  allocp += 4;
  unify_value(x3, x2);
  a0 = x1;
  execute(go_1_0);
  goto go_1_ext_interrupt;
 case VARREF:
  deref_and_jump(a0,check__stream_1_1);
  *reasonp++ =  a0;
  goto check__stream_1_interrupt;
  };
  goto check__stream_1_interrupt;
 check__stream_1_ext_interrupt:
  reasonp = 0l;
 check__stream_1_interrupt:
  goto interrupt_1;
 }

 go_1_top: {
  q x0;
  a0 = qp->args[0];
  qp = qp->next;
 go_1_clear_reason:
  reasonp = reasons;
 go_1_0:
  allocp[0] = (q)qp;
  allocp[1] = (q)(&predicate_main_xcount__1_2);
  allocp[2] = x0 = makeref(&allocp[2]);
  allocp[3] = a0;
  a0 = makeint(120L);
  a1 = makeint(38L);
  a2 = makeint(38L);
  a3 = makeint(4L);
  a4 = makeint(4L);
  a5 = x0;
  qp = (struct goalrec*)&allocp[0];
  allocp += 4;
  execute(life_6_0);
  goto life_6_ext_interrupt;
 go_1_ext_interrupt:
  reasonp = 0l;
 go_1_interrupt:
  toppred = &predicate_main_xgo_1;
  goto interrupt_1;
 }

 display_1_top: {
  a0 = qp->args[0];
  qp = qp->next;
 display_1_clear_reason:
  reasonp = reasons;
 display_1_0:
 display_1_1:
  if (isref(a0)) goto display_1_2;
  gblt_display_console(a0,display_1_interrupt);
  proceed();
 display_1_2:
  deref_and_jump(a0,display_1_1);
  *reasonp++ =  a0;
  goto display_1_interrupt;
 display_1_ext_interrupt:
  reasonp = 0l;
 display_1_interrupt:
  goto interrupt_1;
 }

 count__1_2_top: {
  q x0, x1, x2;
  a0 = qp->args[0];
  a1 = qp->args[1];
  qp = qp->next;
 count__1_2_clear_reason:
  reasonp = reasons;
 count__1_2_0:
 count__1_2_1:
  switch (ptagof(a0)) {
 case CONS:
  allocp[0] = (q)qp;
  allocp[1] = (q)(&predicate_integer__arithmetics_xadd_3);
  allocp[2] = x0 = makeref(&allocp[2]);
  allocp[3] = x1 = makeref(&allocp[3]);
  allocp[4] = a1;
  allocp[5] = (q)(struct goalrec*)&allocp[0];
  allocp[6] = (q)(&predicate_main_xcount__1_2);
  x2 = cdr_of(a0);
  allocp[7] = x2;
  allocp[8] = x1;
  a0 = car_of(a0);
  a1 = makeint(0L);
  a2 = x0;
  qp = (struct goalrec*)&allocp[5];
  allocp += 9;
  execute(count__sub_3_0);
  goto count__sub_3_ext_interrupt;
 case ATOMIC:
  if (a0 != NILATOM) goto count__1_2_interrupt;
  x0 = makeint(0L);
  unify_value(a1, x0);
  proceed();
 case VARREF:
  deref_and_jump(a0,count__1_2_1);
  *reasonp++ =  a0;
  goto count__1_2_interrupt;
  };
  goto count__1_2_interrupt;
 count__1_2_ext_interrupt:
  reasonp = 0l;
 count__1_2_interrupt:
  goto interrupt_2;
 }

 count__sub_3_top: {
  q x0, x1, x2;
  a0 = qp->args[0];
  a1 = qp->args[1];
  a2 = qp->args[2];
  qp = qp->next;
 count__sub_3_clear_reason:
  reasonp = reasons;
 count__sub_3_0:
 count__sub_3_1:
  switch (ptagof(a0)) {
 case CONS:
  x0 = car_of(a0);
 count__sub_3_2:
  switch (ptagof(x0)) {
 case ATOMIC:
 count__sub_3_3:
  switch ((unsigned long)x0) {
 case (unsigned long) makeint(1L):
  x1 = makeint(1L);
  bblt_add_no_check_y(a1,x1,x2);
  a0 = cdr_of(a0);
  a1 = x2;
  execute(count__sub_3_0);
  goto count__sub_3_ext_interrupt;
 case (unsigned long) makeint(0L):
  a0 = cdr_of(a0);
  execute(count__sub_3_0);
  goto count__sub_3_ext_interrupt;
  };
  goto count__sub_3_interrupt;
 case VARREF:
  deref_and_jump(x0,count__sub_3_2);
  *reasonp++ =  x0;
  goto count__sub_3_interrupt;
  };
  goto count__sub_3_interrupt;
 case ATOMIC:
  if (a0 != NILATOM) goto count__sub_3_interrupt;
  unify(a2, a1);
  proceed();
 case VARREF:
  deref_and_jump(a0,count__sub_3_1);
  *reasonp++ =  a0;
  goto count__sub_3_interrupt;
  };
  goto count__sub_3_interrupt;
 count__sub_3_ext_interrupt:
  reasonp = 0l;
 count__sub_3_interrupt:
  toppred = &predicate_main_xcount__sub_3;
  goto interrupt_3;
 }

 life_6_top: {
  q x0, x1, x2, x3, x4, x5, x6;
  a0 = qp->args[0];
  a1 = qp->args[1];
  a2 = qp->args[2];
  a3 = qp->args[3];
  a4 = qp->args[4];
  a5 = qp->args[5];
  qp = qp->next;
 life_6_clear_reason:
  reasonp = reasons;
 life_6_0:
  allocp[0] = (q)qp;
  allocp[1] = (q)(&predicate_main_xmake__row_11);
  allocp[2] = a1;
  allocp[3] = a2;
  allocp[4] = x0 = makeref(&allocp[4]);
  allocp[5] = a0;
  allocp[6] = x1 = makeref(&allocp[6]);
  allocp[7] = x2 = makeref(&allocp[7]);
  allocp[8] = x2;
  allocp[9] = x3 = makeref(&allocp[9]);
  allocp[10] = x3;
  allocp[11] = a5;
  allocp[12] = NILATOM;
  allocp[13] = makesym(functor_kumon_4);
  allocp[14] = a1;
  allocp[15] = a2;
  allocp[16] = a3;
  allocp[17] = a4;
  x4 = makefunctor(&allocp[13]);
  qp = (struct goalrec*)&allocp[0];
  allocp += 18;
  unify_value(x0, x4);
  a0 = a1;
  x5 = a2;
  x6 = a1;
  a3 = a2;
  a4 = x1;
  a2 = x6;
  a1 = x5;
  execute(init_5_0);
  goto init_5_ext_interrupt;
 life_6_ext_interrupt:
  reasonp = 0l;
 life_6_interrupt:
  toppred = &predicate_main_xlife_6;
  goto interrupt_6;
 }

 init_5_top: {
  q x0, x1, x2, x3, x4, x5, x6;
  a0 = qp->args[0];
  a1 = qp->args[1];
  a2 = qp->args[2];
  a3 = qp->args[3];
  a4 = qp->args[4];
  qp = qp->next;
 init_5_clear_reason:
  reasonp = reasons;
 init_5_0:
 init_5_1:
  if (!isint(a0)) goto init_5_3;
  x0 = makeint(0L);
  gblt_greater(a0,x0,init_5_2);
  allocp[0] = (q)qp;
  allocp[1] = (q)(&predicate_main_xinit_5);
  allocp[2] = x1 = makeref(&allocp[2]);
  allocp[3] = a1;
  allocp[4] = a2;
  allocp[5] = a3;
  allocp[6] = x2 = makeref(&allocp[6]);
  allocp[7] = (q)(struct goalrec*)&allocp[0];
  allocp[8] = (q)(&predicate_integer__arithmetics_xsubtract_3);
  allocp[9] = a0;
  allocp[10] = makeint(1L);
  allocp[11] = x1;
  allocp[12] = x2;
  allocp[13] = x4 = makeref(&allocp[13]);
  x3 = makecons(&allocp[12]);
  qp = (struct goalrec*)&allocp[7];
  allocp += 14;
  unify_value(a4, x3);
  x5 = a0;
  a4 = x4;
  a5 = a0;
  a0 = x5;
  execute(init__col_6_0);
  goto init__col_6_ext_interrupt;
 init_5_2:
  if (a0 != makeint(0L)) goto init_5_interrupt;
  x6 = NILATOM;
  unify_value(a4, x6);
  proceed();
 init_5_3:
  if (!isref(a0)) goto init_5_interrupt;
  deref_and_jump(a0,init_5_1);
  *reasonp++ =  a0;
  goto init_5_interrupt;
 init_5_ext_interrupt:
  reasonp = 0l;
 init_5_interrupt:
  toppred = &predicate_main_xinit_5;
  goto interrupt_5;
 }

 init__col_6_top: {
  q x0, x1, x2, x3, x4, x5, x6;
  a0 = qp->args[0];
  a1 = qp->args[1];
  a2 = qp->args[2];
  a3 = qp->args[3];
  a4 = qp->args[4];
  a5 = qp->args[5];
  qp = qp->next;
 init__col_6_clear_reason:
  reasonp = reasons;
 init__col_6_0:
 init__col_6_1:
  if (!isint(a1)) goto init__col_6_3;
  x0 = makeint(0L);
  gblt_greater(a1,x0,init__col_6_2);
  allocp[0] = (q)qp;
  allocp[1] = (q)(&predicate_main_xinit__col_6);
  allocp[2] = a0;
  allocp[3] = x1 = makeref(&allocp[3]);
  allocp[4] = a2;
  allocp[5] = a3;
  allocp[6] = x2 = makeref(&allocp[6]);
  allocp[7] = x3 = makeref(&allocp[7]);
  allocp[8] = (q)(struct goalrec*)&allocp[0];
  allocp[9] = (q)(&predicate_integer__arithmetics_xsubtract_3);
  allocp[10] = a1;
  allocp[11] = makeint(1L);
  allocp[12] = x1;
  allocp[13] = x2;
  allocp[14] = x5 = makeref(&allocp[14]);
  x4 = makecons(&allocp[13]);
  qp = (struct goalrec*)&allocp[8];
  allocp += 15;
  unify_value(a4, x4);
  a2 = a5;
  a3 = x5;
  a4 = x3;
  execute(rand__0__or__1_5_0);
  goto rand__0__or__1_5_ext_interrupt;
 init__col_6_2:
  if (a1 != makeint(0L)) goto init__col_6_interrupt;
  x6 = NILATOM;
  unify_value(a4, x6);
  proceed();
 init__col_6_3:
  if (!isref(a1)) goto init__col_6_interrupt;
  deref_and_jump(a1,init__col_6_1);
  *reasonp++ =  a1;
  goto init__col_6_interrupt;
 init__col_6_ext_interrupt:
  reasonp = 0l;
 init__col_6_interrupt:
  toppred = &predicate_main_xinit__col_6;
  goto interrupt_6;
 }

 rand__0__or__1_5_top: {
  q x0, x1, x2, x3, x4, x5, x6, x7, x8, x9;
  a0 = qp->args[0];
  a1 = qp->args[1];
  a2 = qp->args[2];
  a3 = qp->args[3];
  a4 = qp->args[4];
  qp = qp->next;
 rand__0__or__1_5_clear_reason:
  reasonp = reasons;
 rand__0__or__1_5_0:
 rand__0__or__1_5_1:
  if (!isint(a0)) goto rand__0__or__1_5_6;
  gblt_integer(a0,rand__0__or__1_5_interrupt);
 rand__0__or__1_5_2:
  if (!isint(a1)) goto rand__0__or__1_5_5;
  gblt_integer(a1,rand__0__or__1_5_interrupt);
 rand__0__or__1_5_3:
  if (!isint(a2)) goto rand__0__or__1_5_4;
  gblt_integer(a2,rand__0__or__1_5_interrupt);
  x0 = makeint(3L);
  bblt_rshift_no_check(a2,x0,x1);
  x2 = makeint(2L);
  bblt_lshift_no_check(a0,x2,x3);
  bblt_add_no_check(x1,x3,x4);
  x5 = makeint(2L);
  bblt_rshift_no_check(a1,x5,x6);
  bblt_add_no_check(x4,x6,x7);
  unify_value(a4, x7);
  x8 = makeint(2L);
  bblt_mod_no_check_y(a4,x8,x9);
  unify(a3, x9);
  proceed();
 rand__0__or__1_5_4:
  if (!isref(a2)) goto rand__0__or__1_5_interrupt;
  deref_and_jump(a2,rand__0__or__1_5_3);
  *reasonp++ =  a2;
  goto rand__0__or__1_5_interrupt;
 rand__0__or__1_5_5:
  if (!isref(a1)) goto rand__0__or__1_5_interrupt;
  deref_and_jump(a1,rand__0__or__1_5_2);
  *reasonp++ =  a1;
  goto rand__0__or__1_5_interrupt;
 rand__0__or__1_5_6:
  if (!isref(a0)) goto rand__0__or__1_5_interrupt;
  deref_and_jump(a0,rand__0__or__1_5_1);
  *reasonp++ =  a0;
  goto rand__0__or__1_5_interrupt;
 rand__0__or__1_5_ext_interrupt:
  reasonp = 0l;
 rand__0__or__1_5_interrupt:
  toppred = &predicate_main_xrand__0__or__1_5;
  goto interrupt_5;
 }

 make__row_11_top: {
  q x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10;
  a0 = qp->args[0];
  a1 = qp->args[1];
  a2 = qp->args[2];
  a3 = qp->args[3];
  a4 = qp->args[4];
  a5 = qp->args[5];
  a6 = qp->args[6];
  a7 = qp->args[7];
  a8 = qp->args[8];
  a9 = qp->args[9];
  a10 = qp->args[10];
  qp = qp->next;
 make__row_11_clear_reason:
  reasonp = reasons;
 make__row_11_0:
 make__row_11_1:
  switch (ptagof(a4)) {
 case CONS:
  allocp[0] = x1 = makeref(&allocp[0]);
  allocp[1] = x2 = makeref(&allocp[1]);
  x0 = makecons(&allocp[0]);
  allocp += 2;
  unify_value(a9, x0);
  allocp[0] = (q)qp;
  allocp[1] = (q)(&predicate_main_xmake__row_11);
  allocp[2] = x3 = makeref(&allocp[2]);
  allocp[3] = a1;
  allocp[4] = a2;
  allocp[5] = a3;
  x4 = cdr_of(a4);
  allocp[6] = x4;
  allocp[7] = x5 = makeref(&allocp[7]);
  allocp[8] = a6;
  allocp[9] = x6 = makeref(&allocp[9]);
  allocp[10] = a8;
  allocp[11] = x1;
  allocp[12] = a10;
  allocp[13] = (q)(struct goalrec*)&allocp[0];
  allocp[14] = (q)(&predicate_integer__arithmetics_xsubtract_3);
  allocp[15] = a0;
  allocp[16] = makeint(1L);
  allocp[17] = x3;
  allocp[18] = (q)(struct goalrec*)&allocp[13];
  allocp[19] = (q)(&predicate_main_xmake__col_15);
  allocp[20] = a0;
  allocp[21] = a1;
  allocp[22] = a2;
  allocp[23] = a3;
  x7 = car_of(a4);
  allocp[24] = x7;
  allocp[25] = a5;
  allocp[26] = x5;
  allocp[27] = a7;
  allocp[28] = x6;
  allocp[29] = x8 = makeref(&allocp[29]);
  allocp[30] = x8;
  allocp[31] = x9 = makeref(&allocp[31]);
  allocp[32] = x9;
  allocp[33] = x2;
  allocp[34] = NILATOM;
  allocp[35] = x10 = makeref(&allocp[35]);
  a3 = x10;
  qp = (struct goalrec*)&allocp[18];
  allocp += 36;
  execute(compute__node_4_0);
  goto compute__node_4_ext_interrupt;
 case ATOMIC:
  if (a4 != NILATOM) goto make__row_11_interrupt;
  unify(a9, a10);
  allocp[0] = x1 = makeref(&allocp[0]);
  allocp[1] = x2 = makeref(&allocp[1]);
  x0 = makecons(&allocp[0]);
  allocp += 2;
  unify_value(a6, x0);
  allocp[0] = x4 = makeref(&allocp[0]);
  allocp[1] = x5 = makeref(&allocp[1]);
  x3 = makecons(&allocp[0]);
  allocp += 2;
  unify_value(a8, x3);
  a0 = a5;
  a1 = x1;
  a2 = a7;
  a3 = x4;
  a4 = x2;
  a5 = x5;
  execute(connect__row_6_0);
  goto connect__row_6_ext_interrupt;
 case VARREF:
  deref_and_jump(a4,make__row_11_1);
  *reasonp++ =  a4;
  goto make__row_11_interrupt;
  };
  goto make__row_11_interrupt;
 make__row_11_ext_interrupt:
  reasonp = 0l;
 make__row_11_interrupt:
  goto interrupt_11;
 }

 connect__row_6_top: {
  q x0, x1, x2, x3, x4, x5, x6, x7;
  a0 = qp->args[0];
  a1 = qp->args[1];
  a2 = qp->args[2];
  a3 = qp->args[3];
  a4 = qp->args[4];
  a5 = qp->args[5];
  qp = qp->next;
 connect__row_6_clear_reason:
  reasonp = reasons;
 connect__row_6_0:
 connect__row_6_1:
  switch (ptagof(a0)) {
 case CONS:
 connect__row_6_2:
  switch (ptagof(a2)) {
 case CONS:
  x0 = car_of(a0);
  unify(x0, a4);
  x1 = car_of(a2);
  unify(x1, a5);
  allocp[0] = x3 = makeref(&allocp[0]);
  allocp[1] = x4 = makeref(&allocp[1]);
  x2 = makecons(&allocp[0]);
  allocp += 2;
  unify_value(a1, x2);
  allocp[0] = x6 = makeref(&allocp[0]);
  allocp[1] = x7 = makeref(&allocp[1]);
  x5 = makecons(&allocp[0]);
  allocp += 2;
  unify_value(a3, x5);
  a0 = cdr_of(a0);
  a1 = x3;
  a2 = cdr_of(a2);
  a3 = x6;
  a4 = x4;
  a5 = x7;
  execute(connect__row_6_0);
  goto connect__row_6_ext_interrupt;
 case VARREF:
  deref_and_jump(a2,connect__row_6_2);
  *reasonp++ =  a2;
  goto connect__row_6_interrupt;
  };
  goto connect__row_6_interrupt;
 case ATOMIC:
  if (a0 != NILATOM) goto connect__row_6_interrupt;
 connect__row_6_3:
  switch (ptagof(a2)) {
 case ATOMIC:
  if (a2 != NILATOM) goto connect__row_6_interrupt;
  proceed();
 case VARREF:
  deref_and_jump(a2,connect__row_6_3);
  *reasonp++ =  a2;
  goto connect__row_6_interrupt;
  };
  goto connect__row_6_interrupt;
 case VARREF:
  deref_and_jump(a0,connect__row_6_1);
  *reasonp++ =  a0;
  goto connect__row_6_interrupt;
  };
  goto connect__row_6_interrupt;
 connect__row_6_ext_interrupt:
  reasonp = 0l;
 connect__row_6_interrupt:
  toppred = &predicate_main_xconnect__row_6;
  goto interrupt_6;
 }

 make__col_15_top: {
  q x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18;
  a0 = qp->args[0];
  a1 = qp->args[1];
  a2 = qp->args[2];
  a3 = qp->args[3];
  a4 = qp->args[4];
  a5 = qp->args[5];
  a6 = qp->args[6];
  a7 = qp->args[7];
  a8 = qp->args[8];
  a9 = qp->args[9];
  a10 = qp->args[10];
  a11 = qp->args[11];
  a12 = qp->args[12];
  a13 = qp->args[13];
  a14 = qp->args[14];
  qp = qp->next;
 make__col_15_clear_reason:
  reasonp = reasons;
 make__col_15_0:
 make__col_15_1:
  switch (ptagof(a4)) {
 case CONS:
 make__col_15_2:
  switch (ptagof(a5)) {
 case CONS:
 make__col_15_3:
  switch (ptagof(a7)) {
 case CONS:
 make__col_15_4:
  switch (ptagof(a2)) {
 case FUNCTOR:
  if (functor_of(a2) != makesym(functor_kumon_4)) goto make__col_15_interrupt;
  allocp[0] = x1 = makeref(&allocp[0]);
  allocp[1] = x2 = makeref(&allocp[1]);
  x0 = makecons(&allocp[0]);
  allocp += 2;
  unify_value(a13, x0);
  allocp[0] = x4 = makeref(&allocp[0]);
  allocp[1] = x5 = makeref(&allocp[1]);
  x3 = makecons(&allocp[0]);
  allocp += 2;
  unify_value(a6, x3);
  allocp[0] = x7 = makeref(&allocp[0]);
  allocp[1] = x8 = makeref(&allocp[1]);
  x6 = makecons(&allocp[0]);
  allocp += 2;
  unify_value(a8, x6);
  allocp[0] = (q)qp;
  allocp[1] = (q)(&predicate_main_xmake__col_15);
  allocp[2] = a0;
  allocp[3] = x9 = makeref(&allocp[3]);
  allocp[4] = a2;
  allocp[5] = a3;
  x10 = cdr_of(a4);
  allocp[6] = x10;
  x11 = cdr_of(a5);
  allocp[7] = x11;
  allocp[8] = x4;
  x12 = cdr_of(a7);
  allocp[9] = x12;
  allocp[10] = x7;
  allocp[11] = x13 = makeref(&allocp[11]);
  allocp[12] = a10;
  allocp[13] = x14 = makeref(&allocp[13]);
  allocp[14] = a12;
  allocp[15] = x1;
  allocp[16] = a14;
  allocp[17] = (q)(struct goalrec*)&allocp[0];
  allocp[18] = (q)(&predicate_integer__arithmetics_xsubtract_3);
  allocp[19] = a1;
  allocp[20] = makeint(1L);
  allocp[21] = x9;
  allocp[22] = (q)(struct goalrec*)&allocp[17];
  allocp[23] = (q)(&predicate_main_xcell_11);
  x15 = car_of(a4);
  allocp[24] = x15;
  x16 = car_of(a5);
  allocp[25] = x16;
  allocp[26] = x5;
  x17 = car_of(a7);
  allocp[27] = x17;
  allocp[28] = x8;
  allocp[29] = a9;
  allocp[30] = x13;
  allocp[31] = a11;
  allocp[32] = x14;
  allocp[33] = x2;
  allocp[34] = a3;
  allocp[35] = x18 = makeref(&allocp[35]);
  a3 = x18;
  qp = (struct goalrec*)&allocp[22];
  allocp += 36;
  execute(compute__node_4_0);
  goto compute__node_4_ext_interrupt;
 case VARREF:
  deref_and_jump(a2,make__col_15_4);
  *reasonp++ =  a2;
  goto make__col_15_interrupt;
  };
  goto make__col_15_interrupt;
 case VARREF:
  deref_and_jump(a7,make__col_15_3);
  *reasonp++ =  a7;
  goto make__col_15_interrupt;
  };
  goto make__col_15_interrupt;
 case VARREF:
  deref_and_jump(a5,make__col_15_2);
  *reasonp++ =  a5;
  goto make__col_15_interrupt;
  };
  goto make__col_15_interrupt;
 case ATOMIC:
  if (a4 != NILATOM) goto make__col_15_interrupt;
  unify3(a13, a14, a9, a10, a11, a12);
  x0 = NILATOM;
  unify_value(a6, x0);
  x1 = NILATOM;
  unify_value(a8, x1);
  proceed();
 case VARREF:
  deref_and_jump(a4,make__col_15_1);
  *reasonp++ =  a4;
  goto make__col_15_interrupt;
  };
  goto make__col_15_interrupt;
 make__col_15_ext_interrupt:
  reasonp = 0l;
 make__col_15_interrupt:
  goto interrupt_15;
 }

 compute__node_4_top: {
  q x0;
  a0 = qp->args[0];
  a1 = qp->args[1];
  a2 = qp->args[2];
  a3 = qp->args[3];
  qp = qp->next;
 compute__node_4_clear_reason:
  reasonp = reasons;
 compute__node_4_0:
 compute__node_4_1:
  switch (ptagof(a2)) {
 case FUNCTOR:
  if (functor_of(a2) != makesym(functor_kumon_4)) goto compute__node_4_interrupt;
  x0 = makeint(0L);
  unify_value(a3, x0);
  proceed();
 case VARREF:
  deref_and_jump(a2,compute__node_4_1);
  *reasonp++ =  a2;
  goto compute__node_4_interrupt;
  };
  goto compute__node_4_interrupt;
 compute__node_4_ext_interrupt:
  reasonp = 0l;
 compute__node_4_interrupt:
  toppred = &predicate_main_xcompute__node_4;
  goto interrupt_4;
 }

 cell_11_top: {
  q x0, x1, x2, x3, x4, x5, x6, x7;
  a0 = qp->args[0];
  a1 = qp->args[1];
  a2 = qp->args[2];
  a3 = qp->args[3];
  a4 = qp->args[4];
  a5 = qp->args[5];
  a6 = qp->args[6];
  a7 = qp->args[7];
  a8 = qp->args[8];
  a9 = qp->args[9];
  a10 = qp->args[10];
  qp = qp->next;
 cell_11_clear_reason:
  reasonp = reasons;
 cell_11_0:
  allocp[0] = x1 = makeref(&allocp[0]);
  allocp[1] = a0;
  x0 = makecons(&allocp[0]);
  allocp += 2;
  unify_value(a3, x0);
  allocp[0] = x3 = makeref(&allocp[0]);
  allocp[1] = a0;
  x2 = makecons(&allocp[0]);
  allocp += 2;
  unify_value(a2, x2);
  allocp[0] = x5 = makeref(&allocp[0]);
  allocp[1] = a0;
  x4 = makecons(&allocp[0]);
  allocp += 2;
  unify_value(a8, x4);
  allocp[0] = x7 = makeref(&allocp[0]);
  allocp[1] = a0;
  x6 = makecons(&allocp[0]);
  allocp += 2;
  unify_value(a5, x6);
  a2 = a4;
  a3 = a6;
  a4 = a7;
  a5 = x1;
  a6 = x3;
  a7 = x5;
  a8 = x7;
  execute(cell1_11_0);
  goto cell1_11_ext_interrupt;
 cell_11_ext_interrupt:
  reasonp = 0l;
 cell_11_interrupt:
  goto interrupt_11;
 }

 cell1_11_top: {
  q x0, x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16, x17, x18, x19, x20, x21, x22, x23, x24;
  a0 = qp->args[0];
  a1 = qp->args[1];
  a2 = qp->args[2];
  a3 = qp->args[3];
  a4 = qp->args[4];
  a5 = qp->args[5];
  a6 = qp->args[6];
  a7 = qp->args[7];
  a8 = qp->args[8];
  a9 = qp->args[9];
  a10 = qp->args[10];
  qp = qp->next;
 cell1_11_clear_reason:
  reasonp = reasons;
 cell1_11_0:
 cell1_11_1:
  switch (ptagof(a1)) {
 case CONS:
 cell1_11_2:
  switch (ptagof(a2)) {
 case CONS:
 cell1_11_3:
  switch (ptagof(a3)) {
 case CONS:
 cell1_11_4:
  switch (ptagof(a4)) {
 case CONS:
 cell1_11_5:
  if (!isint(a10)) goto cell1_11_14;
  x0 = makeint(0L);
  gblt_greater(a10,x0,cell1_11_15);
  x2 = makeint(1L);
  gblt_subtract(a10,x2,x1,cell1_11_15);
  x3 = car_of(a2);
 cell1_11_6:
  if (!isint(x3)) goto cell1_11_13;
  x4 = car_of(a1);
 cell1_11_7:
  if (!isint(x4)) goto cell1_11_12;
  gblt_add(x3,x4,x5,cell1_11_15);
  x6 = car_of(a3);
 cell1_11_8:
  if (!isint(x6)) goto cell1_11_11;
  x7 = car_of(a4);
 cell1_11_9:
  if (!isint(x7)) goto cell1_11_10;
  gblt_add(x6,x7,x8,cell1_11_15);
  gblt_add(x5,x8,x9,cell1_11_15);
  allocp[1] = (q)(&predicate_main_xcell1_11);
  allocp[2] = x10 = makeref(&allocp[2]);
  x11 = cdr_of(a1);
  allocp[3] = x11;
  x12 = cdr_of(a2);
  allocp[4] = x12;
  x13 = cdr_of(a3);
  allocp[5] = x13;
  x14 = cdr_of(a4);
  allocp[6] = x14;
  allocp[7] = x15 = makeref(&allocp[7]);
  allocp[8] = x16 = makeref(&allocp[8]);
  allocp[9] = x17 = makeref(&allocp[9]);
  allocp[10] = x18 = makeref(&allocp[10]);
  allocp[11] = a9;
  allocp[12] = x1;
  x19 = (q)qp;
  x20 = (q)(struct goalrec*)&allocp[0];
  enqueue_at_lower_priority_no_check(makeint(1L),x19,x20);
  allocp[13] = x18;
  allocp[14] = x10;
  x21 = makecons(&allocp[13]);
  allocp += 15;
  unify_value(a8, x21);
  allocp[0] = x17;
  allocp[1] = x10;
  x22 = makecons(&allocp[0]);
  allocp += 2;
  unify_value(a7, x22);
  allocp[0] = x16;
  allocp[1] = x10;
  x23 = makecons(&allocp[0]);
  allocp += 2;
  unify_value(a6, x23);
  allocp[0] = x15;
  allocp[1] = x10;
  x24 = makecons(&allocp[0]);
  allocp += 2;
  unify_value(a5, x24);
  a1 = x9;
  a2 = x10;
  execute(change_3_0);
  goto change_3_ext_interrupt;
 cell1_11_10:
  if (!isref(x7)) goto cell1_11_15;
  deref_and_jump(x7,cell1_11_9);
  *reasonp++ =  x7;
  goto cell1_11_15;
 cell1_11_11:
  if (!isref(x6)) goto cell1_11_15;
  deref_and_jump(x6,cell1_11_8);
  *reasonp++ =  x6;
  goto cell1_11_15;
 cell1_11_12:
  if (!isref(x4)) goto cell1_11_15;
  deref_and_jump(x4,cell1_11_7);
  *reasonp++ =  x4;
  goto cell1_11_15;
 cell1_11_13:
  if (!isref(x3)) goto cell1_11_15;
  deref_and_jump(x3,cell1_11_6);
  *reasonp++ =  x3;
  goto cell1_11_15;
 cell1_11_14:
  if (!isref(a10)) goto cell1_11_15;
  deref_and_jump(a10,cell1_11_5);
  *reasonp++ =  a10;
  goto cell1_11_15;
 case VARREF:
  deref_and_jump(a4,cell1_11_4);
  *reasonp++ =  a4;
  goto cell1_11_15;
  };
  goto cell1_11_15;
 case VARREF:
  deref_and_jump(a3,cell1_11_3);
  *reasonp++ =  a3;
  goto cell1_11_15;
  };
  goto cell1_11_15;
 case VARREF:
  deref_and_jump(a2,cell1_11_2);
  *reasonp++ =  a2;
  goto cell1_11_15;
  };
  goto cell1_11_15;
 case VARREF:
  deref_and_jump(a1,cell1_11_1);
  *reasonp++ =  a1;
  goto cell1_11_15;
  };
  goto cell1_11_15;
 cell1_11_15:
 cell1_11_16:
  switch (ptagof(a10)) {
 case ATOMIC:
 cell1_11_17:
  if (a10 != makeint(0L)) goto cell1_11_interrupt;
  x0 = NILATOM;
  unify_value(a5, x0);
  x1 = NILATOM;
  unify_value(a6, x1);
  x2 = NILATOM;
  unify_value(a7, x2);
  x3 = NILATOM;
  unify_value(a8, x3);
  unify(a9, a0);
  proceed();
 case VARREF:
  deref_and_jump(a10,cell1_11_16);
  *reasonp++ =  a10;
  goto cell1_11_interrupt;
  };
  goto cell1_11_interrupt;
 cell1_11_ext_interrupt:
  reasonp = 0l;
 cell1_11_interrupt:
  toppred = &predicate_main_xcell1_11;
  goto interrupt_11;
 }

 change_3_top: {
  q x0;
  a0 = qp->args[0];
  a1 = qp->args[1];
  a2 = qp->args[2];
  qp = qp->next;
 change_3_clear_reason:
  reasonp = reasons;
 change_3_0:
 change_3_1:
  switch (ptagof(a0)) {
 case ATOMIC:
 change_3_2:
  switch ((unsigned long)a0) {
 case (unsigned long) makeint(0L):
 change_3_3:
  switch (ptagof(a1)) {
 case ATOMIC:
 change_3_4:
  switch ((unsigned long)a1) {
 case (unsigned long) makeint(0L):
  x0 = makeint(1L);
  unify_value(a2, x0);
  proceed();
 case (unsigned long) makeint(1L):
  x0 = makeint(0L);
  unify_value(a2, x0);
  proceed();
 case (unsigned long) makeint(2L):
  x0 = makeint(1L);
  unify_value(a2, x0);
  proceed();
 case (unsigned long) makeint(3L):
  x0 = makeint(0L);
  unify_value(a2, x0);
  proceed();
 case (unsigned long) makeint(4L):
  x0 = makeint(1L);
  unify_value(a2, x0);
  proceed();
  };
  goto change_3_interrupt;
 case VARREF:
  deref_and_jump(a1,change_3_3);
  *reasonp++ =  a1;
  goto change_3_interrupt;
  };
  goto change_3_interrupt;
 case (unsigned long) makeint(1L):
 change_3_5:
  switch (ptagof(a1)) {
 case ATOMIC:
 change_3_6:
  switch ((unsigned long)a1) {
 case (unsigned long) makeint(0L):
  x0 = makeint(0L);
  unify_value(a2, x0);
  proceed();
 case (unsigned long) makeint(1L):
  x0 = makeint(1L);
  unify_value(a2, x0);
  proceed();
 case (unsigned long) makeint(2L):
  x0 = makeint(0L);
  unify_value(a2, x0);
  proceed();
 case (unsigned long) makeint(3L):
  x0 = makeint(1L);
  unify_value(a2, x0);
  proceed();
 case (unsigned long) makeint(4L):
  x0 = makeint(0L);
  unify_value(a2, x0);
  proceed();
  };
  goto change_3_interrupt;
 case VARREF:
  deref_and_jump(a1,change_3_5);
  *reasonp++ =  a1;
  goto change_3_interrupt;
  };
  goto change_3_interrupt;
  };
  goto change_3_interrupt;
 case VARREF:
  deref_and_jump(a0,change_3_1);
  *reasonp++ =  a0;
  goto change_3_interrupt;
  };
  goto change_3_interrupt;
 change_3_ext_interrupt:
  reasonp = 0l;
 change_3_interrupt:
  toppred = &predicate_main_xchange_3;
  goto interrupt_3;
 }
 interrupt_15:
  allocp[16] = a14;
 interrupt_14:
  allocp[15] = a13;
 interrupt_13:
  allocp[14] = a12;
 interrupt_12:
  allocp[13] = a11;
 interrupt_11:
  allocp[12] = a10;
 interrupt_10:
  allocp[11] = a9;
 interrupt_9:
  allocp[10] = a8;
 interrupt_8:
  allocp[9] = a7;
 interrupt_7:
  allocp[8] = a6;
 interrupt_6:
  allocp[7] = a5;
 interrupt_5:
  allocp[6] = a4;
 interrupt_4:
  allocp[5] = a3;
 interrupt_3:
  allocp[4] = a2;
 interrupt_2:
  allocp[3] = a1;
 interrupt_1:
  allocp[2] = a0;
 interrupt_0:
  allocp = interrupt_goal(allocp, toppred, reasonp);
 proceed_label:
  loop_within_module(module_main);
}
