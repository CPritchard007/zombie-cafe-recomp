/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab89e CCColor::FromString */

/* CCColor::FromString(char const*) */

undefined4 CCColor::FromString(char *param_1)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  size_t sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  
  sVar8 = strlen(param_1);
  if (sVar8 == 6) {
    iVar9 = FUN_002ab884(*param_1);
    iVar10 = FUN_002ab884(param_1[1]);
    iVar10 = iVar9 * 0x10 + iVar10;
    iVar11 = FUN_002ab884(param_1[2]);
    iVar9 = FUN_002ab884(param_1[3]);
    iVar9 = iVar11 * 0x10 + iVar9;
    iVar12 = FUN_002ab884(param_1[4]);
    iVar11 = FUN_002ab884(param_1[5]);
    iVar11 = iVar12 * 0x10 + iVar11;
  }
  else {
    if (sVar8 != 8) {
      if (sVar8 != 10) {
        return 0;
      }
      iVar9 = FUN_002ab884(param_1[2]);
      iVar10 = FUN_002ab884(param_1[3]);
      iVar10 = iVar9 * 0x10 + iVar10;
      iVar11 = FUN_002ab884(param_1[4]);
      iVar9 = FUN_002ab884(param_1[5]);
      iVar9 = iVar11 * 0x10 + iVar9;
      iVar12 = FUN_002ab884(param_1[6]);
      iVar11 = FUN_002ab884(param_1[7]);
      iVar11 = iVar12 * 0x10 + iVar11;
      iVar13 = FUN_002ab884(param_1[8]);
      iVar12 = FUN_002ab884(param_1[9]);
      iVar12 = iVar13 * 0x10 + iVar12;
      goto LAB_002ab9f6;
    }
    cVar1 = param_1[4];
    cVar2 = param_1[1];
    cVar3 = param_1[5];
    cVar4 = param_1[2];
    cVar5 = param_1[3];
    cVar6 = param_1[6];
    cVar7 = param_1[7];
    if ((*param_1 != '\0') || ((cVar2 != 'X' && (cVar2 != 'x')))) {
      iVar9 = FUN_002ab884();
      iVar10 = FUN_002ab884(cVar2);
      iVar10 = iVar9 * 0x10 + iVar10;
      iVar11 = FUN_002ab884(cVar4);
      iVar9 = FUN_002ab884(cVar5);
      iVar9 = iVar11 * 0x10 + iVar9;
      iVar12 = FUN_002ab884(cVar1);
      iVar11 = FUN_002ab884(cVar3);
      iVar11 = iVar12 * 0x10 + iVar11;
      iVar13 = FUN_002ab884(cVar6);
      iVar12 = FUN_002ab884(cVar7);
      iVar12 = iVar13 * 0x10 + iVar12;
      goto LAB_002ab9f6;
    }
    iVar9 = FUN_002ab884(cVar4);
    iVar10 = FUN_002ab884(cVar5);
    iVar10 = iVar9 * 0x10 + iVar10;
    iVar11 = FUN_002ab884(cVar1);
    iVar9 = FUN_002ab884(cVar3);
    iVar9 = iVar11 * 0x10 + iVar9;
    iVar12 = FUN_002ab884(cVar6);
    iVar11 = FUN_002ab884(cVar7);
    iVar11 = iVar12 * 0x10 + iVar11;
  }
  iVar12 = 0xff;
LAB_002ab9f6:
  uVar14 = FUN_002ab86c(iVar10,iVar9,iVar11,iVar12);
  return uVar14;
}


