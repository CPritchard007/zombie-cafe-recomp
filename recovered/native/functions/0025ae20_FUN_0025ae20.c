/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025ae20 FUN_0025ae20 */

longlong FUN_0025ae20(uint param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  
  iVar2 = DAT_0025ae70;
  puVar4 = (uint *)(DAT_0025ae70 + 0x25ae2c);
  sqlite3_mutex_enter(*(undefined4 *)(DAT_0025ae70 + 0x25ae8c));
  *(uint *)(iVar2 + 0x25ae9c) = param_1;
  *(uint *)(iVar2 + 0x25ae94) = param_3;
  *(undefined4 *)(iVar2 + 0x25aea0) = param_2;
  *(int *)(iVar2 + 0x25ae98) = param_4;
  if ((0 < param_4) || ((param_4 == 0 && (param_3 != 0)))) {
    iVar2 = (int)*puVar4 >> 0x1f;
    uVar3 = 1;
    if ((param_4 <= iVar2) && ((param_4 != iVar2 || (param_3 <= *puVar4)))) goto LAB_0025ae5a;
  }
  uVar3 = 0;
LAB_0025ae5a:
  puVar1 = (undefined4 *)(DAT_0025ae74 + 0x25aec0);
  *(undefined4 *)(DAT_0025ae74 + 0x25aee4) = uVar3;
  sqlite3_mutex_leave(*puVar1);
  return (ulonglong)param_1 << 0x20;
}


