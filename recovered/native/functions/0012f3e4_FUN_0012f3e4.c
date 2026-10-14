/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012f3e4 FUN_0012f3e4 */

void FUN_0012f3e4(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  TutorialSystem *this;
  LotteryDialog *this_00;
  String *this_01;
  uchar uVar13;
  char cVar14;
  undefined4 uVar15;
  int *piVar16;
  NoticeDialog *pNVar17;
  ZombieCafe *pZVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  char *pcVar22;
  int *piVar23;
  GameStateCafe *unaff_r5;
  ConfirmDialog *pCVar24;
  int unaff_r7;
  float extraout_s0;
  float extraout_s0_00;
  float __x;
  float __x_00;
  float extraout_s1;
  undefined1 *in_stack_00000000;
  int in_stack_00000020;
  
  if (((*(int *)(unaff_r5 + 0x54) == 0) || (1 < *(byte *)(*(int *)(unaff_r5 + 0xac) + 0xb8) - 1)) &&
     ((*(int *)(unaff_r5 + 0x4c) == 0 || (1 < *(byte *)(*(int *)(unaff_r5 + 0xb4) + 0xb0) - 1)))) {
    GameStateCafe::deselect(unaff_r5);
    FUN_0012f41e();
    return;
  }
  pZVar18 = *(ZombieCafe **)(unaff_r5 + 0xc);
  iVar3 = ZombieCafe::unhandledTouching(pZVar18);
  if ((iVar3 != 0) ||
     ((unaff_r5[DAT_0012f638] == (GameStateCafe)0x9 && (*(int *)(pZVar18 + 0x4b8) != 0)))) {
    iVar3 = ZombieCafe::touchWasPinch(pZVar18);
    if (iVar3 != 0) {
      uVar15 = *(undefined4 *)(unaff_r5 + 0x1e4);
      __divsf3(*(undefined4 *)(pZVar18 + DAT_0012f63c),*(undefined4 *)(pZVar18 + 0x4c0));
      iVar3 = CapcomApp::getInstance();
      pZVar18 = *(ZombieCafe **)(iVar3 + 4);
      uVar4 = ZombieCafe::getCafeZoomParam(pZVar18,extraout_s0,extraout_s1);
      *(undefined4 *)(unaff_r5 + 0x1e4) = uVar4;
      iVar3 = __aeabi_fcmpeq(uVar15,uVar4);
      if (iVar3 == 0) {
        lVar5 = *(long *)(unaff_r5 + 0x1e0);
        lVar6 = CFPoint::subtract(*(long *)(pZVar18 + 0x4b8),lVar5);
        lVar7 = CFPoint::multiplyf(lVar6,extraout_s0_00);
        lVar6 = CFPoint::subtract(lVar7,lVar6);
        uVar4 = CFPoint::subtract(lVar5,lVar6);
        *(undefined4 *)(unaff_r5 + 0x1e0) = uVar4;
      }
    }
    iVar3 = *(int *)(unaff_r5 + 0xc);
    if ((int)**(short **)(unaff_r7 + DAT_0012f640) < *(int *)(iVar3 + DAT_0012f644)) {
      uVar4 = __floatsisf((*(int *)(iVar3 + 0x4b8) >> 0x10) -
                          (*(int *)(iVar3 + DAT_0012f648) >> 0x10));
      iVar19 = DAT_0012f648;
      *(undefined4 *)(unaff_r5 + 0x1d8) = uVar4;
      uVar4 = __floatsisf((int)*(short *)(iVar3 + 0x4b8) - (int)*(short *)(iVar3 + iVar19));
      *(undefined4 *)(unaff_r5 + 0x1dc) = uVar4;
    }
    else {
      *(undefined4 *)(unaff_r5 + 0x1dc) = 0;
      *(undefined4 *)(unaff_r5 + 0x1d8) = 0;
    }
  }
  lVar5 = *(long *)(unaff_r5 + 0x1e0);
  uVar8 = __fixsfsi(*(undefined4 *)(unaff_r5 + 0x1dc));
  iVar3 = __fixsfsi(*(undefined4 *)(unaff_r5 + 0x1d8));
  uVar8 = CFPoint::add(lVar5,iVar3 << 0x10 | uVar8 & 0xffff);
  *(uint *)(unaff_r5 + 0x1e0) = uVar8;
  iVar19 = *(int *)(*(int *)(unaff_r5 + 0x14) + 0x18);
  iVar3 = *(int *)(*(int *)(unaff_r5 + 0x14) + 0x1c);
  uVar20 = *(undefined4 *)(unaff_r5 + 0x1e4);
  uVar4 = __floatsisf(iVar19 >> 0x10);
  uVar4 = __mulsf3(uVar4,uVar20);
  ceilf(__x);
  uVar15 = __floatsisf((int)(short)iVar19);
  uVar15 = __mulsf3(uVar15,uVar20);
  ceilf(__x_00);
  uVar9 = __floatsisf((int)(short)iVar3);
  __mulsf3(uVar9,uVar20);
  sVar1 = __fixsfsi();
  uVar9 = __floatsisf(iVar3 >> 0x10);
  __mulsf3(uVar9,uVar20);
  uVar10 = __fixsfsi();
  sVar2 = __fixsfsi(uVar15);
  uVar11 = __fixsfsi(uVar4);
  iVar3 = -((int)uVar8 >> 0x10);
  if (iVar3 < (short)uVar10) {
    uVar8 = (uVar10 & 0xffff) * -0x10000 | uVar8 & 0xffff;
LAB_0012f5f8:
    *(uint *)(unaff_r5 + 0x1e0) = uVar8;
  }
  else {
    uVar10 = ((uVar10 & 0xffff) + (uVar11 & 0xffff)) - 1;
    iVar19 = (int)(short)uVar10 - (int)(short)*(ushort *)(*(int *)(unaff_r5 + 0xc) + 0x12);
    if (-iVar19 != (int)uVar8 >> 0x10 && iVar19 <= iVar3) {
      uVar8 = ((uint)*(ushort *)(*(int *)(unaff_r5 + 0xc) + 0x12) - (uVar10 & 0xffff)) * 0x10000 |
              uVar8 & 0xffff;
      goto LAB_0012f5f8;
    }
  }
  uVar8 = *(uint *)(unaff_r5 + 0x1e0);
  iVar3 = -(int)(short)uVar8;
  if (iVar3 < sVar1) {
    *(uint *)(unaff_r5 + 0x1e0) = (uint)(ushort)-sVar1 | uVar8 & 0xffff0000;
  }
  else {
    sVar1 = sVar2 + -1 + sVar1;
    iVar19 = (int)sVar1 - (int)*(short *)(*(int *)(unaff_r5 + 0xc) + 0x10);
    if (-iVar19 != (int)(short)uVar8 && iVar19 <= iVar3) {
      *(uint *)(unaff_r5 + 0x1e0) =
           (uint)(ushort)(*(short *)(*(int *)(unaff_r5 + 0xc) + 0x10) - sVar1) | uVar8 & 0xffff0000;
    }
  }
  uVar9 = *(undefined4 *)(unaff_r5 + 0x1d8);
  puVar21 = *(undefined4 **)(unaff_r7 + DAT_0012f9b0);
  uVar4 = __floatsisf(in_stack_00000020);
  uVar15 = __mulsf3(uVar4,*puVar21);
  iVar3 = __aeabi_fcmplt(uVar15,0x3f800000);
  uVar4 = uVar15;
  if (iVar3 == 0) {
    uVar4 = 0x3f800000;
  }
  uVar4 = __subsf3(0x3f800000,uVar4);
  iVar19 = __mulsf3(uVar9,uVar4);
  *(int *)(unaff_r5 + 0x1d8) = iVar19;
  uVar4 = *(undefined4 *)(unaff_r5 + 0x1dc);
  if (iVar3 == 0) {
    uVar15 = 0x3f800000;
  }
  uVar15 = __subsf3(0x3f800000,uVar15);
  iVar3 = __mulsf3(uVar4,uVar15);
  *(int *)(unaff_r5 + 0x1dc) = iVar3;
  iVar12 = __aeabi_fcmpge(iVar19,0);
  if (iVar12 == 0) {
    iVar19 = iVar19 + -0x80000000;
  }
  uVar4 = **(undefined4 **)(unaff_r7 + DAT_0012f9b4);
  iVar19 = __aeabi_fcmplt(iVar19,uVar4);
  if (iVar19 != 0) {
    iVar19 = __aeabi_fcmpge(iVar3,0);
    if (iVar19 == 0) {
      iVar3 = iVar3 + -0x80000000;
    }
    iVar3 = __aeabi_fcmplt(iVar3,uVar4);
    if (iVar3 != 0) {
      *(undefined4 *)(unaff_r5 + 0x1dc) = 0;
      *(undefined4 *)(unaff_r5 + 0x1d8) = 0;
    }
  }
  GameStateCafe::tickFiredZombies(unaff_r5);
  GameStateCafe::tickStaff(unaff_r5,in_stack_00000020);
  GameStateCafe::tickZombieWorkInterruptions(unaff_r5,in_stack_00000020);
  GameStateCafe::tickCustomers(unaff_r5,in_stack_00000020);
  GameStateCafe::tickLockerZombies(unaff_r5,in_stack_00000020);
  iVar3 = *(int *)(unaff_r5 + 0x54);
  if (iVar3 != 0) {
    iVar19 = *(int *)(unaff_r5 + 0xc);
    if (iVar3 == *(int *)(unaff_r5 + 0x18)) {
      this = *(TutorialSystem **)(iVar19 + DAT_0012f9b8);
      uVar13 = '\x01';
    }
    else if ((iVar3 == *(int *)(unaff_r5 + 0x5c)) && (*(char *)(*(int *)(iVar3 + 0x8c) + 4) == '\0')
            ) {
      uVar13 = '\r';
      this = *(TutorialSystem **)(iVar19 + DAT_0012f9b8);
    }
    else {
      uVar13 = '\x10';
      this = *(TutorialSystem **)(iVar19 + DAT_0012f9b8);
    }
    TutorialSystem::triggerEvent(this,uVar13,true);
  }
  iVar3 = ZombieCafe::IsMusicPlaying();
  if ((iVar3 == 0) &&
     (in_stack_00000020 = *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9bc) - in_stack_00000020,
     *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9bc) = in_stack_00000020, iVar3 = DAT_0012f9c0,
     in_stack_00000020 < 1)) {
    if (unaff_r5[DAT_0012f9c0] == (GameStateCafe)0x0) {
      L_PrintLog((char *)(DAT_0012f9c4 + 0x12f7de),(char *)(DAT_0012f9c8 + 0x12f7e0));
      ZombieCafe::PlayCafeMusic();
      unaff_r5[iVar3] = (GameStateCafe)0x1;
    }
    else {
      ZombieCafe::PlayAndNextCafeMusic(*(ZombieCafe **)(unaff_r5 + 0xc));
      unaff_r5[iVar3] = (GameStateCafe)0x0;
    }
    *(undefined4 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9bc) =
         **(undefined4 **)(unaff_r7 + DAT_0012f9cc);
  }
  uVar8 = (uint)(byte)unaff_r5[DAT_0012f9d0];
  if ((uVar8 - 1 < 3) || (uVar8 == 7)) {
    cVar14 = '\0';
  }
  else {
    cVar14 = '\x01' - (uVar8 == 10);
  }
  *(char *)(*(int *)(unaff_r5 + 0x14) + 0xc9) = cVar14;
  iVar3 = DAT_0012f9d8;
  if (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9d4) != '\0') {
    *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9d4) = 0;
    pcVar22 = (char *)(iVar3 + 0x12f82e);
    L_PrintLog(pcVar22,(char *)(DAT_0012f9dc + 0x12f832));
    if ((((*(char *)(*(int *)(unaff_r5 + 0xd0) + 0x14) == '\0') &&
         (*(char *)(*(int *)(unaff_r5 + 0x7c) + 0x14) == '\0')) &&
        (*(char *)(*(int *)(unaff_r5 + 0x80) + 0x14) == '\0')) &&
       (iVar3 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9b8),'\x01'),
       iVar3 != 0)) {
      L_PrintLog(pcVar22,(char *)(DAT_0012f9e0 + 0x12f876));
      if ((*(int *)(unaff_r5 + 0x130) == 0) ||
         (*(char *)(*(int *)(unaff_r5 + 0x130) + 0x14) == '\0')) {
        if (((*(char *)(*(int *)(unaff_r5 + 0x124) + 0x14) == '\0') &&
            (*(char *)(*(int *)(unaff_r5 + 0xa0) + 0x14) == '\0')) &&
           ((*(char *)(*(int *)(unaff_r5 + 0x9c) + 0x14) == '\0' &&
            (*(char *)(*(int *)(unaff_r5 + 0x94) + 0x14) == '\0')))) {
          this_00 = *(LotteryDialog **)(unaff_r5 + 0xa4);
          if (this_00 == (LotteryDialog *)0x0) {
            L_PrintLog((char *)(DAT_0012fa00 + 0x12f94e),(char *)(DAT_0012fa04 + 0x12f950));
            pCVar24 = *(ConfirmDialog **)(unaff_r5 + 0x80);
            Vector<String>::elementAt((int)&stack0x000001b8);
            Vector<String>::elementAt((int)&stack0x000001c0);
            Vector<String>::elementAt((int)&stack0x000001c8);
            in_stack_00000000 = *(undefined1 **)(unaff_r7 + DAT_0012f9fc);
            ConfirmDialog::show(pCVar24,&stack0x000001b8,&stack0x000001c0,&stack0x000001c8);
            String::~String((String *)&stack0x000001c8);
            String::~String((String *)&stack0x000001c0);
            this_01 = (String *)&stack0x000001b8;
          }
          else {
            if (this_00[0x14] != (LotteryDialog)0x0) {
              LotteryDialog::backClose(this_00);
              L_PrintLog((char *)(DAT_0012fd4c + 0x12fa14),(char *)(DAT_0012fd50 + 0x12fa16));
              goto LAB_0012fa18;
            }
            L_PrintLog((char *)(DAT_0012f9e8 + 0x12f8e6),(char *)(DAT_0012f9ec + 0x12f8e8));
            pCVar24 = *(ConfirmDialog **)(unaff_r5 + 0x80);
            Vector<String>::elementAt((int)&stack0x000001a0);
            Vector<String>::elementAt((int)&stack0x000001a8);
            Vector<String>::elementAt((int)&stack0x000001b0);
            in_stack_00000000 = *(undefined1 **)(unaff_r7 + DAT_0012f9fc);
            ConfirmDialog::show(pCVar24,&stack0x000001a0,&stack0x000001a8,&stack0x000001b0);
            String::~String((String *)&stack0x000001b0);
            String::~String((String *)&stack0x000001a8);
            this_01 = (String *)&stack0x000001a0;
          }
          String::~String(this_01);
        }
      }
      else {
        L_PrintLog(pcVar22,(char *)(DAT_0012f9e4 + 0x12f892));
        (**(code **)(**(int **)(unaff_r5 + 0x130) + 0x20))(*(int **)(unaff_r5 + 0x130),0);
      }
    }
  }
