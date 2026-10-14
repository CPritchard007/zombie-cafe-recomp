/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bb2c6 CCSpinner::Drag */

/* CCSpinner::Drag(void*, float, float) */

undefined8 CCSpinner::Drag(void *param_1,float param_2,float param_3)

{
  undefined4 uVar1;
  int iVar2;
  int in_r1;
  undefined4 in_r2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined4 *)((int)param_1 + 0x3c) = *(undefined4 *)((int)param_1 + 0x28);
  *(undefined4 *)((int)param_1 + 0x48) = *(undefined4 *)((int)param_1 + 0x44);
  uVar3 = *(undefined4 *)((int)param_1 + 0x20);
  if (*(int *)((int)param_1 + 8) == 0) {
    uVar1 = __addsf3(uVar3);
    uVar4 = *(undefined4 *)((int)param_1 + 4);
    iVar2 = __aeabi_fcmpgt(uVar1,0);
    if (iVar2 == 0) {
      uVar1 = 0;
    }
    iVar2 = __aeabi_fcmplt(uVar1,uVar4);
    if (iVar2 != 0) {
      uVar4 = uVar1;
    }
    *(undefined4 *)((int)param_1 + 0x20) = uVar4;
  }
  else {
    uVar4 = __addsf3(uVar3);
    *(undefined4 *)((int)param_1 + 0x20) = uVar4;
  }
  uVar4 = __subsf3(*(undefined4 *)((int)param_1 + 0x20),uVar3);
  *(undefined4 *)((int)param_1 + 0x28) = uVar4;
  uVar4 = __divsf3(uVar4,in_r2);
  *(undefined4 *)((int)param_1 + 0x44) = uVar4;
  *(undefined4 *)((int)param_1 + 0x30) = 1;
  uVar4 = *(undefined4 *)((int)param_1 + 0x40);
  iVar2 = __aeabi_fcmplt(in_r1,0);
  if (iVar2 != 0) {
    in_r1 = in_r1 + -0x80000000;
  }
  uVar4 = __addsf3(uVar4,in_r1);
  *(undefined4 *)((int)param_1 + 0x40) = uVar4;
  return CONCAT44(in_r2,uVar3);
}


