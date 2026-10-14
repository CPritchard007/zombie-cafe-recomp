/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019be68 GameStateEarlyBird::tick */

/* GameStateEarlyBird::tick(long) */

void __thiscall GameStateEarlyBird::tick(GameStateEarlyBird *this,long param_1)

{
  GameStateLoading *this_00;
  int iVar1;
  undefined4 uVar2;
  ScreenElement *this_01;
  undefined4 uVar3;
  ulong uVar4;
  undefined4 uVar5;
  GameStateEarlyBird *pGVar6;
  int iVar7;
  int iVar8;
  ConfirmDialog *pCVar9;
  int *piVar10;
  undefined4 *puVar11;
  GameStateEarlyBird *pGVar12;
  int iVar13;
  int iVar14;
  CapcomGame *this_02;
  int iVar15;
  code *pcVar16;
  int *piVar17;
  undefined4 uStack_e4;
  int iStack_e0;
  GameStateEarlyBird *pGStack_d8;
  String aSStack_c8 [96];
  String aSStack_68 [8];
  String aSStack_60 [8];
  StringUtil aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  ZombieCafe::tickPlaySecAnalysis_cafe(*(ZombieCafe **)(this + 0xc),param_1);
  this_02 = *(CapcomGame **)(this + 0xc);
  iVar14 = DAT_0019c20c + 0x19be82;
  if (this_02[DAT_0019c208] == (CapcomGame)0x0) {
    this = (GameStateEarlyBird *)operator_new(0x154);
    GameStateMainMenu::GameStateMainMenu((GameStateMainMenu *)this);
    this_00 = (GameStateLoading *)operator_new(0x2c);
    GameStateLoading::GameStateLoading(this_00,(GameState *)this);
    CapcomGame::setNextState(this_02,(GameState *)this_00);
    L_PrintLog((char *)(DAT_0019c210 + 0x19beb0),(char *)(DAT_0019c214 + 0x19beb2));
    FUN_0019c9fc();
  }
  (**(code **)(**(int **)(this + 0x14) + 8))(*(int **)(this + 0x14),param_1);
  iVar15 = *(int *)(this + 0x36c);
  iVar1 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
  if (iVar15 != iVar1) {
    piVar10 = *(int **)(this + 0x368);
    pcVar16 = *(code **)(*piVar10 + 0x44);
    ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
    String::valueOf((int)aSStack_c8);
    (*pcVar16)(piVar10,aSStack_c8);
    String::~String(aSStack_c8);
    uVar2 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0xc));
    *(undefined4 *)(this + 0x36c) = uVar2;
  }
  iVar1 = 0;
  do {
    piVar10 = *(int **)(this + iVar1 + 0x104);
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 0x1c))(piVar10,param_1);
    }
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x50);
  this_01 = *(ScreenElement **)(this + 900);
  if (this_01[0x14] == (ScreenElement)0x0) {
    this_01 = (ScreenElement *)FUN_0019c9b2();
  }
  iVar1 = ScreenElement::contains
                    (this_01,*(int *)(*(int *)(this + 0xc) + DAT_0019c218) >> 0x10,
                     (int)(short)*(int *)(*(int *)(this + 0xc) + DAT_0019c218));
  if (iVar1 == 0) {
    FUN_0019c9b2();
  }
  (**(code **)(**(int **)(this + 900) + 8))(*(int **)(this + 900),param_1);
  iVar1 = DAT_0019c564;
  if ((this[DAT_0019c564] != (GameStateEarlyBird)0x0) &&
     (iVar15 = *(int *)(this + 0x360), *(int *)(this + 0x360) = iVar15 - param_1,
     iVar15 - param_1 < 1)) {
    this[DAT_0019c568] = (GameStateEarlyBird)0x0;
    this[iVar1] = (GameStateEarlyBird)0x0;
    ConfirmDialog::close(*(ConfirmDialog **)(this + 0x374));
  }
  uVar2 = __addsf3(*(undefined4 *)(this + 0x354),*(undefined4 *)(this + 0x358));
  *(undefined4 *)(this + 0x354) = uVar2;
  iVar15 = *(int *)(this + 0x350);
  iVar1 = SmDev();
  uVar2 = __floatsisf((int)~(iVar15 - 1U) >> 0x1f & iVar15 - 1U);
  iVar1 = __mulsf3(uVar2,*(undefined4 *)(iVar1 * 4 + DAT_0019c56c + 0x19c2ec));
  iVar15 = __aeabi_fcmplt(*(undefined4 *)(this + 0x354),iVar1 + -0x80000000);
  if (iVar15 != 0) {
    *(int *)(this + 0x354) = iVar1 + -0x80000000;
  }
  iVar1 = __aeabi_fcmpgt(*(undefined4 *)(this + 0x354),0);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0x354) = 0;
  }
  uVar5 = *(undefined4 *)(this + 0x358);
  puVar11 = *(undefined4 **)(iVar14 + DAT_0019c570);
  uVar2 = __floatsisf(param_1);
  uVar2 = __mulsf3(uVar2,*puVar11);
  iVar1 = __aeabi_fcmplt(uVar2,0x3f800000);
  if (iVar1 == 0) {
    uVar2 = 0x3f800000;
  }
  uVar2 = __subsf3(0x3f800000,uVar2);
  iVar1 = __mulsf3(uVar5,uVar2);
  *(int *)(this + 0x358) = iVar1;
  iVar15 = __aeabi_fcmpge(iVar1,0);
  if (iVar15 == 0) {
    iVar1 = iVar1 + -0x80000000;
  }
  iVar1 = __aeabi_fcmplt(iVar1,**(undefined4 **)(iVar14 + DAT_0019c574));
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0x358) = 0;
  }
  iVar1 = 0;
  pGVar12 = this;
  do {
    iVar1 = iVar1 + 1;
    (**(code **)(**(int **)(pGVar12 + 0x48) + 0x20))(*(int **)(pGVar12 + 0x48),0);
    (**(code **)(**(int **)(pGVar12 + 0x68) + 0x20))(*(int **)(pGVar12 + 0x68),0);
    (**(code **)(**(int **)(pGVar12 + 0x88) + 0x20))(*(int **)(pGVar12 + 0x88),0);
    (**(code **)(**(int **)(pGVar12 + 0xa8) + 0x20))(*(int **)(pGVar12 + 0xa8),0);
    pGVar6 = pGVar12 + 200;
    pGVar12 = pGVar12 + 4;
    (**(code **)(**(int **)pGVar6 + 0x20))(*(int **)pGVar6,0);
  } while (iVar1 != 8);
  __fixsfsi(*(undefined4 *)(this + 0x354));
  uVar2 = __floatsisf();
  iVar1 = SmDev();
  __addsf3(uVar2,*(undefined4 *)(DAT_0019c578 + iVar1 * 4 + 0x19c412));
  uStack_e4 = __fixsfsi();
  iStack_e0 = 0;
  iVar1 = DAT_0019c57c + 0x19c410;
  iVar15 = 0;
  pGStack_d8 = this;
  while (iStack_e0 < *(int *)(this + 0x350)) {
    uVar2 = __floatsisf(uStack_e4);
    iVar8 = SmDev();
    iVar8 = __aeabi_fcmpgt(uVar2,*(int *)(iVar8 * 4 + iVar1) + -0x80000000);
    if (iVar8 != 0) {
      iVar8 = SmDev();
      iVar13 = DAT_0019c580 + 0x19c452;
      uVar5 = *(undefined4 *)(iVar13 + iVar8 * 4 + 0x30);
      iVar8 = SmDev();
      uVar5 = __addsf3(uVar5,*(undefined4 *)(iVar8 * 4 + iVar1));
      iVar8 = __aeabi_fcmplt(uVar2,uVar5);
      if (iVar8 != 0) {
        iVar7 = (iVar15 + 0x12) * 4;
        piVar10 = *(int **)(this + iVar7);
        pcVar16 = *(code **)(*piVar10 + 0x14);
        iVar8 = SmDev();
        uVar5 = __fixsfsi(*(undefined4 *)(iVar13 + iVar8 * 4 + 0x18));
        (*pcVar16)(piVar10,uStack_e4,uVar5);
        (**(code **)(**(int **)(this + iVar7) + 0x20))(*(int **)(this + iVar7),1);
        iVar7 = (iVar15 + 0x1a) * 4;
        piVar10 = *(int **)(this + iVar7);
        pcVar16 = *(code **)(*piVar10 + 0x14);
        iVar8 = SmDev();
        __addsf3(uVar2,*(undefined4 *)(iVar13 + iVar8 * 4 + 0x48));
        uVar5 = __fixsfsi();
        iVar8 = SmDev();
        uVar3 = __fixsfsi(*(undefined4 *)(iVar13 + iVar8 * 4 + 0x60));
        (*pcVar16)(piVar10,uVar5,uVar3);
        (**(code **)(**(int **)(this + iVar7) + 0x20))(*(int **)(this + iVar7),1);
        iVar7 = (iVar15 + 0x22) * 4;
        piVar10 = *(int **)(this + iVar7);
        pcVar16 = *(code **)(*piVar10 + 0x14);
        iVar8 = SmDev();
        __addsf3(uVar2,*(undefined4 *)(iVar13 + iVar8 * 4 + 0x48));
        uVar5 = __fixsfsi();
        iVar8 = SmDev();
        uVar3 = __fixsfsi(*(undefined4 *)(iVar13 + iVar8 * 4 + 0x60));
        (*pcVar16)(piVar10,uVar5,uVar3);
        (**(code **)(**(int **)(this + iVar7) + 0x20))(*(int **)(this + iVar7),1);
        piVar10 = *(int **)(this + (iVar15 + 0x2a) * 4);
        pcVar16 = *(code **)(*piVar10 + 0x44);
        if (*(int *)(pGStack_d8 + 0x294) == DAT_0019c584) {
          String::String(aSStack_68,(char *)(DAT_0019c588 + 0x19c55e));
        }
        else {
          String::valueOf((int)aSStack_68);
        }
        (*pcVar16)(piVar10,aSStack_68);
        iVar13 = (iVar15 + 0x2a) * 4;
        String::~String(aSStack_68);
        piVar10 = *(int **)(this + iVar13);
        pcVar16 = *(code **)(*piVar10 + 0x14);
        iVar8 = SmDev();
        uVar5 = __fixsfsi(*(undefined4 *)(DAT_0019c924 + iVar8 * 4 + 0x19c630));
        (*pcVar16)(piVar10,uStack_e4,uVar5);
        (**(code **)(**(int **)(this + iVar13) + 0x20))(*(int **)(this + iVar13),1);
        iVar8 = findUpdateTimer(this,*(int *)(pGStack_d8 + 0x154));
        if (iVar8 != -1) {
          iVar8 = (iVar15 + 0x32) * 4;
          (**(code **)(**(int **)(this + iVar8) + 0x20))(*(int **)(this + iVar8),1);
          piVar10 = *(int **)(this + iVar8);
          pcVar16 = *(code **)(*piVar10 + 0x14);
          iVar8 = SmDev();
          uVar5 = __fixsfsi(*(undefined4 *)(DAT_0019c928 + iVar8 * 4 + 0x19c616));
          (*pcVar16)(piVar10,uStack_e4,uVar5);
        }
        iVar15 = iVar15 + 1;
        if ((7 < iVar15) || (*(int *)(this + 0x350) <= iVar15)) break;
      }
    }
    iVar8 = SmDev();
    __addsf3(uVar2,*(undefined4 *)(iVar8 * 4 + DAT_0019c92c + 0x19c632));
    uStack_e4 = __fixsfsi();
    iStack_e0 = iStack_e0 + 1;
    pGStack_d8 = pGStack_d8 + 4;
    if (iStack_e0 == 0x14) break;
  }
  iVar1 = *(int *)(this + 0x20);
  if (iVar1 == -1) goto LAB_0019c774;
  iVar15 = (iVar1 + 0xbe) * 4;
  iVar8 = *(int *)(this + iVar15);
  if (((iVar8 == -1) || (*(int *)(*(int *)(this + 0xc) + 0x6b4) + 1 <= iVar8)) ||
     (piVar10 = *(int **)(iVar8 * 4 + *(int *)(*(int *)(this + 0xc) + 0x6b8)), piVar10 == (int *)0x0
     )) {
    uVar2 = findUpdateTimer(this,*(int *)(this + (iVar1 + 0x54) * 4 + 4));
    *(undefined4 *)(this + (iVar1 + 0xbe) * 4) = uVar2;
    iVar1 = *(int *)(this + (*(int *)(this + 0x20) + 0xbe) * 4);
    if (iVar1 == -1) {
      updateEarlyBirdConsole(this);
      piVar10 = (int *)0x0;
    }
    else {
LAB_0019c6d0:
      piVar10 = *(int **)(iVar1 * 4 + *(int *)(*(int *)(this + 0xc) + 0x6b8));
    }
  }
  else if (*piVar10 != *(int *)(this + (iVar1 + 0x54) * 4 + 4)) {
    uVar2 = findUpdateTimer(this,*(int *)(this + (iVar1 + 0x54) * 4 + 4));
    *(undefined4 *)(this + iVar15) = uVar2;
    iVar1 = *(int *)(this + (*(int *)(this + 0x20) + 0xbe) * 4);
    if (iVar1 != -1) goto LAB_0019c6d0;
    updateEarlyBirdConsole(this);
  }
  if (*(int *)(this + (*(int *)(this + 0x20) + 0xbe) * 4) != -1) {
    piVar17 = *(int **)(this + 0xf4);
    pcVar16 = *(code **)(*piVar17 + 0x44);
    Vector<String>::elementAt((int)aSStack_60);
    uVar4 = __divsi3(piVar10[1],1000);
    StringUtil::createTimeString(aSStack_58,uVar4,'\x02');
    String::operator+(aSStack_50,aSStack_60,aSStack_58);
    Vector<String>::elementAt((int)aSStack_48);
    String::operator+(aSStack_40,aSStack_50,aSStack_48);
    (*pcVar16)(piVar17,aSStack_40);
    String::~String(aSStack_40);
    String::~String(aSStack_48);
    String::~String(aSStack_50);
    String::~String((String *)aSStack_58);
    String::~String(aSStack_60);
  }
