/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002617b8 FUN_002617b8 */

undefined4 FUN_002617b8(undefined4 param_1,undefined4 param_2,int param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_80 [48];
  int local_50;
  int local_4c;
  
  iVar1 = DAT_0026180c;
  iVar2 = 0;
  if (param_3 - 1U < 2) {
    iVar2 = (int)*(char *)(DAT_00261808 + 0x261833 + (param_3 - 1U));
  }
  iVar2 = (**(code **)(DAT_0026180c + 0x2617f6))(param_2,iVar2);
  *param_4 = (uint)(iVar2 == 0);
  if ((((param_3 == 0) && ((iVar2 == 0) != 0)) &&
      (iVar1 = (**(code **)((int)&DAT_0026180c + iVar1 + 2))(param_2,auStack_80), iVar1 == 0)) &&
     (local_50 == 0 && local_4c == 0)) {
    *param_4 = 0;
  }
  return 0;
}


