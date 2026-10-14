/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0028c64c FUN_0028c64c */

void FUN_0028c64c(undefined4 *param_1,int *param_2,undefined4 param_3,int param_4,int param_5)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint local_24;
  undefined1 local_20;
  
  puVar3 = (undefined4 *)param_1[0x7f];
  if ((puVar3 == (undefined4 *)0x0) || (*(char *)((int)param_1 + DAT_0028c784) != '\0'))
  goto LAB_0028c774;
  bVar1 = *(byte *)((int)puVar3 + 0x22);
  local_24 = bVar1 & 4;
  if ((bVar1 & 4) != 0) {
    FUN_00268e48(param_1,DAT_0028c788 + 0x28c684,*puVar3);
    goto LAB_0028c774;
  }
  *(byte *)((int)puVar3 + 0x22) = bVar1 | 4;
  if (param_2 == (int *)0x0) {
    iVar4 = puVar3[2] + -1;
    *(undefined1 *)(puVar3[3] + iVar4 * 0x18 + 0x15) = 1;
LAB_0028c6fc:
    if ((((-1 < iVar4) && (iVar4 < (int)puVar3[2])) &&
        (iVar2 = *(int *)(puVar3[3] + iVar4 * 0x18 + 0xc), iVar2 != 0)) &&
       ((iVar2 = sqlite3_stricmp(iVar2,DAT_0028c78c + 0x28c71a), iVar2 == 0 && (param_5 == 0)))) {
      local_20 = (undefined1)param_3;
      puVar3[1] = iVar4;
      *(undefined1 *)((int)puVar3 + 0x23) = local_20;
      *(byte *)((int)puVar3 + 0x22) = (byte)(param_4 << 3) | *(byte *)((int)puVar3 + 0x22);
      goto LAB_0028c774;
    }
  }
  else {
    iVar4 = -1;
    for (; (int)local_24 < *param_2; local_24 = local_24 + 1) {
      iVar4 = 0;
      while ((iVar4 < (int)puVar3[2] &&
             (iVar2 = sqlite3_stricmp(*(undefined4 *)(param_2[2] + local_24 * 0x14 + 4),
                                      *(undefined4 *)(iVar4 * 0x18 + puVar3[3])), iVar2 != 0))) {
        iVar4 = iVar4 + 1;
      }
      if (iVar4 < (int)puVar3[2]) {
        *(undefined1 *)(puVar3[3] + iVar4 * 0x18 + 0x15) = 1;
      }
    }
    if (*param_2 < 2) goto LAB_0028c6fc;
  }
  if (param_4 == 0) {
    iVar4 = FUN_0028bf60(param_1,0,0,0,param_2,param_3,0,0,param_5,0);
    param_2 = (int *)0x0;
    if (iVar4 != 0) {
      *(undefined1 *)(iVar4 + 0x2d) = 2;
    }
  }
  else {
    FUN_00268e48(param_1,DAT_0028c790 + 0x28c748);
  }
LAB_0028c774:
  FUN_00261102(*param_1,param_2);
  return;
}


