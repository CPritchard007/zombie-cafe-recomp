/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bf0c0 Cafe::resetFieldTile */

/* Cafe::resetFieldTile(int, bool) */

char __thiscall Cafe::resetFieldTile(Cafe *this,int param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  
  iVar10 = DAT_000bf328 + 0xbf0ce;
  iVar5 = **(int **)(iVar10 + DAT_000bf32c);
  iVar6 = **(int **)(iVar10 + DAT_000bf330);
  iVar9 = **(int **)(iVar10 + DAT_000bf334);
  iVar2 = CapcomMath::random((uint)**(byte **)(iVar10 + DAT_000bf338));
  cVar1 = *(char *)(iVar9 + iVar2 * 2);
  lVar3 = indexToStaggeredCoords(param_1);
  iVar2 = staggeredToDiamondCoords(lVar3);
  iVar4 = iVar2 >> 0x10;
  iVar2 = (int)(short)iVar2;
  iVar9 = **(int **)(iVar10 + DAT_000bf33c);
  piVar11 = *(int **)(iVar10 + DAT_000bf340);
  if (((iVar9 < iVar4) && (iVar4 <= iVar9 + *piVar11)) ||
     ((iVar7 = **(int **)(iVar10 + DAT_000bf344), iVar2 < iVar7 && (iVar7 - *piVar11 <= iVar2)))) {
    iVar5 = *piVar11;
    iVar6 = **(int **)(iVar10 + DAT_000bf344);
    if (((iVar2 == (iVar6 - (iVar5 >> 1)) + -1) && ((iVar4 <= iVar9 || (iVar9 + iVar5 < iVar4)))) ||
       (iVar8 = DAT_000bf34c,
       iVar4 == iVar9 + (iVar5 >> 1) + 1 && (iVar6 <= iVar2 || iVar2 < iVar6 - iVar5))) {
      iVar8 = DAT_000bf348;
    }
  }
  else {
    iVar13 = iVar9 + *piVar11 + 1;
    iVar8 = DAT_000bf350;
    if ((((iVar4 != iVar13) || (iVar2 != iVar7)) &&
        ((iVar12 = (iVar7 - *piVar11) + -1, iVar2 != iVar12 || (iVar4 != iVar9)))) &&
       ((((iVar8 = DAT_000bf354, iVar4 != iVar13 && (iVar2 != iVar12)) &&
         (iVar8 = DAT_000bf358, iVar4 != iVar9)) && (iVar2 != iVar7)))) {
      if (iVar9 <= iVar4) {
        return cVar1;
      }
      iVar5 = iVar9 - iVar5;
      if (iVar4 < iVar5) {
        return cVar1;
      }
      if (iVar2 <= iVar7) {
        return cVar1;
      }
      if (iVar6 + iVar7 < iVar2) {
        return cVar1;
      }
      if (!param_2) {
        return -1;
      }
      if (iVar4 <= iVar5 + 2) {
        if (iVar2 == iVar7 + 1) {
          return **(char **)(iVar10 + DAT_000bf35c) + '\r';
        }
        if (iVar2 == iVar7 + 2) {
          return **(char **)(iVar10 + DAT_000bf35c) + '\f';
        }
      }
      if ((iVar4 == iVar9 + -2) && (iVar2 == iVar7 + 1)) {
        return **(char **)(iVar10 + DAT_000bf35c) + '\a';
      }
      iVar6 = iVar9 + -1;
      if ((iVar4 == iVar6) && (iVar2 == iVar7 + 1)) {
        return **(char **)(iVar10 + DAT_000bf35c) + '\x06';
      }
      if (iVar4 == iVar5) {
        if (iVar2 == iVar7 + 3) {
          return **(char **)(iVar10 + DAT_000bf35c) + '\x05';
        }
        if (iVar2 == iVar7 + 4) {
          return **(char **)(iVar10 + DAT_000bf35c) + '\x04';
        }
        if (iVar2 == iVar7 + 5) {
          return **(char **)(iVar10 + DAT_000bf35c) + '\x03';
        }
        if (iVar2 == iVar7 + 6) {
          return **(char **)(iVar10 + DAT_000bf35c) + '\x02';
        }
      }
      if (iVar4 == iVar5 + 1) {
        iVar8 = DAT_000bf35c;
        if (iVar2 == iVar7 + 5) goto LAB_000bf16c;
        if (iVar2 == iVar7 + 6) {
          return **(char **)(iVar10 + DAT_000bf35c) + '\x01';
        }
        if (iVar2 == iVar7 + 3) {
          return **(char **)(iVar10 + DAT_000bf35c) + '\v';
        }
        if (iVar2 == iVar7 + 4) {
          return **(char **)(iVar10 + DAT_000bf35c) + '\b';
        }
      }
      if (iVar4 == iVar5 + 2) {
        if (iVar2 == iVar7 + 3) {
          return **(char **)(iVar10 + DAT_000bf35c) + '\n';
        }
        if (iVar2 == iVar7 + 4) {
          return **(char **)(iVar10 + DAT_000bf35c) + '\t';
        }
        if (iVar2 == iVar7 + 5) {
          return **(char **)(iVar10 + DAT_000bf35c) + '\x0e';
        }
      }
      if ((iVar4 == iVar6) && (iVar2 == iVar7 + 6)) {
        return **(char **)(iVar10 + DAT_000bf35c) + '\x0f';
      }
      if ((iVar4 == iVar9 + -2) && (iVar2 == iVar7 + 6)) {
        return **(char **)(iVar10 + DAT_000bf35c) + '\x10';
      }
      if (iVar4 != iVar6) {
        return '-';
      }
      if (iVar2 != iVar7 + 5) {
        return '-';
      }
      return **(char **)(iVar10 + DAT_000bf35c) + '\x11';
    }
  }
LAB_000bf16c:
  return **(char **)(iVar10 + iVar8);
}


