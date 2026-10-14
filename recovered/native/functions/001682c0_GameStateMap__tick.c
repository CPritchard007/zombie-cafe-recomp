/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001682c0 GameStateMap::tick */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateMap::tick(long) */

void __thiscall GameStateMap::tick(GameStateMap *this,long param_1)

{
  undefined1 uVar1;
  CapcomGame CVar2;
  GameStateMap GVar3;
  short sVar4;
  short sVar5;
  undefined1 *puVar6;
  ZombieCafe *pZVar7;
  GameStateLoading *pGVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  uint uVar13;
  CImage *this_00;
  ulong uVar14;
  ZCImageButton *pZVar15;
  GameStateCafe *pGVar16;
  void *pvVar17;
  char *pcVar18;
  GameStateAmpouleRaidMenu *this_01;
  GameStateEventRaid3Menu *this_02;
  GameStateEventRaid2Menu *this_03;
  GameStateEventRaidMenu *this_04;
  GameStateWeekRaidMenu *this_05;
  GameStateSurvivalMenu *this_06;
  GameStateRaid *this_07;
  ConfirmDialog *pCVar19;
  String *this_08;
  int iVar20;
  undefined4 extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  _func_void_void_ptr_char_ptr_uchar_ptr_uint *p_Var21;
  _func_void_void_ptr_ccServerFailureCode *p_Var22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  short *psVar29;
  code *pcVar30;
  undefined4 *puVar31;
  int *piVar32;
  NoticeDialog *pNVar33;
  GameStateMainMenu *this_09;
  CapcomGame *pCVar34;
  TutorialArrow *this_10;
  long lVar35;
  undefined4 *puVar36;
  float fVar63;
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
  float extraout_s0_15;
  undefined8 uVar64;
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
  int *piVar37;
  undefined4 *puVar38;
  undefined4 *puVar39;
  int *piVar40;
  undefined4 *puVar41;
  int *piVar42;
  undefined4 *puVar43;
  int *piVar44;
  undefined4 *puVar45;
  undefined4 *puVar46;
  undefined4 *puVar47;
  undefined4 *puVar48;
  int *piVar49;
  undefined4 *puVar50;
  undefined4 *puVar51;
  undefined4 *puVar52;
  undefined4 *puVar53;
  undefined4 *puVar54;
  undefined4 *puVar55;
  undefined1 *puVar56;
  undefined4 *puVar57;
  undefined4 *puVar58;
  undefined4 *puVar59;
  undefined4 *puVar60;
  undefined4 *puVar61;
  undefined4 *puVar62;
  
  iVar20 = DAT_001685f4;
  puVar36 = (undefined4 *)(&stack0xffffffec + DAT_001685f4);
  piVar37 = (int *)(&stack0xffffffec + DAT_001685f4);
  puVar38 = (undefined4 *)(&stack0xffffffec + DAT_001685f4);
  puVar39 = (undefined4 *)(&stack0xffffffec + DAT_001685f4);
  piVar40 = (int *)(&stack0xffffffec + DAT_001685f4);
  puVar41 = (undefined4 *)(&stack0xffffffec + DAT_001685f4);
  piVar42 = (int *)(&stack0xffffffec + DAT_001685f4);
  puVar43 = (undefined4 *)(&stack0xffffffec + DAT_001685f4);
  piVar44 = (int *)(&stack0xffffffec + DAT_001685f4);
  puVar45 = (undefined4 *)(&stack0xffffffec + DAT_001685f4);
  puVar46 = (undefined4 *)(&stack0xffffffec + DAT_001685f4);
  puVar47 = (undefined4 *)(&stack0xffffffec + DAT_001685f4);
  puVar48 = (undefined4 *)(&stack0xffffffec + DAT_001685f4);
  piVar49 = (int *)(&stack0xffffffec + DAT_001685f4);
  puVar50 = (undefined4 *)(&stack0xffffffec + DAT_001685f4);
  puVar51 = (undefined4 *)(&stack0xffffffec + DAT_001685f4);
  puVar52 = (undefined4 *)(&stack0xffffffec + DAT_001685f4);
  puVar53 = (undefined4 *)(&stack0xffffffec + DAT_001685f4);
  puVar54 = (undefined4 *)(&stack0xffffffec + DAT_001685f4);
  puVar55 = (undefined4 *)(&stack0xffffffec + DAT_001685f4);
  puVar56 = &stack0xffffffec + DAT_001685f4;
  puVar57 = (undefined4 *)(&stack0xffffffec + DAT_001685f4);
  puVar58 = (undefined4 *)(&stack0xffffffec + DAT_001685f4);
  puVar59 = (undefined4 *)(&stack0xffffffec + DAT_001685f4);
  puVar60 = (undefined4 *)(&stack0xffffffec + DAT_001685f4);
  puVar61 = (undefined4 *)(&stack0xffffffec + DAT_001685f4);
  puVar62 = (undefined4 *)(&stack0xffffffec + DAT_001685f4);
  *(long *)(&stack0x00000000 + DAT_001685f4) = param_1;
  this_09 = (GameStateMainMenu *)(DAT_001685f8 + 0x1682d0);
  puVar31 = *(undefined4 **)(this_09 + DAT_001685fc);
  pZVar7 = *(ZombieCafe **)(this + 0xc);
  *(undefined4 *)(&stack0x00000380 + DAT_001685f4) = *puVar31;
  ZombieCafe::tickPlaySecAnalysis_cafe(pZVar7,param_1);
  ZombieCafeGameState::tick((long)this);
  pCVar34 = *(CapcomGame **)(this + 0xc);
  CVar2 = pCVar34[DAT_00168600];
  *(undefined4 **)(&stack0x00000018 + iVar20) = puVar31;
  if (CVar2 == (CapcomGame)0x0) {
    this_09 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(this_09);
    pGVar8 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar8,(GameState *)this_09);
    CapcomGame::setNextState(pCVar34,(GameState *)pGVar8);
    this[0x11] = (GameStateMap)0x1;
    FUN_00169b04();
  }
  fVar63 = (float)(**(code **)(**(int **)(this + 0x14) + 8))
                            (*(int **)(this + 0x14),*(undefined4 *)(&stack0x00000000 + iVar20));
  if ((((((*(char *)(*(int *)(this + 0x438) + 0x14) != '\0') ||
         (*(char *)(*(int *)(this + 0x448) + 0x14) != '\0')) ||
        (*(char *)(*(int *)(this + DAT_00168604) + 0x14) != '\0')) ||
       ((this[DAT_00168608] != (GameStateMap)0x0 ||
        (*(char *)(*(int *)(this + DAT_0016860c) + 0x14) != '\0')))) ||
      ((*(char *)(*(int *)(this + DAT_00168610) + 0x14) != '\0' ||
       (*(char *)(*(int *)(this + DAT_00168614) + 0x14) != '\0')))) &&
     (*(undefined1 *)(*(int *)(this + 0xc) + DAT_00168618) = 0,
     this[DAT_0016861c] == (GameStateMap)0x0)) {
    fVar63 = (float)FUN_00169b04();
  }
  TutorialArrow::tick(*(TutorialArrow **)(this + 0x440),*(long *)(&stack0x00000000 + iVar20),
                      *(long *)(this + 0x420),fVar63);
  this_10 = *(TutorialArrow **)(this + 0x440);
  if (this_10[0x14] != (TutorialArrow)0x0) {
    *(undefined4 *)(&stack0x00000004 + iVar20) = *(undefined4 *)(this + 0x38);
    iVar9 = TutorialArrow::attachedToScreenElement(this_10);
    if (iVar9 == 0) {
      FUN_00169aca();
    }
    if (*(int *)(this_10 + 100) != *(int *)(&stack0x00000004 + iVar20)) {
      FUN_00169aca();
    }
  }
  iVar9 = *(int *)(this + 0xd4) + 2;
  if (*(int *)(this + 0x22c) == 0) {
    iVar9 = *(int *)(this + 0xd4) + 1;
  }
  iVar23 = *(int *)(this + 0x184);
  iVar24 = *(int *)(this + 0x1d8);
  iVar25 = *(int *)(this + 0x280);
  iVar26 = *(int *)(this + 0x2d4);
  iVar27 = *(int *)(this + 0x328);
  iVar28 = *(int *)(this + 0x37c);
  *(int *)(&stack0x0000000c + iVar20) = *(int *)(this + 200) + 1;
  iVar9 = __divsi3(((((((iVar9 - (uint)(iVar23 == 0)) - (uint)(iVar24 == 0)) - (uint)(iVar25 == 0))
                     - (uint)(iVar26 == 0)) - (uint)(iVar27 == 0)) - (uint)(iVar28 == 0)) + 5,3);
  iVar23 = __divsi3(*(undefined4 *)(&stack0x0000000c + iVar20),3);
  iVar24 = *(int *)(this + 0x90);
  iVar23 = iVar23 + iVar9 + 3;
  iVar9 = ((iVar9 + 2) - iVar23) * iVar24;
  *(int *)(this + 0x88) = iVar9;
  *(int *)(&stack0x00000008 + iVar20) = iVar9;
  *(int *)(&stack0x00000004 + iVar20) = iVar23;
  iVar9 = __divsi3(*(undefined4 *)(&stack0x0000000c + iVar20),0xfffffffd);
  iVar9 = (*(int *)(&stack0x00000004 + iVar20) + iVar9 + -2) * iVar24;
  *(int *)(this + 0x8c) = iVar9;
  *(int *)(&stack0x00000004 + iVar20) = iVar9;
  iVar9 = *(int *)(this + 0xc);
  *(GameStateMap **)(&stack0x0000000c + iVar20) = this + 0xb0;
  uVar10 = __floatsisf((iVar24 / 2 - (int)*(short *)(iVar9 + 0x16)) -
                       *(int *)(&stack0x00000008 + iVar20));
  **(undefined4 **)(&stack0x0000000c + iVar20) = uVar10;
  *(GameStateMap **)(&stack0x00000008 + iVar20) = this + 0xac;
  uVar10 = __floatsisf(((int)*(short *)(iVar9 + 0x16) - iVar24 / 2) -
                       *(int *)(&stack0x00000004 + iVar20));
  **(undefined4 **)(&stack0x00000008 + iVar20) = uVar10;
  iVar9 = SmDev();
  *(undefined4 *)(this + 0xb8) = *(undefined4 *)(iVar9 * 4 + *(int *)(this_09 + DAT_0016862c));
  iVar9 = SmDev();
  *(undefined4 *)(this + 0xb4) = *(undefined4 *)(iVar9 * 4 + *(int *)(this_09 + DAT_00168630));
  iVar9 = DAT_00168624;
  iVar23 = *(int *)(this + 0xc);
  if ((*(char *)(iVar23 + DAT_00168628) == '\0') && (iVar24 = *(int *)(iVar23 + 0x4b8), iVar24 != 0)
     ) {
    psVar29 = *(short **)(this_09 + DAT_00168634);
    *(GameStateMap **)(&stack0x00000004 + iVar20) = this + 0xa4;
    if ((int)*psVar29 < *(int *)(iVar23 + DAT_00168638)) {
      uVar10 = __floatsisf((iVar24 >> 0x10) - (*(int *)(iVar23 + DAT_00168624) >> 0x10));
      **(undefined4 **)(&stack0x00000004 + iVar20) = uVar10;
      sVar4 = *(short *)(iVar23 + 0x4b8);
      sVar5 = *(short *)(iVar23 + iVar9);
      *(GameStateMap **)(&stack0x00000004 + iVar20) = this + 0xa8;
      uVar10 = __floatsisf((int)sVar4 - (int)sVar5);
      **(undefined4 **)(&stack0x00000004 + iVar20) = uVar10;
    }
    else {
      puVar31 = *(undefined4 **)(&stack0x00000004 + iVar20);
      *(undefined4 *)(this + 0xa8) = 0;
      *puVar31 = 0;
    }
  }
  *(undefined4 *)(&stack0x00000004 + iVar20) = *(undefined4 *)(this + 0xa4);
  uVar10 = *(undefined4 *)(this + 0xa8);
  lVar35 = *(long *)(this + 0x420);
  *(undefined4 *)(&stack0x00000008 + iVar20) = uVar10;
  uVar11 = __fixsfsi(uVar10);
  iVar9 = __fixsfsi(*(undefined4 *)(&stack0x00000004 + iVar20));
  uVar10 = CFPoint::add(lVar35,iVar9 << 0x10 | uVar11 & 0xffff);
  iVar9 = DAT_0016863c;
  *(undefined4 *)(this + 0x420) = uVar10;
  puVar31 = *(undefined4 **)(this_09 + iVar9);
  uVar10 = __floatsisf(*(undefined4 *)(&stack0x00000000 + iVar20));
  uVar10 = __mulsf3(uVar10,*puVar31);
  iVar9 = __aeabi_fcmplt(uVar10,0x3f800000);
  if (iVar9 == 0) {
    *(undefined4 *)(&stack0x00000000 + iVar20) = 0;
    uVar12 = 0x3f800000;
  }
  else {
    *(undefined4 *)(&stack0x00000000 + iVar20) = 1;
    uVar12 = uVar10;
  }
  uVar12 = __subsf3(0x3f800000,uVar12);
  iVar9 = __mulsf3(*(undefined4 *)(&stack0x00000004 + iVar20),uVar12);
  *(int *)(this + 0xa4) = iVar9;
  if (*(int *)(&stack0x00000000 + iVar20) == 0) {
    uVar10 = 0x3f800000;
  }
  uVar10 = __subsf3(0x3f800000,uVar10);
  iVar23 = __mulsf3(*(undefined4 *)(&stack0x00000008 + iVar20),uVar10);
  *(int *)(this + 0xa8) = iVar23;
  iVar24 = __aeabi_fcmpge(iVar9,0);
  if (iVar24 == 0) {
    iVar9 = iVar9 + -0x80000000;
  }
  uVar10 = **(undefined4 **)(this_09 + DAT_001688d8);
  *(undefined4 *)(&stack0x00000000 + iVar20) = uVar10;
  iVar9 = __aeabi_fcmplt(iVar9,uVar10);
  if (iVar9 != 0) {
    iVar9 = __aeabi_fcmpge(iVar23,0);
    if (iVar9 == 0) {
      iVar23 = iVar23 + -0x80000000;
    }
    iVar9 = __aeabi_fcmplt(iVar23,*(undefined4 *)(&stack0x00000000 + iVar20));
    if (iVar9 != 0) {
      *(undefined4 *)(this + 0xa8) = 0;
      *(undefined4 *)(this + 0xa4) = 0;
    }
  }
  (**(code **)(**(int **)(this + 0x28) + 0x20))(*(int **)(this + 0x28),1);
  (**(code **)(**(int **)(this + 0x2c) + 0x20))(*(int **)(this + 0x2c),1);
  uVar11 = *(uint *)(this + 0x420);
  uVar12 = *(undefined4 *)(this + 0xac);
  uVar10 = __floatsisf((int)uVar11 >> 0x10);
  iVar9 = __aeabi_fcmple(uVar10,uVar12);
  if (iVar9 != 0) {
    iVar9 = __fixsfsi(uVar12);
    *(uint *)(this + 0x420) = uVar11 & 0xffff | iVar9 << 0x10;
    (**(code **)(**(int **)(this + 0x2c) + 0x20))(*(int **)(this + 0x2c),0);
  }
  uVar11 = *(uint *)(this + 0x420);
  uVar12 = *(undefined4 *)(this + 0xb0);
  uVar10 = __floatsisf((int)uVar11 >> 0x10);
  iVar9 = __aeabi_fcmpge(uVar10,uVar12);
  if (iVar9 != 0) {
    iVar9 = __fixsfsi(uVar12);
    *(uint *)(this + 0x420) = uVar11 & 0xffff | iVar9 << 0x10;
    (**(code **)(**(int **)(this + 0x28) + 0x20))(*(int **)(this + 0x28),0);
  }
  uVar11 = *(uint *)(this + 0x420);
  uVar12 = *(undefined4 *)(this + 0xb4);
  uVar10 = __floatsisf((int)(short)uVar11);
  iVar9 = __aeabi_fcmple(uVar10,uVar12);
  if (iVar9 != 0) {
    uVar13 = __fixsfsi(uVar12);
    *(uint *)(this + 0x420) = uVar13 & 0xffff | uVar11 & 0xffff0000;
  }
  uVar11 = *(uint *)(this + 0x420);
  uVar12 = *(undefined4 *)(this + 0xb8);
  uVar10 = __floatsisf((int)(short)uVar11);
  iVar9 = __aeabi_fcmpge(uVar10,uVar12);
  if (iVar9 != 0) {
    uVar13 = __fixsfsi(uVar12);
    *(uint *)(this + 0x420) = uVar13 & 0xffff | uVar11 & 0xffff0000;
  }
  *(GameStateMap **)(&stack0x00000000 + iVar20) = this + 0x90;
  for (iVar9 = 0; pZVar7 = *(ZombieCafe **)(this + 0xc), iVar9 < *(int *)(this + 0x1c) + 1;
      iVar9 = iVar9 + 1) {
    uVar10 = CFPoint::add(((*(uint *)(pZVar7 + 0x14) >> 0x10) + *(int *)(this + 0x88) +
                          iVar9 * **(int **)(&stack0x00000000 + iVar20)) * 0x10000 |
                          *(uint *)(pZVar7 + 0x14) & 0xffff,*(long *)(this + 0x420));
    FUN_001652d4(*(undefined4 *)(iVar9 * 4 + *(int *)(this + 0x20)),uVar10);
  }
  iVar9 = ZombieCafe::getRecipeRank(pZVar7,*(uchar **)(pZVar7 + 0x1c));
  iVar9 = getCafeRank(this,iVar9);
  iVar23 = DAT_001688dc + 0x168822;
  uVar10 = *(undefined4 *)(iVar23 + iVar9 * 4 + 0x3c);
  iVar9 = ZombieCafe::getRecipeRank
                    (*(ZombieCafe **)(this + 0xc),*(uchar **)(*(ZombieCafe **)(this + 0xc) + 0x1c));
  iVar9 = getCafeRank(this,iVar9);
  *(undefined4 *)(&stack0x00000000 + iVar20) = *(undefined4 *)(iVar23 + iVar9 * 4 + 0x4c);
  iVar9 = ZombieCafe::getRecipeRank
                    (*(ZombieCafe **)(this + 0xc),*(uchar **)(*(ZombieCafe **)(this + 0xc) + 0x1c));
  iVar9 = getCafeRank(this,iVar9);
  uVar12 = *(undefined4 *)(&stack0x00000000 + iVar20);
  *puVar36 = uVar10;
  uVar10 = *(undefined4 *)(iVar23 + iVar9 * 4 + 0x5c);
  iVar9 = 0;
  *(GameStateMap **)(&stack0x00000004 + iVar20) = this + 0xdc;
  *(undefined4 *)(&stack0xfffffff4 + iVar20) = uVar12;
  *(undefined4 *)(&stack0xfffffff0 + iVar20) = 0;
  uVar10 = __floatsisf(uVar10);
  __mulsf3(uVar10,*(undefined4 *)(this + 0xc0));
  uVar10 = __fixsfsi();
  *(undefined4 *)(&stack0xfffffff8 + iVar20) = uVar10;
  positionCafe(this,*(MapCafe **)(&stack0x00000004 + iVar20),0,2,*piVar37,
               *(int *)(&stack0xfffffff0 + iVar20),*(int *)(&stack0xfffffff4 + iVar20),
               *(int *)(&stack0xfffffff8 + iVar20));
  *(int *)(&stack0x00000000 + iVar20) = DAT_001688e0 + 0x168888;
  while( true ) {
    iVar23 = *(int *)(this + 200);
    iVar24 = *(int *)(this + 0xcc);
    if (iVar23 + 1 <= iVar9) break;
    MapCafe::MapCafe((MapCafe *)(&stack0x00000258 + iVar20),(MapCafe *)(iVar24 + iVar9 * 0x54));
    (&stack0xffffffec)[DAT_001688e4 + iVar20] = 0;
    *(GameStateMap **)(&stack0x00000004 + iVar20) = this + 0x90;
    uVar11 = __divsi3(iVar9,3);
    *(uint *)(&stack0x00000004 + iVar20) = ~uVar11 * **(int **)(&stack0x00000004 + iVar20);
    __aeabi_idivmod(iVar9,3);
    iVar23 = *(int *)(this + 200);
    *(undefined4 *)(&stack0x00000008 + iVar20) = extraout_r1;
    if (iVar9 == iVar23) {
      *puVar38 = 0;
      *(undefined4 *)(&stack0xfffffff0 + iVar20) = 0;
      *(undefined4 *)(&stack0xfffffff4 + iVar20) = 0;
      *(undefined4 *)(&stack0xfffffff8 + iVar20) = 0;
    }
    else {
      iVar23 = getCafeRank(this,*(int *)(&stack0x0000029c + iVar20));
      uVar12 = *(undefined4 *)(*(int *)(&stack0x00000000 + iVar20) + iVar23 * 4 + 0x3c);
      iVar23 = getCafeRank(this,*(int *)(&stack0x0000029c + iVar20));
      *(undefined4 *)(&stack0x0000000c + iVar20) =
           *(undefined4 *)(DAT_00168aac + iVar23 * 4 + 0x168956);
      iVar23 = getCafeRank(this,*(int *)(&stack0x0000029c + iVar20));
      *(undefined4 *)(&stack0xfffffff0 + iVar20) = 0;
      uVar10 = *(undefined4 *)(DAT_00168ab0 + iVar23 * 4 + 0x16897e);
      *(undefined4 *)(&stack0xfffffff4 + iVar20) = *(undefined4 *)(&stack0x0000000c + iVar20);
      *puVar39 = uVar12;
      uVar10 = __floatsisf(uVar10);
      __mulsf3(uVar10,*(undefined4 *)(this + 0xc0));
      uVar10 = __fixsfsi();
      *(undefined4 *)(&stack0xfffffff8 + iVar20) = uVar10;
    }
    positionCafe(this,(MapCafe *)(&stack0x00000258 + iVar20),*(int *)(&stack0x00000004 + iVar20),
                 *(int *)(&stack0x00000008 + iVar20),*piVar40,*(int *)(&stack0xfffffff0 + iVar20),
                 *(int *)(&stack0xfffffff4 + iVar20),*(int *)(&stack0xfffffff8 + iVar20));
    String::~String((String *)(&stack0x00000288 + iVar20));
    iVar9 = iVar9 + 1;
  }
  *(undefined4 *)(&stack0x00000000 + iVar20) = *(undefined4 *)(this + 0x3d4);
  MapCafe::MapCafe((MapCafe *)(&stack0x00000108 + iVar20),(MapCafe *)(iVar24 + iVar23 * 0x54));
  iVar9 = *(int *)(this + 200);
  *(undefined4 *)(&stack0x00000004 + iVar20) =
       *(undefined4 *)(*(int *)(&stack0x00000108 + iVar20) + 4);
  uVar11 = *(uint *)(*(int *)(&stack0x00000108 + iVar20) + 8);
  MapCafe::MapCafe((MapCafe *)(&stack0x0000015c + iVar20),
                   (MapCafe *)(*(int *)(this + 0xcc) + iVar9 * 0x54));
  iVar9 = *(int *)(*(int *)(&stack0x0000015c + iVar20) + 0xc);
  MapCafe::MapCafe((MapCafe *)(&stack0x000001b0 + iVar20),
                   (MapCafe *)(*(int *)(this + 0xcc) + *(int *)(this + 200) * 0x54));
  FUN_001652d4(*(undefined4 *)(&stack0x00000000 + iVar20),
               (uVar11 & 0xffff | *(int *)(&stack0x00000004 + iVar20) << 0x10) -
               (*(int *)(*(int *)(&stack0x000001b0 + iVar20) + 0x10) / 2 & 0xffffU |
               iVar9 / 2 << 0x10));
  String::~String((String *)(&stack0x000001e0 + iVar20));
  String::~String((String *)(&stack0x0000018c + iVar20));
  String::~String((String *)(&stack0x00000138 + iVar20));
  uVar10 = __floatsisf((int)*(short *)(*(int *)(this + 0xc) + 0x16));
  __aeabi_idivmod(*(int *)(this + 200) + 1,3);
  *(int *)(&stack0x00000000 + iVar20) = extraout_r1_00 * 6;
  iVar9 = SmDev();
  uVar10 = __addsf3(uVar10,*(undefined4 *)
                            ((iVar9 + *(int *)(&stack0x00000000 + iVar20)) * 4 +
                            *(int *)(this_09 + DAT_00168ab4)));
  *(undefined4 *)(&stack0x00000004 + iVar20) = uVar10;
  uVar11 = __divsi3(*(int *)(this + 200) + 1,3);
  uVar10 = __floatsisf(*(int *)(this + 0x90) * ~uVar11);
  uVar10 = __addsf3(*(undefined4 *)(&stack0x00000004 + iVar20),uVar10);
  iVar9 = SmDev();
  __addsf3(uVar10,*(undefined4 *)(iVar9 * 4 + *(int *)(this_09 + DAT_00168ab8)));
  iVar9 = __fixsfsi();
  uVar10 = __floatsisf((int)*(short *)(*(int *)(this + 0xc) + 0x16));
  iVar23 = SmDev();
  uVar10 = __addsf3(uVar10,*(undefined4 *)
                            ((iVar23 + *(int *)(&stack0x00000000 + iVar20)) * 4 +
                            *(int *)(this_09 + DAT_00168abc)));
  iVar23 = SmDev();
  __addsf3(uVar10,*(undefined4 *)(iVar23 * 4 + *(int *)(this_09 + DAT_00168ac0)));
  uVar11 = __fixsfsi();
  uVar10 = CFPoint::add(uVar11 & 0xffff | iVar9 << 0x10,*(long *)(this + 0x420));
  FUN_001652d4(*(undefined4 *)(this + 0x38),uVar10);
  iVar9 = 0;
  while (iVar9 < *(int *)(this + 0xd4) + 1) {
    MapCafe::MapCafe((MapCafe *)(&stack0x00000258 + iVar20),
                     (MapCafe *)(*(int *)(this + 0xd8) + iVar9 * 0x54));
    *(int *)(&stack0x00000000 + iVar20) = iVar9 + 1;
    iVar23 = __divsi3(iVar9 + 1,3);
    iVar24 = *(int *)(this + 0x90);
    __aeabi_idivmod(*(undefined4 *)(&stack0x00000000 + iVar20),3);
    *(int *)(&stack0x00000004 + iVar20) = 2 - extraout_r1_01;
    *puVar41 = 0;
    *(undefined4 *)(&stack0xfffffff0 + iVar20) = 0;
    *(undefined4 *)(&stack0xfffffff4 + iVar20) = 0;
    __mulsf3(*(undefined4 *)(this + 0xc0),0x42000000);
    uVar10 = __fixsfsi();
    *(undefined4 *)(&stack0xfffffff8 + iVar20) = uVar10;
    positionCafe(this,(MapCafe *)(&stack0x00000258 + iVar20),iVar23 * iVar24,
                 *(int *)(&stack0x00000004 + iVar20),*piVar42,*(int *)(&stack0xfffffff0 + iVar20),
                 *(int *)(&stack0xfffffff4 + iVar20),*(int *)(&stack0xfffffff8 + iVar20));
    if ((&stack0x00000294)[iVar20] == '\v') {
      *puVar43 = 0xf;
      *(undefined4 *)(&stack0xfffffff0 + iVar20) = 0;
      *(undefined4 *)(&stack0xfffffff4 + iVar20) = 0;
      *(undefined4 *)(&stack0xfffffff8 + iVar20) = 0;
      positionCafe(this,(MapCafe *)(&stack0x00000258 + iVar20),iVar23 * iVar24,
                   *(int *)(&stack0x00000004 + iVar20),*piVar44,*(int *)(&stack0xfffffff0 + iVar20),
                   *(int *)(&stack0xfffffff4 + iVar20),*(int *)(&stack0xfffffff8 + iVar20));
    }
    if (((&stack0x000002a8)[iVar20] != '\0') &&
       ((this[0x4c] == (GameStateMap)0x0 || (iVar9 != *(int *)(this + 0xd4))))) {
      *(undefined4 *)(&stack0x00000004 + iVar20) = *(undefined4 *)(this + 0xc);
      uVar1 = **(undefined1 **)(this_09 + DAT_00168d40);
      *(undefined1 **)(&stack0x00000008 + iVar20) = *(undefined1 **)(this_09 + DAT_00168d40);
      __aeabi_idivmod(*(undefined4 *)(&stack0x00000290 + iVar20),uVar1);
      if (*(int *)(extraout_r1_02 * 4 + *(int *)(*(int *)(&stack0x00000004 + iVar20) + DAT_00168d44)
                  ) < 1) {
        (&stack0x000002a8)[iVar20] = 0;
        iVar23 = ZombieCafe::isEventCafeTheme
                           (*(ZombieCafe **)(&stack0x00000004 + iVar20),
                            (uint)(byte)(&stack0x00000294)[iVar20]);
        if (iVar23 == 0) {
          if (*(int **)(*(int *)(&stack0x00000258 + iVar20) + 0x60) != (int *)0x0) {
            (**(code **)(**(int **)(*(int *)(&stack0x00000258 + iVar20) + 0x60) + 4))();
          }
          *(undefined4 *)(&stack0x00000004 + iVar20) = *(undefined4 *)(this + 0xc);
          __aeabi_idivmod(*(undefined4 *)(&stack0x00000290 + iVar20),
                          **(undefined1 **)(&stack0x00000008 + iVar20));
          uVar11 = (uint)*(byte *)(*(int *)(*(int *)(&stack0x00000004 + iVar20) + DAT_00168d4c) +
                                  extraout_r1_03);
          if ((int)(**(int **)(this_09 + DAT_00168d48) - 1U) < (int)uVar11) {
            uVar11 = **(int **)(this_09 + DAT_00168d48) - 1U;
          }
          (&stack0x00000294)[iVar20] = (char)uVar11;
          iVar23 = *(int *)(&stack0x00000258 + iVar20);
          uVar10 = PackedImage::getImage
                             (*(PackedImage **)(*(int *)(&stack0x00000004 + iVar20) + 0x7f8),
                              *(int *)((uVar11 & 0xff) * 4 + *(int *)(this_09 + DAT_00168d50)),false
                             );
          *(undefined4 *)(iVar23 + 0x60) = uVar10;
          piVar32 = *(int **)(&stack0x00000258 + iVar20);
          this_00 = (CImage *)piVar32[0x18];
          *(undefined4 *)(&stack0x00000004 + iVar20) = *(undefined4 *)(*piVar32 + 0x18);
          uVar10 = CImage::getWidth(this_00);
          *(undefined4 *)(&stack0x00000008 + iVar20) = uVar10;
          iVar23 = CapcomApp::getInstance();
          *(undefined4 *)(&stack0x0000000c + iVar20) = *(undefined4 *)(iVar23 + 0x40);
          uVar10 = CImage::getHeight(*(CImage **)(*(int *)(&stack0x00000258 + iVar20) + 0x60));
          *(undefined4 *)(&stack0x00000010 + iVar20) = uVar10;
          uVar10 = CapcomApp::getInstance();
          *(undefined4 *)(&stack0x00000014 + iVar20) = uVar10;
          uVar10 = __floatsisf(*(undefined4 *)(&stack0x00000008 + iVar20));
          __mulsf3(uVar10,*(undefined4 *)(&stack0x0000000c + iVar20));
          uVar10 = __fixsfsi();
          *(undefined4 *)(&stack0x00000008 + iVar20) = uVar10;
          uVar10 = __floatsisf(*(undefined4 *)(&stack0x00000010 + iVar20));
          __mulsf3(uVar10,*(undefined4 *)(*(int *)(&stack0x00000014 + iVar20) + 0x44));
          uVar10 = __fixsfsi();
          (**(code **)(&stack0x00000004 + iVar20))
                    (piVar32,*(undefined4 *)(&stack0x00000008 + iVar20),uVar10);
        }
        (**(code **)(**(int **)(this + 0x14) + 0x34))
                  (*(int **)(this + 0x14),*(undefined4 *)(&stack0x0000025c + iVar20));
        (**(code **)(**(int **)(this + 0x14) + 0x34))
                  (*(int **)(this + 0x14),*(undefined4 *)(&stack0x00000264 + iVar20));
        (**(code **)(**(int **)(this + 0x14) + 0x34))
                  (*(int **)(this + 0x14),*(undefined4 *)(&stack0x00000268 + iVar20));
        (**(code **)(**(int **)(this + 0x14) + 0x34))
                  (*(int **)(this + 0x14),*(undefined4 *)(&stack0x0000026c + iVar20));
        (**(code **)(**(int **)(this + 0x14) + 0x34))
                  (*(int **)(this + 0x14),*(undefined4 *)(&stack0x00000270 + iVar20));
        if (*(int **)(*(int *)(&stack0x0000025c + iVar20) + 100) != (int *)0x0) {
          (**(code **)(**(int **)(*(int *)(&stack0x0000025c + iVar20) + 100) + 4))();
        }
        if (*(int **)(&stack0x0000025c + iVar20) != (int *)0x0) {
          (**(code **)(**(int **)(&stack0x0000025c + iVar20) + 4))();
        }
        if (*(int **)(*(int *)(&stack0x00000264 + iVar20) + 0x60) != (int *)0x0) {
          (**(code **)(**(int **)(*(int *)(&stack0x00000264 + iVar20) + 0x60) + 4))();
        }
        if (*(int **)(&stack0x00000264 + iVar20) != (int *)0x0) {
          (**(code **)(**(int **)(&stack0x00000264 + iVar20) + 4))();
        }
        if (*(int **)(*(int *)(&stack0x00000268 + iVar20) + 100) != (int *)0x0) {
          (**(code **)(**(int **)(*(int *)(&stack0x00000268 + iVar20) + 100) + 4))();
        }
        if (*(int **)(&stack0x00000268 + iVar20) != (int *)0x0) {
          (**(code **)(**(int **)(&stack0x00000268 + iVar20) + 4))();
        }
        if (*(int **)(&stack0x0000026c + iVar20) != (int *)0x0) {
          (**(code **)(**(int **)(&stack0x0000026c + iVar20) + 4))();
        }
        if (*(int **)(&stack0x00000270 + iVar20) != (int *)0x0) {
          (**(code **)(**(int **)(&stack0x00000270 + iVar20) + 4))();
        }
        *(undefined4 *)(&stack0x0000025c + iVar20) = 0;
        *(undefined4 *)(&stack0x00000264 + iVar20) = 0;
        *(undefined4 *)(&stack0x00000268 + iVar20) = 0;
        *(undefined4 *)(&stack0x0000026c + iVar20) = 0;
        *(undefined4 *)(&stack0x00000270 + iVar20) = 0;
        iVar23 = ZombieCafe::isEventCafeTheme
                           (*(ZombieCafe **)(this + 0xc),(uint)(byte)(&stack0x00000294)[iVar20]);
        if (iVar23 == 0) {
          piVar32 = *(int **)(&stack0x00000278 + iVar20);
          *(undefined4 *)(&stack0x00000004 + iVar20) = *(undefined4 *)(*piVar32 + 0x44);
          ZombieCafe::getEnemyCafeName((int)(&stack0x00000020 + iVar20));
          (**(code **)(&stack0x00000004 + iVar20))(piVar32,&stack0x00000020 + iVar20);
          String::~String((String *)(&stack0x00000020 + iVar20));
        }
        else {
          setBossName(this,(uint)(byte)(&stack0x00000294)[iVar20],
                      (MapCafe *)(&stack0x00000258 + iVar20));
        }
        piVar32 = *(int **)(&stack0x00000260 + iVar20);
        if (piVar32 != (int *)0x0) {
          (**(code **)(*piVar32 + 0x20))(piVar32,1);
        }
        MapCafe::MapCafe((MapCafe *)(&stack0x00000204 + iVar20),
                         (MapCafe *)(&stack0x00000258 + iVar20));
        Vector<GameStateMap::MapCafe>::setElementAt
                  ((Vector<GameStateMap::MapCafe> *)(this + 0xd0),&stack0x00000204 + iVar20,iVar9);
        puVar6 = &stack0x00000234;
      }
      else {
        piVar32 = *(int **)(&stack0x00000278 + iVar20);
        *(undefined4 *)(&stack0x0000000c + iVar20) = *(undefined4 *)(*piVar32 + 0x44);
        Vector<String>::elementAt((int)(&stack0x00000028 + iVar20));
        iVar9 = *(int *)(this + 0xc);
        __aeabi_idivmod(*(undefined4 *)(&stack0x00000290 + iVar20),
                        **(undefined1 **)(&stack0x00000008 + iVar20));
        uVar14 = __divsi3(*(undefined4 *)(extraout_r1_04 * 4 + *(int *)(iVar9 + DAT_00169058)),1000)
        ;
        StringUtil::createTimeString((StringUtil *)(&stack0x00000030 + iVar20),uVar14,'\x02');
        String::operator+((String *)(&stack0x00000038 + iVar20),&stack0x00000028 + iVar20,
                          &stack0x00000030 + iVar20);
        (**(code **)(&stack0x0000000c + iVar20))(piVar32,&stack0x00000038 + iVar20);
        String::~String((String *)(&stack0x00000038 + iVar20));
        String::~String((String *)(&stack0x00000030 + iVar20));
        puVar6 = &stack0x00000028;
      }
      String::~String((String *)(puVar6 + iVar20));
    }
    String::~String((String *)(&stack0x00000288 + iVar20));
    iVar9 = *(int *)(&stack0x00000000 + iVar20);
  }
  setWeekRaidShopPosition(this);
  setEventRaidShopPosition(this);
  setEventRaid2ShopPosition(this);
  setEventRaid3ShopPosition(this);
  setAmpouleRaidShopPosition(this);
  setColosseumPosition(this);
  uVar64 = setHeroShopPosition(this);
  iVar9 = DAT_0016905c;
  *(undefined1 *)(*(int *)(this + 0x130) + 0x91) = 0;
  *(undefined1 *)(*(int *)(this + 0x130) + 0x90) = 0;
  iVar23 = *(int *)(this + 0xc);
  if (*(char *)(iVar23 + iVar9) != '\0') {
    uVar64 = FUN_00169830();
  }
  iVar9 = DAT_00169060;
  iVar24 = *(int *)(iVar23 + DAT_00169060);
  if (iVar24 == 0) {
    uVar64 = FUN_00169830();
  }
  if (*(int *)(iVar23 + 0x4b8) != 0) {
    uVar64 = FUN_00169830();
  }
  if ((int)**(short **)(this_09 + DAT_00169064) < *(int *)(iVar23 + DAT_00169068)) {
    uVar64 = FUN_00169830();
  }
  pZVar15 = *(ZCImageButton **)(this + 0x28);
  if (pZVar15[0x14] != (ZCImageButton)0x0) {
    *puVar45 = 0x3f800000;
    iVar23 = ZCImageButton::contains
                       (pZVar15,iVar24 >> 0x10,(int)(short)iVar24,(float)uVar64,
                        (float)((ulonglong)uVar64 >> 0x20));
    uVar64 = CONCAT44(extraout_s1,extraout_s0);
    if (iVar23 != 0) {
      uVar64 = ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0);
      *(undefined4 *)(this + 0xa4) = DAT_0016906c;
    }
  }
  pZVar15 = *(ZCImageButton **)(this + 0x2c);
  if (pZVar15[0x14] != (ZCImageButton)0x0) {
    iVar23 = *(int *)(*(int *)(this + 0xc) + iVar9);
    *puVar46 = 0x3f800000;
    iVar23 = ZCImageButton::contains
                       (pZVar15,iVar23 >> 0x10,(int)(short)iVar23,(float)uVar64,
                        (float)((ulonglong)uVar64 >> 0x20));
    uVar64 = CONCAT44(extraout_s1_00,extraout_s0_00);
    if (iVar23 != 0) {
      uVar64 = ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_00);
      *(undefined4 *)(this + 0xa4) = DAT_00169070;
    }
  }
  pZVar15 = *(ZCImageButton **)(this + 0x24);
  iVar23 = *(int *)(*(int *)(this + 0xc) + iVar9);
  *puVar47 = 0x3f800000;
  iVar23 = ZCImageButton::contains
                     (pZVar15,iVar23 >> 0x10,(int)(short)iVar23,(float)uVar64,
                      (float)((ulonglong)uVar64 >> 0x20));
  fVar63 = extraout_s0_01;
  if (iVar23 == 0) {
    iVar23 = ScreenElement::contains
                       (*(ScreenElement **)(this + 0xdc),
                        *(long *)(*(int *)(this + 0xc) + DAT_00169060));
    uVar64 = CONCAT44(extraout_s1_01,extraout_s0_02);
    fVar63 = extraout_s0_02;
    if (iVar23 != 0) goto LAB_00168ed6;
  }
  else {
LAB_00168ed6:
    ZombieCafe::playEffect(*(int *)(this + 0xc),fVar63);
    *(undefined4 *)(&stack0x00000004 + iVar20) = *(undefined4 *)(this + 0xc);
    pGVar16 = (GameStateCafe *)operator_new(0x200);
    *(GameStateCafe **)(&stack0x00000000 + iVar20) = pGVar16;
    GameStateCafe::GameStateCafe(pGVar16);
    pGVar8 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(pGVar8,*(GameState **)(&stack0x00000000 + iVar20));
    uVar64 = CapcomGame::setNextState
                       (*(CapcomGame **)(&stack0x00000004 + iVar20),(GameState *)pGVar8);
  }
  GVar3 = this[0x460];
  *(uint *)(&stack0x00000000 + iVar20) = (uint)(byte)GVar3;
  if ((byte)GVar3 == 0) {
    while (*(int *)(&stack0x00000000 + iVar20) < *(int *)(this + 200) + 1) {
      MapCafe::MapCafe((MapCafe *)(&stack0x00000258 + iVar20),
                       (MapCafe *)
                       (*(int *)(this + 0xcc) + *(int *)(&stack0x00000000 + iVar20) * 0x54));
      iVar23 = ScreenElement::contains
                         (*(ScreenElement **)(&stack0x00000258 + iVar20),
                          *(long *)(*(int *)(this + 0xc) + iVar9));
      if (iVar23 != 0) {
        ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_03);
        iVar23 = javaIsConnected();
        if (iVar23 != 0) {
          *(undefined4 *)(this + 0x9c) = *(undefined4 *)(&stack0x00000000 + iVar20);
          TutorialSystem::triggerEvent
                    (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_00169074),'(',false);
          iVar23 = DAT_00169080;
          iVar24 = *(int *)(this + 200);
          *(undefined4 *)(&stack0x00000004 + iVar20) = *(undefined4 *)(this_09 + DAT_00169078);
          *(undefined4 *)(&stack0x00000008 + iVar20) = *(undefined4 *)(this_09 + DAT_0016907c);
          if (*(int *)(&stack0x00000000 + iVar20) == iVar24) {
            L_PrintLog((char *)(DAT_00169084 + 0x168f84),(char *)(DAT_00169088 + 0x168f86));
            p_Var21 = *(_func_void_void_ptr_char_ptr_uchar_ptr_uint **)(&stack0x00000004 + iVar20);
            p_Var22 = *(_func_void_void_ptr_ccServerFailureCode **)(&stack0x00000008 + iVar20);
            pvVar17 = *(void **)(*(int *)(this + 0xc) + iVar23);
            *puVar48 = 0xd;
            CCServer::RetrieveRandomGameState(pvVar17,p_Var21,p_Var22,this,*piVar49);
            this[0x460] = (GameStateMap)0x1;
            *(undefined1 *)(*(int *)(this + 0xc) + DAT_0016905c) = 1;
          }
          else {
            L_PrintLog((char *)(DAT_0016908c + 0x168fb2),(char *)(DAT_00169090 + 0x168fb4));
            pvVar17 = *(void **)(*(int *)(this + 0xc) + iVar23);
            pcVar18 = (char *)CCServer::GetFriendUniqueId
                                        (pvVar17,*(uint *)(&stack0x00000280 + iVar20));
            *(undefined4 *)(&stack0xfffffff0 + iVar20) = 0;
            p_Var21 = *(_func_void_void_ptr_char_ptr_uchar_ptr_uint **)(&stack0x00000004 + iVar20);
            p_Var22 = *(_func_void_void_ptr_ccServerFailureCode **)(&stack0x00000008 + iVar20);
            *puVar50 = this;
            CCServer::RetrieveGameStateForUniqueId
                      (pvVar17,pcVar18,p_Var21,p_Var22,(void *)*puVar51,
                       *(uint *)(&stack0xfffffff0 + iVar20));
            this[0x460] = (GameStateMap)0x1;
          }
          uVar64 = String::~String((String *)(&stack0x00000288 + iVar20));
          break;
        }
        *(undefined4 *)(&stack0x00000004 + iVar20) = *(undefined4 *)(this + DAT_00169094);
        Vector<String>::elementAt((int)(&stack0x00000040 + iVar20));
        Vector<String>::elementAt((int)(&stack0x00000048 + iVar20));
        pNVar33 = *(NoticeDialog **)(&stack0x00000004 + iVar20);
        *puVar52 = 0;
        NoticeDialog::show(pNVar33,&stack0x00000040 + iVar20,&stack0x00000048 + iVar20);
        String::~String((String *)(&stack0x00000048 + iVar20));
        String::~String((String *)(&stack0x00000040 + iVar20));
      }
      uVar64 = String::~String((String *)(&stack0x00000288 + iVar20));
      *(int *)(&stack0x00000000 + iVar20) = *(int *)(&stack0x00000000 + iVar20) + 1;
    }
  }
  *(undefined4 *)(&stack0x00000000 + iVar20) = 0;
  *(GameStateMap **)(&stack0x00000004 + iVar20) = this + 0xd0;
  if (*(int *)(&stack0x00000000 + iVar20) < *(int *)(*(int *)(&stack0x00000004 + iVar20) + 4) + 1) {
    MapCafe::MapCafe((MapCafe *)(&stack0x00000258 + iVar20),
                     (MapCafe *)
                     (*(int *)(*(int *)(&stack0x00000004 + iVar20) + 8) +
                     *(int *)(&stack0x00000000 + iVar20) * 0x54));
    iVar23 = ScreenElement::contains
                       (*(ScreenElement **)(&stack0x00000258 + iVar20),
                        *(long *)(*(int *)(this + 0xc) + iVar9));
    if (iVar23 == 0) {
      FUN_00169adc();
    }
    if ((&stack0x000002a8)[iVar20] != '\0') {
      FUN_00169adc();
    }
    iVar23 = TutorialSystem::isTutorialCompleted
                       (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0016934c),'%');
    fVar63 = extraout_s0_04;
    if ((iVar23 == 0) && (*(int *)(&stack0x00000000 + iVar20) != 0)) {
      fVar63 = (float)FUN_00169adc();
    }
    ZombieCafe::playEffect(*(int *)(this + 0xc),fVar63);
    iVar23 = ZombieCafe::haveZombies(*(ZombieCafe **)(this + 0xc));
    if (iVar23 == 0) {
      *(undefined4 *)(&stack0x00000000 + iVar20) = *(undefined4 *)(this + _DAT_00169354);
      Vector<String>::elementAt((int)(&stack0x00000060 + iVar20));
      Vector<String>::elementAt((int)(&stack0x00000068 + iVar20));
      pNVar33 = *(NoticeDialog **)(&stack0x00000000 + iVar20);
      *puVar54 = this;
      NoticeDialog::show(pNVar33,&stack0x00000060 + iVar20,&stack0x00000068 + iVar20,0);
      String::~String((String *)(&stack0x00000068 + iVar20));
      puVar6 = &stack0x00000060;
    }
    else {
      iVar23 = ZombieCafe::isEventCafeTheme
                         (*(ZombieCafe **)(this + 0xc),(uint)(byte)(&stack0x00000294)[iVar20]);
      if (iVar23 == 0) {
        FUN_00169aea();
      }
      iVar23 = eventCafeZombieNumCheck(this);
      if (iVar23 != 0) {
        FUN_00169aea();
      }
      pNVar33 = *(NoticeDialog **)(this + _DAT_00169354);
      String::String((String *)(&stack0x00000050 + iVar20),(char *)(_DAT_00169350 + 0x16912a));
      Vector<String>::elementAt((int)(&stack0x00000058 + iVar20));
      *puVar53 = this;
      NoticeDialog::show(pNVar33,&stack0x00000050 + iVar20,&stack0x00000058 + iVar20,0);
      String::~String((String *)(&stack0x00000058 + iVar20));
      puVar6 = &stack0x00000050;
    }
    String::~String((String *)(puVar6 + iVar20));
    uVar64 = String::~String((String *)(&stack0x00000288 + iVar20));
  }
  if (*(ScreenElement **)(this + 0x328) != (ScreenElement *)0x0) {
    iVar23 = ScreenElement::contains
                       (*(ScreenElement **)(this + 0x328),*(long *)(*(int *)(this + 0xc) + iVar9));
    uVar64 = CONCAT44(extraout_s1_02,extraout_s0_05);
    if (iVar23 != 0) {
      ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_05);
      *(undefined4 *)(&stack0x00000004 + iVar20) = *(undefined4 *)(this + 0xc);
      this_01 = (GameStateAmpouleRaidMenu *)operator_new(0x98);
      *(GameStateAmpouleRaidMenu **)(&stack0x00000000 + iVar20) = this_01;
      GameStateAmpouleRaidMenu::GameStateAmpouleRaidMenu(this_01);
      pGVar8 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar8,*(GameState **)(&stack0x00000000 + iVar20));
      uVar64 = CapcomGame::setNextState
                         (*(CapcomGame **)(&stack0x00000004 + iVar20),(GameState *)pGVar8);
      *(undefined1 *)(*(int *)(this + 0xc) + DAT_00169680) = 1;
    }
  }
  if (*(ScreenElement **)(this + 0x2d4) != (ScreenElement *)0x0) {
    iVar23 = ScreenElement::contains
                       (*(ScreenElement **)(this + 0x2d4),*(long *)(*(int *)(this + 0xc) + iVar9));
    uVar64 = CONCAT44(extraout_s1_03,extraout_s0_06);
    if (iVar23 != 0) {
      ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_06);
      *(undefined4 *)(&stack0x00000004 + iVar20) = *(undefined4 *)(this + 0xc);
      this_02 = (GameStateEventRaid3Menu *)operator_new(0xf0);
      *(GameStateEventRaid3Menu **)(&stack0x00000000 + iVar20) = this_02;
      GameStateEventRaid3Menu::GameStateEventRaid3Menu(this_02);
      pGVar8 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar8,*(GameState **)(&stack0x00000000 + iVar20));
      uVar64 = CapcomGame::setNextState
                         (*(CapcomGame **)(&stack0x00000004 + iVar20),(GameState *)pGVar8);
      *(undefined1 *)(*(int *)(this + 0xc) + DAT_00169680) = 1;
    }
  }
  if (*(ScreenElement **)(this + 0x280) != (ScreenElement *)0x0) {
    iVar23 = ScreenElement::contains
                       (*(ScreenElement **)(this + 0x280),*(long *)(*(int *)(this + 0xc) + iVar9));
    uVar64 = CONCAT44(extraout_s1_04,extraout_s0_07);
    if (iVar23 != 0) {
      ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_07);
      *(undefined4 *)(&stack0x00000004 + iVar20) = *(undefined4 *)(this + 0xc);
      this_03 = (GameStateEventRaid2Menu *)operator_new(0x114);
      *(GameStateEventRaid2Menu **)(&stack0x00000000 + iVar20) = this_03;
      GameStateEventRaid2Menu::GameStateEventRaid2Menu(this_03);
      pGVar8 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar8,*(GameState **)(&stack0x00000000 + iVar20));
      uVar64 = CapcomGame::setNextState
                         (*(CapcomGame **)(&stack0x00000004 + iVar20),(GameState *)pGVar8);
      *(undefined1 *)(*(int *)(this + 0xc) + DAT_00169680) = 1;
    }
  }
  if (*(ScreenElement **)(this + 0x22c) != (ScreenElement *)0x0) {
    iVar23 = ScreenElement::contains
                       (*(ScreenElement **)(this + 0x22c),*(long *)(*(int *)(this + 0xc) + iVar9));
    uVar64 = CONCAT44(extraout_s1_05,extraout_s0_08);
    if (iVar23 != 0) {
      ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_08);
      *(undefined4 *)(&stack0x00000004 + iVar20) = *(undefined4 *)(this + 0xc);
      this_04 = (GameStateEventRaidMenu *)operator_new(0xbc);
      *(GameStateEventRaidMenu **)(&stack0x00000000 + iVar20) = this_04;
      GameStateEventRaidMenu::GameStateEventRaidMenu(this_04);
      pGVar8 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar8,*(GameState **)(&stack0x00000000 + iVar20));
      uVar64 = CapcomGame::setNextState
                         (*(CapcomGame **)(&stack0x00000004 + iVar20),(GameState *)pGVar8);
      *(undefined1 *)(*(int *)(this + 0xc) + DAT_00169680) = 1;
    }
  }
  if (*(ScreenElement **)(this + 0x37c) != (ScreenElement *)0x0) {
    iVar23 = ScreenElement::contains
                       (*(ScreenElement **)(this + 0x37c),*(long *)(*(int *)(this + 0xc) + iVar9));
    uVar64 = CONCAT44(extraout_s1_06,extraout_s0_09);
    if (iVar23 != 0) {
      ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_09);
      *(undefined4 *)(&stack0x00000004 + iVar20) = *(undefined4 *)(this + 0xc);
      this_05 = (GameStateWeekRaidMenu *)operator_new(0xd4);
      *(GameStateWeekRaidMenu **)(&stack0x00000000 + iVar20) = this_05;
      GameStateWeekRaidMenu::GameStateWeekRaidMenu(this_05);
      pGVar8 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar8,*(GameState **)(&stack0x00000000 + iVar20));
      uVar64 = CapcomGame::setNextState
                         (*(CapcomGame **)(&stack0x00000004 + iVar20),(GameState *)pGVar8);
      *(undefined1 *)(*(int *)(this + 0xc) + DAT_00169680) = 1;
    }
  }
  if (*(ScreenElement **)(this + 0x184) != (ScreenElement *)0x0) {
    iVar23 = ScreenElement::contains
                       (*(ScreenElement **)(this + 0x184),*(long *)(*(int *)(this + 0xc) + iVar9));
    uVar64 = CONCAT44(extraout_s1_07,extraout_s0_10);
    if (iVar23 != 0) {
      ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_10);
      *(undefined4 *)(&stack0x00000004 + iVar20) = *(undefined4 *)(this + 0xc);
      this_06 = (GameStateSurvivalMenu *)operator_new(0xc4);
      *(GameStateSurvivalMenu **)(&stack0x00000000 + iVar20) = this_06;
      GameStateSurvivalMenu::GameStateSurvivalMenu(this_06);
      pGVar8 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar8,*(GameState **)(&stack0x00000000 + iVar20));
      uVar64 = CapcomGame::setNextState
                         (*(CapcomGame **)(&stack0x00000004 + iVar20),(GameState *)pGVar8);
      *(undefined1 *)(*(int *)(this + 0xc) + DAT_00169680) = 1;
    }
  }
  if (*(ScreenElement **)(this + 0x1d8) == (ScreenElement *)0x0) goto LAB_00169778;
  iVar23 = ScreenElement::contains
                     (*(ScreenElement **)(this + 0x1d8),*(long *)(*(int *)(this + 0xc) + iVar9));
  uVar64 = CONCAT44(extraout_s1_08,extraout_s0_11);
  iVar24 = *(int *)(this + 0xc);
  if ((iVar23 == 0) || (this[0x228] != (GameStateMap)0x0)) {
    if ((this[0x228] == (GameStateMap)0x0) ||
       (uVar64 = CONCAT44(extraout_s1_08,extraout_s0_11), *(int *)(iVar24 + _DAT_001699f4) < 0x3e9))
    goto LAB_00169778;
    iVar23 = ScreenElement::contains(*(ScreenElement **)(this + 0x1e4),*(long *)(iVar24 + iVar9));
    uVar64 = CONCAT44(extraout_s1_09,extraout_s0_12);
    if (iVar23 == 0) goto LAB_00169778;
    puts((char *)(_DAT_001699f8 + 0x1696ba));
    ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_13);
    snprintf(&stack0x00000300 + iVar20,0x80,(char *)(_DAT_00169a00 + 0x1696d2),
             **(undefined4 **)(this_09 + _DAT_001699fc));
    Vector<String>::elementAt((int)(&stack0x000000c8 + iVar20));
    operator+(&stack0x000000d0 + iVar20,&stack0x00000300 + iVar20,&stack0x000000c8 + iVar20);
    Vector<String>::elementAt((int)(&stack0x000000d8 + iVar20));
    String::operator+((String *)(&stack0x00000258 + iVar20),&stack0x000000d0 + iVar20,
                      &stack0x000000d8 + iVar20);
    String::~String((String *)(&stack0x000000d8 + iVar20));
    String::~String((String *)(&stack0x000000d0 + iVar20));
    String::~String((String *)(&stack0x000000c8 + iVar20));
    *(undefined4 *)(&stack0x00000000 + iVar20) = *(undefined4 *)(this + _DAT_00169a0c);
    String::String((String *)(&stack0x000000f0 + iVar20),(String *)(&stack0x00000258 + iVar20));
    Vector<String>::elementAt((int)(&stack0x000000e0 + iVar20));
    Vector<String>::elementAt((int)(&stack0x000000e8 + iVar20));
    pCVar19 = *(ConfirmDialog **)(&stack0x00000000 + iVar20);
    uVar10 = *(undefined4 *)(this_09 + _DAT_00169a18);
    *(GameStateMap **)(&stack0xfffffff0 + iVar20) = this;
    *puVar59 = uVar10;
    ConfirmDialog::show(pCVar19,&stack0x000000f0 + iVar20,&stack0x000000e0 + iVar20,
                        &stack0x000000e8 + iVar20);
    String::~String((String *)(&stack0x000000e8 + iVar20));
    String::~String((String *)(&stack0x000000e0 + iVar20));
    String::~String((String *)(&stack0x000000f0 + iVar20));
    this_08 = (String *)(&stack0x00000258 + iVar20);
  }
  else {
    ZombieCafe::playEffect(iVar24,extraout_s0_11);
    iVar23 = javaCanOpenHero();
    if (iVar23 == 0) {
      pNVar33 = *(NoticeDialog **)(this + DAT_00169684);
      String::String((String *)(&stack0x000000b8 + iVar20),(char *)(DAT_00169690 + 0x16964e));
      Vector<String>::elementAt((int)(&stack0x000000c0 + iVar20));
      *puVar58 = this;
      NoticeDialog::show(pNVar33,&stack0x000000b8 + iVar20,&stack0x000000c0 + iVar20,0);
      String::~String((String *)(&stack0x000000c0 + iVar20));
      this_08 = (String *)(&stack0x000000b8 + iVar20);
    }
    else {
      iVar23 = ZombieCafe::haveZombies(*(ZombieCafe **)(this + 0xc));
      *(undefined4 *)(&stack0x00000004 + iVar20) = *(undefined4 *)(this + 0xc);
      if (iVar23 != 0) {
        this_07 = (GameStateRaid *)operator_new(0x18c);
        iVar23 = *(int *)(this + 0x210);
        *(GameStateRaid **)(&stack0x00000000 + iVar20) = this_07;
        GVar3 = this[0x214];
        *puVar55 = 0;
        GameStateRaid::GameStateRaid(this_07,iVar23,(uint)(byte)GVar3,false,(bool)*puVar56);
        pGVar8 = (GameStateLoading *)operator_new(0x2c);
        GameStateLoading::GameStateLoading(pGVar8,*(GameState **)(&stack0x00000000 + iVar20));
        uVar64 = CapcomGame::setNextState
                           (*(CapcomGame **)(&stack0x00000004 + iVar20),(GameState *)pGVar8);
        *(undefined1 *)(*(int *)(this + 0xc) + DAT_00169680) = 1;
        goto LAB_00169778;
      }
      *(undefined4 *)(&stack0x00000000 + iVar20) = *(undefined4 *)(this + DAT_00169684);
      Vector<String>::elementAt((int)(&stack0x000000a8 + iVar20));
      Vector<String>::elementAt((int)(&stack0x000000b0 + iVar20));
      pNVar33 = *(NoticeDialog **)(&stack0x00000000 + iVar20);
      *puVar57 = this;
      NoticeDialog::show(pNVar33,&stack0x000000a8 + iVar20,&stack0x000000b0 + iVar20,0);
      String::~String((String *)(&stack0x000000b0 + iVar20));
      this_08 = (String *)(&stack0x000000a8 + iVar20);
    }
  }
  uVar64 = String::~String(this_08);
