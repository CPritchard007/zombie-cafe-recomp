/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012f316 FUN_0012f316 */

void FUN_0012f316(void)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  int iVar4;
  CharacterInstance *this;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  TutorialSystem *this_00;
  LotteryDialog *this_01;
  String *this_02;
  uchar uVar14;
  char cVar15;
  undefined4 uVar16;
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
  float fVar25;
  float extraout_s0;
  float extraout_s0_00;
  float __x;
  float __x_00;
  float extraout_s1;
  undefined1 *in_stack_00000000;
  int in_stack_0000001c;
  int in_stack_00000020;
  
  piVar3 = *(int **)(unaff_r5 + 0x54);
  if (piVar3 == (int *)0x0) {
    FUN_0012f41e();
    return;
  }
  if ((in_stack_0000001c != 0) &&
     ((piVar3 == *(int **)(unaff_r5 + 0x18) || (iVar4 = (**(code **)(*piVar3 + 0x20))(), iVar4 == 2)
      ))) {
    this = *(CharacterInstance **)(unaff_r5 + 0x54);
    if (this == *(CharacterInstance **)(unaff_r5 + 0x18)) {
      iVar4 = *(int *)(unaff_r5 + 0xc);
      if (*(char *)(**(int **)(this + 0x8c) + DAT_0012f630) == '\0') {
        fVar25 = (float)CapcomMath::random(3);
      }
      else {
        fVar25 = (float)CapcomMath::random(3);
      }
      ZombieCafe::playEffect(iVar4,fVar25);
    }
    else {
      CharacterInstance::groan(this);
    }
    TutorialSystem::triggerEvent
              (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012f634),'\x1c',false);
    FUN_0012f41e();
    return;
  }
  pZVar18 = *(ZombieCafe **)(unaff_r5 + 0xc);
  iVar4 = ZombieCafe::unhandledTouching(pZVar18);
  if ((iVar4 != 0) ||
     ((unaff_r5[DAT_0012f638] == (GameStateCafe)0x9 && (*(int *)(pZVar18 + 0x4b8) != 0)))) {
    iVar4 = ZombieCafe::touchWasPinch(pZVar18);
    if (iVar4 != 0) {
      uVar16 = *(undefined4 *)(unaff_r5 + 0x1e4);
      __divsf3(*(undefined4 *)(pZVar18 + DAT_0012f63c),*(undefined4 *)(pZVar18 + 0x4c0));
      iVar4 = CapcomApp::getInstance();
      pZVar18 = *(ZombieCafe **)(iVar4 + 4);
      uVar5 = ZombieCafe::getCafeZoomParam(pZVar18,extraout_s0,extraout_s1);
      *(undefined4 *)(unaff_r5 + 0x1e4) = uVar5;
      iVar4 = __aeabi_fcmpeq(uVar16,uVar5);
      if (iVar4 == 0) {
        lVar6 = *(long *)(unaff_r5 + 0x1e0);
        lVar7 = CFPoint::subtract(*(long *)(pZVar18 + 0x4b8),lVar6);
        lVar8 = CFPoint::multiplyf(lVar7,extraout_s0_00);
        lVar7 = CFPoint::subtract(lVar8,lVar7);
        uVar5 = CFPoint::subtract(lVar6,lVar7);
        *(undefined4 *)(unaff_r5 + 0x1e0) = uVar5;
      }
    }
    iVar4 = *(int *)(unaff_r5 + 0xc);
    if ((int)**(short **)(unaff_r7 + DAT_0012f640) < *(int *)(iVar4 + DAT_0012f644)) {
      uVar5 = __floatsisf((*(int *)(iVar4 + 0x4b8) >> 0x10) -
                          (*(int *)(iVar4 + DAT_0012f648) >> 0x10));
      iVar19 = DAT_0012f648;
      *(undefined4 *)(unaff_r5 + 0x1d8) = uVar5;
      uVar5 = __floatsisf((int)*(short *)(iVar4 + 0x4b8) - (int)*(short *)(iVar4 + iVar19));
      *(undefined4 *)(unaff_r5 + 0x1dc) = uVar5;
    }
    else {
      *(undefined4 *)(unaff_r5 + 0x1dc) = 0;
      *(undefined4 *)(unaff_r5 + 0x1d8) = 0;
    }
  }
  lVar6 = *(long *)(unaff_r5 + 0x1e0);
  uVar9 = __fixsfsi(*(undefined4 *)(unaff_r5 + 0x1dc));
  iVar4 = __fixsfsi(*(undefined4 *)(unaff_r5 + 0x1d8));
  uVar9 = CFPoint::add(lVar6,iVar4 << 0x10 | uVar9 & 0xffff);
  *(uint *)(unaff_r5 + 0x1e0) = uVar9;
  iVar19 = *(int *)(*(int *)(unaff_r5 + 0x14) + 0x18);
  iVar4 = *(int *)(*(int *)(unaff_r5 + 0x14) + 0x1c);
  uVar20 = *(undefined4 *)(unaff_r5 + 0x1e4);
  uVar5 = __floatsisf(iVar19 >> 0x10);
  uVar5 = __mulsf3(uVar5,uVar20);
  ceilf(__x);
  uVar16 = __floatsisf((int)(short)iVar19);
  uVar16 = __mulsf3(uVar16,uVar20);
  ceilf(__x_00);
  uVar10 = __floatsisf((int)(short)iVar4);
  __mulsf3(uVar10,uVar20);
  sVar1 = __fixsfsi();
  uVar10 = __floatsisf(iVar4 >> 0x10);
  __mulsf3(uVar10,uVar20);
  uVar11 = __fixsfsi();
  sVar2 = __fixsfsi(uVar16);
  uVar12 = __fixsfsi(uVar5);
  iVar4 = -((int)uVar9 >> 0x10);
  if (iVar4 < (short)uVar11) {
    uVar9 = (uVar11 & 0xffff) * -0x10000 | uVar9 & 0xffff;
LAB_0012f5f8:
    *(uint *)(unaff_r5 + 0x1e0) = uVar9;
  }
  else {
    uVar11 = ((uVar11 & 0xffff) + (uVar12 & 0xffff)) - 1;
    iVar19 = (int)(short)uVar11 - (int)(short)*(ushort *)(*(int *)(unaff_r5 + 0xc) + 0x12);
    if (-iVar19 != (int)uVar9 >> 0x10 && iVar19 <= iVar4) {
      uVar9 = ((uint)*(ushort *)(*(int *)(unaff_r5 + 0xc) + 0x12) - (uVar11 & 0xffff)) * 0x10000 |
              uVar9 & 0xffff;
      goto LAB_0012f5f8;
    }
  }
  uVar9 = *(uint *)(unaff_r5 + 0x1e0);
  iVar4 = -(int)(short)uVar9;
  if (iVar4 < sVar1) {
    *(uint *)(unaff_r5 + 0x1e0) = (uint)(ushort)-sVar1 | uVar9 & 0xffff0000;
  }
  else {
    sVar1 = sVar2 + -1 + sVar1;
    iVar19 = (int)sVar1 - (int)*(short *)(*(int *)(unaff_r5 + 0xc) + 0x10);
    if (-iVar19 != (int)(short)uVar9 && iVar19 <= iVar4) {
      *(uint *)(unaff_r5 + 0x1e0) =
           (uint)(ushort)(*(short *)(*(int *)(unaff_r5 + 0xc) + 0x10) - sVar1) | uVar9 & 0xffff0000;
    }
  }
  uVar10 = *(undefined4 *)(unaff_r5 + 0x1d8);
  puVar21 = *(undefined4 **)(unaff_r7 + DAT_0012f9b0);
  uVar5 = __floatsisf(in_stack_00000020);
  uVar16 = __mulsf3(uVar5,*puVar21);
  iVar4 = __aeabi_fcmplt(uVar16,0x3f800000);
  uVar5 = uVar16;
  if (iVar4 == 0) {
    uVar5 = 0x3f800000;
  }
  uVar5 = __subsf3(0x3f800000,uVar5);
  iVar19 = __mulsf3(uVar10,uVar5);
  *(int *)(unaff_r5 + 0x1d8) = iVar19;
  uVar5 = *(undefined4 *)(unaff_r5 + 0x1dc);
  if (iVar4 == 0) {
    uVar16 = 0x3f800000;
  }
  uVar16 = __subsf3(0x3f800000,uVar16);
  iVar4 = __mulsf3(uVar5,uVar16);
  *(int *)(unaff_r5 + 0x1dc) = iVar4;
  iVar13 = __aeabi_fcmpge(iVar19,0);
  if (iVar13 == 0) {
    iVar19 = iVar19 + -0x80000000;
  }
  uVar5 = **(undefined4 **)(unaff_r7 + DAT_0012f9b4);
  iVar19 = __aeabi_fcmplt(iVar19,uVar5);
  if (iVar19 != 0) {
    iVar19 = __aeabi_fcmpge(iVar4,0);
    if (iVar19 == 0) {
      iVar4 = iVar4 + -0x80000000;
    }
    iVar4 = __aeabi_fcmplt(iVar4,uVar5);
    if (iVar4 != 0) {
      *(undefined4 *)(unaff_r5 + 0x1dc) = 0;
      *(undefined4 *)(unaff_r5 + 0x1d8) = 0;
    }
  }
  GameStateCafe::tickFiredZombies(unaff_r5);
  GameStateCafe::tickStaff(unaff_r5,in_stack_00000020);
  GameStateCafe::tickZombieWorkInterruptions(unaff_r5,in_stack_00000020);
  GameStateCafe::tickCustomers(unaff_r5,in_stack_00000020);
  GameStateCafe::tickLockerZombies(unaff_r5,in_stack_00000020);
  iVar4 = *(int *)(unaff_r5 + 0x54);
  if (iVar4 != 0) {
    iVar19 = *(int *)(unaff_r5 + 0xc);
    if (iVar4 == *(int *)(unaff_r5 + 0x18)) {
      this_00 = *(TutorialSystem **)(iVar19 + DAT_0012f9b8);
      uVar14 = '\x01';
    }
    else if ((iVar4 == *(int *)(unaff_r5 + 0x5c)) && (*(char *)(*(int *)(iVar4 + 0x8c) + 4) == '\0')
            ) {
      uVar14 = '\r';
      this_00 = *(TutorialSystem **)(iVar19 + DAT_0012f9b8);
    }
    else {
      uVar14 = '\x10';
      this_00 = *(TutorialSystem **)(iVar19 + DAT_0012f9b8);
    }
    TutorialSystem::triggerEvent(this_00,uVar14,true);
  }
  iVar4 = ZombieCafe::IsMusicPlaying();
  if ((iVar4 == 0) &&
     (in_stack_00000020 = *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9bc) - in_stack_00000020,
     *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9bc) = in_stack_00000020, iVar4 = DAT_0012f9c0,
     in_stack_00000020 < 1)) {
    if (unaff_r5[DAT_0012f9c0] == (GameStateCafe)0x0) {
      L_PrintLog((char *)(DAT_0012f9c4 + 0x12f7de),(char *)(DAT_0012f9c8 + 0x12f7e0));
      ZombieCafe::PlayCafeMusic();
      unaff_r5[iVar4] = (GameStateCafe)0x1;
    }
    else {
      ZombieCafe::PlayAndNextCafeMusic(*(ZombieCafe **)(unaff_r5 + 0xc));
      unaff_r5[iVar4] = (GameStateCafe)0x0;
    }
    *(undefined4 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9bc) =
         **(undefined4 **)(unaff_r7 + DAT_0012f9cc);
  }
  uVar9 = (uint)(byte)unaff_r5[DAT_0012f9d0];
  if ((uVar9 - 1 < 3) || (uVar9 == 7)) {
    cVar15 = '\0';
  }
  else {
    cVar15 = '\x01' - (uVar9 == 10);
  }
  *(char *)(*(int *)(unaff_r5 + 0x14) + 0xc9) = cVar15;
  iVar4 = DAT_0012f9d8;
  if (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9d4) != '\0') {
    *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9d4) = 0;
    pcVar22 = (char *)(iVar4 + 0x12f82e);
    L_PrintLog(pcVar22,(char *)(DAT_0012f9dc + 0x12f832));
    if ((((*(char *)(*(int *)(unaff_r5 + 0xd0) + 0x14) == '\0') &&
         (*(char *)(*(int *)(unaff_r5 + 0x7c) + 0x14) == '\0')) &&
        (*(char *)(*(int *)(unaff_r5 + 0x80) + 0x14) == '\0')) &&
       (iVar4 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012f9b8),'\x01'),
       iVar4 != 0)) {
      L_PrintLog(pcVar22,(char *)(DAT_0012f9e0 + 0x12f876));
      if ((*(int *)(unaff_r5 + 0x130) == 0) ||
         (*(char *)(*(int *)(unaff_r5 + 0x130) + 0x14) == '\0')) {
        if (((*(char *)(*(int *)(unaff_r5 + 0x124) + 0x14) == '\0') &&
            (*(char *)(*(int *)(unaff_r5 + 0xa0) + 0x14) == '\0')) &&
           ((*(char *)(*(int *)(unaff_r5 + 0x9c) + 0x14) == '\0' &&
            (*(char *)(*(int *)(unaff_r5 + 0x94) + 0x14) == '\0')))) {
          this_01 = *(LotteryDialog **)(unaff_r5 + 0xa4);
          if (this_01 == (LotteryDialog *)0x0) {
            L_PrintLog((char *)(DAT_0012fa00 + 0x12f94e),(char *)(DAT_0012fa04 + 0x12f950));
            pCVar24 = *(ConfirmDialog **)(unaff_r5 + 0x80);
            Vector<String>::elementAt((int)&stack0x000001b8);
            Vector<String>::elementAt((int)&stack0x000001c0);
            Vector<String>::elementAt((int)&stack0x000001c8);
            in_stack_00000000 = *(undefined1 **)(unaff_r7 + DAT_0012f9fc);
            ConfirmDialog::show(pCVar24,&stack0x000001b8,&stack0x000001c0,&stack0x000001c8);
            String::~String((String *)&stack0x000001c8);
            String::~String((String *)&stack0x000001c0);
            this_02 = (String *)&stack0x000001b8;
          }
          else {
            if (this_01[0x14] != (LotteryDialog)0x0) {
              LotteryDialog::backClose(this_01);
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
            this_02 = (String *)&stack0x000001a0;
          }
          String::~String(this_02);
        }
      }
      else {
        L_PrintLog(pcVar22,(char *)(DAT_0012f9e4 + 0x12f892));
        (**(code **)(**(int **)(unaff_r5 + 0x130) + 0x20))(*(int **)(unaff_r5 + 0x130),0);
      }
    }
  }
