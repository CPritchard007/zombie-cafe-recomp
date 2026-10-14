/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00262ae4 FUN_00262ae4 */

void FUN_00262ae4(int param_1,int *param_2,byte *param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  
  iVar4 = *param_2;
  iVar2 = 0;
  for (pbVar5 = param_3;
      (uVar1 = (uint)*pbVar5, uVar1 != 0 &&
      (((*(byte *)(DAT_00262b78 + 0x262b30 + uVar1) & 6) != 0 || (uVar1 == 0x5f))));
      pbVar5 = pbVar5 + 1) {
    iVar2 = iVar2 + 1;
  }
  if (((int)((uint)*(byte *)(DAT_00262b7c + 0x262b62 + (uint)*param_3) << 0x1d) < 0) ||
     ((1 < iVar2 && (iVar2 = FUN_00262a48(param_3), iVar2 != 0x1a)))) {
    bVar3 = 1;
  }
  else {
    bVar3 = *pbVar5;
    if (bVar3 == 0) goto LAB_00262b56;
  }
  *(undefined1 *)(param_1 + iVar4) = 0x22;
  iVar4 = iVar4 + 1;
LAB_00262b56:
  for (; *param_3 != 0; param_3 = param_3 + 1) {
    *(byte *)(param_1 + iVar4) = *param_3;
    iVar2 = iVar4 + 1;
    if (*param_3 == 0x22) {
      *(undefined1 *)(param_1 + iVar2) = 0x22;
      iVar2 = iVar4 + 2;
    }
    iVar4 = iVar2;
  }
  if (bVar3 != 0) {
    *(undefined1 *)(param_1 + iVar4) = 0x22;
    iVar4 = iVar4 + 1;
  }
  *(undefined1 *)(param_1 + iVar4) = 0;
  *param_2 = iVar4;
  return;
}


