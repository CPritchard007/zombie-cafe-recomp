/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a7cac ToonAnimation::Data::calculateBoundingBox */

/* ToonAnimation::Data::calculateBoundingBox(CImage**, int,
   Vector<ToonAnimation::ReplacementImage>&) */

undefined8 __thiscall
ToonAnimation::Data::calculateBoundingBox(Data *this,CImage **param_1,int param_2,Vector *param_3)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  CImage *pCVar20;
  uint uVar21;
  uint local_9c;
  uint local_98;
  uint local_90;
  uint local_8c;
  int local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  int local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  uVar21 = 0;
  local_50 = 0x3f800000;
  local_44 = 0x3f800000;
  local_4c = 0;
  local_48 = 0;
  local_40 = 0;
  local_3c = 0;
  CCToon::UpdateAnimation(*(ccToon **)this,param_2,(ccMat2x3 *)&local_50);
  local_8c = 0;
  local_90 = 0;
  local_98 = 0;
  local_9c = 0;
  do {
    iVar19 = *(int *)this;
    if (*(uint *)(iVar19 + 8) <= uVar21) {
      return CONCAT44(local_9c << 0x10 | local_98,
                      local_8c - local_98 & 0xffff | (local_90 - local_9c) * 0x10000);
    }
    iVar13 = uVar21 * 0x40;
    iVar14 = *(int *)(*(int *)(iVar19 + 0xc) + iVar13 + 0x3c);
    if (iVar14 != -1) {
      iVar17 = 0;
      for (iVar15 = 0; pCVar20 = param_1[iVar14], iVar15 < *(int *)(param_3 + 4) + 1;
          iVar15 = iVar15 + 1) {
        piVar2 = (int *)(*(int *)(param_3 + 8) + iVar17);
        iVar17 = iVar17 + 0x14;
        pCVar20 = (CImage *)piVar2[1];
        if (*piVar2 == iVar14) break;
      }
      uVar16 = *(undefined4 *)(pCVar20 + 0x2c);
      uVar3 = __floatsisf((int)*(short *)(pCVar20 + 0x20));
      uVar3 = __mulsf3(uVar3,uVar16);
      uVar4 = __floatsisf((int)*(short *)(pCVar20 + 0x2a));
      uVar3 = __addsf3(uVar3,uVar4);
      uVar4 = __floatsisf((int)*(short *)(pCVar20 + 0x26));
      __addsf3(uVar3,uVar4);
      __fixsfsi();
      iVar14 = __floatsisf();
      uVar3 = __floatsisf((int)*(short *)(pCVar20 + 0x22));
      uVar3 = __mulsf3(uVar3,uVar16);
      uVar4 = __floatsisf((int)*(short *)(pCVar20 + 0x24));
      uVar3 = __addsf3(uVar3,uVar4);
      uVar4 = __floatsisf((int)*(short *)(pCVar20 + 0x28));
      __addsf3(uVar3,uVar4);
      __fixsfsi();
      local_24 = __floatsisf();
      local_38 = iVar14 + -0x80000000;
      local_34 = local_24 + -0x80000000;
      iVar15 = *(int *)(iVar19 + 0xc) + iVar13 + 0x18;
      local_30 = iVar14;
      local_2c = local_34;
      local_28 = local_38;
      local_20 = iVar14;
      local_1c = local_24;
      FUN_002a77fa(&local_70,iVar15,&local_38);
      uVar3 = local_6c;
      iVar14 = local_70;
      local_34 = local_6c;
      local_38 = local_70;
      FUN_002a77fa(&local_68,iVar15,&local_30);
      uVar4 = local_64;
      iVar15 = local_68;
      local_2c = local_64;
      local_30 = local_68;
      FUN_002a77fa(&local_60,*(int *)(iVar19 + 0xc) + iVar13 + 0x18,&local_28);
      uVar16 = local_5c;
      iVar17 = local_60;
      local_28 = local_60;
      local_24 = local_5c;
      FUN_002a77fa(&local_58,*(int *)(iVar19 + 0xc) + iVar13 + 0x18,&local_20);
      uVar1 = local_54;
      iVar19 = local_58;
      local_1c = local_54;
      local_20 = local_58;
      uVar5 = __fixsfsi(iVar14);
      uVar6 = __fixsfsi(iVar15);
      uVar7 = __fixsfsi(iVar17);
      uVar8 = __fixsfsi(iVar19);
      uVar10 = uVar6;
      if ((int)uVar5 < (int)uVar6) {
        uVar10 = uVar5;
      }
      if ((int)uVar7 < (int)uVar10) {
        uVar10 = uVar7;
      }
      if ((int)uVar8 < (int)uVar10) {
        uVar10 = uVar8;
      }
      if ((int)(short)local_9c < (int)uVar10) {
        uVar10 = (int)(short)local_9c;
      }
      local_9c = uVar10 & 0xffff;
      uVar9 = __fixsfsi(uVar3);
      uVar10 = __fixsfsi(uVar4);
      uVar11 = __fixsfsi(uVar16);
      uVar12 = __fixsfsi(uVar1);
      uVar18 = uVar10;
      if ((int)uVar9 < (int)uVar10) {
        uVar18 = uVar9;
      }
      if ((int)uVar11 < (int)uVar18) {
        uVar18 = uVar11;
      }
      if ((int)uVar12 < (int)uVar18) {
        uVar18 = uVar12;
      }
      if ((int)(short)local_98 < (int)uVar18) {
        uVar18 = (int)(short)local_98;
      }
      local_98 = uVar18 & 0xffff;
      if ((int)uVar6 < (int)uVar5) {
        uVar6 = uVar5;
      }
      if ((int)uVar6 < (int)uVar7) {
        uVar6 = uVar7;
      }
      if ((int)uVar6 < (int)uVar8) {
        uVar6 = uVar8;
      }
      if ((int)uVar6 < (int)(short)local_90) {
        uVar6 = (int)(short)local_90;
      }
      local_90 = uVar6 & 0xffff;
      if ((int)uVar10 < (int)uVar9) {
        uVar10 = uVar9;
      }
      if ((int)uVar10 < (int)uVar11) {
        uVar10 = uVar11;
      }
      if ((int)uVar10 < (int)uVar12) {
        uVar10 = uVar12;
      }
      if ((int)uVar10 < (int)(short)local_8c) {
        uVar10 = (int)(short)local_8c;
      }
      local_8c = uVar10 & 0xffff;
    }
    uVar21 = uVar21 + 1;
  } while( true );
}


