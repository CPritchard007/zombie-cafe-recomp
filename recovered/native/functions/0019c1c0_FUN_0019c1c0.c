/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019c1c0 FUN_0019c1c0 */

void FUN_0019c1c0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  GameStateEarlyBird *pGVar7;
  int iVar8;
  int iVar9;
  ConfirmDialog *pCVar10;
  int unaff_r4;
  undefined4 *puVar11;
  GameStateEarlyBird *pGVar12;
  int iVar13;
  int *piVar14;
  GameStateEarlyBird *unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int *piVar15;
  code *pcVar16;
  int in_stack_0000001c;
  undefined4 uStack00000024;
  int iStack00000028;
  
  iVar6 = *(int *)(unaff_r4 + 0x4b8);
  if (iVar6 == 0) {
    FUN_0019c9e6();
  }
  if (unaff_r5[0x35c] == (GameStateEarlyBird)0x0) {
    FUN_0019c9f2();
  }
  if (*(int *)(unaff_r4 + DAT_0019c220) <= (int)**(short **)(unaff_r6 + DAT_0019c21c)) {
    FUN_0019c9f2();
  }
  uVar1 = __floatsisf((iVar6 >> 0x10) - (param_3 >> 0x10));
  *(undefined4 *)(unaff_r5 + 0x358) = uVar1;
  *(undefined1 *)(unaff_r4 + unaff_r7) = 1;
  iVar6 = DAT_0019c564;
  if ((unaff_r5[DAT_0019c564] != (GameStateEarlyBird)0x0) &&
     (iVar4 = *(int *)(unaff_r5 + 0x360), *(int *)(unaff_r5 + 0x360) = iVar4 - in_stack_0000001c,
     iVar4 - in_stack_0000001c < 1)) {
    unaff_r5[DAT_0019c568] = (GameStateEarlyBird)0x0;
    unaff_r5[iVar6] = (GameStateEarlyBird)0x0;
    ConfirmDialog::close(*(ConfirmDialog **)(unaff_r5 + 0x374));
  }
  uVar1 = __addsf3(*(undefined4 *)(unaff_r5 + 0x354),*(undefined4 *)(unaff_r5 + 0x358));
  *(undefined4 *)(unaff_r5 + 0x354) = uVar1;
  iVar4 = *(int *)(unaff_r5 + 0x350);
  iVar6 = SmDev();
  uVar1 = __floatsisf((int)~(iVar4 - 1U) >> 0x1f & iVar4 - 1U);
  iVar6 = __mulsf3(uVar1,*(undefined4 *)(iVar6 * 4 + DAT_0019c56c + 0x19c2ec));
  iVar4 = __aeabi_fcmplt(*(undefined4 *)(unaff_r5 + 0x354),iVar6 + -0x80000000);
  if (iVar4 != 0) {
    *(int *)(unaff_r5 + 0x354) = iVar6 + -0x80000000;
  }
  iVar6 = __aeabi_fcmpgt(*(undefined4 *)(unaff_r5 + 0x354),0);
  if (iVar6 != 0) {
    *(undefined4 *)(unaff_r5 + 0x354) = 0;
  }
  uVar5 = *(undefined4 *)(unaff_r5 + 0x358);
  puVar11 = *(undefined4 **)(unaff_r6 + DAT_0019c570);
  uVar1 = __floatsisf(in_stack_0000001c);
  uVar1 = __mulsf3(uVar1,*puVar11);
  iVar6 = __aeabi_fcmplt(uVar1,0x3f800000);
  if (iVar6 == 0) {
    uVar1 = 0x3f800000;
  }
  uVar1 = __subsf3(0x3f800000,uVar1);
  iVar6 = __mulsf3(uVar5,uVar1);
  *(int *)(unaff_r5 + 0x358) = iVar6;
  iVar4 = __aeabi_fcmpge(iVar6,0);
  if (iVar4 == 0) {
    iVar6 = iVar6 + -0x80000000;
  }
  iVar6 = __aeabi_fcmplt(iVar6,**(undefined4 **)(unaff_r6 + DAT_0019c574));
  if (iVar6 != 0) {
    *(undefined4 *)(unaff_r5 + 0x358) = 0;
  }
  iVar6 = 0;
  pGVar12 = unaff_r5;
  do {
    iVar6 = iVar6 + 1;
    (**(code **)(**(int **)(pGVar12 + 0x48) + 0x20))(*(int **)(pGVar12 + 0x48),0);
    (**(code **)(**(int **)(pGVar12 + 0x68) + 0x20))(*(int **)(pGVar12 + 0x68),0);
    (**(code **)(**(int **)(pGVar12 + 0x88) + 0x20))(*(int **)(pGVar12 + 0x88),0);
    (**(code **)(**(int **)(pGVar12 + 0xa8) + 0x20))(*(int **)(pGVar12 + 0xa8),0);
    pGVar7 = pGVar12 + 200;
    pGVar12 = pGVar12 + 4;
    (**(code **)(**(int **)pGVar7 + 0x20))(*(int **)pGVar7,0);
  } while (iVar6 != 8);
  __fixsfsi(*(undefined4 *)(unaff_r5 + 0x354));
  uVar1 = __floatsisf();
  iVar6 = SmDev();
  __addsf3(uVar1,*(undefined4 *)(DAT_0019c578 + iVar6 * 4 + 0x19c412));
  uStack00000024 = __fixsfsi();
  iStack00000028 = 0;
  iVar6 = DAT_0019c57c + 0x19c410;
  iVar4 = 0;
  pGVar12 = unaff_r5;
  while (iStack00000028 < *(int *)(unaff_r5 + 0x350)) {
    uVar1 = __floatsisf(uStack00000024);
    iVar9 = SmDev();
    iVar9 = __aeabi_fcmpgt(uVar1,*(int *)(iVar9 * 4 + iVar6) + -0x80000000);
    if (iVar9 != 0) {
      iVar9 = SmDev();
      iVar13 = DAT_0019c580 + 0x19c452;
      uVar5 = *(undefined4 *)(iVar13 + iVar9 * 4 + 0x30);
      iVar9 = SmDev();
      uVar5 = __addsf3(uVar5,*(undefined4 *)(iVar9 * 4 + iVar6));
      iVar9 = __aeabi_fcmplt(uVar1,uVar5);
      if (iVar9 != 0) {
        iVar8 = (iVar4 + 0x12) * 4;
        piVar14 = *(int **)(unaff_r5 + iVar8);
        pcVar16 = *(code **)(*piVar14 + 0x14);
        iVar9 = SmDev();
        uVar5 = __fixsfsi(*(undefined4 *)(iVar13 + iVar9 * 4 + 0x18));
        (*pcVar16)(piVar14,uStack00000024,uVar5);
        (**(code **)(**(int **)(unaff_r5 + iVar8) + 0x20))(*(int **)(unaff_r5 + iVar8),1);
        iVar8 = (iVar4 + 0x1a) * 4;
        piVar14 = *(int **)(unaff_r5 + iVar8);
        pcVar16 = *(code **)(*piVar14 + 0x14);
        iVar9 = SmDev();
        __addsf3(uVar1,*(undefined4 *)(iVar13 + iVar9 * 4 + 0x48));
        uVar5 = __fixsfsi();
        iVar9 = SmDev();
        uVar2 = __fixsfsi(*(undefined4 *)(iVar13 + iVar9 * 4 + 0x60));
        (*pcVar16)(piVar14,uVar5,uVar2);
        (**(code **)(**(int **)(unaff_r5 + iVar8) + 0x20))(*(int **)(unaff_r5 + iVar8),1);
        iVar8 = (iVar4 + 0x22) * 4;
        piVar14 = *(int **)(unaff_r5 + iVar8);
        pcVar16 = *(code **)(*piVar14 + 0x14);
        iVar9 = SmDev();
        __addsf3(uVar1,*(undefined4 *)(iVar13 + iVar9 * 4 + 0x48));
        uVar5 = __fixsfsi();
        iVar9 = SmDev();
        uVar2 = __fixsfsi(*(undefined4 *)(iVar13 + iVar9 * 4 + 0x60));
        (*pcVar16)(piVar14,uVar5,uVar2);
        (**(code **)(**(int **)(unaff_r5 + iVar8) + 0x20))(*(int **)(unaff_r5 + iVar8),1);
        piVar14 = *(int **)(unaff_r5 + (iVar4 + 0x2a) * 4);
        pcVar16 = *(code **)(*piVar14 + 0x44);
        if (*(int *)(pGVar12 + 0x294) == DAT_0019c584) {
          String::String((String *)&stack0x000000a0,(char *)(DAT_0019c588 + 0x19c55e));
        }
        else {
          String::valueOf((int)&stack0x000000a0);
        }
        (*pcVar16)(piVar14,&stack0x000000a0);
        iVar13 = (iVar4 + 0x2a) * 4;
        String::~String((String *)&stack0x000000a0);
        piVar14 = *(int **)(unaff_r5 + iVar13);
        pcVar16 = *(code **)(*piVar14 + 0x14);
        iVar9 = SmDev();
        uVar5 = __fixsfsi(*(undefined4 *)(DAT_0019c924 + iVar9 * 4 + 0x19c630));
        (*pcVar16)(piVar14,uStack00000024,uVar5);
        (**(code **)(**(int **)(unaff_r5 + iVar13) + 0x20))(*(int **)(unaff_r5 + iVar13),1);
        iVar9 = GameStateEarlyBird::findUpdateTimer(unaff_r5,*(int *)(pGVar12 + 0x154));
        if (iVar9 != -1) {
          iVar9 = (iVar4 + 0x32) * 4;
          (**(code **)(**(int **)(unaff_r5 + iVar9) + 0x20))(*(int **)(unaff_r5 + iVar9),1);
          piVar14 = *(int **)(unaff_r5 + iVar9);
          pcVar16 = *(code **)(*piVar14 + 0x14);
          iVar9 = SmDev();
          uVar5 = __fixsfsi(*(undefined4 *)(DAT_0019c928 + iVar9 * 4 + 0x19c616));
          (*pcVar16)(piVar14,uStack00000024,uVar5);
        }
        iVar4 = iVar4 + 1;
        if ((7 < iVar4) || (*(int *)(unaff_r5 + 0x350) <= iVar4)) break;
      }
    }
    iVar9 = SmDev();
    __addsf3(uVar1,*(undefined4 *)(iVar9 * 4 + DAT_0019c92c + 0x19c632));
    uStack00000024 = __fixsfsi();
    iStack00000028 = iStack00000028 + 1;
    pGVar12 = pGVar12 + 4;
    if (iStack00000028 == 0x14) break;
  }
  iVar6 = *(int *)(unaff_r5 + 0x20);
  if (iVar6 == -1) goto LAB_0019c774;
  iVar4 = (iVar6 + 0xbe) * 4;
  iVar9 = *(int *)(unaff_r5 + iVar4);
  if (((iVar9 == -1) || (*(int *)(*(int *)(unaff_r5 + 0xc) + 0x6b4) + 1 <= iVar9)) ||
     (piVar14 = *(int **)(iVar9 * 4 + *(int *)(*(int *)(unaff_r5 + 0xc) + 0x6b8)),
     piVar14 == (int *)0x0)) {
    uVar1 = GameStateEarlyBird::findUpdateTimer
                      (unaff_r5,*(int *)(unaff_r5 + (iVar6 + 0x54) * 4 + 4));
    *(undefined4 *)(unaff_r5 + (iVar6 + 0xbe) * 4) = uVar1;
    iVar6 = *(int *)(unaff_r5 + (*(int *)(unaff_r5 + 0x20) + 0xbe) * 4);
    if (iVar6 == -1) {
      GameStateEarlyBird::updateEarlyBirdConsole(unaff_r5);
      piVar14 = (int *)0x0;
    }
    else {
LAB_0019c6d0:
      piVar14 = *(int **)(iVar6 * 4 + *(int *)(*(int *)(unaff_r5 + 0xc) + 0x6b8));
    }
  }
  else if (*piVar14 != *(int *)(unaff_r5 + (iVar6 + 0x54) * 4 + 4)) {
    uVar1 = GameStateEarlyBird::findUpdateTimer
                      (unaff_r5,*(int *)(unaff_r5 + (iVar6 + 0x54) * 4 + 4));
    *(undefined4 *)(unaff_r5 + iVar4) = uVar1;
    iVar6 = *(int *)(unaff_r5 + (*(int *)(unaff_r5 + 0x20) + 0xbe) * 4);
    if (iVar6 != -1) goto LAB_0019c6d0;
    GameStateEarlyBird::updateEarlyBirdConsole(unaff_r5);
  }
  if (*(int *)(unaff_r5 + (*(int *)(unaff_r5 + 0x20) + 0xbe) * 4) != -1) {
    piVar15 = *(int **)(unaff_r5 + 0xf4);
    pcVar16 = *(code **)(*piVar15 + 0x44);
    Vector<String>::elementAt((int)&stack0x000000a8);
    uVar3 = __divsi3(piVar14[1],1000);
    StringUtil::createTimeString((StringUtil *)&stack0x000000b0,uVar3,'\x02');
    String::operator+((String *)&stack0x000000b8,&stack0x000000a8,&stack0x000000b0);
    Vector<String>::elementAt((int)&stack0x000000c0);
    String::operator+((String *)&stack0x000000c8,&stack0x000000b8,&stack0x000000c0);
    (*pcVar16)(piVar15,&stack0x000000c8);
    String::~String((String *)&stack0x000000c8);
    String::~String((String *)&stack0x000000c0);
    String::~String((String *)&stack0x000000b8);
    String::~String((String *)&stack0x000000b0);
    String::~String((String *)&stack0x000000a8);
  }
