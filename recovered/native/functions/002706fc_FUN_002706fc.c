/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002706fc FUN_002706fc */

undefined8
FUN_002706fc(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = param_2;
  if ((param_4 < 0) || (param_4 == *(int *)(param_2 + 4))) {
    uVar2 = param_1;
    FUN_0026641e(param_1,0x41,param_3,param_5);
    if (param_4 < 0) goto LAB_00270748;
  }
  else {
    uVar1 = 0x1d;
    if ((int)((uint)*(byte *)(param_2 + 0x22) << 0x1b) < 0) {
      uVar1 = 0x89;
    }
    uVar2 = param_5;
    FUN_00266266(param_1,uVar1,param_3,param_4,param_5,param_2,param_3);
  }
  if (*(int *)(param_2 + 0x1c) == 0) {
    FUN_002706a0(param_1,param_2,param_4,param_5);
  }
LAB_00270748:
  return CONCAT44(iVar3,uVar2);
}


