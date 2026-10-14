/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00149b24 GameStateGatya::layout */

/* GameStateGatya::layout() */

void __thiscall GameStateGatya::layout(GameStateGatya *this)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  GameStateGatya *pGVar9;
  ScreenElement *pSVar10;
  int *piVar11;
  bool bVar12;
  code *local_28;
  uint local_24;
  
  iVar2 = iRam00149c40;
  (**(code **)(**(int **)(this + 0x14) + 0x18))
            (*(int **)(this + 0x14),*(int *)(*(int *)(this + 0xc) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x10));
  iVar7 = DAT_00149c44;
  pGVar9 = (GameStateGatya *)(iVar2 + 0x149b4c);
  (**(code **)(**(int **)(this + 0x18) + 0x18))
            (*(int **)(this + 0x18),*(int *)(*(int *)(this + 0xc) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x10));
  (**(code **)(**(int **)(this + 0x1c) + 0x18))
            (*(int **)(this + 0x1c),*(int *)(*(int *)(this + 0xc) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x10));
  (**(code **)(**(int **)(this + 0x20) + 0x18))
            (*(int **)(this + 0x20),*(int *)(*(int *)(this + 0xc) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x10));
  (**(code **)(**(int **)(this + 0x24) + 0x18))
            (*(int **)(this + 0x24),*(int *)(*(int *)(this + 0xc) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0xc) + 0x10));
  piVar11 = *(int **)(this + 0x24);
  pcVar5 = *(code **)(*piVar11 + 0x14);
  iVar2 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(pGVar9 + iVar2 * 4));
  __mulsf3(uVar3,*(undefined4 *)(this + iVar7));
  uVar3 = __fixsfsi();
  (*pcVar5)(piVar11,0,uVar3);
  (**(code **)(**(int **)(this + 0x28) + 0x18))
            (*(int **)(this + 0x28),*(undefined4 *)(*(int *)(this + 0x24) + 0xc),
             (int)*(short *)(*(int *)(this + 0xc) + 0x10));
  (**(code **)(**(int **)(this + 0x28) + 0x14))(*(int **)(this + 0x28),0,0);
  piVar11 = *(int **)(this + 0x2c);
  local_28 = *(code **)(*piVar11 + 0x18);
  uVar6 = *(undefined4 *)(*(int *)(this + 0x14) + 0xc);
  iVar2 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(pGVar9 + iVar2 * 4));
  __mulsf3(uVar3,*(undefined4 *)(this + iVar7));
  uVar3 = __fixsfsi();
  (*local_28)(piVar11,uVar6,uVar3);
  (**(code **)(**(int **)(this + 0x2c) + 0x14))(*(int **)(this + 0x2c),0,0);
  if (this[0xe40] == (GameStateGatya)0x0) {
    FUN_0014a95a();
  }
  local_24 = (uint)(byte)this[DAT_00149c48];
  if (local_24 == 1) {
    FUN_0014a5ac();
  }
  if (local_24 == 0) {
    FUN_00149b04(*(undefined4 *)(this + 0x1e8),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
    piVar11 = *(int **)(this + 0x54);
    iVar2 = *(int *)(*(int *)(this + 0x14) + 0xc);
    __mulsf3(*(undefined4 *)(this + DAT_0014a048),DAT_0014a04c);
    uVar3 = __fixsfsi();
    (**(code **)(*piVar11 + 0x14))(piVar11,iVar2 / 2,uVar3);
    piVar11 = *(int **)(this + DAT_0014a050);
    uVar3 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x14) + 0xc));
    uVar6 = __mulsf3(*(undefined4 *)(this + 0xf10),0x42800000);
    __addsf3(uVar3,uVar6);
    uVar3 = __fixsfsi();
    iVar2 = *piVar11;
    __mulsf3(*(undefined4 *)(this + DAT_0014a048),DAT_0014a04c);
    uVar6 = __fixsfsi();
    (**(code **)(iVar2 + 0x14))(piVar11,uVar3,uVar6);
    pSVar10 = *(ScreenElement **)(this + DAT_0014a050);
    piVar11 = *(int **)(this + DAT_0014a054);
    iVar2 = ScreenElement::getPosition(pSVar10);
    iVar7 = *piVar11;
    uVar3 = __floatsisf(iVar2 >> 0x10);
    uVar6 = __mulsf3(*(undefined4 *)(this + 0xf10),DAT_0014a058);
    __subsf3(uVar3,uVar6);
    uVar3 = __fixsfsi();
    (**(code **)(iVar7 + 0x14))(piVar11,uVar3,(int)(short)iVar2 + *(int *)(pSVar10 + 0x10) / 2);
    pSVar10 = *(ScreenElement **)(this + DAT_0014a050);
    piVar11 = *(int **)(this + DAT_0014a05c);
    sVar1 = ScreenElement::getPosition(pSVar10);
    iVar2 = *piVar11;
    uVar3 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x14) + 0xc));
    uVar6 = __mulsf3(*(undefined4 *)(this + 0xf10),0x42800000);
    __addsf3(uVar3,uVar6);
    uVar3 = __fixsfsi();
    uVar6 = __floatsisf((int)sVar1 + *(int *)(pSVar10 + 0x10));
    uVar4 = __mulsf3(*(undefined4 *)(this + DAT_0014a048),DAT_0014a060);
    __addsf3(uVar6,uVar4);
    uVar6 = __fixsfsi();
    (**(code **)(iVar2 + 0x14))(piVar11,uVar3,uVar6);
    pSVar10 = *(ScreenElement **)(this + DAT_0014a05c);
    piVar11 = *(int **)(this + 0xee0);
    iVar2 = ScreenElement::getPosition(pSVar10);
    iVar7 = *piVar11;
    uVar3 = __floatsisf(iVar2 >> 0x10);
    uVar6 = __mulsf3(*(undefined4 *)(this + 0xf10),DAT_0014a058);
    __subsf3(uVar3,uVar6);
    uVar3 = __fixsfsi();
    (**(code **)(iVar7 + 0x14))(piVar11,uVar3,(int)(short)iVar2 + *(int *)(pSVar10 + 0x10) / 2);
    piVar11 = *(int **)(this + 0x58);
    if (piVar11 == (int *)0x0) {
      local_28 = (code *)0x0;
    }
    else {
      (**(code **)(*piVar11 + 0x14))(piVar11,*(int *)(*(int *)(this + 0x24) + 0xc) / 2,0);
      piVar11 = *(int **)(this + 0x60);
      if (piVar11 != (int *)0x0) {
        iVar2 = ScreenElement::getPosition(*(ScreenElement **)(this + 0x58));
        uVar3 = __floatsisf((int)(short)iVar2);
        uVar6 = __mulsf3(*(undefined4 *)(this + DAT_0014a048),DAT_0014a058);
        __addsf3(uVar3,uVar6);
        uVar3 = __fixsfsi();
        (**(code **)(*piVar11 + 0x14))(piVar11,iVar2 >> 0x10,uVar3);
      }
      pSVar10 = *(ScreenElement **)(this + 0x58);
      piVar11 = *(int **)(this + 0x5c);
      iVar2 = ScreenElement::getPosition(pSVar10);
      iVar7 = *piVar11;
      uVar3 = __floatsisf((iVar2 >> 0x10) + *(int *)(pSVar10 + 0xc) / 2);
      uVar6 = __mulsf3(*(undefined4 *)(this + 0xf10),DAT_0014a04c);
      __subsf3(uVar3,uVar6);
      uVar3 = __fixsfsi();
      (**(code **)(iVar7 + 0x14))
                (piVar11,uVar3,(iVar2 + *(int *)(pSVar10 + 0x10) / 2) * 0x10000 >> 0x10);
      iVar2 = *(int *)(this + 0x5c);
      piVar11 = *(int **)(this + 100);
      iVar7 = *piVar11;
      uVar3 = __floatsisf(*(int *)(iVar2 + 0xc) / 2);
      uVar6 = __mulsf3(*(undefined4 *)(this + 0xf10),DAT_0014a064);
      __addsf3(uVar3,uVar6);
      uVar3 = __fixsfsi();
      uVar6 = __floatsisf(*(undefined4 *)(iVar2 + 0x10));
      uVar4 = __mulsf3(*(undefined4 *)(this + DAT_0014a048),DAT_0014a068);
      __subsf3(uVar6,uVar4);
      uVar6 = __fixsfsi();
      (**(code **)(iVar7 + 0x14))(piVar11,uVar3,uVar6);
      uVar3 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x58) + 0x10));
      uVar6 = __mulsf3(*(undefined4 *)(this + DAT_0014a048),DAT_0014a06c);
      uVar3 = __addsf3(uVar3,uVar6);
      __addsf3(uVar3,0);
      local_28 = (code *)__fixsfsi();
    }
    piVar11 = *(int **)(this + 0x68);
    if (piVar11 == (int *)0x0) {
      piVar11 = *(int **)(this + 0x80);
      if (piVar11 != (int *)0x0) {
        (**(code **)(*piVar11 + 0x20))(piVar11,0);
      }
    }
    else {
      (**(code **)(*piVar11 + 0x14))(piVar11,*(int *)(*(int *)(this + 0x14) + 0xc) / 2,local_28);
      piVar11 = *(int **)(this + 0x6c);
      if (piVar11 != (int *)0x0) {
        iVar2 = ScreenElement::getPosition(*(ScreenElement **)(this + 0x68));
        uVar3 = __floatsisf((int)(short)iVar2);
        uVar6 = __mulsf3(*(undefined4 *)(this + DAT_0014a048),DAT_0014a058);
        __addsf3(uVar3,uVar6);
        uVar3 = __fixsfsi();
        (**(code **)(*piVar11 + 0x14))(piVar11,iVar2 >> 0x10,uVar3);
      }
      piVar11 = *(int **)(this + 0x70);
      if (piVar11 != (int *)0x0) {
        pSVar10 = *(ScreenElement **)(this + 0x68);
        iVar2 = ScreenElement::getPosition(pSVar10);
        iVar7 = *(int *)(pSVar10 + 0xc);
        iVar8 = *piVar11;
        uVar3 = __floatsisf((int)(short)iVar2 + *(int *)(pSVar10 + 0x10));
        uVar6 = __mulsf3(*(undefined4 *)(this + DAT_0014a048),DAT_0014a04c);
        __subsf3(uVar3,uVar6);
        uVar3 = __fixsfsi();
        (**(code **)(iVar8 + 0x14))
                  (piVar11,(iVar2 >> 0x10) - ((int)(((uint)(iVar7 >> 0x1f) >> 0x1e) + iVar7) >> 2),
                   uVar3);
        iVar2 = *(int *)(this + 0x70);
        piVar11 = *(int **)(this + 0x74);
        iVar7 = *piVar11;
        uVar3 = __floatsisf(*(int *)(iVar2 + 0xc) / 2);
        uVar6 = __mulsf3(*(undefined4 *)(this + 0xf10),DAT_0014a070);
        __addsf3(uVar3,uVar6);
        uVar3 = __fixsfsi();
        uVar6 = __floatsisf(*(undefined4 *)(iVar2 + 0x10));
        uVar4 = __mulsf3(*(undefined4 *)(this + DAT_0014a048),DAT_0014a074);
        __subsf3(uVar6,uVar4);
        uVar6 = __fixsfsi();
        pGVar9 = this + 200;
        (**(code **)(iVar7 + 0x14))(piVar11,uVar3,uVar6);
        piVar11 = *(int **)pGVar9;
        iVar7 = *(int *)(this + 0x70);
        iVar2 = *piVar11;
        uVar3 = __floatsisf(*(int *)(iVar7 + 0xc) / 2);
        uVar6 = __mulsf3(*(undefined4 *)(this + 0xf10),DAT_0014a070);
        __addsf3(uVar3,uVar6);
        uVar3 = __fixsfsi();
        uVar6 = __floatsisf(*(undefined4 *)(iVar7 + 0x10));
        uVar4 = __mulsf3(*(undefined4 *)(this + DAT_0014a048),DAT_0014a078);
        __subsf3(uVar6,uVar4);
        uVar6 = __fixsfsi();
        (**(code **)(iVar2 + 0x14))(piVar11,uVar3,uVar6);
        pcVar5 = *(code **)(**(int **)(this + 0x74) + 0x20);
        bVar12 = *(char *)(*(int *)(this + 0xc) + DAT_0014a3a4) != '\0';
        if (bVar12) {
          (*pcVar5)(*(int **)(this + 0x74),1);
          piVar11 = *(int **)pGVar9;
          pcVar5 = *(code **)(*piVar11 + 0x20);
        }
        else {
          (*pcVar5)();
          piVar11 = *(int **)pGVar9;
          pcVar5 = *(code **)(*piVar11 + 0x20);
        }
        (*pcVar5)(piVar11,!bVar12);
      }
      piVar11 = *(int **)(this + 0x78);
      if (piVar11 != (int *)0x0) {
        pSVar10 = *(ScreenElement **)(this + 0x68);
        iVar2 = ScreenElement::getPosition(pSVar10);
        (**(code **)(*piVar11 + 0x14))
                  (piVar11,(iVar2 >> 0x10) +
                           ((int)(((uint)(*(int *)(pSVar10 + 0xc) >> 0x1f) >> 0x1e) +
                                 *(int *)(pSVar10 + 0xc)) >> 2),
                   (int)(short)iVar2 + *(int *)(pSVar10 + 0x10));
        iVar2 = *(int *)(this + 0x78);
        piVar11 = *(int **)(this + 0x7c);
        iVar7 = *piVar11;
        uVar3 = __floatsisf(*(int *)(iVar2 + 0xc) / 2);
        uVar6 = __mulsf3(*(undefined4 *)(this + 0xf10),DAT_0014a3a8);
        __subsf3(uVar3,uVar6);
        uVar3 = __fixsfsi();
        uVar6 = __floatsisf(*(undefined4 *)(iVar2 + 0x10));
        uVar4 = __mulsf3(*(undefined4 *)(this + DAT_0014a3ac),DAT_0014a3b0);
        __subsf3(uVar6,uVar4);
        uVar6 = __fixsfsi();
        (**(code **)(iVar7 + 0x14))(piVar11,uVar3,uVar6);
      }
      pSVar10 = *(ScreenElement **)(this + 0x68);
      piVar11 = *(int **)(this + 0x80);
      iVar2 = ScreenElement::getPosition(pSVar10);
      (**(code **)(*piVar11 + 0x14))
                (piVar11,(iVar2 >> 0x10) + *(int *)(pSVar10 + 0xc) / 2 + piVar11[3] / 2,
                 (int)(short)iVar2);
      uVar3 = __floatsisf(local_28);
      uVar6 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x68) + 0x10));
      uVar4 = __mulsf3(*(undefined4 *)(this + DAT_0014a3ac),DAT_0014a3b4);
      uVar6 = __addsf3(uVar6,uVar4);
      __addsf3(uVar3,uVar6);
      local_28 = (code *)__fixsfsi();
    }
    pGVar9 = this + 8;
    piVar11 = *(int **)(this + 0x84);
    if (piVar11 == (int *)0x0) {
      piVar11 = *(int **)(this + 0x9c);
      if (piVar11 != (int *)0x0) {
        (**(code **)(*piVar11 + 0x20))(piVar11,0);
      }
      goto LAB_0014a3d2;
    }
    (**(code **)(*piVar11 + 0x14))(piVar11,*(int *)(*(int *)(this + 0x14) + 0xc) / 2,local_28);
    piVar11 = *(int **)(this + 0x88);
    iVar2 = ScreenElement::getPosition(*(ScreenElement **)(this + 0x84));
    local_24 = iVar2 >> 0x10;
    uVar3 = __floatsisf((int)(short)iVar2);
  }
  else {
    piVar11 = (int *)&DAT_000001ec;
    if (local_24 != 2) {
      FUN_0014a7ac();
    }
    uVar3 = FUN_0014a5c2();
  }
  uVar6 = __mulsf3(*(undefined4 *)(this + DAT_0014a3ac),DAT_0014a3a8);
  __addsf3(uVar3,uVar6);
  uVar3 = __fixsfsi();
  (**(code **)(*piVar11 + 0x14))(piVar11,local_24,uVar3);
  piVar11 = *(int **)(this + 0x8c);
  if (piVar11 != (int *)0x0) {
    pSVar10 = *(ScreenElement **)(pGVar9 + 0x7c);
    iVar2 = ScreenElement::getPosition(pSVar10);
    iVar7 = *piVar11;
    iVar8 = *(int *)(pSVar10 + 0xc);
    uVar3 = __floatsisf((int)(short)iVar2 + *(int *)(pSVar10 + 0x10));
    uVar6 = __mulsf3(*(undefined4 *)(this + DAT_0014a3ac),DAT_0014a3b8);
    __subsf3(uVar3,uVar6);
    uVar3 = __fixsfsi();
    (**(code **)(iVar7 + 0x14))
              (piVar11,(iVar2 >> 0x10) - ((int)(((uint)(iVar8 >> 0x1f) >> 0x1e) + iVar8) >> 2),uVar3
              );
    iVar2 = *(int *)(this + 0x8c);
    piVar11 = *(int **)(this + 0x90);
    iVar7 = *piVar11;
    uVar3 = __floatsisf(*(int *)(iVar2 + 0xc) / 2);
    uVar6 = __mulsf3(*(undefined4 *)(this + 0xf10),DAT_0014a3b0);
    __addsf3(uVar3,uVar6);
    uVar3 = __fixsfsi();
    uVar6 = __floatsisf(*(undefined4 *)(iVar2 + 0x10));
    uVar4 = __mulsf3(*(undefined4 *)(this + DAT_0014a3ac),DAT_0014a3bc);
    __subsf3(uVar6,uVar4);
    uVar6 = __fixsfsi();
    (**(code **)(iVar7 + 0x14))(piVar11,uVar3,uVar6);
  }
  piVar11 = *(int **)(this + 0x94);
  if (piVar11 != (int *)0x0) {
    pSVar10 = *(ScreenElement **)(this + 0x84);
    iVar2 = ScreenElement::getPosition(pSVar10);
    (**(code **)(*piVar11 + 0x14))
              (piVar11,(iVar2 >> 0x10) +
                       ((int)(((uint)(*(int *)(pSVar10 + 0xc) >> 0x1f) >> 0x1e) +
                             *(int *)(pSVar10 + 0xc)) >> 2),
               (int)(short)iVar2 + *(int *)(pSVar10 + 0x10));
    iVar2 = *(int *)(this + 0x94);
    piVar11 = *(int **)(this + 0x98);
    iVar7 = *piVar11;
    uVar3 = __floatsisf(*(int *)(iVar2 + 0xc) / 2);
    uVar6 = __mulsf3(*(undefined4 *)(this + 0xf10),DAT_0014a3a8);
    __subsf3(uVar3,uVar6);
    uVar3 = __fixsfsi();
    uVar6 = __floatsisf(*(undefined4 *)(iVar2 + 0x10));
    uVar4 = __mulsf3(*(undefined4 *)(this + DAT_0014a3ac),DAT_0014a3b0);
    __subsf3(uVar6,uVar4);
    uVar6 = __fixsfsi();
    (**(code **)(iVar7 + 0x14))(piVar11,uVar3,uVar6);
  }
  pSVar10 = *(ScreenElement **)(this + 0x84);
  piVar11 = *(int **)(this + 0x9c);
  iVar2 = ScreenElement::getPosition(pSVar10);
  (**(code **)(*piVar11 + 0x14))
            (piVar11,(iVar2 >> 0x10) + *(int *)(pSVar10 + 0xc) / 2 + piVar11[3] / 2,
             (int)(short)iVar2);
  uVar3 = __floatsisf(local_28);
  uVar6 = __floatsisf(*(undefined4 *)(*(int *)(this + 0x84) + 0x10));
  uVar4 = __mulsf3(*(undefined4 *)(this + DAT_0014a3ac),DAT_0014a3b4);
  uVar6 = __addsf3(uVar6,uVar4);
  __addsf3(uVar3,uVar6);
  local_28 = (code *)__fixsfsi();
