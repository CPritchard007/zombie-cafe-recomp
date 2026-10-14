/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00268578 FUN_00268578 */

void FUN_00268578(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xd0) == 0) {
      iVar1 = FUN_0025f066();
      *(int *)(param_1 + 0xd0) = iVar1;
      if (iVar1 == 0) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x2c) = param_2;
    if (param_3 == 0) {
      uVar3 = *(undefined4 *)(param_1 + 0xd0);
      uVar4 = 0;
      uVar2 = 0;
      iVar1 = 0;
    }
    else {
      uVar2 = FUN_00268514(param_1,param_3);
      iVar1 = DAT_002685dc + 0x2685b8;
      uVar4 = 0xffffffff;
      uVar3 = *(undefined4 *)(param_1 + 0xd0);
    }
    FUN_00265900(uVar3,uVar4,uVar2,1,iVar1);
  }
  return;
}


