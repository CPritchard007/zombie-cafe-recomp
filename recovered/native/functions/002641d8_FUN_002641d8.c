/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002641d8 FUN_002641d8 */

undefined4 FUN_002641d8(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar3 = DAT_00264230;
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = 0;
  if (*(byte *)(param_1 + 0x10) != param_2) {
    if (param_2 == 1) {
      *(undefined1 *)(param_1 + 0x10) = 1;
    }
    else {
      iVar1 = (**(code **)(DAT_00264230 + 0x2642de))(uVar5);
      if ((iVar1 < 0) &&
         ((piVar2 = (int *)__errno(), *piVar2 != 0x14 ||
          (iVar3 = (**(code **)(iVar3 + 0x2642ba))(uVar5), iVar3 < 0)))) {
        piVar2 = (int *)__errno();
        uVar4 = 0;
        if (*piVar2 != 2) {
          *(int *)(param_1 + 0x14) = *piVar2;
          uVar4 = DAT_00264234;
        }
      }
      else {
        uVar4 = 0;
        *(undefined1 *)(param_1 + 0x10) = 0;
      }
    }
  }
  return uVar4;
}