LAB_0019c774:
  if (unaff_r5[DAT_0019c938] == (GameStateEarlyBird)0x0) {
    if (*(int *)(unaff_r5 + 0x34c) < 1) {
      if (unaff_r5[0x370] == (GameStateEarlyBird)0x0) {
        unaff_r5[0x35c] = (GameStateEarlyBird)(1 < *(int *)(unaff_r5 + 0x350));
        GameStateEarlyBird::createCharacterInstanceAll(unaff_r5);
        iVar6 = *(int *)(unaff_r5 + 0x20);
        if ((iVar6 != -1) && (iVar6 <= *(int *)(unaff_r5 + 0x350))) {
          GameStateEarlyBird::selectCharacter(unaff_r5,iVar6);
        }
        *(undefined4 *)(unaff_r5 + 0x34c) = *(undefined4 *)(unaff_r5 + 0x348);
      }
    }
    else {
      in_stack_0000001c = *(int *)(unaff_r5 + 0x34c) - in_stack_0000001c;
      *(int *)(unaff_r5 + 0x34c) = in_stack_0000001c;
      *(bool *)(*(int *)(unaff_r5 + 0xec) + 0x86) = 1000 < in_stack_0000001c;
      if (*(int *)(unaff_r5 + 0x34c) < 1) {
        pCVar10 = *(ConfirmDialog **)(unaff_r5 + 0x374);
        Vector<String>::elementAt((int)&stack0x000000d0);
        Vector<String>::elementAt((int)&stack0x000000d8);
        Vector<String>::elementAt((int)&stack0x000000e0);
        ConfirmDialog::show(pCVar10,&stack0x000000d0,&stack0x000000d8,&stack0x000000e0);
        String::~String((String *)&stack0x000000e0);
        String::~String((String *)&stack0x000000d8);
        String::~String((String *)&stack0x000000d0);
        iVar6 = DAT_0019c950;
        unaff_r5[DAT_0019c938] = (GameStateEarlyBird)0x1;
        puts((char *)(iVar6 + 0x19c822));
      }
      __divsi3(*(undefined4 *)(unaff_r5 + 0x34c),1000);
      piVar14 = *(int **)(unaff_r5 + 0xfc);
      pcVar16 = *(code **)(*piVar14 + 0x44);
      String::valueOf((int)&stack0x000000e8);
      (*pcVar16)(piVar14,(String *)&stack0x000000e8);
      String::~String((String *)&stack0x000000e8);
    }
  }
  unaff_r5[DAT_0019c954] = unaff_r5[0x370];
  if (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_0019c958) == '\0') {
    FUN_0019c9fc();
    return;
  }
  *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0019c958) = 0;
  FUN_0019c9fc();
  return;
}


