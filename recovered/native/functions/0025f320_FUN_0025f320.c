/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025f320 FUN_0025f320 */

undefined4 * FUN_0025f320(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = DAT_0025f39c;
  FUN_0025acb4(7,param_1);
  if (param_1 <= *(int *)(iVar1 + 0x25f36a)) {
    sqlite3_mutex_enter(*(undefined4 *)(iVar1 + 0x25f37e));
    puVar4 = *(undefined4 **)(iVar1 + 0x25f382);
    if (puVar4 != (undefined4 *)0x0) {
      iVar3 = *(int *)(iVar1 + 0x25f386) + -1;
      *(undefined4 *)(iVar1 + 0x25f382) = *puVar4;
      *(int *)(iVar1 + 0x25f386) = iVar3;
      *(uint *)(iVar1 + 0x25f38a) = (uint)(iVar3 < *(int *)(iVar1 + 0x25f372));
      FUN_0025ac94(1,1);
    }
    sqlite3_mutex_leave(*(undefined4 *)(DAT_0025f3a0 + 0x25f3b6));
    if (puVar4 != (undefined4 *)0x0) {
      return puVar4;
    }
  }
  puVar4 = (undefined4 *)FUN_0025edc8(param_1);
  if (puVar4 != (undefined4 *)0x0) {
    uVar2 = FUN_0025aeb8(puVar4);
    iVar1 = DAT_0025f3a4;
    sqlite3_mutex_enter(*(undefined4 *)(&UNK_0025f3d6 + DAT_0025f3a4));
    FUN_0025ac94(2,uVar2);
    sqlite3_mutex_leave(*(undefined4 *)(&UNK_0025f3d6 + iVar1));
  }
  return puVar4;
}


