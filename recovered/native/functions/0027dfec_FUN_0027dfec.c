/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027dfec FUN_0027dfec */

int FUN_0027dfec(char *param_1)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int local_1c [2];
  
  uVar4 = *(undefined4 *)(param_1 + 0x34);
  cVar1 = *param_1;
  uVar5 = *(undefined4 *)(param_1 + 0x48);
  local_1c[0] = 0;
  if (cVar1 == '\0') {
    local_1c[0] = FUN_0026b81c(param_1);
  }
  if (local_1c[0] == 0) {
    uVar2 = *(ushort *)(param_1 + 0x10);
    for (iVar6 = 0; iVar6 != (uint)uVar2 << 1; iVar6 = iVar6 + 2) {
      iVar7 = *(int *)(param_1 + 0x38) +
              (uint)(CONCAT11(*(undefined1 *)(*(int *)(param_1 + 0x40) + iVar6),
                              *(undefined1 *)(*(int *)(param_1 + 0x40) + iVar6 + 1)) &
                    *(ushort *)(param_1 + 0x12));
      if (local_1c[0] == 0) {
        FUN_0027dfbc(param_1,iVar7,local_1c);
      }
      if (param_1[3] == '\0') {
        uVar3 = FUN_0025ba30(iVar7);
        FUN_0027df1c(uVar4,uVar3,5,uVar5,local_1c);
      }
    }
    if (param_1[3] == '\0') {
      uVar3 = FUN_0025ba30(*(int *)(param_1 + 0x38) + (byte)param_1[5] + 8);
      FUN_0027df1c(uVar4,uVar3,5,uVar5,local_1c);
    }
  }
  *param_1 = cVar1;
  return local_1c[0];
}