LAB_00169778:
  pZVar15 = *(ZCImageButton **)(this + 0x38);
  iVar9 = *(int *)(*(int *)(this + 0xc) + iVar9);
  *puVar60 = 0x3f800000;
  iVar9 = ZCImageButton::contains
                    (pZVar15,iVar9 >> 0x10,(int)(short)iVar9,(float)uVar64,
                     (float)((ulonglong)uVar64 >> 0x20));
  fVar63 = extraout_s0_14;
  if (iVar9 != 0) {
    if (*(char *)(*(int *)(this + 0x438) + 0x68) != '\0') {
      fVar63 = (float)TutorialSystem::triggerEvent
                                (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_00169a1c),'@',true)
      ;
      ZombieCafe::playEffect(*(int *)(this + 0xc),fVar63);
      InviteDialog::setFacebookCallback
                (*(InviteDialog **)(this + 0x438),*(_func_void_void_ptr **)(this_09 + DAT_00169a20),
                 this);
      InviteDialog::setEmailCallback
                (*(_func_void_void_ptr **)(this + 0x438),*(void **)(this_09 + DAT_00169a24));
      InviteDialog::setSMSCallback
                (*(_func_void_void_ptr **)(this + 0x438),*(void **)(this_09 + DAT_00169a28));
      (**(code **)(**(int **)(this + 0x438) + 0x20))(*(int **)(this + 0x438),1);
      *(int *)(*(int *)(this + 0x438) + 0x6c) = DAT_00169a2c + 0x1697ee;
      FUN_00169830();
      return;
    }
    pNVar33 = *(NoticeDialog **)(this + DAT_00169a34);
    Vector<String>::elementAt((int)(&stack0x000000f8 + iVar20));
    Vector<String>::elementAt((int)(&stack0x00000100 + iVar20));
    *puVar61 = 0;
    NoticeDialog::show(pNVar33,&stack0x000000f8 + iVar20,&stack0x00000100 + iVar20);
    String::~String((String *)(&stack0x00000100 + iVar20));
    fVar63 = (float)String::~String((String *)(&stack0x000000f8 + iVar20));
  }
  if (this[0x4d] != (GameStateMap)0x0) {
    if (*(int *)(*(int *)(this + 0x44) * 4 + *(int *)(*(int *)(this + 0xc) + 0x698)) < 1) {
      pcVar30 = *(code **)(*(int *)this + 0x78);
    }
    else {
      pcVar30 = *(code **)(*(int *)this + 0x74);
    }
    fVar63 = (float)(*pcVar30)(this);
  }
  if ((this[0x4c] != (GameStateMap)0x0) &&
     (*(int *)(*(int *)(this + 0x44) * 4 + *(int *)(*(int *)(this + 0xc) + 0x698)) < 1)) {
    this[0x4d] = (GameStateMap)0x1;
  }
  if (this[0x450] == (GameStateMap)0x0) {
    this[0x450] = (GameStateMap)0x1;
    pZVar7 = *(ZombieCafe **)(this + 0xc);
    *puVar62 = 1;
    ZombieCafe::loadAndPlayMusic(pZVar7,0,0xf,fVar63,false);
  }
  if (*(char *)(*(int *)(this + 0xc) + DAT_00169a3c) != '\0') {
    *(undefined1 *)(*(int *)(this + 0xc) + DAT_00169a3c) = 0;
    iVar20 = TutorialSystem::isTutorialCompleted
                       (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_00169a1c),',');
    if (iVar20 != 0) {
      ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_15);
      pCVar34 = *(CapcomGame **)(this + 0xc);
      pGVar16 = (GameStateCafe *)operator_new(0x200);
      GameStateCafe::GameStateCafe(pGVar16);
      pGVar8 = (GameStateLoading *)operator_new(0x2c);
      GameStateLoading::GameStateLoading(pGVar8,(GameState *)pGVar16);
      CapcomGame::setNextState(pCVar34,(GameState *)pGVar8);
      FUN_00169b04();
      return;
    }
    FUN_00169b04();
    return;
  }
  FUN_00169b04();
  return;
}