LAB_0014a3d2:
  pGVar9 = this + 0xa8;
  piVar11 = *(int **)pGVar9;
  if (piVar11 != (int *)0x0) {
    (**(code **)(*piVar11 + 0x14))(piVar11,*(int *)(*(int *)(this + 0x14) + 0xc) / 2,local_28);
    piVar11 = *(int **)(this + 0xac);
    iVar2 = ScreenElement::getPosition(*(ScreenElement **)pGVar9);
    (**(code **)(*piVar11 + 0x14))(piVar11,iVar2 >> 0x10,(short)iVar2 + 10);
    piVar11 = *(int **)(this + 0xb4);
    iVar2 = *piVar11;
    uVar6 = *(undefined4 *)(this + DAT_0014a780);
    __mulsf3(uVar6,DAT_0014a784);
    uVar3 = __fixsfsi();
    __mulsf3(uVar6,DAT_0014a788);
    uVar6 = __fixsfsi();
    (**(code **)(iVar2 + 0x14))(piVar11,uVar3,uVar6);
    piVar11 = *(int **)(this + 0xb0);
    if (piVar11 != (int *)0x0) {
      pSVar10 = *(ScreenElement **)pGVar9;
      iVar2 = ScreenElement::getPosition(pSVar10);
      iVar7 = *piVar11;
      uVar4 = *(undefined4 *)(this + DAT_0014a780);
      uVar3 = __floatsisf(iVar2 >> 0x10);
      uVar6 = __mulsf3(uVar4,DAT_0014a78c);
      __addsf3(uVar3,uVar6);
      uVar3 = __fixsfsi();
      uVar6 = __floatsisf((int)(short)iVar2 + *(int *)(pSVar10 + 0x10) / 2);
      uVar4 = __mulsf3(uVar4,0x40800000);
      __subsf3(uVar6,uVar4);
      uVar6 = __fixsfsi();
      (**(code **)(iVar7 + 0x14))(piVar11,uVar3,uVar6);
    }
    pSVar10 = *(ScreenElement **)(this + 0xa8);
    piVar11 = *(int **)(this + 0xb8);
    iVar2 = ScreenElement::getPosition(pSVar10);
    (**(code **)(*piVar11 + 0x14))
              (piVar11,(iVar2 >> 0x10) + *(int *)(pSVar10 + 0xc) / 2 + piVar11[3] / 2,
               (int)(short)iVar2);
    local_28 = local_28 + *(int *)(*(int *)(this + 0xa8) + 0x10) + 0x1e;
  }
  iVar2 = DAT_0014a794;
  *(code **)(this + DAT_0014a790) = local_28;
  (**(code **)(**(int **)(this + 0x28) + 0x14))
            (*(int **)(this + 0x28),0,*(undefined4 *)(this + iVar2));
  (**(code **)(**(int **)(this + 0x28) + 0x18))
            (*(int **)(this + 0x28),*(undefined4 *)(*(int *)(this + 0x24) + 0xc),local_28);
  piVar11 = *(int **)(this + 0x208);
  if (piVar11 != (int *)0x0) {
    iVar2 = *(int *)(this + 0x14);
    iVar7 = *piVar11;
    uVar3 = __floatsisf(*(undefined4 *)(iVar2 + 0xc));
    uVar6 = __mulsf3(*(undefined4 *)(this + 0xf10),DAT_0014a798);
    __subsf3(uVar3,uVar6);
    uVar3 = __fixsfsi();
    uVar6 = __floatsisf(*(undefined4 *)(iVar2 + 0x10));
    uVar4 = __mulsf3(*(undefined4 *)(this + DAT_0014a79c),DAT_0014a798);
    __subsf3(uVar6,uVar4);
    uVar6 = __fixsfsi();
    (**(code **)(iVar7 + 0x14))(piVar11,uVar3,uVar6);
  }
  FUN_00149b04(*(undefined4 *)(this + DAT_0014a7a0),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  ConfirmDialog::layout();
  iVar2 = DAT_0014a7a4;
  FUN_00149b04(*(undefined4 *)(this + 0xed0),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  FUN_00149b04(*(undefined4 *)(this + iVar2),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  NoticeDialog::layout();
  NoticeDialog::layout();
  FUN_00149b04(*(undefined4 *)(this + 0xf00),*(undefined4 *)(*(int *)(this + 0xc) + 0x14));
  FUN_0014a95a();
  return;
}


