/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001683c0 FUN_001683c0 */

/* WARNING: Removing unreachable block (ram,0x001690e6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001683c0(void)

{
  GameStateMap GVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulong uVar8;
  CapcomGame *pCVar9;
  GameStateCafe *pGVar10;
  GameStateLoading *pGVar11;
  char *pcVar12;
  GameStateAmpouleRaidMenu *this;
  GameStateEventRaid3Menu *this_00;
  GameStateEventRaid2Menu *this_01;
  GameStateEventRaidMenu *this_02;
  GameStateWeekRaidMenu *this_03;
  GameStateSurvivalMenu *this_04;
  GameStateRaid *this_05;
  String *pSVar13;
  int iVar14;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  _func_void_void_ptr_char_ptr_uchar_ptr_uint *p_Var15;
  _func_void_void_ptr_ccServerFailureCode *p_Var16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined1 *puVar20;
  code *pcVar21;
  ConfirmDialog *pCVar22;
  int unaff_r4;
  int iVar23;
  undefined4 *puVar24;
  int iVar25;
  void *pvVar26;
  NoticeDialog *pNVar27;
  GameStateMap *unaff_r5;
  int unaff_r6;
  ZombieCafe *pZVar28;
  long lVar29;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  float extraout_s0_08;
  float extraout_s0_09;
  float extraout_s0_10;
  float extraout_s0_11;
  undefined4 extraout_s0_12;
  float extraout_s0_13;
  float extraout_s0_14;
  float fVar30;
  float extraout_s0_15;
  undefined8 uVar31;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  undefined4 extraout_s1_04;
  undefined4 extraout_s1_05;
  undefined4 extraout_s1_06;
  undefined4 extraout_s1_07;
  undefined4 extraout_s1_08;
  undefined4 extraout_s1_09;
  GameStateMap *in_stack_00000000;
  GameStateMap *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000014;
  int in_stack_0000011c;
  int in_stack_00000170;
  int in_stack_000001c4;
  ScreenElement *in_stack_0000026c;
  int *in_stack_00000270;
  int *in_stack_00000274;
  int *in_stack_00000278;
  int *in_stack_0000027c;
  int *in_stack_00000280;
  int *in_stack_00000284;
  int *in_stack_0000028c;
  uint in_stack_00000294;
  undefined4 in_stack_000002a4;
  byte in_stack_000002a8;
  int in_stack_000002b0;
  char in_stack_000002bc;
  
  iVar2 = CFPoint::subtract(*(long *)(*(int *)(unaff_r5 + 0xc) + 0x14),
                            CONCAT22(*(undefined2 *)(*(int *)(unaff_r5 + 0x440) + 4),
                                     *(undefined2 *)(*(int *)(unaff_r5 + 0x440) + 8)));
  uVar3 = __floatsisf(iVar2 >> 0x10);
  uVar3 = __divsf3(uVar3,DAT_00168620);
  *(undefined4 *)(unaff_r5 + 0xa4) = uVar3;
  uVar3 = __floatsisf((int)(short)iVar2);
  uVar3 = __divsf3(uVar3,DAT_00168620);
  *(undefined4 *)(unaff_r5 + 0xa8) = uVar3;
  pZVar28 = *(ZombieCafe **)(unaff_r5 + 0xc);
  iVar2 = ZombieCafe::unhandledPressOrLongEvent(pZVar28);
  if ((iVar2 == 0) ||
     (iVar2 = TutorialArrow::targetContains
                        (*(TutorialArrow **)(unaff_r5 + unaff_r4),unaff_r5,
                         *(long *)(pZVar28 + DAT_00168624)), iVar2 == 0)) {
    *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_00168628) = 1;
  }
  iVar2 = *(int *)(unaff_r5 + 0xd4) + 2;
  if (*(int *)(unaff_r5 + 0x22c) == 0) {
    iVar2 = *(int *)(unaff_r5 + 0xd4) + 1;
  }
  iVar17 = *(int *)(unaff_r5 + 200);
  iVar2 = __divsi3(((((((iVar2 - (uint)(*(int *)(unaff_r5 + 0x184) == 0)) -
                       (uint)(*(int *)(unaff_r5 + 0x1d8) == 0)) -
                      (uint)(*(int *)(unaff_r5 + 0x280) == 0)) -
                     (uint)(*(int *)(unaff_r5 + 0x2d4) == 0)) -
                    (uint)(*(int *)(unaff_r5 + 0x328) == 0)) -
                   (uint)(*(int *)(unaff_r5 + 0x37c) == 0)) + 5,3);
  iVar4 = __divsi3(iVar17 + 1,3);
  iVar23 = *(int *)(unaff_r5 + 0x90);
  iVar4 = iVar4 + iVar2 + 3;
  iVar14 = ((iVar2 + 2) - iVar4) * iVar23;
  *(int *)(unaff_r5 + 0x88) = iVar14;
  iVar2 = __divsi3(iVar17 + 1,0xfffffffd);
  iVar2 = (iVar4 + iVar2 + -2) * iVar23;
  *(int *)(unaff_r5 + 0x8c) = iVar2;
  iVar4 = *(int *)(unaff_r5 + 0xc);
  uVar3 = __floatsisf((iVar23 / 2 - (int)*(short *)(iVar4 + 0x16)) - iVar14);
  *(undefined4 *)(unaff_r5 + 0xb0) = uVar3;
  uVar3 = __floatsisf(((int)*(short *)(iVar4 + 0x16) - iVar23 / 2) - iVar2);
  *(undefined4 *)(unaff_r5 + 0xac) = uVar3;
  iVar2 = SmDev();
  *(undefined4 *)(unaff_r5 + 0xb8) = *(undefined4 *)(iVar2 * 4 + *(int *)(unaff_r6 + DAT_0016862c));
  iVar2 = SmDev();
  *(undefined4 *)(unaff_r5 + 0xb4) = *(undefined4 *)(iVar2 * 4 + *(int *)(unaff_r6 + DAT_00168630));
  iVar2 = DAT_00168624;
  iVar4 = *(int *)(unaff_r5 + 0xc);
  if ((*(char *)(iVar4 + DAT_00168628) == '\0') && (*(int *)(iVar4 + 0x4b8) != 0)) {
    if ((int)**(short **)(unaff_r6 + DAT_00168634) < *(int *)(iVar4 + DAT_00168638)) {
      uVar3 = __floatsisf((*(int *)(iVar4 + 0x4b8) >> 0x10) -
                          (*(int *)(iVar4 + DAT_00168624) >> 0x10));
      *(undefined4 *)(unaff_r5 + 0xa4) = uVar3;
      uVar3 = __floatsisf((int)*(short *)(iVar4 + 0x4b8) - (int)*(short *)(iVar4 + iVar2));
      *(undefined4 *)(unaff_r5 + 0xa8) = uVar3;
    }
    else {
      *(undefined4 *)(unaff_r5 + 0xa8) = 0;
      *(undefined4 *)(unaff_r5 + 0xa4) = 0;
    }
  }
  uVar18 = *(undefined4 *)(unaff_r5 + 0xa4);
  uVar19 = *(undefined4 *)(unaff_r5 + 0xa8);
  lVar29 = *(long *)(unaff_r5 + 0x420);
  uVar5 = __fixsfsi(uVar19);
  iVar2 = __fixsfsi(uVar18);
  uVar3 = CFPoint::add(lVar29,iVar2 << 0x10 | uVar5 & 0xffff);
  iVar2 = DAT_0016863c;
  *(undefined4 *)(unaff_r5 + 0x420) = uVar3;
  puVar24 = *(undefined4 **)(unaff_r6 + iVar2);
  uVar3 = __floatsisf(in_stack_00000014);
  uVar6 = __mulsf3(uVar3,*puVar24);
  iVar2 = __aeabi_fcmplt(uVar6,0x3f800000);
  uVar3 = uVar6;
  if (iVar2 == 0) {
    uVar3 = 0x3f800000;
  }
  uVar3 = __subsf3(0x3f800000,uVar3);
  iVar4 = __mulsf3(uVar18,uVar3);
  *(int *)(unaff_r5 + 0xa4) = iVar4;
  if (iVar2 == 0) {
    uVar6 = 0x3f800000;
  }
  uVar3 = __subsf3(0x3f800000,uVar6);
  iVar2 = __mulsf3(uVar19,uVar3);
  *(int *)(unaff_r5 + 0xa8) = iVar2;
  iVar14 = __aeabi_fcmpge(iVar4,0);
  if (iVar14 == 0) {
    iVar4 = iVar4 + -0x80000000;
  }
  uVar3 = **(undefined4 **)(unaff_r6 + DAT_001688d8);
  iVar4 = __aeabi_fcmplt(iVar4,uVar3);
  if (iVar4 != 0) {
    iVar4 = __aeabi_fcmpge(iVar2,0);
    if (iVar4 == 0) {
      iVar2 = iVar2 + -0x80000000;
    }
    iVar2 = __aeabi_fcmplt(iVar2,uVar3);
    if (iVar2 != 0) {
      *(undefined4 *)(unaff_r5 + 0xa8) = 0;
      *(undefined4 *)(unaff_r5 + 0xa4) = 0;
    }
  }
  (**(code **)(**(int **)(unaff_r5 + 0x28) + 0x20))(*(int **)(unaff_r5 + 0x28),1);
  (**(code **)(**(int **)(unaff_r5 + 0x2c) + 0x20))(*(int **)(unaff_r5 + 0x2c),1);
  uVar5 = *(uint *)(unaff_r5 + 0x420);
  uVar6 = *(undefined4 *)(unaff_r5 + 0xac);
  uVar3 = __floatsisf((int)uVar5 >> 0x10);
  iVar2 = __aeabi_fcmple(uVar3,uVar6);
  if (iVar2 != 0) {
    iVar2 = __fixsfsi(uVar6);
    *(uint *)(unaff_r5 + 0x420) = uVar5 & 0xffff | iVar2 << 0x10;
    (**(code **)(**(int **)(unaff_r5 + 0x2c) + 0x20))(*(int **)(unaff_r5 + 0x2c),0);
  }
  uVar5 = *(uint *)(unaff_r5 + 0x420);
  uVar6 = *(undefined4 *)(unaff_r5 + 0xb0);
  uVar3 = __floatsisf((int)uVar5 >> 0x10);
  iVar2 = __aeabi_fcmpge(uVar3,uVar6);
  if (iVar2 != 0) {
    iVar2 = __fixsfsi(uVar6);
    *(uint *)(unaff_r5 + 0x420) = uVar5 & 0xffff | iVar2 << 0x10;
    (**(code **)(**(int **)(unaff_r5 + 0x28) + 0x20))(*(int **)(unaff_r5 + 0x28),0);
  }
  uVar5 = *(uint *)(unaff_r5 + 0x420);
  uVar6 = *(undefined4 *)(unaff_r5 + 0xb4);
  uVar3 = __floatsisf((int)(short)uVar5);
  iVar2 = __aeabi_fcmple(uVar3,uVar6);
  if (iVar2 != 0) {
    uVar7 = __fixsfsi(uVar6);
    *(uint *)(unaff_r5 + 0x420) = uVar7 & 0xffff | uVar5 & 0xffff0000;
  }
  uVar5 = *(uint *)(unaff_r5 + 0x420);
  uVar6 = *(undefined4 *)(unaff_r5 + 0xb8);
  uVar3 = __floatsisf((int)(short)uVar5);
  iVar2 = __aeabi_fcmpge(uVar3,uVar6);
  if (iVar2 != 0) {
    uVar7 = __fixsfsi(uVar6);
    *(uint *)(unaff_r5 + 0x420) = uVar7 & 0xffff | uVar5 & 0xffff0000;
  }
  for (iVar2 = 0; pZVar28 = *(ZombieCafe **)(unaff_r5 + 0xc), iVar2 < *(int *)(unaff_r5 + 0x1c) + 1;
      iVar2 = iVar2 + 1) {
    uVar3 = CFPoint::add(((*(uint *)(pZVar28 + 0x14) >> 0x10) + *(int *)(unaff_r5 + 0x88) +
                         iVar2 * *(int *)(unaff_r5 + 0x90)) * 0x10000 |
                         *(uint *)(pZVar28 + 0x14) & 0xffff,*(long *)(unaff_r5 + 0x420));
    FUN_001652d4(*(undefined4 *)(iVar2 * 4 + *(int *)(unaff_r5 + 0x20)),uVar3);
  }
  iVar2 = ZombieCafe::getRecipeRank(pZVar28,*(uchar **)(pZVar28 + 0x1c));
  iVar2 = GameStateMap::getCafeRank(unaff_r5,iVar2);
  iVar14 = DAT_001688dc + 0x168822;
  iVar17 = *(int *)(iVar14 + iVar2 * 4 + 0x3c);
  iVar2 = ZombieCafe::getRecipeRank
                    (*(ZombieCafe **)(unaff_r5 + 0xc),
                     *(uchar **)(*(ZombieCafe **)(unaff_r5 + 0xc) + 0x1c));
  iVar2 = GameStateMap::getCafeRank(unaff_r5,iVar2);
  iVar2 = *(int *)(iVar14 + iVar2 * 4 + 0x4c);
  iVar4 = ZombieCafe::getRecipeRank
                    (*(ZombieCafe **)(unaff_r5 + 0xc),
                     *(uchar **)(*(ZombieCafe **)(unaff_r5 + 0xc) + 0x1c));
  iVar4 = GameStateMap::getCafeRank(unaff_r5,iVar4);
  iVar23 = 0;
  in_stack_00000004 = (GameStateMap *)0x0;
  in_stack_00000000 = (GameStateMap *)iVar17;
  in_stack_00000008 = iVar2;
  uVar3 = __floatsisf(*(undefined4 *)(iVar14 + iVar4 * 4 + 0x5c));
  __mulsf3(uVar3,*(undefined4 *)(unaff_r5 + 0xc0));
  in_stack_0000000c = __fixsfsi();
  GameStateMap::positionCafe
            (unaff_r5,(MapCafe *)(unaff_r5 + 0xdc),0,2,(int)in_stack_00000000,(int)in_stack_00000004
             ,in_stack_00000008,in_stack_0000000c);
  iVar2 = DAT_001688e0;
  while( true ) {
    if (*(int *)(unaff_r5 + 200) + 1 <= iVar23) break;
    GameStateMap::MapCafe::MapCafe
              ((MapCafe *)&stack0x0000026c,(MapCafe *)(*(int *)(unaff_r5 + 0xcc) + iVar23 * 0x54));
    *(undefined1 *)((int)&stack0x00000000 + DAT_001688e4) = 0;
    uVar5 = __divsi3(iVar23,3);
    iVar4 = *(int *)(unaff_r5 + 0x90);
    __aeabi_idivmod(iVar23,3);
    if (iVar23 == *(int *)(unaff_r5 + 200)) {
      in_stack_00000000 = (GameStateMap *)0x0;
      in_stack_00000004 = (GameStateMap *)0x0;
      in_stack_00000008 = 0;
      in_stack_0000000c = 0;
    }
    else {
      iVar14 = GameStateMap::getCafeRank(unaff_r5,in_stack_000002b0);
      iVar25 = *(int *)(iVar2 + iVar14 * 4 + 0x1688c4);
      iVar14 = GameStateMap::getCafeRank(unaff_r5,in_stack_000002b0);
      iVar17 = *(int *)(DAT_00168aac + iVar14 * 4 + 0x168956);
      iVar14 = GameStateMap::getCafeRank(unaff_r5,in_stack_000002b0);
      in_stack_00000004 = (GameStateMap *)0x0;
      in_stack_00000000 = (GameStateMap *)iVar25;
      in_stack_00000008 = iVar17;
      uVar3 = __floatsisf(*(undefined4 *)(DAT_00168ab0 + iVar14 * 4 + 0x16897e));
      __mulsf3(uVar3,*(undefined4 *)(unaff_r5 + 0xc0));
      in_stack_0000000c = __fixsfsi();
    }
    GameStateMap::positionCafe
              (unaff_r5,(MapCafe *)&stack0x0000026c,~uVar5 * iVar4,extraout_r1,
               (int)in_stack_00000000,(int)in_stack_00000004,in_stack_00000008,in_stack_0000000c);
    String::~String((String *)&stack0x0000029c);
    iVar23 = iVar23 + 1;
  }
  uVar3 = *(undefined4 *)(unaff_r5 + 0x3d4);
  GameStateMap::MapCafe::MapCafe
            ((MapCafe *)&stack0x0000011c,
             (MapCafe *)(*(int *)(unaff_r5 + 0xcc) + *(int *)(unaff_r5 + 200) * 0x54));
  iVar4 = *(int *)(in_stack_0000011c + 4);
  uVar5 = *(uint *)(in_stack_0000011c + 8);
  GameStateMap::MapCafe::MapCafe
            ((MapCafe *)&stack0x00000170,
             (MapCafe *)(*(int *)(unaff_r5 + 0xcc) + *(int *)(unaff_r5 + 200) * 0x54));
  iVar2 = *(int *)(in_stack_00000170 + 0xc);
  GameStateMap::MapCafe::MapCafe
            ((MapCafe *)&stack0x000001c4,
             (MapCafe *)(*(int *)(unaff_r5 + 0xcc) + *(int *)(unaff_r5 + 200) * 0x54));
  FUN_001652d4(uVar3,(uVar5 & 0xffff | iVar4 << 0x10) -
                     (*(int *)(in_stack_000001c4 + 0x10) / 2 & 0xffffU | iVar2 / 2 << 0x10));
  String::~String((String *)&stack0x000001f4);
  String::~String((String *)&stack0x000001a0);
  String::~String((String *)&stack0x0000014c);
  uVar3 = __floatsisf((int)*(short *)(*(int *)(unaff_r5 + 0xc) + 0x16));
  __aeabi_idivmod(*(int *)(unaff_r5 + 200) + 1,3);
  iVar2 = SmDev();
  uVar3 = __addsf3(uVar3,*(undefined4 *)
                          ((iVar2 + extraout_r1_00 * 6) * 4 + *(int *)(unaff_r6 + DAT_00168ab4)));
  uVar5 = __divsi3(*(int *)(unaff_r5 + 200) + 1,3);
  uVar6 = __floatsisf(*(int *)(unaff_r5 + 0x90) * ~uVar5);
  uVar3 = __addsf3(uVar3,uVar6);
  iVar2 = SmDev();
  __addsf3(uVar3,*(undefined4 *)(iVar2 * 4 + *(int *)(unaff_r6 + DAT_00168ab8)));
  iVar2 = __fixsfsi();
  uVar3 = __floatsisf((int)*(short *)(*(int *)(unaff_r5 + 0xc) + 0x16));
  iVar4 = SmDev();
  uVar3 = __addsf3(uVar3,*(undefined4 *)
                          ((iVar4 + extraout_r1_00 * 6) * 4 + *(int *)(unaff_r6 + DAT_00168abc)));
  iVar4 = SmDev();
  __addsf3(uVar3,*(undefined4 *)(iVar4 * 4 + *(int *)(unaff_r6 + DAT_00168ac0)));
  uVar5 = __fixsfsi();
  uVar3 = CFPoint::add(uVar5 & 0xffff | iVar2 << 0x10,*(long *)(unaff_r5 + 0x420));
  FUN_001652d4(*(undefined4 *)(unaff_r5 + 0x38),uVar3);
  iVar2 = 0;
  while (iVar2 < *(int *)(unaff_r5 + 0xd4) + 1) {
    GameStateMap::MapCafe::MapCafe
              ((MapCafe *)&stack0x0000026c,(MapCafe *)(*(int *)(unaff_r5 + 0xd8) + iVar2 * 0x54));
    iVar14 = iVar2 + 1;
    iVar4 = __divsi3(iVar14,3);
    iVar17 = *(int *)(unaff_r5 + 0x90);
    __aeabi_idivmod(iVar14,3);
    in_stack_00000000 = (GameStateMap *)0x0;
    in_stack_00000004 = (GameStateMap *)0x0;
    in_stack_00000008 = 0;
    __mulsf3(*(undefined4 *)(unaff_r5 + 0xc0),0x42000000);
    in_stack_0000000c = __fixsfsi();
    GameStateMap::positionCafe
              (unaff_r5,(MapCafe *)&stack0x0000026c,iVar4 * iVar17,2 - extraout_r1_01,
               (int)in_stack_00000000,(int)in_stack_00000004,in_stack_00000008,in_stack_0000000c);
    if (in_stack_000002a8 == 0xb) {
      in_stack_00000000 = (GameStateMap *)0xf;
      in_stack_00000004 = (GameStateMap *)0x0;
      in_stack_00000008 = 0;
      in_stack_0000000c = 0;
      GameStateMap::positionCafe
                (unaff_r5,(MapCafe *)&stack0x0000026c,iVar4 * iVar17,2 - extraout_r1_01,0xf,0,0,0);
    }
    if ((in_stack_000002bc != '\0') &&
       ((unaff_r5[0x4c] == (GameStateMap)0x0 || (iVar2 != *(int *)(unaff_r5 + 0xd4))))) {
      pZVar28 = *(ZombieCafe **)(unaff_r5 + 0xc);
      puVar20 = *(undefined1 **)(unaff_r6 + DAT_00168d40);
      __aeabi_idivmod(in_stack_000002a4,*puVar20);
      if (*(int *)(extraout_r1_02 * 4 + *(int *)(pZVar28 + DAT_00168d44)) < 1) {
        in_stack_000002bc = '\0';
        iVar4 = ZombieCafe::isEventCafeTheme(pZVar28,(uint)in_stack_000002a8);
        if (iVar4 == 0) {
          if (*(int **)(in_stack_0000026c + 0x60) != (int *)0x0) {
            (**(code **)(**(int **)(in_stack_0000026c + 0x60) + 4))();
          }
          iVar4 = *(int *)(unaff_r5 + 0xc);
          __aeabi_idivmod(in_stack_000002a4,*puVar20);
          uVar5 = (uint)*(byte *)(*(int *)(iVar4 + DAT_00168d4c) + extraout_r1_03);
          uVar7 = **(int **)(unaff_r6 + DAT_00168d48) - 1;
          if ((int)uVar7 < (int)uVar5) {
            uVar5 = uVar7;
          }
          in_stack_000002a8 = (byte)uVar5;
          uVar3 = PackedImage::getImage
                            (*(PackedImage **)(iVar4 + 0x7f8),
                             *(int *)((uVar5 & 0xff) * 4 + *(int *)(unaff_r6 + DAT_00168d50)),false)
          ;
          *(undefined4 *)(in_stack_0000026c + 0x60) = uVar3;
          pcVar21 = *(code **)(*(int *)in_stack_0000026c + 0x18);
          uVar3 = CImage::getWidth(*(CImage **)(in_stack_0000026c + 0x60));
          iVar4 = CapcomApp::getInstance();
          uVar6 = *(undefined4 *)(iVar4 + 0x40);
          uVar18 = CImage::getHeight(*(CImage **)(in_stack_0000026c + 0x60));
          iVar4 = CapcomApp::getInstance();
          uVar3 = __floatsisf(uVar3);
          __mulsf3(uVar3,uVar6);
          uVar3 = __fixsfsi();
          uVar6 = __floatsisf(uVar18);
          __mulsf3(uVar6,*(undefined4 *)(iVar4 + 0x44));
          uVar6 = __fixsfsi();
          (*pcVar21)(in_stack_0000026c,uVar3,uVar6);
        }
        (**(code **)(**(int **)(unaff_r5 + 0x14) + 0x34))
                  (*(int **)(unaff_r5 + 0x14),in_stack_00000270);
        (**(code **)(**(int **)(unaff_r5 + 0x14) + 0x34))
                  (*(int **)(unaff_r5 + 0x14),in_stack_00000278);
        (**(code **)(**(int **)(unaff_r5 + 0x14) + 0x34))
                  (*(int **)(unaff_r5 + 0x14),in_stack_0000027c);
        (**(code **)(**(int **)(unaff_r5 + 0x14) + 0x34))
                  (*(int **)(unaff_r5 + 0x14),in_stack_00000280);
        (**(code **)(**(int **)(unaff_r5 + 0x14) + 0x34))
                  (*(int **)(unaff_r5 + 0x14),in_stack_00000284);
        if ((int *)in_stack_00000270[0x19] != (int *)0x0) {
          (**(code **)(*(int *)in_stack_00000270[0x19] + 4))();
        }
        if (in_stack_00000270 != (int *)0x0) {
          (**(code **)(*in_stack_00000270 + 4))();
        }
        if ((int *)in_stack_00000278[0x18] != (int *)0x0) {
          (**(code **)(*(int *)in_stack_00000278[0x18] + 4))();
        }
        if (in_stack_00000278 != (int *)0x0) {
          (**(code **)(*in_stack_00000278 + 4))();
        }
        if ((int *)in_stack_0000027c[0x19] != (int *)0x0) {
          (**(code **)(*(int *)in_stack_0000027c[0x19] + 4))();
        }
        if (in_stack_0000027c != (int *)0x0) {
          (**(code **)(*in_stack_0000027c + 4))();
        }
        if (in_stack_00000280 != (int *)0x0) {
          (**(code **)(*in_stack_00000280 + 4))();
        }
        if (in_stack_00000284 != (int *)0x0) {
          (**(code **)(*in_stack_00000284 + 4))();
        }
        in_stack_00000270 = (int *)0x0;
        in_stack_00000278 = (int *)0x0;
        in_stack_0000027c = (int *)0x0;
        in_stack_00000280 = (int *)0x0;
        in_stack_00000284 = (int *)0x0;
        iVar4 = ZombieCafe::isEventCafeTheme
                          (*(ZombieCafe **)(unaff_r5 + 0xc),(uint)in_stack_000002a8);
        if (iVar4 == 0) {
          pcVar21 = *(code **)(*in_stack_0000028c + 0x44);
          ZombieCafe::getEnemyCafeName((int)&stack0x00000034);
          (*pcVar21)(in_stack_0000028c,&stack0x00000034);
          String::~String((String *)&stack0x00000034);
        }
        else {
          GameStateMap::setBossName(unaff_r5,(uint)in_stack_000002a8,(MapCafe *)&stack0x0000026c);
        }
        if (in_stack_00000274 != (int *)0x0) {
          (**(code **)(*in_stack_00000274 + 0x20))(in_stack_00000274,1);
        }
        GameStateMap::MapCafe::MapCafe((MapCafe *)&stack0x00000218,(MapCafe *)&stack0x0000026c);
        Vector<GameStateMap::MapCafe>::setElementAt
                  ((Vector<GameStateMap::MapCafe> *)(unaff_r5 + 0xd0),&stack0x00000218,iVar2);
        pSVar13 = (String *)&stack0x00000248;
      }
      else {
        pcVar21 = *(code **)(*in_stack_0000028c + 0x44);
        Vector<String>::elementAt((int)&stack0x0000003c);
        iVar2 = *(int *)(unaff_r5 + 0xc);
        __aeabi_idivmod(in_stack_000002a4,*puVar20);
        uVar8 = __divsi3(*(undefined4 *)(extraout_r1_04 * 4 + *(int *)(iVar2 + DAT_00169058)),1000);
        StringUtil::createTimeString((StringUtil *)&stack0x00000044,uVar8,'\x02');
        String::operator+((String *)&stack0x0000004c,&stack0x0000003c,&stack0x00000044);
        (*pcVar21)(in_stack_0000028c,&stack0x0000004c);
        String::~String((String *)&stack0x0000004c);
        String::~String((String *)&stack0x00000044);
        pSVar13 = (String *)&stack0x0000003c;
      }
      String::~String(pSVar13);
    }
    String::~String((String *)&stack0x0000029c);
    iVar2 = iVar14;
  }
  GameStateMap::setWeekRaidShopPosition(unaff_r5);
  GameStateMap::setEventRaidShopPosition(unaff_r5);
  GameStateMap::setEventRaid2ShopPosition(unaff_r5);
  GameStateMap::setEventRaid3ShopPosition(unaff_r5);
  GameStateMap::setAmpouleRaidShopPosition(unaff_r5);
  GameStateMap::setColosseumPosition(unaff_r5);
  uVar31 = GameStateMap::setHeroShopPosition(unaff_r5);
  iVar2 = DAT_0016905c;
  *(undefined1 *)(*(int *)(unaff_r5 + 0x130) + 0x91) = 0;
  *(undefined1 *)(*(int *)(unaff_r5 + 0x130) + 0x90) = 0;
  iVar4 = *(int *)(unaff_r5 + 0xc);
  if (*(char *)(iVar4 + iVar2) != '\0') {
    uVar31 = FUN_00169830();
  }
  iVar2 = DAT_00169060;
  iVar14 = *(int *)(iVar4 + DAT_00169060);
  if (iVar14 == 0) {
    uVar31 = FUN_00169830();
  }
  if (*(int *)(iVar4 + 0x4b8) != 0) {
    uVar31 = FUN_00169830();
  }
  if ((int)**(short **)(unaff_r6 + DAT_00169064) < *(int *)(iVar4 + DAT_00169068)) {
    uVar31 = FUN_00169830();
  }
  if ((*(ZCImageButton **)(unaff_r5 + 0x28))[0x14] != (ZCImageButton)0x0) {
    in_stack_00000000 = (GameStateMap *)0x3f800000;
    iVar4 = ZCImageButton::contains
                      (*(ZCImageButton **)(unaff_r5 + 0x28),iVar14 >> 0x10,(int)(short)iVar14,
                       (float)uVar31,(float)((ulonglong)uVar31 >> 0x20));
    uVar31 = CONCAT44(extraout_s1,extraout_s0);
    if (iVar4 != 0) {
      uVar31 = ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),extraout_s0);
      *(undefined4 *)(unaff_r5 + 0xa4) = DAT_0016906c;
    }
  }
  if ((*(ZCImageButton **)(unaff_r5 + 0x2c))[0x14] != (ZCImageButton)0x0) {
    in_stack_00000000 = (GameStateMap *)0x3f800000;
    iVar4 = ZCImageButton::contains
                      (*(ZCImageButton **)(unaff_r5 + 0x2c),
                       *(int *)(*(int *)(unaff_r5 + 0xc) + iVar2) >> 0x10,
                       (int)(short)*(int *)(*(int *)(unaff_r5 + 0xc) + iVar2),(float)uVar31,
                       (float)((ulonglong)uVar31 >> 0x20));
    uVar31 = CONCAT44(extraout_s1_00,extraout_s0_00);
    if (iVar4 != 0) {
      uVar31 = ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),extraout_s0_00);
      *(undefined4 *)(unaff_r5 + 0xa4) = DAT_00169070;
    }
  }
  in_stack_00000000 = (GameStateMap *)0x3f800000;
  iVar4 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r5 + 0x24),
                     *(int *)(*(int *)(unaff_r5 + 0xc) + iVar2) >> 0x10,
                     (int)(short)*(int *)(*(int *)(unaff_r5 + 0xc) + iVar2),(float)uVar31,
                     (float)((ulonglong)uVar31 >> 0x20));
  fVar30 = extraout_s0_01;
  if (iVar4 == 0) {
    iVar4 = ScreenElement::contains
                      (*(ScreenElement **)(unaff_r5 + 0xdc),
                       *(long *)(*(int *)(unaff_r5 + 0xc) + DAT_00169060));
    uVar31 = CONCAT44(extraout_s1_01,extraout_s0_02);
    fVar30 = extraout_s0_02;
    if (iVar4 != 0) goto LAB_00168ed6;
  }
  else {
LAB_00168ed6:
    ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar30);
    pCVar9 = *(CapcomGame **)(unaff_r5 + 0xc);
    pGVar10 = (GameStateCafe *)operator_new(0x200);
    GameStateCafe::GameStateCafe(pGVar10);
    pGVar11 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar11,(GameState *)pGVar10);
    uVar31 = CapcomGame::setNextState(pCVar9,(GameState *)pGVar11);
  }
  if (unaff_r5[0x460] == (GameStateMap)0x0) {
    for (in_stack_00000014 = 0; in_stack_00000014 < *(int *)(unaff_r5 + 200) + 1;
        in_stack_00000014 = in_stack_00000014 + 1) {
      GameStateMap::MapCafe::MapCafe
                ((MapCafe *)&stack0x0000026c,
                 (MapCafe *)(*(int *)(unaff_r5 + 0xcc) + in_stack_00000014 * 0x54));
      iVar4 = ScreenElement::contains(in_stack_0000026c,*(long *)(*(int *)(unaff_r5 + 0xc) + iVar2))
      ;
      if (iVar4 != 0) {
        ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),extraout_s0_03);
        iVar4 = javaIsConnected();
        if (iVar4 != 0) {
          *(int *)(unaff_r5 + 0x9c) = in_stack_00000014;
          TutorialSystem::triggerEvent
                    (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_00169074),'(',false);
          iVar4 = DAT_00169080;
          p_Var15 = *(_func_void_void_ptr_char_ptr_uchar_ptr_uint **)(unaff_r6 + DAT_00169078);
          p_Var16 = *(_func_void_void_ptr_ccServerFailureCode **)(unaff_r6 + DAT_0016907c);
          if (in_stack_00000014 == *(int *)(unaff_r5 + 200)) {
            L_PrintLog((char *)(DAT_00169084 + 0x168f84),(char *)(DAT_00169088 + 0x168f86));
            in_stack_00000000 = (GameStateMap *)&DAT_0000000d;
            CCServer::RetrieveRandomGameState
                      (*(void **)(*(int *)(unaff_r5 + 0xc) + iVar4),p_Var15,p_Var16,unaff_r5,0xd);
            unaff_r5[0x460] = (GameStateMap)0x1;
            *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0016905c) = 1;
          }
          else {
            L_PrintLog((char *)(DAT_0016908c + 0x168fb2),(char *)(DAT_00169090 + 0x168fb4));
            pvVar26 = *(void **)(*(int *)(unaff_r5 + 0xc) + iVar4);
            pcVar12 = (char *)CCServer::GetFriendUniqueId(pvVar26,in_stack_00000294);
            in_stack_00000004 = (GameStateMap *)0x0;
            in_stack_00000000 = unaff_r5;
            CCServer::RetrieveGameStateForUniqueId(pvVar26,pcVar12,p_Var15,p_Var16,unaff_r5,0);
            unaff_r5[0x460] = (GameStateMap)0x1;
          }
          uVar31 = String::~String((String *)&stack0x0000029c);
          break;
        }
        pNVar27 = *(NoticeDialog **)(unaff_r5 + DAT_00169094);
        Vector<String>::elementAt((int)&stack0x00000054);
        Vector<String>::elementAt((int)&stack0x0000005c);
        in_stack_00000000 = (GameStateMap *)0x0;
        NoticeDialog::show(pNVar27,&stack0x00000054,&stack0x0000005c);
        String::~String((String *)&stack0x0000005c);
        String::~String((String *)&stack0x00000054);
      }
      uVar31 = String::~String((String *)&stack0x0000029c);
    }
  }
  if (0 < *(int *)(unaff_r5 + 0xd4) + 1) {
    GameStateMap::MapCafe::MapCafe((MapCafe *)&stack0x0000026c,*(MapCafe **)(unaff_r5 + 0xd8));
    iVar4 = ScreenElement::contains(in_stack_0000026c,*(long *)(*(int *)(unaff_r5 + 0xc) + iVar2));
    if (iVar4 == 0) {
      FUN_00169adc();
    }
    if (in_stack_000002bc != '\0') {
      FUN_00169adc();
    }
    TutorialSystem::isTutorialCompleted
              (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0016934c),'%');
    ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),extraout_s0_04);
    iVar4 = ZombieCafe::haveZombies(*(ZombieCafe **)(unaff_r5 + 0xc));
    if (iVar4 == 0) {
      pNVar27 = *(NoticeDialog **)(unaff_r5 + _DAT_00169354);
      Vector<String>::elementAt((int)&stack0x00000074);
      Vector<String>::elementAt((int)&stack0x0000007c);
      in_stack_00000000 = unaff_r5;
      NoticeDialog::show(pNVar27,&stack0x00000074,&stack0x0000007c,0);
      String::~String((String *)&stack0x0000007c);
      pSVar13 = (String *)&stack0x00000074;
    }
    else {
      iVar4 = ZombieCafe::isEventCafeTheme(*(ZombieCafe **)(unaff_r5 + 0xc),(uint)in_stack_000002a8)
      ;
      if (iVar4 == 0) {
        FUN_00169aea();
      }
      iVar4 = GameStateMap::eventCafeZombieNumCheck(unaff_r5);
      if (iVar4 != 0) {
        FUN_00169aea();
      }
      pNVar27 = *(NoticeDialog **)(unaff_r5 + _DAT_00169354);
      String::String((String *)&stack0x00000064,(char *)(_DAT_00169350 + 0x16912a));
      Vector<String>::elementAt((int)&stack0x0000006c);
      in_stack_00000000 = unaff_r5;
      NoticeDialog::show(pNVar27,&stack0x00000064,&stack0x0000006c,0);
      String::~String((String *)&stack0x0000006c);
      pSVar13 = (String *)&stack0x00000064;
    }
    String::~String(pSVar13);
    uVar31 = String::~String((String *)&stack0x0000029c);
  }
  if (*(ScreenElement **)(unaff_r5 + 0x328) != (ScreenElement *)0x0) {
    iVar4 = ScreenElement::contains
                      (*(ScreenElement **)(unaff_r5 + 0x328),
                       *(long *)(*(int *)(unaff_r5 + 0xc) + iVar2));
    uVar31 = CONCAT44(extraout_s1_02,extraout_s0_05);
    if (iVar4 != 0) {
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),extraout_s0_05);
      pCVar9 = *(CapcomGame **)(unaff_r5 + 0xc);
      this = (GameStateAmpouleRaidMenu *)operator_new(0x98);
      GameStateAmpouleRaidMenu::GameStateAmpouleRaidMenu(this);
      pGVar11 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar11,(GameState *)this);
      uVar31 = CapcomGame::setNextState(pCVar9,(GameState *)pGVar11);
      *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_00169680) = 1;
    }
  }
  if (*(ScreenElement **)(unaff_r5 + 0x2d4) != (ScreenElement *)0x0) {
    iVar4 = ScreenElement::contains
                      (*(ScreenElement **)(unaff_r5 + 0x2d4),
                       *(long *)(*(int *)(unaff_r5 + 0xc) + iVar2));
    uVar31 = CONCAT44(extraout_s1_03,extraout_s0_06);
    if (iVar4 != 0) {
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),extraout_s0_06);
      pCVar9 = *(CapcomGame **)(unaff_r5 + 0xc);
      this_00 = (GameStateEventRaid3Menu *)operator_new(0xf0);
      GameStateEventRaid3Menu::GameStateEventRaid3Menu(this_00);
      pGVar11 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar11,(GameState *)this_00);
      uVar31 = CapcomGame::setNextState(pCVar9,(GameState *)pGVar11);
      *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_00169680) = 1;
    }
  }
  if (*(ScreenElement **)(unaff_r5 + 0x280) != (ScreenElement *)0x0) {
    iVar4 = ScreenElement::contains
                      (*(ScreenElement **)(unaff_r5 + 0x280),
                       *(long *)(*(int *)(unaff_r5 + 0xc) + iVar2));
    uVar31 = CONCAT44(extraout_s1_04,extraout_s0_07);
    if (iVar4 != 0) {
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),extraout_s0_07);
      pCVar9 = *(CapcomGame **)(unaff_r5 + 0xc);
      this_01 = (GameStateEventRaid2Menu *)operator_new(0x114);
      GameStateEventRaid2Menu::GameStateEventRaid2Menu(this_01);
      pGVar11 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar11,(GameState *)this_01);
      uVar31 = CapcomGame::setNextState(pCVar9,(GameState *)pGVar11);
      *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_00169680) = 1;
    }
  }
  if (*(ScreenElement **)(unaff_r5 + 0x22c) != (ScreenElement *)0x0) {
    iVar4 = ScreenElement::contains
                      (*(ScreenElement **)(unaff_r5 + 0x22c),
                       *(long *)(*(int *)(unaff_r5 + 0xc) + iVar2));
    uVar31 = CONCAT44(extraout_s1_05,extraout_s0_08);
    if (iVar4 != 0) {
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),extraout_s0_08);
      pCVar9 = *(CapcomGame **)(unaff_r5 + 0xc);
      this_02 = (GameStateEventRaidMenu *)operator_new(0xbc);
      GameStateEventRaidMenu::GameStateEventRaidMenu(this_02);
      pGVar11 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar11,(GameState *)this_02);
      uVar31 = CapcomGame::setNextState(pCVar9,(GameState *)pGVar11);
      *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_00169680) = 1;
    }
  }
  if (*(ScreenElement **)(unaff_r5 + 0x37c) != (ScreenElement *)0x0) {
    iVar4 = ScreenElement::contains
                      (*(ScreenElement **)(unaff_r5 + 0x37c),
                       *(long *)(*(int *)(unaff_r5 + 0xc) + iVar2));
    uVar31 = CONCAT44(extraout_s1_06,extraout_s0_09);
    if (iVar4 != 0) {
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),extraout_s0_09);
      pCVar9 = *(CapcomGame **)(unaff_r5 + 0xc);
      this_03 = (GameStateWeekRaidMenu *)operator_new(0xd4);
      GameStateWeekRaidMenu::GameStateWeekRaidMenu(this_03);
      pGVar11 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar11,(GameState *)this_03);
      uVar31 = CapcomGame::setNextState(pCVar9,(GameState *)pGVar11);
      *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_00169680) = 1;
    }
  }
  if (*(ScreenElement **)(unaff_r5 + 0x184) != (ScreenElement *)0x0) {
    iVar4 = ScreenElement::contains
                      (*(ScreenElement **)(unaff_r5 + 0x184),
                       *(long *)(*(int *)(unaff_r5 + 0xc) + iVar2));
    uVar31 = CONCAT44(extraout_s1_07,extraout_s0_10);
    if (iVar4 != 0) {
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),extraout_s0_10);
      pCVar9 = *(CapcomGame **)(unaff_r5 + 0xc);
      this_04 = (GameStateSurvivalMenu *)operator_new(0xc4);
      GameStateSurvivalMenu::GameStateSurvivalMenu(this_04);
      pGVar11 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar11,(GameState *)this_04);
      uVar31 = CapcomGame::setNextState(pCVar9,(GameState *)pGVar11);
      *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_00169680) = 1;
    }
  }
  if (*(ScreenElement **)(unaff_r5 + 0x1d8) == (ScreenElement *)0x0) goto LAB_00169778;
  iVar4 = ScreenElement::contains
                    (*(ScreenElement **)(unaff_r5 + 0x1d8),
                     *(long *)(*(int *)(unaff_r5 + 0xc) + iVar2));
  uVar31 = CONCAT44(extraout_s1_08,extraout_s0_11);
  iVar14 = *(int *)(unaff_r5 + 0xc);
  if (iVar4 == 0) {
LAB_00169afa:
    if ((unaff_r5[0x228] == (GameStateMap)0x0) ||
       (uVar31 = CONCAT44(extraout_s1_08,extraout_s0_11), *(int *)(iVar14 + _DAT_001699f4) < 0x3e9))
    goto LAB_00169778;
    iVar4 = ScreenElement::contains(*(ScreenElement **)(unaff_r5 + 0x1e4),*(long *)(iVar14 + iVar2))
    ;
    uVar31 = CONCAT44(extraout_s1_09,extraout_s0_12);
    if (iVar4 == 0) goto LAB_00169778;
    puts((char *)(_DAT_001699f8 + 0x1696ba));
    ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),extraout_s0_13);
    snprintf(&stack0x00000314,0x80,(char *)(_DAT_00169a00 + 0x1696d2),
             **(undefined4 **)(unaff_r6 + _DAT_001699fc));
    Vector<String>::elementAt((int)&stack0x000000dc);
    operator+(&stack0x000000e4,&stack0x00000314,&stack0x000000dc);
    Vector<String>::elementAt((int)&stack0x000000ec);
    String::operator+((String *)&stack0x0000026c,&stack0x000000e4,&stack0x000000ec);
    String::~String((String *)&stack0x000000ec);
    String::~String((String *)&stack0x000000e4);
    String::~String((String *)&stack0x000000dc);
    pCVar22 = *(ConfirmDialog **)(unaff_r5 + _DAT_00169a0c);
    String::String((String *)&stack0x00000104,(String *)&stack0x0000026c);
    Vector<String>::elementAt((int)&stack0x000000f4);
    Vector<String>::elementAt((int)&stack0x000000fc);
    in_stack_00000000 = *(GameStateMap **)(unaff_r6 + _DAT_00169a18);
    in_stack_00000004 = unaff_r5;
    ConfirmDialog::show(pCVar22,&stack0x00000104,&stack0x000000f4,&stack0x000000fc);
    String::~String((String *)&stack0x000000fc);
    String::~String((String *)&stack0x000000f4);
    String::~String((String *)&stack0x00000104);
    pSVar13 = (String *)&stack0x0000026c;
  }
  else {
    GVar1 = unaff_r5[0x228];
    if ((byte)GVar1 != 0) goto LAB_00169afa;
    ZombieCafe::playEffect(iVar14,extraout_s0_11);
    iVar4 = javaCanOpenHero();
    if (iVar4 == 0) {
      pNVar27 = *(NoticeDialog **)(unaff_r5 + DAT_00169684);
      String::String((String *)&stack0x000000cc,(char *)(DAT_00169690 + 0x16964e));
      Vector<String>::elementAt((int)&stack0x000000d4);
      in_stack_00000000 = unaff_r5;
      NoticeDialog::show(pNVar27,&stack0x000000cc,&stack0x000000d4,0);
      String::~String((String *)&stack0x000000d4);
      pSVar13 = (String *)&stack0x000000cc;
    }
    else {
      iVar4 = ZombieCafe::haveZombies(*(ZombieCafe **)(unaff_r5 + 0xc));
      pCVar9 = *(CapcomGame **)(unaff_r5 + 0xc);
      if (iVar4 != 0) {
        this_05 = (GameStateRaid *)operator_new(0x18c);
        in_stack_00000000 = (GameStateMap *)(uint)(byte)GVar1;
        GameStateRaid::GameStateRaid
                  (this_05,*(int *)(unaff_r5 + 0x210),(uint)(byte)unaff_r5[0x214],(bool)GVar1,
                   (bool)GVar1);
        pGVar11 = (GameStateLoading *)operator_new(0x2c);
        GameStateLoading::GameStateLoading(pGVar11,(GameState *)this_05);
        uVar31 = CapcomGame::setNextState(pCVar9,(GameState *)pGVar11);
        *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_00169680) = 1;
        goto LAB_00169778;
      }
      pNVar27 = *(NoticeDialog **)(unaff_r5 + DAT_00169684);
      Vector<String>::elementAt((int)&stack0x000000bc);
      Vector<String>::elementAt((int)&stack0x000000c4);
      in_stack_00000000 = unaff_r5;
      NoticeDialog::show(pNVar27,&stack0x000000bc,&stack0x000000c4,0);
      String::~String((String *)&stack0x000000c4);
      pSVar13 = (String *)&stack0x000000bc;
    }
  }
  uVar31 = String::~String(pSVar13);
LAB_00169778:
  in_stack_00000000 = (GameStateMap *)0x3f800000;
  iVar2 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r5 + 0x38),
                     *(int *)(*(int *)(unaff_r5 + 0xc) + iVar2) >> 0x10,
                     (int)(short)*(int *)(*(int *)(unaff_r5 + 0xc) + iVar2),(float)uVar31,
                     (float)((ulonglong)uVar31 >> 0x20));
  fVar30 = extraout_s0_14;
  if (iVar2 != 0) {
    if (*(char *)(*(int *)(unaff_r5 + 0x438) + 0x68) != '\0') {
      fVar30 = (float)TutorialSystem::triggerEvent
                                (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_00169a1c),'@',
                                 true);
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),fVar30);
      InviteDialog::setFacebookCallback
                (*(InviteDialog **)(unaff_r5 + 0x438),
                 *(_func_void_void_ptr **)(unaff_r6 + DAT_00169a20),unaff_r5);
      InviteDialog::setEmailCallback
                (*(_func_void_void_ptr **)(unaff_r5 + 0x438),*(void **)(unaff_r6 + DAT_00169a24));
      InviteDialog::setSMSCallback
                (*(_func_void_void_ptr **)(unaff_r5 + 0x438),*(void **)(unaff_r6 + DAT_00169a28));
      (**(code **)(**(int **)(unaff_r5 + 0x438) + 0x20))(*(int **)(unaff_r5 + 0x438),1);
      *(int *)(*(int *)(unaff_r5 + 0x438) + 0x6c) = DAT_00169a2c + 0x1697ee;
      FUN_00169830();
      return;
    }
    pNVar27 = *(NoticeDialog **)(unaff_r5 + DAT_00169a34);
    Vector<String>::elementAt((int)&stack0x0000010c);
    Vector<String>::elementAt((int)&stack0x00000114);
    in_stack_00000000 = (GameStateMap *)0x0;
    NoticeDialog::show(pNVar27,&stack0x0000010c,&stack0x00000114);
    String::~String((String *)&stack0x00000114);
    fVar30 = (float)String::~String((String *)&stack0x0000010c);
  }
  if (unaff_r5[0x4d] != (GameStateMap)0x0) {
    if (*(int *)(*(int *)(unaff_r5 + 0x44) * 4 + *(int *)(*(int *)(unaff_r5 + 0xc) + 0x698)) < 1) {
      pcVar21 = *(code **)(*(int *)unaff_r5 + 0x78);
    }
    else {
      pcVar21 = *(code **)(*(int *)unaff_r5 + 0x74);
    }
    fVar30 = (float)(*pcVar21)(unaff_r5);
  }
  if ((unaff_r5[0x4c] != (GameStateMap)0x0) &&
     (*(int *)(*(int *)(unaff_r5 + 0x44) * 4 + *(int *)(*(int *)(unaff_r5 + 0xc) + 0x698)) < 1)) {
    unaff_r5[0x4d] = (GameStateMap)0x1;
  }
  if (unaff_r5[0x450] == (GameStateMap)0x0) {
    unaff_r5[0x450] = (GameStateMap)0x1;
    in_stack_00000000 = (GameStateMap *)0x1;
    ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(unaff_r5 + 0xc),0,0xf,fVar30,false);
  }
  if (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_00169a3c) != '\0') {
    *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_00169a3c) = 0;
    iVar2 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_00169a1c),',');
    if (iVar2 != 0) {
      ZombieCafe::playEffect(*(int *)(unaff_r5 + 0xc),extraout_s0_15);
      pCVar9 = *(CapcomGame **)(unaff_r5 + 0xc);
      pGVar10 = (GameStateCafe *)operator_new(0x200);
      GameStateCafe::GameStateCafe(pGVar10);
      pGVar11 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar11,(GameState *)pGVar10);
      CapcomGame::setNextState(pCVar9,(GameState *)pGVar11);
      FUN_00169b04();
      return;
    }
    FUN_00169b04();
    return;
  }
  FUN_00169b04();
  return;
}


