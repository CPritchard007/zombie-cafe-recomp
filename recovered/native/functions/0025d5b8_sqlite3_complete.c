/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025d5b8 sqlite3_complete */

undefined8 sqlite3_complete(byte *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  uint local_1c;
  
  iVar2 = DAT_0025d774;
  local_1c = 0;
  pbVar6 = param_1;
  do {
    uVar5 = (uint)*pbVar6;
    if (uVar5 == 0) {
LAB_0025d768:
      uVar5 = (uint)(local_1c == 1);
LAB_0025d770:
      return CONCAT44(param_1,uVar5);
    }
    if (uVar5 == 0x22) goto LAB_0025d65e;
    if (uVar5 < 0x23) {
      if (uVar5 < 0xe) {
        if ((uVar5 < 0xc) && (1 < uVar5 - 9)) {
LAB_0025d66e:
          iVar8 = 1;
          if ((*(byte *)(iVar2 + 0x25d606 + uVar5) & 0x46) == 0) {
LAB_0025d67e:
            iVar7 = 2;
            goto LAB_0025d74e;
          }
          while ((*(byte *)(iVar2 + 0x25d606 + (uint)pbVar6[iVar8]) & 0x46) != 0) {
            iVar8 = iVar8 + 1;
          }
          if (uVar5 == 0x54) {
LAB_0025d6c6:
            if (iVar8 == 7) {
              iVar3 = sqlite3_strnicmp(pbVar6,DAT_0025d77c + 0x25d6d4,7);
              iVar7 = 2;
              if (iVar3 == 0) {
                iVar7 = 6;
              }
            }
            else {
              if (iVar8 == 4) {
                iVar3 = sqlite3_strnicmp(pbVar6,DAT_0025d780 + 0x25d6ee,4);
              }
              else {
                iVar7 = 2;
                if (iVar8 != 9) goto LAB_0025d746;
                iVar3 = sqlite3_strnicmp(pbVar6,DAT_0025d784 + 0x25d704,9);
              }
              iVar7 = 2;
              if (iVar3 == 0) {
                iVar7 = 5;
              }
            }
          }
          else {
            if (uVar5 < 0x55) {
              if (uVar5 == 0x43) {
LAB_0025d6ac:
                iVar7 = 2;
                if ((iVar8 == 6) &&
                   (iVar3 = sqlite3_strnicmp(pbVar6,DAT_0025d778 + 0x25d6bc,6), iVar3 == 0)) {
                  iVar7 = 4;
                }
                goto LAB_0025d746;
              }
              if (uVar5 != 0x45) {
LAB_0025d744:
                iVar7 = 2;
                goto LAB_0025d746;
              }
            }
            else if (uVar5 != 0x65) {
              if (uVar5 == 0x74) goto LAB_0025d6c6;
              if (uVar5 != 99) goto LAB_0025d744;
              goto LAB_0025d6ac;
            }
            if (iVar8 == 3) {
              iVar3 = sqlite3_strnicmp(pbVar6,DAT_0025d788 + 0x25d71c,3);
              iVar7 = 2;
              if (iVar3 == 0) {
                iVar7 = 7;
              }
            }
            else {
              iVar7 = 2;
              if (iVar8 == 7) {
                iVar7 = sqlite3_strnicmp(pbVar6,DAT_0025d78c + 0x25d738,7);
                iVar7 = 3 - (uint)(iVar7 != 0);
              }
            }
          }
LAB_0025d746:
          pbVar6 = pbVar6 + iVar8 + -1;
          goto LAB_0025d74e;
        }
      }
      else if (uVar5 != 0x20) goto LAB_0025d66e;
LAB_0025d74c:
      iVar7 = 1;
    }
    else if (uVar5 == 0x2f) {
      iVar7 = 2;
      if (pbVar6[1] == 0x2a) {
        pbVar6 = pbVar6 + 2;
        do {
          pbVar4 = pbVar6;
          if (*pbVar4 == 0) {
            uVar5 = 0;
            goto LAB_0025d770;
          }
          pbVar6 = pbVar4 + 1;
        } while ((*pbVar4 != 0x2a) || (pbVar4[1] != 0x2f));
        goto LAB_0025d74c;
      }
    }
    else if (uVar5 < 0x30) {
      if (uVar5 == 0x27) {
LAB_0025d65e:
        do {
          pbVar6 = pbVar6 + 1;
          if (*pbVar6 == 0) {
            uVar5 = 0;
            goto LAB_0025d770;
          }
        } while (*pbVar6 != uVar5);
        goto LAB_0025d67e;
      }
      if (uVar5 != 0x2d) goto LAB_0025d66e;
      iVar7 = 2;
      if (pbVar6[1] == 0x2d) {
        for (; (bVar1 = *pbVar6, bVar1 != 10 && (bVar1 != 0)); pbVar6 = pbVar6 + 1) {
        }
        if (bVar1 != 0) goto LAB_0025d74c;
        goto LAB_0025d768;
      }
    }
    else {
      if (uVar5 == 0x5b) {
        do {
          pbVar6 = pbVar6 + 1;
          bVar1 = *pbVar6;
          if (bVar1 == 0x5d) break;
        } while (bVar1 != 0);
        if (bVar1 != 0) goto LAB_0025d67e;
        uVar5 = 0;
        goto LAB_0025d770;
      }
      if (uVar5 == 0x60) goto LAB_0025d65e;
      iVar7 = 0;
      if (uVar5 != 0x3b) goto LAB_0025d66e;
    }
LAB_0025d74e:
    pbVar6 = pbVar6 + 1;
    local_1c = (uint)*(byte *)(local_1c * 8 + iVar7 + DAT_0025d790 + 0x25d7ab);
  } while( true );
}