LAB_0012fa18:
  iVar4 = (byte)unaff_r5[DAT_0012fd54] - 1;
  *(byte *)(*(int *)(unaff_r5 + 0x14) + 0xca) =
       ((char)iVar4 - ((char)unaff_r5[DAT_0012fd54] - 2U)) - (iVar4 == 0);
  if (**(char **)(unaff_r7 + DAT_0012fd58) == '\0') {
    FUN_0012ff22();
    return;
  }
  iVar4 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012fd5c),'*');
  if (iVar4 != 0) {
    iVar19 = DAT_0012fd60 + 0x12fa4c;
    iVar4 = *(int *)(DAT_0012fd60 + 0x12fac0);
    if (iVar4 != 0) {
      if (iVar4 != 3) {
        if (iVar4 != 2) {
          FUN_0012ff22();
          return;
        }
        puVar21 = *(undefined4 **)(unaff_r7 + DAT_0012fd68);
        in_stack_00000020 = 0;
        piVar3 = *(int **)(unaff_r7 + DAT_0012fd6c);
        piVar23 = puVar21 + 4;
        for (; in_stack_00000020 < *piVar3; in_stack_00000020 = in_stack_00000020 + 1) {
          in_stack_00000000 = (undefined1 *)puVar21[2];
          sprintf(&stack0x000003fc,(char *)(DAT_0012fd70 + 0x12faac),*puVar21,puVar21[1]);
          if ((puVar21[1] == 2) && (0 < *piVar23)) {
            in_stack_00000000 = (undefined1 *)*piVar3;
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
        if (0 < *piVar3) {
          GameStateCafe::gotEventValue
                    (unaff_r5,(void *)**(undefined4 **)(unaff_r7 + DAT_0012fd64),unaff_r5);
        }
        *piVar3 = 0;
        iVar19 = DAT_0012fd84 + 0x12fb80;
      }
      *(undefined4 *)(iVar19 + 0x74) = 4;
      FUN_0012ff22();
      return;
    }
    if (*(int *)(unaff_r5 + 0x1fc) == 0) {
      GameStateCafe::getEventValue
                (unaff_r5,(void *)**(undefined4 **)(unaff_r7 + DAT_0012fd64),unaff_r5);
      uVar5 = 1;
    }
    else {
      if (*(int *)(unaff_r5 + 0x1fc) != 1) {
        FUN_0012ff22();
        return;
      }
      uVar5 = 4;
    }
    *(undefined4 *)(unaff_r5 + 0x1fc) = uVar5;
    FUN_0012ff22();
    return;
  }
  FUN_0012ff22();
  return;
}


