/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012044c GameStateCafe::resetTombstone */

/* GameStateCafe::resetTombstone(int) */

undefined8 __thiscall GameStateCafe::resetTombstone(GameStateCafe *this,int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint local_1c;
  
  checkForTombstones(this);
  iVar5 = *(int *)(this + 0xc);
  uVar1 = (uint)*(byte *)(iVar5 + DAT_001205dc);
  iVar6 = DAT_001205e0 + 0x120462;
  if ((uVar1 != 0) && (uVar1 = 0, *(char *)(iVar5 + 0x9e0) == '\0')) {
    uVar1 = **(uint **)(iVar6 + DAT_001205e4);
  }
  uVar3 = (uint)*(byte *)(iVar5 + DAT_001205e8);
  if ((uVar3 != 0) && (uVar3 = 0, *(char *)(iVar5 + DAT_001205ec) == '\0')) {
    uVar3 = **(uint **)(iVar6 + DAT_001205f0);
  }
  uVar7 = (uint)*(byte *)(iVar5 + DAT_001205f4);
  if ((uVar7 != 0) && (uVar7 = 0, *(char *)(iVar5 + DAT_001205f8) == '\0')) {
    uVar7 = **(uint **)(iVar6 + DAT_001205e4);
  }
  local_1c = (uint)*(byte *)(iVar5 + DAT_001205fc);
  if ((local_1c != 0) && (local_1c = 0, *(char *)(iVar5 + DAT_00120600) == '\0')) {
    local_1c = **(uint **)(iVar6 + DAT_001205f0);
  }
  printf((char *)(DAT_00120604 + 0x1204cc),uVar1 + uVar3);
  printf((char *)(DAT_00120608 + 0x1204d8),uVar7 + local_1c);
  iVar5 = DAT_00120648;
  if (param_1 == DAT_0012060c) {
    iVar4 = *(int *)(this + 0xc);
    uVar2 = 0;
  }
  else if (param_1 == DAT_0012060c || param_1 < DAT_0012060c) {
    if (param_1 == DAT_00120610) {
      iVar4 = *(int *)(this + 0xc);
      uVar2 = 0;
      iVar5 = DAT_00120654;
    }
    else if (param_1 == DAT_00120610 || param_1 < DAT_00120610) {
      if (param_1 != DAT_00120614) {
        if (param_1 != DAT_00120618) goto LAB_001205da;
        *(undefined4 *)(*(int *)(this + 0xc) + DAT_0012063c) = 0;
      }
      uVar2 = 0;
      iVar4 = *(int *)(this + 0xc);
      iVar5 = DAT_00120644;
    }
    else if (param_1 == DAT_0012061c) {
      iVar4 = *(int *)(this + 0xc);
      uVar2 = 0;
      iVar5 = DAT_0012064c;
    }
    else {
      if (param_1 != DAT_00120620) {
        if (param_1 != DAT_00120624) goto LAB_001205da;
        iVar4 = *(int *)(this + 0xc);
        uVar2 = 0;
        goto LAB_001205bc;
      }
      iVar4 = *(int *)(this + 0xc);
      uVar2 = 0;
      iVar5 = DAT_00120650;
    }
  }
  else if (param_1 == DAT_00120628) {
    iVar4 = *(int *)(this + 0xc);
    uVar2 = **(undefined4 **)(iVar6 + DAT_001205f0);
LAB_001205bc:
    iVar5 = 0x9d0;
  }
  else if (param_1 == DAT_00120628 || param_1 < DAT_00120628) {
    if (param_1 == 0x11e) {
      iVar4 = *(int *)(this + 0xc);
      uVar2 = **(undefined4 **)(iVar6 + DAT_001205e4);
      iVar5 = DAT_00120650;
    }
    else if (param_1 == 0x13e) {
      iVar4 = *(int *)(this + 0xc);
      uVar2 = **(undefined4 **)(iVar6 + DAT_001205f0);
      iVar5 = DAT_0012064c;
    }
    else {
      if (param_1 != DAT_0012062c) goto LAB_001205da;
      iVar4 = *(int *)(this + 0xc);
      uVar2 = **(undefined4 **)(iVar6 + DAT_001205e4);
    }
  }
  else if (param_1 == 0x1e4) {
    iVar5 = *(int *)(this + 0xc);
    if (*(char *)(iVar5 + DAT_00120634) != '\0') goto LAB_001205da;
    uVar2 = **(undefined4 **)(iVar6 + DAT_00120638);
    iVar4 = DAT_0012063c;
  }
  else if (param_1 == 0x240) {
    iVar5 = *(int *)(this + 0xc);
    if (*(char *)(iVar5 + DAT_00120640) != '\0') goto LAB_001205da;
    uVar2 = **(undefined4 **)(iVar6 + DAT_00120638);
    iVar4 = DAT_00120644;
  }
  else {
    if (param_1 != 0x1cc) goto LAB_001205da;
    iVar4 = *(int *)(this + 0xc);
    uVar2 = **(undefined4 **)(iVar6 + DAT_00120630);
    iVar5 = DAT_00120654;
  }
  *(undefined4 *)(iVar4 + iVar5) = uVar2;
LAB_001205da:
  return CONCAT44(local_1c,this);
}


