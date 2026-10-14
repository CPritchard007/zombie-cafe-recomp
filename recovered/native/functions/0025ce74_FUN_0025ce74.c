/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025ce74 FUN_0025ce74 */

bool FUN_0025ce74(char *param_1,byte *param_2,byte *param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  byte *local_20;
  char *local_1c [2];
  
  iVar3 = DAT_0025d0fc;
  uVar7 = (uint)param_3[1];
  uVar8 = (uint)*param_3;
  bVar10 = false;
  bVar1 = param_3[2];
  bVar2 = param_3[3];
  local_20 = param_2;
  local_1c[0] = param_1;
LAB_0025d0ce:
  while( true ) {
    uVar6 = FUN_0025b09c(local_1c[0],local_1c);
    if (uVar6 == 0) {
      return *local_20 == 0;
    }
    if (bVar10) break;
    if (uVar6 == uVar8) goto LAB_0025cec6;
    if (uVar6 != uVar7) break;
    iVar4 = FUN_0025b09c(local_20,&local_20);
    if (iVar4 == 0) {
      return false;
    }
  }
  if (uVar6 == bVar1) {
    uVar6 = FUN_0025b09c(local_20,&local_20);
    if (uVar6 == 0) {
      return false;
    }
    uVar5 = FUN_0025b09c(local_1c[0],local_1c);
    bVar11 = uVar5 == 0x5e;
    if (bVar11) {
      uVar5 = FUN_0025b09c(local_1c[0],local_1c);
    }
    bVar12 = uVar5 == 0x5d;
    if (bVar12) {
      uVar5 = FUN_0025b09c(local_1c[0],local_1c);
    }
    bVar12 = bVar12 && uVar6 == 0x5d;
    uVar9 = 0;
    while ((uVar5 != 0x5d && (uVar5 != 0))) {
      if ((uVar5 == 0x2d) && (((*local_1c[0] != ']' && (uVar9 != 0)) && (*local_1c[0] != '\0')))) {
        uVar5 = FUN_0025b09c(local_1c[0],local_1c);
        if ((uVar5 < uVar6) || (uVar6 < uVar9)) {
          uVar9 = 0;
        }
        else {
          bVar12 = true;
          uVar9 = 0;
        }
      }
      else {
        uVar9 = uVar5;
        if (uVar6 == uVar5) {
          bVar12 = true;
          uVar9 = uVar6;
        }
      }
      uVar5 = FUN_0025b09c(local_1c[0],local_1c);
    }
    if ((bVar12 != bVar11) && (uVar5 != 0)) goto LAB_0025d0ce;
  }
  else {
    if ((!bVar10) && (bVar10 = true, param_4 == uVar6)) goto LAB_0025d0ce;
    uVar5 = FUN_0025b09c(local_20,&local_20);
    if (bVar2 != 0) {
      if ((uVar6 & 0xffffff80) == 0) {
        uVar6 = (uint)*(byte *)(DAT_0025d10c + 0x25d0f6 + uVar6);
      }
      if ((uVar5 & 0xffffff80) == 0) {
        uVar5 = (uint)*(byte *)(iVar3 + 0x25ced8 + uVar5);
      }
    }
    if (uVar6 == uVar5) {
      bVar10 = false;
      goto LAB_0025d0ce;
    }
  }
  return false;
LAB_0025cec6:
  uVar6 = FUN_0025b09c(local_1c[0],local_1c);
  if (uVar6 == uVar8) {
    if (uVar8 != uVar7) goto LAB_0025cec6;
  }
  else if (uVar6 != uVar7) {
    if (uVar6 == 0) {
      return true;
    }
    if (uVar6 == param_4) {
      uVar6 = FUN_0025b09c(local_1c[0],local_1c);
      iVar3 = DAT_0025d108;
      if (uVar6 == 0) {
        return false;
      }
    }
    else {
      iVar3 = DAT_0025d108;
      if (uVar6 == bVar1) {
        while ((*local_20 != 0 &&
               (iVar3 = FUN_0025ce74(local_1c[0] + -1,local_20,param_3,param_4), iVar3 == 0))) {
          bVar1 = *local_20;
          local_20 = local_20 + 1;
          if (0xbf < bVar1) {
            for (; (*local_20 & 0xc0) == 0x80; local_20 = local_20 + 1) {
            }
          }
        }
        return *local_20 != 0;
      }
    }
    while( true ) {
      uVar7 = FUN_0025b09c(local_20,&local_20);
      if (uVar7 == 0) {
        return false;
      }
      if (bVar2 == 0) {
        while ((uVar7 != uVar6 && (uVar7 != 0))) {
          uVar7 = FUN_0025b09c(local_20,&local_20);
        }
      }
      else {
        if ((uVar7 & 0xffffff80) == 0) {
          uVar7 = (uint)*(byte *)(DAT_0025d100 + 0x25cf9a + uVar7);
        }
        if ((uVar6 & 0xffffff80) == 0) {
          uVar6 = (uint)*(byte *)(DAT_0025d104 + 0x25cfac + uVar6);
        }
        while ((uVar7 != uVar6 && (uVar7 != 0))) {
          uVar7 = FUN_0025b09c(local_20,&local_20);
          if ((uVar7 & 0xffffff80) == 0) {
            uVar7 = (uint)*(byte *)(iVar3 + 0x25d000 + uVar7);
          }
        }
      }
      if (uVar7 == 0) break;
      iVar4 = FUN_0025ce74(local_1c[0],local_20,param_3,param_4);
      if (iVar4 != 0) {
        return true;
      }
    }
    return false;
  }
  iVar3 = FUN_0025b09c(local_20,&local_20);
  if (iVar3 == 0) {
    return false;
  }
  goto LAB_0025cec6;
}


