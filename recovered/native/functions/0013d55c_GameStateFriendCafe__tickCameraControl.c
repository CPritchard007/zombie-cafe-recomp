/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013d55c GameStateFriendCafe::tickCameraControl */

/* GameStateFriendCafe::tickCameraControl(long) */

void __thiscall GameStateFriendCafe::tickCameraControl(GameStateFriendCafe *this,long param_1)

{
  short sVar1;
  short sVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int extraout_r1;
  int extraout_r1_00;
  int iVar11;
  uint uVar12;
  int iVar13;
  GameStateFriendCafe *pGVar14;
  undefined4 *puVar15;
  int iVar16;
  NoticeDialog *pNVar17;
  int *piVar18;
  uint uVar19;
  undefined4 uVar20;
  float extraout_s0;
  float __x;
  float __x_00;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar16 = DAT_0013d8c4 + 0x13d570;
  if (this[0xb0] == (GameStateFriendCafe)0x0) {
    iVar11 = *(int *)(this + 0xc);
    if ((*(char *)(iVar11 + DAT_0013d8d4) == '\0') && (*(int *)(iVar11 + 0x4b8) != 0)) {
      uVar5 = *(undefined4 *)(iVar11 + DAT_0013d8d8);
      iVar13 = __aeabi_fcmpgt(uVar5,0);
      if (iVar13 != 0) {
        uVar6 = *(undefined4 *)(iVar11 + 0x4c0);
        iVar13 = __aeabi_fcmpgt(uVar6,0);
        if (iVar13 != 0) {
          uVar7 = *(undefined4 *)(this + 0xac);
          uVar5 = __divsf3(uVar5,uVar6);
          piVar18 = *(int **)(iVar16 + DAT_0013d8dc);
          if (DAT_0013d8e0 < *(short *)(iVar11 + 0x12)) {
            uVar20 = __mulsf3(uVar7,uVar5);
            iVar13 = *piVar18;
            iVar11 = SmDev();
            uVar6 = *(undefined4 *)(iVar11 * 4 + iVar13);
            iVar11 = __aeabi_fcmplt(uVar20,DAT_0013d8e4);
            uVar5 = DAT_0013d8e4;
          }
          else {
            uVar20 = __mulsf3(uVar7,uVar5);
            iVar13 = **(int **)(iVar16 + DAT_0013d8e8);
            iVar11 = SmDev();
            iVar10 = *piVar18;
            uVar5 = *(undefined4 *)(iVar11 * 4 + iVar13);
            iVar11 = SmDev();
            uVar6 = *(undefined4 *)(iVar11 * 4 + iVar10);
            iVar11 = __aeabi_fcmpgt(uVar5,uVar20);
          }
          if ((iVar11 == 0) && (iVar11 = __aeabi_fcmpgt(uVar20,uVar6), uVar5 = uVar20, iVar11 != 0))
          {
            uVar5 = uVar6;
          }
          *(undefined4 *)(this + 0xac) = uVar5;
          iVar11 = __aeabi_fcmpeq(uVar7,*(undefined4 *)(this + 0xac));
          if (iVar11 == 0) {
            uVar19 = *(uint *)(this + 0xa8);
            uVar4 = uVar19 >> 0x10;
            uVar19 = uVar19 & 0xffff;
            uVar9 = (*(uint *)(*(int *)(this + 0xc) + 0x4b8) >> 0x10) - uVar4;
            uVar12 = uVar9 * 0x10000 | *(uint *)(*(int *)(this + 0xc) + 0x4b8) - uVar19 & 0xffff;
            uVar8 = CFPoint::multiplyf(uVar12,extraout_s0);
            *(uint *)(this + 0xa8) =
                 uVar19 - (uVar8 - uVar12 & 0xffff) & 0xffff |
                 (uVar4 - ((uVar8 >> 0x10) - (uVar9 & 0xffff) & 0xffff)) * 0x10000;
          }
        }
      }
      iVar11 = DAT_0013d8f4;
      iVar13 = *(int *)(this + 0xc);
      if ((int)**(short **)(iVar16 + DAT_0013d8ec) < *(int *)(iVar13 + DAT_0013d8f0)) {
        uVar5 = __floatsisf((*(int *)(iVar13 + 0x4b8) >> 0x10) -
                            (*(int *)(iVar13 + DAT_0013d8f4) >> 0x10));
        *(undefined4 *)(this + 0xa0) = uVar5;
        uVar5 = __floatsisf((int)*(short *)(iVar13 + 0x4b8) - (int)*(short *)(iVar13 + iVar11));
        *(undefined4 *)(this + 0xa4) = uVar5;
      }
      else {
        *(undefined4 *)(this + 0xa4) = 0;
        *(undefined4 *)(this + 0xa0) = 0;
      }
    }
  }
  else {
    pGVar14 = this + 0xb4;
    iVar11 = *(int *)pGVar14;
    *(int *)pGVar14 = iVar11 + -1;
    if (iVar11 + -1 < 1) {
      this[0xb0] = (GameStateFriendCafe)0x0;
      *(undefined4 *)(this + 0xa4) = 0;
      *(undefined4 *)(this + 0xa0) = 0;
      if (*(int *)(*(int *)(this + 0xc) + DAT_0013d8c8) < 1) {
        pNVar17 = *(NoticeDialog **)(this + 0x1b0);
        Vector<String>::elementAt((int)aSStack_28);
        Vector<String>::elementAt((int)aSStack_20);
        NoticeDialog::show(pNVar17,aSStack_28,aSStack_20,0,this);
        String::~String(aSStack_20);
        String::~String(aSStack_28);
      }
    }
    else {
      uVar5 = arc4random();
      __aeabi_uidivmod(uVar5,0x14);
      uVar5 = __floatsisf(extraout_r1 + -10);
      *(undefined4 *)(this + 0xa0) = uVar5;
      uVar5 = arc4random();
      __aeabi_uidivmod(uVar5,0x14);
      uVar5 = __floatsisf(extraout_r1_00 + -10);
      *(undefined4 *)(this + 0xa4) = uVar5;
      *(int *)pGVar14 = *(int *)pGVar14 + -1;
    }
  }
  pGVar14 = this + 0xa8;
  lVar3 = *(long *)pGVar14;
  uVar4 = __fixsfsi(*(undefined4 *)(this + 0xa4));
  iVar11 = __fixsfsi(*(undefined4 *)(this + 0xa0));
  uVar4 = CFPoint::add(lVar3,iVar11 << 0x10 | uVar4 & 0xffff);
  *(uint *)pGVar14 = uVar4;
  iVar11 = *(int *)(*(int *)(this + 0x34) + 0x18);
  iVar13 = *(int *)(*(int *)(this + 0x34) + 0x1c);
  uVar20 = *(undefined4 *)(this + 0xac);
  uVar5 = __floatsisf(iVar11 >> 0x10);
  uVar5 = __mulsf3(uVar5,uVar20);
  ceilf(__x);
  uVar6 = __floatsisf((int)(short)iVar11);
  uVar6 = __mulsf3(uVar6,uVar20);
  ceilf(__x_00);
  uVar7 = __floatsisf((int)(short)iVar13);
  __mulsf3(uVar7,uVar20);
  sVar1 = __fixsfsi();
  uVar7 = __floatsisf(iVar13 >> 0x10);
  __mulsf3(uVar7,uVar20);
  uVar8 = __fixsfsi();
  sVar2 = __fixsfsi(uVar6);
  uVar9 = __fixsfsi(uVar5);
  iVar11 = -((int)uVar4 >> 0x10);
  if (iVar11 < (short)uVar8) {
    *(uint *)pGVar14 = uVar4 & 0xffff | (uVar8 & 0xffff) * -0x10000;
  }
  else {
    uVar8 = ((uVar8 & 0xffff) + (uVar9 & 0xffff)) - 1;
    iVar13 = (int)(short)uVar8 - (int)(short)*(ushort *)(*(int *)(this + 0xc) + 0x12);
    if (-iVar13 != (int)uVar4 >> 0x10 && iVar13 <= iVar11) {
      *(uint *)pGVar14 =
           uVar4 & 0xffff |
           ((uint)*(ushort *)(*(int *)(this + 0xc) + 0x12) - (uVar8 & 0xffff)) * 0x10000;
    }
  }
  pGVar14 = this + 0xa8;
  uVar4 = *(uint *)pGVar14;
  if (-(int)(short)uVar4 < (int)sVar1) {
    *(uint *)pGVar14 = (uint)(ushort)-sVar1 | uVar4 & 0xffff0000;
  }
  else {
    sVar1 = sVar2 + -1 + sVar1;
    if ((int)sVar1 - (int)*(short *)(*(int *)(this + 0xc) + 0x10) < -(int)(short)uVar4) {
      *(uint *)pGVar14 =
           (uint)(ushort)(*(short *)(*(int *)(this + 0xc) + 0x10) - sVar1) | uVar4 & 0xffff0000;
    }
  }
  uVar7 = *(undefined4 *)(this + 0xa0);
  puVar15 = *(undefined4 **)(iVar16 + DAT_0013da04);
  uVar5 = __floatsisf(param_1);
  uVar6 = __mulsf3(uVar5,*puVar15);
  iVar11 = __aeabi_fcmplt(uVar6,0x3f800000);
  uVar5 = uVar6;
  if (iVar11 == 0) {
    uVar5 = 0x3f800000;
  }
  uVar5 = __subsf3(0x3f800000,uVar5);
  iVar13 = __mulsf3(uVar7,uVar5);
  *(int *)(this + 0xa0) = iVar13;
  uVar5 = *(undefined4 *)(this + 0xa4);
  if (iVar11 == 0) {
    uVar6 = 0x3f800000;
  }
  uVar6 = __subsf3(0x3f800000,uVar6);
  iVar11 = __mulsf3(uVar5,uVar6);
  *(int *)(this + 0xa4) = iVar11;
  iVar10 = __aeabi_fcmpge(iVar13,0);
  if (iVar10 == 0) {
    iVar13 = iVar13 + -0x80000000;
  }
  uVar5 = **(undefined4 **)(iVar16 + DAT_0013da08);
  iVar16 = __aeabi_fcmplt(iVar13,uVar5);
  if (iVar16 != 0) {
    iVar16 = __aeabi_fcmpge(iVar11,0);
    if (iVar16 == 0) {
      iVar11 = iVar11 + -0x80000000;
    }
    iVar16 = __aeabi_fcmplt(iVar11,uVar5);
    if (iVar16 != 0) {
      *(undefined4 *)(this + 0xa4) = 0;
      *(undefined4 *)(this + 0xa0) = 0;
    }
  }
  return;
}