LAB_0019c774:
  if (this[DAT_0019c938] == (GameStateEarlyBird)0x0) {
    if (*(int *)(this + 0x34c) < 1) {
      if (this[0x370] == (GameStateEarlyBird)0x0) {
        this[0x35c] = (GameStateEarlyBird)(1 < *(int *)(this + 0x350));
        createCharacterInstanceAll(this);
        iVar14 = *(int *)(this + 0x20);
        if ((iVar14 != -1) && (iVar14 <= *(int *)(this + 0x350))) {
          selectCharacter(this,iVar14);
        }
        *(undefined4 *)(this + 0x34c) = *(undefined4 *)(this + 0x348);
      }
    }
    else {
      iVar1 = *(int *)(this + 0x34c) - param_1;
      *(int *)(this + 0x34c) = iVar1;
      *(bool *)(*(int *)(this + 0xec) + 0x86) = 1000 < iVar1;
      if (*(int *)(this + 0x34c) < 1) {
        pCVar9 = *(ConfirmDialog **)(this + 0x374);
        Vector<String>::elementAt((int)aSStack_38);
        Vector<String>::elementAt((int)aSStack_30);
        Vector<String>::elementAt((int)aSStack_28);
        ConfirmDialog::show(pCVar9,aSStack_38,aSStack_30,aSStack_28,
                            *(undefined4 *)(iVar14 + DAT_0019c948),
                            *(undefined4 *)(iVar14 + DAT_0019c94c),this,0,0);
        String::~String(aSStack_28);
        String::~String(aSStack_30);
        String::~String(aSStack_38);
        iVar14 = DAT_0019c950;
        this[DAT_0019c938] = (GameStateEarlyBird)0x1;
        puts((char *)(iVar14 + 0x19c822));
      }
      __divsi3(*(undefined4 *)(this + 0x34c),1000);
      piVar10 = *(int **)(this + 0xfc);
      pcVar16 = *(code **)(*piVar10 + 0x44);
      String::valueOf((int)aSStack_20);
      (*pcVar16)(piVar10,aSStack_20);
      String::~String(aSStack_20);
    }
  }
  this[DAT_0019c954] = this[0x370];
  if (*(char *)(*(int *)(this + 0xc) + DAT_0019c958) == '\0') {
    FUN_0019c9fc();
    return;
  }
  *(undefined1 *)(*(int *)(this + 0xc) + DAT_0019c958) = 0;
  FUN_0019c9fc();
  return;
}


