/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024a82c ZombieCafe::ResetTombstone */

/* ZombieCafe::ResetTombstone(Cafe*, int) */

undefined8 __thiscall ZombieCafe::ResetTombstone(ZombieCafe *this,Cafe *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint local_1c;
  
  CheckForTombstones(this,param_1);
  uVar1 = (uint)(byte)this[DAT_0024a99c];
  iVar5 = DAT_0024a9a0 + 0x24a840;
  if ((uVar1 != 0) && (uVar1 = 0, this[0x9e0] == (ZombieCafe)0x0)) {
    uVar1 = **(uint **)(iVar5 + DAT_0024a9a4);
  }
  uVar3 = (uint)(byte)this[DAT_0024a9a8];
  if ((uVar3 != 0) && (uVar3 = 0, this[DAT_0024a9ac] == (ZombieCafe)0x0)) {
    uVar3 = **(uint **)(iVar5 + DAT_0024a9b0);
  }
  uVar6 = (uint)(byte)this[DAT_0024a9b4];
  if ((uVar6 != 0) && (uVar6 = 0, this[DAT_0024a9b8] == (ZombieCafe)0x0)) {
    uVar6 = **(uint **)(iVar5 + DAT_0024a9a4);
  }
  local_1c = (uint)(byte)this[DAT_0024a9bc];
  if ((local_1c != 0) && (local_1c = 0, this[DAT_0024a9c0] == (ZombieCafe)0x0)) {
    local_1c = **(uint **)(iVar5 + DAT_0024a9b0);
  }
  printf((char *)(DAT_0024a9c4 + 0x24a8aa),uVar1 + uVar3);
  printf((char *)(DAT_0024a9c8 + 0x24a8b6),uVar6 + local_1c);
  iVar4 = DAT_0024aa00;
  if (param_2 == DAT_0024a9cc) {
    uVar2 = 0;
  }
  else if (param_2 == DAT_0024a9cc || param_2 < DAT_0024a9cc) {
    if (param_2 == DAT_0024a9d0) {
      uVar2 = 0;
      iVar4 = DAT_0024aa0c;
    }
    else if (param_2 == DAT_0024a9d0 || param_2 < DAT_0024a9d0) {
      if (param_2 == DAT_0024a9d4) {
        uVar2 = 0;
        iVar4 = DAT_0024aa14;
      }
      else {
        if (param_2 != DAT_0024a9d8) goto LAB_0024a998;
        uVar2 = 0;
        iVar4 = DAT_0024aa10;
      }
    }
    else if (param_2 == DAT_0024a9dc) {
      uVar2 = 0;
      iVar4 = DAT_0024aa04;
    }
    else {
      if (param_2 != DAT_0024a9e0) {
        if (param_2 != DAT_0024a9e4) goto LAB_0024a998;
        uVar2 = 0;
        goto LAB_0024a980;
      }
      uVar2 = 0;
      iVar4 = DAT_0024aa08;
    }
  }
  else if (param_2 == DAT_0024a9e8) {
    uVar2 = **(undefined4 **)(iVar5 + DAT_0024a9b0);
LAB_0024a980:
    iVar4 = 0x9d0;
  }
  else if (DAT_0024a9e8 < param_2) {
    if (param_2 == 0x1e4) {
      if (this[DAT_0024a9f4] != (ZombieCafe)0x0) goto LAB_0024a998;
      uVar2 = **(undefined4 **)(iVar5 + DAT_0024a9f8);
      iVar4 = DAT_0024aa10;
    }
    else if (param_2 == 0x240) {
      if (this[DAT_0024a9fc] != (ZombieCafe)0x0) goto LAB_0024a998;
      uVar2 = **(undefined4 **)(iVar5 + DAT_0024a9f8);
      iVar4 = DAT_0024aa14;
    }
    else {
      if (param_2 != 0x1cc) goto LAB_0024a998;
      uVar2 = **(undefined4 **)(iVar5 + DAT_0024a9f0);
      iVar4 = DAT_0024aa0c;
    }
  }
  else if (param_2 == 0x11e) {
    uVar2 = **(undefined4 **)(iVar5 + DAT_0024a9a4);
    iVar4 = DAT_0024aa08;
  }
  else if (param_2 == 0x13e) {
    uVar2 = **(undefined4 **)(iVar5 + DAT_0024a9b0);
    iVar4 = DAT_0024aa04;
  }
  else {
    if (param_2 != DAT_0024a9ec) goto LAB_0024a998;
    uVar2 = **(undefined4 **)(iVar5 + DAT_0024a9a4);
  }
  *(undefined4 *)(this + iVar4) = uVar2;
LAB_0024a998:
  return CONCAT44(local_1c,this);
}


