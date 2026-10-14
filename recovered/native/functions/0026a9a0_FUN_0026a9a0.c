/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026a9a0 FUN_0026a9a0 */

undefined4 FUN_0026a9a0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *param_1;
  if (param_2 == 0) {
    piVar2 = param_1 + 0x24;
  }
  else {
    piVar2 = (int *)(iVar3 + 0x1e8);
  }
  if ((piVar2[1] < 1) && ((piVar2[1] != 0 || (*piVar2 == 0)))) {
    uVar1 = 0;
  }
  else {
    param_1[0x16] = 0x13;
    *(undefined1 *)(param_1 + 0x17) = 2;
    FUN_0026a976(param_1 + 0xd,iVar3,DAT_0026a9e4 + 0x26a9d8,iVar3,param_4);
    uVar1 = 1;
  }
  return uVar1;
}


