/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00262b80 FUN_00262b80 */

int FUN_00262b80(byte *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = DAT_00262f18;
  uVar3 = (uint)*param_1;
  if (uVar3 == 0x2d) {
    if (param_1[1] != 0x2d) {
      uVar5 = 0x57;
      goto LAB_00262f8c;
    }
    for (iVar7 = 2; (param_1[iVar7] != 0 && (param_1[iVar7] != 10)); iVar7 = iVar7 + 1) {
    }
LAB_00262cca:
    uVar5 = 0x95;
    goto LAB_00262f86;
  }
  if (uVar3 < 0x2e) {
    if (uVar3 == 0x24) {
LAB_00262e70:
      *param_2 = 0x85;
      iVar4 = 0;
      for (iVar7 = 1; uVar3 = (uint)param_1[iVar7], uVar3 != 0; iVar7 = iVar7 + 1) {
        if ((*(byte *)(iVar6 + 0x262ebe + uVar3) & 0x46) == 0) {
          if ((uVar3 == 0x28) && (0 < iVar4)) goto LAB_00262ea2;
          if ((uVar3 != 0x3a) || (param_1[iVar7 + 1] != 0x3a)) break;
          iVar7 = iVar7 + 1;
        }
        else {
          iVar4 = iVar4 + 1;
        }
      }
      if (iVar4 != 0) {
        return iVar7;
      }
      goto LAB_00262eda;
    }
    if (uVar3 < 0x25) {
      if (uVar3 < 0xe) {
        if ((0xb < uVar3) || (uVar3 - 9 < 2)) {
LAB_00262c58:
          iVar7 = 1;
          while ((*(byte *)(DAT_00262ef4 + 0x262ca2 + (uint)param_1[iVar7]) & 1) != 0) {
            iVar7 = iVar7 + 1;
          }
          goto LAB_00262cca;
        }
      }
      else {
        if (uVar3 == 0x21) {
          if (param_1[1] != 0x3d) {
            uVar5 = 0x94;
            goto LAB_00262d2e;
          }
LAB_00262d1e:
          uVar5 = 0x4b;
LAB_00262d2e:
          *param_2 = uVar5;
          return 2;
        }
        if (uVar3 < 0x22) {
          if (uVar3 == 0x20) goto LAB_00262c58;
        }
        else {
          if (uVar3 == 0x22) goto LAB_00262d40;
          if (uVar3 == 0x23) {
            iVar7 = 1;
            while ((*(byte *)(DAT_00262f14 + 0x262e9e + (uint)param_1[iVar7]) & 4) != 0) {
              iVar7 = iVar7 + 1;
            }
            uVar5 = 0x84;
            if (iVar7 != 1) goto LAB_00262f86;
            goto LAB_00262e70;
          }
        }
      }
    }
    else {
      if (uVar3 == 0x28) {
        uVar5 = 0x16;
        goto LAB_00262f8c;
      }
      if (uVar3 < 0x29) {
        if (uVar3 == 0x26) {
          uVar5 = 0x52;
          goto LAB_00262f8c;
        }
        if (uVar3 < 0x27) {
          uVar5 = 0x5a;
          goto LAB_00262f8c;
        }
LAB_00262d40:
        for (iVar7 = 1; param_1[iVar7] != 0; iVar7 = iVar7 + 1) {
          if ((param_1[iVar7] == uVar3) &&
             (iVar6 = iVar7 + 1, iVar7 = iVar7 + 1, param_1[iVar6] != uVar3)) {
            if (uVar3 != 0x27) goto LAB_00262e2e;
            uVar5 = 0x5e;
            goto LAB_00262f86;
          }
        }
        goto LAB_00262eda;
      }
      if (uVar3 == 0x2a) {
        uVar5 = 0x58;
        goto LAB_00262f8c;
      }
      if (uVar3 < 0x2a) {
        uVar5 = 0x17;
        goto LAB_00262f8c;
      }
      if (uVar3 == 0x2b) {
        uVar5 = 0x56;
        goto LAB_00262f8c;
      }
      if (uVar3 == 0x2c) {
        uVar5 = 0x19;
        goto LAB_00262f8c;
      }
    }
  }
  else {
    if (uVar3 == 0x3e) {
      if (param_1[1] == 0x3d) {
        uVar5 = 0x50;
      }
      else {
        if (param_1[1] != 0x3e) {
          uVar5 = 0x4d;
          goto LAB_00262f8c;
        }
        uVar5 = 0x55;
      }
      goto LAB_00262d2e;
    }
    if (uVar3 < 0x3f) {
      if (uVar3 < 0x3a) {
        if (0x2f < uVar3) {
LAB_00262d76:
          *param_2 = 0x81;
          iVar6 = 0;
          while( true ) {
            if ((*(byte *)(DAT_00262efc + 0x262dc4 + (uint)param_1[iVar6]) & 4) == 0) break;
            iVar6 = iVar6 + 1;
          }
          if (param_1[iVar6] == 0x2e) {
            do {
              iVar6 = iVar6 + 1;
            } while ((*(byte *)(DAT_00262efc + 0x262dc4 + (uint)param_1[iVar6]) & 4) != 0);
            *param_2 = 0x82;
          }
          iVar7 = DAT_00262f0c;
          if (((param_1[iVar6] == 0x45) || (param_1[iVar6] == 0x65)) &&
             ((uVar3 = (uint)param_1[iVar6 + 1],
              (int)((uint)*(byte *)(DAT_00262f00 + 0x262e04 + uVar3) << 0x1d) < 0 ||
              (((uVar3 == 0x2d || (uVar3 == 0x2b)) &&
               ((int)((uint)*(byte *)(DAT_00262f04 + 0x262e1c + (uint)param_1[iVar6 + 2]) << 0x1d) <
                0)))))) {
            iVar6 = iVar6 + 2;
            while ((*(byte *)(DAT_00262f08 + 0x262e2c + (uint)param_1[iVar6]) & 4) != 0) {
              iVar6 = iVar6 + 1;
            }
            *param_2 = 0x82;
            iVar7 = DAT_00262f0c;
          }
          while ((*(byte *)(iVar7 + 0x262e50 + (uint)param_1[iVar6]) & 0x46) != 0) {
            *param_2 = 0x94;
            iVar6 = iVar6 + 1;
          }
          return iVar6;
        }
        if (uVar3 == 0x2e) {
          if (-1 < (int)((uint)*(byte *)(DAT_00262ef8 + 0x262dac + (uint)param_1[1]) << 0x1d)) {
            uVar5 = 0x76;
            goto LAB_00262f8c;
          }
          goto LAB_00262d76;
        }
        if (uVar3 == 0x2f) {
          if (param_1[1] == 0x2a) {
            bVar2 = param_1[2];
            iVar7 = 3;
            if (bVar2 != 0) {
              for (; (bVar2 != 0x2a || (param_1[iVar7] != 0x2f)); iVar7 = iVar7 + 1) {
                bVar2 = param_1[iVar7];
                if (bVar2 == 0) goto LAB_00262cca;
              }
              iVar7 = iVar7 + 1;
              goto LAB_00262cca;
            }
          }
          uVar5 = 0x59;
          goto LAB_00262f8c;
        }
      }
      else {
        if (uVar3 == 0x3b) {
          *param_2 = 1;
          return 1;
        }
        if (uVar3 < 0x3b) goto LAB_00262e70;
        if (uVar3 == 0x3c) {
          bVar2 = param_1[1];
          if (bVar2 == 0x3d) {
            uVar5 = 0x4e;
            goto LAB_00262d2e;
          }
          if (bVar2 != 0x3e) {
            if (bVar2 != 0x3c) {
              uVar5 = 0x4f;
              goto LAB_00262f8c;
            }
            uVar5 = 0x54;
            goto LAB_00262d2e;
          }
          goto LAB_00262d1e;
        }
        if (uVar3 == 0x3d) {
          *param_2 = 0x4c;
          return 2 - (uint)(param_1[1] != 0x3d);
        }
      }
    }
    else {
      if (uVar3 == 0x5b) {
        iVar7 = 1;
        do {
          pbVar1 = param_1 + iVar7;
          if (*pbVar1 == 0) goto LAB_00262eda;
          iVar7 = iVar7 + 1;
        } while (*pbVar1 != 0x5d);
LAB_00262e2e:
        uVar5 = 0x1a;
        goto LAB_00262f86;
      }
      if (uVar3 < 0x5c) {
        if (uVar3 == 0x40) goto LAB_00262e70;
        if (uVar3 < 0x40) {
          *param_2 = 0x85;
          iVar6 = 1;
          while ((*(byte *)(DAT_00262f10 + 0x262e80 + (uint)param_1[iVar6]) & 4) != 0) {
            iVar6 = iVar6 + 1;
          }
          return iVar6;
        }
        if (uVar3 == 0x58) goto LAB_00262ede;
      }
      else if (uVar3 == 0x78) {
LAB_00262ede:
        if (param_1[1] == 0x27) {
          *param_2 = 0x83;
          iVar6 = 2;
          while ((*(byte *)(DAT_00262f20 + 0x262f32 + (uint)param_1[iVar6]) & 8) != 0) {
            iVar6 = iVar6 + 1;
          }
          if ((param_1[iVar6] != 0x27) || (iVar6 << 0x1f < 0)) {
            *param_2 = 0x94;
            for (; (param_1[iVar6] != 0x27 && (param_1[iVar6] != 0)); iVar6 = iVar6 + 1) {
            }
          }
          return iVar6 + (uint)(param_1[iVar6] != 0);
        }
      }
      else if (uVar3 < 0x79) {
        if (uVar3 == 0x60) goto LAB_00262d40;
      }
      else {
        if (uVar3 == 0x7c) {
          if (param_1[1] == 0x7c) {
            uVar5 = 0x5b;
            goto LAB_00262d2e;
          }
          uVar5 = 0x53;
          goto LAB_00262f8c;
        }
        if (uVar3 == 0x7e) {
          uVar5 = 0x5d;
          goto LAB_00262f8c;
        }
      }
    }
  }
  iVar7 = 1;
  if ((*(byte *)(DAT_00262f94 + 0x262f9e + uVar3) & 0x46) == 0) {
    uVar5 = 0x94;
LAB_00262f8c:
    *param_2 = uVar5;
    return 1;
  }
  while ((*(byte *)(DAT_00262f94 + 0x262f9e + (uint)param_1[iVar7]) & 0x46) != 0) {
    iVar7 = iVar7 + 1;
  }
  uVar5 = 0x1a;
  if (iVar7 != 1) {
    uVar5 = FUN_00262a48(param_1,iVar7,DAT_00262f94 + 0x262f5e,0x1a,param_4);
  }
  goto LAB_00262f86;
  while (((*(byte *)(DAT_00262f1c + 0x262ee0 + uVar3) & 1) == 0 && (uVar3 != 0x29))) {
LAB_00262ea2:
    iVar6 = iVar7;
    iVar7 = iVar6 + 1;
    uVar3 = (uint)param_1[iVar7];
    if (uVar3 == 0) goto LAB_00262eda;
  }
  if (uVar3 == 0x29) {
    return iVar6 + 2;
  }
LAB_00262eda:
  uVar5 = 0x94;
LAB_00262f86:
  *param_2 = uVar5;
  return iVar7;
}


