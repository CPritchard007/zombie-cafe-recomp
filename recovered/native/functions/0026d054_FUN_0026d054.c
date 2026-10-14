/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026d054 FUN_0026d054 */

undefined4 FUN_0026d054(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  short *psVar7;
  undefined4 uVar8;
  
  uVar1 = *(ushort *)(param_2 + 6);
  uVar6 = uVar1 & 0x20;
  if ((uVar1 & 0x20) == 0) {
    psVar7 = *(short **)(param_2 + 0x28);
    *(ushort *)(param_2 + 6) = uVar1 | 0x20;
    uVar8 = *(undefined4 *)(param_1 + 8);
    psVar5 = psVar7 + 4;
    for (; (int)uVar6 < (int)*psVar7; uVar6 = uVar6 + 1) {
      iVar3 = *(int *)(psVar5 + 6);
      if ((iVar3 != 0) && ((*(byte *)(iVar3 + 0x22) & 2) != 0)) {
        iVar2 = *(int *)(psVar5 + 8);
        do {
          iVar4 = iVar2;
          iVar2 = *(int *)(iVar4 + 0x3c);
        } while (iVar2 != 0);
        FUN_0026cfd4(uVar8,*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc),iVar4,param_4);
      }
      psVar5 = psVar5 + 0x20;
    }
  }
  return 0;
}


