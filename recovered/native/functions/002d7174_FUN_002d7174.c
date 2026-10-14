/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d7174 FUN_002d7174 */

bool FUN_002d7174(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  iVar7 = *param_2 + param_2[1] + param_2[2];
  iVar1 = png_muldiv(param_1,*param_2,DAT_002d7250,iVar7);
  bVar9 = true;
  if ((iVar1 != 0) && (iVar1 = png_muldiv(param_1 + 4,param_2[1],DAT_002d7250,iVar7), iVar1 != 0)) {
    iVar5 = param_2[1];
    iVar3 = *param_2;
    iVar8 = param_2[3] + param_2[4] + param_2[5];
    iVar1 = png_muldiv(param_1 + 8,param_2[3],DAT_002d7250,iVar8);
    if ((iVar1 != 0) &&
       (iVar1 = png_muldiv(param_1 + 0xc,param_2[4],DAT_002d7250,iVar8), iVar1 != 0)) {
      iVar2 = param_2[3];
      iVar4 = param_2[4];
      iVar6 = param_2[6] + param_2[7] + param_2[8];
      iVar1 = png_muldiv(param_1 + 0x10,param_2[6],DAT_002d7250);
      if ((iVar1 != 0) &&
         (iVar1 = png_muldiv(param_1 + 0x14,param_2[7],DAT_002d7250,iVar6), iVar1 != 0)) {
        iVar6 = iVar7 + iVar8 + iVar6;
        iVar7 = param_2[7];
        iVar1 = png_muldiv(param_1 + 0x18,iVar3 + iVar2 + param_2[6],DAT_002d7250,iVar6);
        if (iVar1 != 0) {
          iVar1 = png_muldiv(param_1 + 0x1c,iVar5 + iVar4 + iVar7,DAT_002d7250,iVar6);
          bVar9 = iVar1 == 0;
        }
      }
    }
  }
  return bVar9;
}


