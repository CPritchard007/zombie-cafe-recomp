/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025bb88 FUN_0025bb88 */

void FUN_0025bb88(int param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined2 local_20;
  ushort local_1e;
  int local_1c;
  undefined4 local_18;
  
  uVar1 = *(ushort *)(param_1 + 0x12);
  iVar3 = *(int *)(param_1 + 8);
  if ((((int)((uint)uVar1 << 0x1f) < 0) || (*(char *)(iVar3 + 0xd) != '\0')) &&
     (local_1e = uVar1 & 2, (uVar1 & 2) == 0)) {
    if (*(char *)(iVar3 + 0xd) == '\0') {
      local_1c = *(int *)(DAT_0025bbf0 + 0x25bc20) + 2;
      local_18 = 0x1fe;
      local_20 = 1;
      iVar2 = (**(code **)(DAT_0025bbf4 + 0x25bc26))(*(undefined4 *)(param_1 + 0xc),6,&local_20);
      if (-1 < iVar2) {
        *(undefined1 *)(iVar3 + 0xd) = 1;
        *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + 1;
      }
    }
  }
  else {
    (**(code **)(DAT_0025bbf8 + 0x25bc40))(*(undefined4 *)(param_1 + 0xc),6,param_2);
  }
  return;
}


