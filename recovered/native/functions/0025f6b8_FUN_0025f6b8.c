/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025f6b8 FUN_0025f6b8 */

undefined4 * FUN_0025f6b8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = DAT_0025f730;
  puVar3 = param_1;
  if (param_1 != (undefined4 *)0x0) {
    if ((param_1 < *(undefined4 **)(DAT_0025f730 + 0x25f70e)) ||
       (*(undefined4 **)(DAT_0025f730 + 0x25f712) <= param_1)) {
      puVar3 = (undefined4 *)FUN_0025aeb8(param_1);
      iVar1 = DAT_0025f738;
      sqlite3_mutex_enter(*(undefined4 *)(DAT_0025f738 + 0x25f762));
      FUN_0025ac94(2,-(int)puVar3);
      sqlite3_mutex_leave(*(undefined4 *)(iVar1 + 0x25f762));
      sqlite3_free(param_1);
    }
    else {
      sqlite3_mutex_enter(*(undefined4 *)(DAT_0025f730 + 0x25f716));
      FUN_0025ac94(1,0xffffffff);
      *param_1 = *(undefined4 *)(iVar1 + 0x25f71a);
      *(undefined4 **)(iVar1 + 0x25f71a) = param_1;
      iVar2 = *(int *)(iVar1 + 0x25f71e) + 1;
      *(int *)(iVar1 + 0x25f71e) = iVar2;
      *(uint *)(iVar1 + 0x25f722) = (uint)(iVar2 < *(int *)(iVar1 + 0x25f70a));
      puVar3 = (undefined4 *)0x0;
      sqlite3_mutex_leave(*(undefined4 *)(DAT_0025f734 + 0x25f74e));
    }
  }
  return puVar3;
}


