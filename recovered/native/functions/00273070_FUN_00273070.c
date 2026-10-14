/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00273070 FUN_00273070 */

int FUN_00273070(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  void *__s;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  uint local_2c;
  
  __s = *(void **)(param_1 + 0xb0);
  local_2c = *(uint *)(param_1 + 0x80);
  if (*(uint *)(param_1 + 0x7c) < *(uint *)(param_1 + 0x80)) {
    local_2c = *(uint *)(param_1 + 0x7c);
  }
  iVar5 = 0;
  for (iVar3 = 0; iVar3 < *(int *)(param_1 + 0x60); iVar3 = iVar3 + 1) {
    iVar2 = *(int *)(param_1 + 0x5c) + iVar5;
    if (*(int *)(iVar2 + 8) == 0 && *(int *)(iVar2 + 0xc) == 0) {
      uVar6 = *(undefined4 *)(param_1 + 0x4c);
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(iVar2 + 0xc) = uVar6;
    }
    iVar5 = iVar5 + 0x30;
  }
  iVar3 = *(int *)(param_1 + 0x48);
  uVar8 = 0;
  if (iVar3 != 0 || *(int *)(param_1 + 0x4c) != 0) {
    uVar6 = *(undefined4 *)(param_1 + 0x7c);
    lVar7 = __aeabi_ldivmod(iVar3 + -1,*(int *)(param_1 + 0x4c) + -1 + (uint)(iVar3 != 0),uVar6,0);
    uVar8 = __muldi3((int)(lVar7 + 1),(int)((ulonglong)(lVar7 + 1) >> 0x20),uVar6,0);
  }
  *(undefined8 *)(param_1 + 0x48) = uVar8;
  *(undefined8 *)(param_1 + 0x50) = uVar8;
  if (((*(char *)(param_1 + 7) == '\0') && (*(char *)(param_1 + 5) != '\x04')) &&
     (uVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x30))(), (uVar1 & 0x200) == 0)) {
    memset(__s,0,0xc);
  }
  else {
    memcpy(__s,(void *)(DAT_002731c4 + 0x273160),8);
    FUN_0025ba48((int)__s + 8,0xffffffff);
  }
  sqlite3_randomness(4,param_1 + 0x30);
  FUN_0025ba48((int)__s + 0xc,*(undefined4 *)(param_1 + 0x30));
  FUN_0025ba48((int)__s + 0x10,*(undefined4 *)(param_1 + 0x1c));
  FUN_0025ba48((int)__s + 0x14,*(undefined4 *)(param_1 + 0x7c));
  FUN_0025ba48((int)__s + 0x18,*(undefined4 *)(param_1 + 0x80));
  memset((void *)((int)__s + 0x1c),0,local_2c - 0x1c);
  uVar1 = 0;
  do {
    if (*(uint *)(param_1 + 0x7c) <= uVar1) {
      return 0;
    }
    iVar3 = FUN_0025ace6(*(undefined4 *)(param_1 + 0x40),__s,local_2c,
                         *(undefined4 *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x48),
                         *(undefined4 *)(param_1 + 0x4c));
    uVar4 = *(uint *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = uVar4 + local_2c;
    *(uint *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + (uint)CARRY4(uVar4,local_2c);
    uVar1 = uVar1 + local_2c;
  } while (iVar3 == 0);
  return iVar3;
}


