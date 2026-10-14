/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c96fc GameStateZukan::tick */

/* GameStateZukan::tick(long) */

void __thiscall GameStateZukan::tick(GameStateZukan *this,long param_1)

{
  GameStateZukan GVar1;
  GameStateMainMenu *this_00;
  LoadingGameState *pLVar2;
  int *piVar3;
  undefined4 uVar4;
  ScreenElement *this_01;
  GameStateCafe *pGVar5;
  uchar uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  CapcomGame *pCVar13;
  int iVar14;
  GameStateZukan *pGVar15;
  float fVar16;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float fVar17;
  float extraout_s1_02;
  
  ZombieCafe::tickPlaySecAnalysis_cafe(*(ZombieCafe **)(this + 0xc),param_1);
  ZombieCafeGameState::tick((long)this);
  pCVar13 = *(CapcomGame **)(this + 0xc);
  iVar12 = DAT_001c9a18 + 0x1c971e;
  if (pCVar13[DAT_001c9a14] == (CapcomGame)0x0) {
    this_00 = (GameStateMainMenu *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu(this_00);
    pLVar2 = (LoadingGameState *)operator_new(0x2c);
    LoadingGameState::LoadingGameState(pLVar2,(GameState *)this_00,(CapcomFont *)0x0,0);
    goto LAB_001c999a;
  }
  (**(code **)(**(int **)(this + 0x1c) + 8))(*(int **)(this + 0x1c),param_1);
  piVar3 = *(int **)(this + 0xb0);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x1c))(piVar3,param_1);
  }
  uVar10 = *(undefined4 *)(this + 100);
  uVar4 = ScreenElement::localToParentCoords
                    (*(ScreenElement **)(this + 0x2c),0,
                     *(int *)(*(ScreenElement **)(this + 0x2c) + 0x10) >> 1);
  FUN_001c7944(uVar10,uVar4);
  this_01 = *(ScreenElement **)(this + 0x2c);
  uVar10 = *(undefined4 *)(this + 0x68);
  uVar4 = ScreenElement::localToParentCoords
                    (this_01,*(int *)(this_01 + 0xc),*(int *)(this_01 + 0x10) >> 1);
  FUN_001c7944(uVar10,uVar4);
  piVar3 = *(int **)(this + 100);
  iVar11 = *(int *)(*(int *)(this + 0xc) + DAT_001c9a1c) * piVar3[3];
  uVar7 = iVar11 >> 0x1f;
  uVar7 = (iVar11 >> 0x12) + uVar7 ^ uVar7;
  (**(code **)(*piVar3 + 0x14))(piVar3,uVar7 + piVar3[1],piVar3[2]);
  piVar3 = *(int **)(this + 0x68);
  fVar16 = (float)(**(code **)(*piVar3 + 0x14))(piVar3,piVar3[1] - uVar7,piVar3[2]);
  iVar9 = *(int *)(this + 0xc);
  iVar11 = *(int *)(iVar9 + 0x10);
  iVar8 = 9 - ((((int)(short)iVar11 >> 0x1f) - (iVar11 >> 0x1f)) +
              (uint)((uint)(iVar11 >> 0x10) <= (uint)(int)(short)iVar11));
  iVar11 = *(int *)(this + 0xd0);
  if (iVar11 < 1) {
    iVar11 = 1;
  }
  iVar14 = *(int *)(iVar9 + DAT_001c9a20);
  if (((iVar14 == 0) || (*(int *)(iVar9 + 0x4b8) != 0)) ||
     ((int)**(short **)(iVar12 + DAT_001c9a24) < *(int *)(iVar9 + DAT_001c9a28))) goto LAB_001c9960;
  iVar11 = __divsi3(iVar11,iVar8);
  fVar16 = extraout_s0;
  fVar17 = extraout_s1;
  if (((*(ZCImageButton **)(this + 100))[0x14] == (ZCImageButton)0x0) ||
     (iVar9 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 100),iVar14 >> 0x10,(int)(short)iVar14,
                         extraout_s0,extraout_s1), fVar16 = extraout_s0_00, fVar17 = extraout_s1_00,
     iVar9 == 0)) {
    if (((*(ZCImageButton **)(this + 0x68))[0x14] != (ZCImageButton)0x0) &&
       (iVar9 = ZCImageButton::contains
                          (*(ZCImageButton **)(this + 0x68),
                           *(int *)(*(int *)(this + 0xc) + DAT_001c9a20) >> 0x10,
                           (int)(short)*(int *)(*(int *)(this + 0xc) + DAT_001c9a20),fVar16,fVar17),
       fVar16 = extraout_s0_01, fVar17 = extraout_s1_01, iVar9 != 0)) {
      ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_01);
      if ((int)(uint)(byte)this[0x84] < iVar11) {
        uVar6 = (char)this[0x84] + 1;
      }
      else {
        uVar6 = '\0';
      }
      goto LAB_001c988c;
    }
    iVar11 = ZCImageButton::contains
                       (*(ZCImageButton **)(this + 0x6c),
                        *(int *)(*(int *)(this + 0xc) + DAT_001c9a20) >> 0x10,
                        (int)(short)*(int *)(*(int *)(this + 0xc) + DAT_001c9a20),fVar16,fVar17);
    if (iVar11 == 0) {
      fVar16 = extraout_s0_04;
      if (((*(ZCImageButton **)(this + 0xc4))[0x14] == (ZCImageButton)0x0) ||
         (iVar11 = ZCImageButton::contains
                             (*(ZCImageButton **)(this + 0xc4),
                              *(int *)(*(int *)(this + 0xc) + DAT_001c9a20) >> 0x10,
                              (int)(short)*(int *)(*(int *)(this + 0xc) + DAT_001c9a20),
                              extraout_s0_04,extraout_s1_02), fVar16 = extraout_s0_02, iVar11 == 0))
      {
        GVar1 = this[0x84];
        iVar11 = 0;
        pGVar15 = this;
        do {
          if ((*(ScreenElement **)(pGVar15 + 0x8c) != (ScreenElement *)0x0) &&
             (iVar9 = ScreenElement::contains
                                (*(ScreenElement **)(pGVar15 + 0x8c),
                                 *(int *)(*(int *)(this + 0xc) + DAT_001c9a20) >> 0x10,
                                 (int)(short)*(int *)(*(int *)(this + 0xc) + DAT_001c9a20)),
             fVar16 = extraout_s0_03, iVar9 != 0)) {
            ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_03);
            this[0x7c] = SUB41(((uint)*(byte *)(*(int *)(this + (iVar11 + 0x22) * 4 + 4) + 0x60) <<
                               0x1e) >> 0x1f,0);
            iVar11 = (uint)(byte)GVar1 * iVar8 + iVar11;
            goto LAB_001c995a;
          }
          iVar11 = iVar11 + 1;
          pGVar15 = pGVar15 + 4;
        } while (iVar11 != 9);
        goto LAB_001c9960;
      }
      this[0x7c] = (GameStateZukan)((byte)this[0x7c] ^ 1);
      goto LAB_001c9890;
    }
    ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_04);
    pCVar13 = *(CapcomGame **)(this + 0xc);
    pGVar5 = (GameStateCafe *)operator_new(0x200);
    GameStateCafe::GameStateCafe(pGVar5);
    pLVar2 = (LoadingGameState *)operator_new(0x2c);
    LoadingGameState::LoadingGameState(pLVar2,(GameState *)pGVar5,(CapcomFont *)0x0,0);
    *(int *)pLVar2 = *(int *)(iVar12 + DAT_001c9a2c) + 8;
    pLVar2[0x14] = (LoadingGameState)0x0;
    *(undefined4 *)(pLVar2 + 0x28) = 0;
    fVar16 = (float)CapcomGame::setNextState(pCVar13,(GameState *)pLVar2);
  }
  else {
    ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_00);
    if (this[0x84] == (GameStateZukan)0x0) {
      uVar6 = (uchar)iVar11;
    }
    else {
      uVar6 = (char)this[0x84] + 0xff;
    }
LAB_001c988c:
    setPage(this,uVar6);
LAB_001c9890:
    iVar11 = *(int *)(this + 0x80);
LAB_001c995a:
    fVar16 = (float)selectCharacter(this,iVar11);
  }
LAB_001c9960:
  if (*(char *)(*(int *)(this + 0xc) + DAT_001c9a30) == '\0') {
    return;
  }
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_001c9a30) = 0;
  ZombieCafe::playEffect(*(int *)(this + 0xc),fVar16);
  pCVar13 = *(CapcomGame **)(this + 0xc);
  pGVar5 = (GameStateCafe *)operator_new(0x200);
  GameStateCafe::GameStateCafe(pGVar5);
  pLVar2 = (LoadingGameState *)operator_new(0x2c);
  LoadingGameState::LoadingGameState(pLVar2,(GameState *)pGVar5,(CapcomFont *)0x0,0);
LAB_001c999a:
  *(int *)pLVar2 = *(int *)(iVar12 + DAT_001c9a2c) + 8;
  ((GameState *)pLVar2)[0x14] = (GameState)0x0;
  *(undefined4 *)((GameState *)pLVar2 + 0x28) = 0;
  CapcomGame::setNextState(pCVar13,(GameState *)pLVar2);
  return;
}