LAB_0012fa18:
  iVar3 = (byte)unaff_r5[DAT_0012fd54] - 1;
  *(byte *)(*(int *)(unaff_r5 + 0x14) + 0xca) =
       ((char)iVar3 - ((char)unaff_r5[DAT_0012fd54] - 2U)) - (iVar3 == 0);
  if (**(char **)(unaff_r7 + DAT_0012fd58) == '\0') {
    FUN_0012ff22();
    return;
  }
  iVar3 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012fd5c),'*');
  if (iVar3 != 0) {
    iVar19 = DAT_0012fd60 + 0x12fa4c;
    iVar3 = *(int *)(DAT_0012fd60 + 0x12fac0);
    if (iVar3 != 0) {
      if (iVar3 != 3) {
        if (iVar3 != 2) {
          FUN_0012ff22();
          return;
        }
        puVar21 = *(undefined4 **)(unaff_r7 + DAT_0012fd68);
        in_stack_00000020 = 0;
        piVar16 = *(int **)(unaff_r7 + DAT_0012fd6c);
        piVar23 = puVar21 + 4;
        for (; in_stack_00000020 < *piVar16; in_stack_00000020 = in_stack_00000020 + 1) {
          in_stack_00000000 = (undefined1 *)puVar21[2];
          sprintf(&stack0x000003fc,(char *)(DAT_0012fd70 + 0x12faac),*puVar21,puVar21[1]);
          if ((puVar21[1] == 2) && (0 < *piVar23)) {
            in_stack_00000000 = (undefined1 *)*piVar16;
            snprintf(&stack0x0000027c,0x80,(char *)(DAT_0012fd74 + 0x12fad0),in_stack_00000020 + 1);
            strcpy(&stack0x000001fc,(char *)piVar23[1]);
            in_stack_00000000 = &stack0x0000027c;
            snprintf((char *)((int)&stack0x00000000 + DAT_0012fd7c),0x400,
                     (char *)(DAT_0012fd78 + 0x12faf0),*piVar23);
            ZombieCafe::addToxinMedia(*(ZombieCafe **)(unaff_r5 + 0xc),*piVar23);
            puVar21[1] = 0;
            puVar21[2] = 0;
            *piVar23 = 0;
            ZombieCafe::save();
            pNVar17 = *(NoticeDialog **)(unaff_r5 + 0xd0);
            String::String((String *)&stack0x000001d8,(char *)((int)&stack0x00000000 + DAT_0012fd7c)
                          );
            Vector<String>::elementAt((int)&stack0x000001d0);
            in_stack_00000000 = (undefined1 *)0x0;
            NoticeDialog::show(pNVar17,&stack0x000001d8,&stack0x000001d0);
            String::~String((String *)&stack0x000001d0);
            String::~String((String *)&stack0x000001d8);
          }
          puVar21 = puVar21 + 6;
          piVar23 = piVar23 + 6;
        }
        if (0 < *piVar16) {
          GameStateCafe::gotEventValue
                    (unaff_r5,(void *)**(undefined4 **)(unaff_r7 + DAT_0012fd64),unaff_r5);
        }
        *piVar16 = 0;
        iVar19 = DAT_0012fd84 + 0x12fb80;
      }
      *(undefined4 *)(iVar19 + 0x74) = 4;
      FUN_0012ff22();
      return;
    }
    if (*(int *)(unaff_r5 + 0x1fc) == 0) {
      GameStateCafe::getEventValue
                (unaff_r5,(void *)**(undefined4 **)(unaff_r7 + DAT_0012fd64),unaff_r5);
      uVar4 = 1;
    }
    else {
      if (*(int *)(unaff_r5 + 0x1fc) != 1) {
        FUN_0012ff22();
        return;
      }
      uVar4 = 4;
    }
    *(undefined4 *)(unaff_r5 + 0x1fc) = uVar4;
    FUN_0012ff22();
    return;
  }
  FUN_0012ff22();
  return;
}


