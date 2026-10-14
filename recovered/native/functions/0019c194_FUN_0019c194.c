/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019c194 FUN_0019c194 */

void FUN_0019c194(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  int iVar6;
  undefined4 uVar7;
  GameStateEarlyBird *pGVar8;
  int iVar9;
  int iVar10;
  ConfirmDialog *pCVar11;
  int unaff_r4;
  undefined4 *puVar12;
  GameStateEarlyBird *pGVar13;
  int iVar14;
  GameStateEarlyBird *unaff_r5;
  int unaff_r6;
  int unaff_r7;
  int *piVar15;
  code *pcVar16;
  int in_stack_0000001c;
  undefined4 uStack00000024;
  int iStack00000028;
  
  do {
    piVar1 = *(int **)(unaff_r7 + 0x104);
    if ((piVar1 != (int *)0x0) &&
       (iVar2 = (**(code **)(*piVar1 + 0x10))
                          (piVar1,*(undefined4 *)(*(int *)(unaff_r5 + 0xc) + DAT_0019c218)),
       iVar2 != 0)) {
      GameStateEarlyBird::selectCharacter(unaff_r5,unaff_r4);
    }
    iVar2 = DAT_0019c564;
    unaff_r4 = unaff_r4 + 1;
    unaff_r7 = unaff_r7 + 4;
  } while (unaff_r4 != 0x14);
  if ((unaff_r5[DAT_0019c564] != (GameStateEarlyBird)0x0) &&
     (iVar6 = *(int *)(unaff_r5 + 0x360), *(int *)(unaff_r5 + 0x360) = iVar6 - in_stack_0000001c,
     iVar6 - in_stack_0000001c < 1)) {
    unaff_r5[DAT_0019c568] = (GameStateEarlyBird)0x0;
    unaff_r5[iVar2] = (GameStateEarlyBird)0x0;
    ConfirmDialog::close(*(ConfirmDialog **)(unaff_r5 + 0x374));
  }
  uVar3 = __addsf3(*(undefined4 *)(unaff_r5 + 0x354),*(undefined4 *)(unaff_r5 + 0x358));
  *(undefined4 *)(unaff_r5 + 0x354) = uVar3;
  iVar6 = *(int *)(unaff_r5 + 0x350);
  iVar2 = SmDev();
  uVar3 = __floatsisf((int)~(iVar6 - 1U) >> 0x1f & iVar6 - 1U);
  iVar2 = __mulsf3(uVar3,*(undefined4 *)(iVar2 * 4 + DAT_0019c56c + 0x19c2ec));
  iVar6 = __aeabi_fcmplt(*(undefined4 *)(unaff_r5 + 0x354),iVar2 + -0x80000000);
  if (iVar6 != 0) {
    *(int *)(unaff_r5 + 0x354) = iVar2 + -0x80000000;
  }
  iVar2 = __aeabi_fcmpgt(*(undefined4 *)(unaff_r5 + 0x354),0);
  if (iVar2 != 0) {
    *(undefined4 *)(unaff_r5 + 0x354) = 0;
  }
  uVar7 = *(undefined4 *)(unaff_r5 + 0x358);
  puVar12 = *(undefined4 **)(unaff_r6 + DAT_0019c570);
  uVar3 = __floatsisf(in_stack_0000001c);
  uVar3 = __mulsf3(uVar3,*puVar12);
  iVar2 = __aeabi_fcmplt(uVar3,0x3f800000);
  if (iVar2 == 0) {
    uVar3 = 0x3f800000;
  }
  uVar3 = __subsf3(0x3f800000,uVar3);
  iVar2 = __mulsf3(uVar7,uVar3);
  *(int *)(unaff_r5 + 0x358) = iVar2;
  iVar6 = __aeabi_fcmpge(iVar2,0);
  if (iVar6 == 0) {
    iVar2 = iVar2 + -0x80000000;
  }
  iVar2 = __aeabi_fcmplt(iVar2,**(undefined4 **)(unaff_r6 + DAT_0019c574));
  if (iVar2 != 0) {
    *(undefined4 *)(unaff_r5 + 0x358) = 0;
  }
  iVar2 = 0;
  pGVar13 = unaff_r5;
  do {
    iVar2 = iVar2 + 1;
    (**(code **)(**(int **)(pGVar13 + 0x48) + 0x20))(*(int **)(pGVar13 + 0x48),0);
    (**(code **)(**(int **)(pGVar13 + 0x68) + 0x20))(*(int **)(pGVar13 + 0x68),0);
    (**(code **)(**(int **)(pGVar13 + 0x88) + 0x20))(*(int **)(pGVar13 + 0x88),0);
    (**(code **)(**(int **)(pGVar13 + 0xa8) + 0x20))(*(int **)(pGVar13 + 0xa8),0);
    pGVar8 = pGVar13 + 200;
    pGVar13 = pGVar13 + 4;
    (**(code **)(**(int **)pGVar8 + 0x20))(*(int **)pGVar8,0);
  } while (iVar2 != 8);
  __fixsfsi(*(undefined4 *)(unaff_r5 + 0x354));
  uVar3 = __floatsisf();
  iVar2 = SmDev();
  __addsf3(uVar3,*(undefined4 *)(DAT_0019c578 + iVar2 * 4 + 0x19c412));
  uStack00000024 = __fixsfsi();
  iStack00000028 = 0;
  iVar2 = DAT_0019c57c + 0x19c410;
  iVar6 = 0;
  pGVar13 = unaff_r5;
  while (iStack00000028 < *(int *)(unaff_r5 + 0x350)) {
    uVar3 = __floatsisf(uStack00000024);
    iVar10 = SmDev();
    iVar10 = __aeabi_fcmpgt(uVar3,*(int *)(iVar10 * 4 + iVar2) + -0x80000000);
    if (iVar10 != 0) {
      iVar10 = SmDev();
      iVar14 = DAT_0019c580 + 0x19c452;
      uVar7 = *(undefined4 *)(iVar14 + iVar10 * 4 + 0x30);
      iVar10 = SmDev();
      uVar7 = __addsf3(uVar7,*(undefined4 *)(iVar10 * 4 + iVar2));
      iVar10 = __aeabi_fcmplt(uVar3,uVar7);
      if (iVar10 != 0) {
        iVar9 = (iVar6 + 0x12) * 4;
        piVar1 = *(int **)(unaff_r5 + iVar9);
        pcVar16 = *(code **)(*piVar1 + 0x14);
        iVar10 = SmDev();
        uVar7 = __fixsfsi(*(undefined4 *)(iVar14 + iVar10 * 4 + 0x18));
        (*pcVar16)(piVar1,uStack00000024,uVar7);
        (**(code **)(**(int **)(unaff_r5 + iVar9) + 0x20))(*(int **)(unaff_r5 + iVar9),1);
        iVar9 = (iVar6 + 0x1a) * 4;
        piVar1 = *(int **)(unaff_r5 + iVar9);
        pcVar16 = *(code **)(*piVar1 + 0x14);
        iVar10 = SmDev();
        __addsf3(uVar3,*(undefined4 *)(iVar14 + iVar10 * 4 + 0x48));
        uVar7 = __fixsfsi();
        iVar10 = SmDev();
        uVar4 = __fixsfsi(*(undefined4 *)(iVar14 + iVar10 * 4 + 0x60));
        (*pcVar16)(piVar1,uVar7,uVar4);
        (**(code **)(**(int **)(unaff_r5 + iVar9) + 0x20))(*(int **)(unaff_r5 + iVar9),1);
        iVar9 = (iVar6 + 0x22) * 4;
        piVar1 = *(int **)(unaff_r5 + iVar9);
        pcVar16 = *(code **)(*piVar1 + 0x14);
        iVar10 = SmDev();
        __addsf3(uVar3,*(undefined4 *)(iVar14 + iVar10 * 4 + 0x48));
        uVar7 = __fixsfsi();
        iVar10 = SmDev();
        uVar4 = __fixsfsi(*(undefined4 *)(iVar14 + iVar10 * 4 + 0x60));
        (*pcVar16)(piVar1,uVar7,uVar4);
        (**(code **)(**(int **)(unaff_r5 + iVar9) + 0x20))(*(int **)(unaff_r5 + iVar9),1);
        piVar1 = *(int **)(unaff_r5 + (iVar6 + 0x2a) * 4);
        pcVar16 = *(code **)(*piVar1 + 0x44);
        if (*(int *)(pGVar13 + 0x294) == DAT_0019c584) {
          String::String((String *)&stack0x000000a0,(char *)(DAT_0019c588 + 0x19c55e));
        }
        else {
          String::valueOf((int)&stack0x000000a0);
        }
        (*pcVar16)(piVar1,&stack0x000000a0);
        iVar14 = (iVar6 + 0x2a) * 4;
        String::~String((String *)&stack0x000000a0);
        piVar1 = *(int **)(unaff_r5 + iVar14);
        pcVar16 = *(code **)(*piVar1 + 0x14);
        iVar10 = SmDev();
        uVar7 = __fixsfsi(*(undefined4 *)(DAT_0019c924 + iVar10 * 4 + 0x19c630));
        (*pcVar16)(piVar1,uStack00000024,uVar7);
        (**(code **)(**(int **)(unaff_r5 + iVar14) + 0x20))(*(int **)(unaff_r5 + iVar14),1);
        iVar10 = GameStateEarlyBird::findUpdateTimer(unaff_r5,*(int *)(pGVar13 + 0x154));
        if (iVar10 != -1) {
          iVar10 = (iVar6 + 0x32) * 4;
          (**(code **)(**(int **)(unaff_r5 + iVar10) + 0x20))(*(int **)(unaff_r5 + iVar10),1);
          piVar1 = *(int **)(unaff_r5 + iVar10);
          pcVar16 = *(code **)(*piVar1 + 0x14);
          iVar10 = SmDev();
          uVar7 = __fixsfsi(*(undefined4 *)(DAT_0019c928 + iVar10 * 4 + 0x19c616));
          (*pcVar16)(piVar1,uStack00000024,uVar7);
        }
        iVar6 = iVar6 + 1;
        if ((7 < iVar6) || (*(int *)(unaff_r5 + 0x350) <= iVar6)) break;
      }
    }
    iVar10 = SmDev();
    __addsf3(uVar3,*(undefined4 *)(iVar10 * 4 + DAT_0019c92c + 0x19c632));
    uStack00000024 = __fixsfsi();
    iStack00000028 = iStack00000028 + 1;
    pGVar13 = pGVar13 + 4;
    if (iStack00000028 == 0x14) break;
  }
  iVar2 = *(int *)(unaff_r5 + 0x20);
  if (iVar2 == -1) goto LAB_0019c774;
  iVar6 = (iVar2 + 0xbe) * 4;
  iVar10 = *(int *)(unaff_r5 + iVar6);
  if (((iVar10 == -1) || (*(int *)(*(int *)(unaff_r5 + 0xc) + 0x6b4) + 1 <= iVar10)) ||
     (piVar1 = *(int **)(iVar10 * 4 + *(int *)(*(int *)(unaff_r5 + 0xc) + 0x6b8)),
     piVar1 == (int *)0x0)) {
    uVar3 = GameStateEarlyBird::findUpdateTimer
                      (unaff_r5,*(int *)(unaff_r5 + (iVar2 + 0x54) * 4 + 4));
    *(undefined4 *)(unaff_r5 + (iVar2 + 0xbe) * 4) = uVar3;
    iVar2 = *(int *)(unaff_r5 + (*(int *)(unaff_r5 + 0x20) + 0xbe) * 4);
    if (iVar2 == -1) {
      GameStateEarlyBird::updateEarlyBirdConsole(unaff_r5);
      piVar1 = (int *)0x0;
    }
    else {
LAB_0019c6d0:
      piVar1 = *(int **)(iVar2 * 4 + *(int *)(*(int *)(unaff_r5 + 0xc) + 0x6b8));
    }
  }
  else if (*piVar1 != *(int *)(unaff_r5 + (iVar2 + 0x54) * 4 + 4)) {
    uVar3 = GameStateEarlyBird::findUpdateTimer
                      (unaff_r5,*(int *)(unaff_r5 + (iVar2 + 0x54) * 4 + 4));
    *(undefined4 *)(unaff_r5 + iVar6) = uVar3;
    iVar2 = *(int *)(unaff_r5 + (*(int *)(unaff_r5 + 0x20) + 0xbe) * 4);
    if (iVar2 != -1) goto LAB_0019c6d0;
    GameStateEarlyBird::updateEarlyBirdConsole(unaff_r5);
  }
  if (*(int *)(unaff_r5 + (*(int *)(unaff_r5 + 0x20) + 0xbe) * 4) != -1) {
    piVar15 = *(int **)(unaff_r5 + 0xf4);
    pcVar16 = *(code **)(*piVar15 + 0x44);
    Vector<String>::elementAt((int)&stack0x000000a8);
    uVar5 = __divsi3(piVar1[1],1000);
    StringUtil::createTimeString((StringUtil *)&stack0x000000b0,uVar5,'\x02');
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
        iVar2 = *(int *)(unaff_r5 + 0x20);
        if ((iVar2 != -1) && (iVar2 <= *(int *)(unaff_r5 + 0x350))) {
          GameStateEarlyBird::selectCharacter(unaff_r5,iVar2);
        }
        *(undefined4 *)(unaff_r5 + 0x34c) = *(undefined4 *)(unaff_r5 + 0x348);
      }
    }
    else {
      in_stack_0000001c = *(int *)(unaff_r5 + 0x34c) - in_stack_0000001c;
      *(int *)(unaff_r5 + 0x34c) = in_stack_0000001c;
      *(bool *)(*(int *)(unaff_r5 + 0xec) + 0x86) = 1000 < in_stack_0000001c;
      if (*(int *)(unaff_r5 + 0x34c) < 1) {
        pCVar11 = *(ConfirmDialog **)(unaff_r5 + 0x374);
        Vector<String>::elementAt((int)&stack0x000000d0);
        Vector<String>::elementAt((int)&stack0x000000d8);
        Vector<String>::elementAt((int)&stack0x000000e0);
        ConfirmDialog::show(pCVar11,&stack0x000000d0,&stack0x000000d8,&stack0x000000e0);
        String::~String((String *)&stack0x000000e0);
        String::~String((String *)&stack0x000000d8);
        String::~String((String *)&stack0x000000d0);
        iVar2 = DAT_0019c950;
        unaff_r5[DAT_0019c938] = (GameStateEarlyBird)0x1;
        puts((char *)(iVar2 + 0x19c822));
      }
      __divsi3(*(undefined4 *)(unaff_r5 + 0x34c),1000);
      piVar1 = *(int **)(unaff_r5 + 0xfc);
      pcVar16 = *(code **)(*piVar1 + 0x44);
      String::valueOf((int)&stack0x000000e8);
      (*pcVar16)(piVar1,(String *)&stack0x000000e8);
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


