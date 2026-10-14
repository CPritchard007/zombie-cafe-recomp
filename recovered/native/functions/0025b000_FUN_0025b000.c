/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025b000 FUN_0025b000 */

void FUN_0025b000(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_0025b094;
  iVar1 = DAT_0025b090;
  if (param_1 == (undefined4 *)0x0) {
    return;
  }
  if ((param_1 < *(undefined4 **)(DAT_0025b08c + 0x25b0b0)) ||
     (*(undefined4 **)((int)&DAT_0025b090 + DAT_0025b090) <= param_1)) {
    if (*(int *)(DAT_0025b094 + 0x25b044) == 0) {
      (**(code **)(DAT_0025b094 + 0x25b064))(param_1);
      return;
    }
    iVar3 = FUN_0025aeb8(param_1);
    iVar1 = DAT_0025b098;
    sqlite3_mutex_enter(*(undefined4 *)(DAT_0025b098 + 0x25b0b8));
    FUN_0025ac94(4,-iVar3);
    FUN_0025ac94(0,-iVar3);
    FUN_0025ac94(9,0xffffffff);
    (**(code **)(iVar4 + 0x25b064))(param_1);
    uVar2 = *(undefined4 *)(iVar1 + 0x25b0b8);
  }
  else {
    sqlite3_mutex_enter(*(undefined4 *)(DAT_0025b090 + 0x25b078));
    *param_1 = *(undefined4 *)((int)&DAT_0025b094 + iVar1);
    *(undefined4 **)((int)&DAT_0025b094 + iVar1) = param_1;
    iVar4 = *(int *)((int)&DAT_0025b098 + iVar1) + 1;
    *(int *)((int)&DAT_0025b098 + iVar1) = iVar4;
    FUN_0025ac94(3,0xffffffff,iVar4,iVar1 + 0x25b01c,param_4);
    uVar2 = *(undefined4 *)(iVar1 + 0x25b078);
  }
  sqlite3_mutex_leave(uVar2);
  return;
}


