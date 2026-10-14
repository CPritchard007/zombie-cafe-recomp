/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00298ff8 CapcomApp::setScreenSize */

/* CapcomApp::setScreenSize(long) */

void CapcomApp::setScreenSize(long param_1)

{
  int *piVar1;
  int in_r1;
  
  *(int *)(param_1 + 0x70) = in_r1;
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x38))(piVar1,in_r1 >> 0x10,(int)(short)in_r1);
  }
  return;
}


