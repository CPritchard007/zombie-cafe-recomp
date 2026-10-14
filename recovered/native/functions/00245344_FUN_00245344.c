/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00245344 FUN_00245344 */

int * FUN_00245344(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[5];
  if ((piVar1 != param_1) && (piVar1 != (int *)0x0)) {
    if ((uint)(*param_1 - (int)piVar1) < 0x81) {
      std::__node_alloc::_M_deallocate(piVar1,*param_1 - (int)piVar1);
    }
    else {
      operator_delete(piVar1);
    }
  }
  return param_1;
}


