/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001590f4 GameStateGatya::uninit */

/* GameStateGatya::uninit() */

void __thiscall GameStateGatya::uninit(GameStateGatya *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  GameStateGatya *pGVar4;
  void *pvVar5;
  Character *pCVar6;
  Vector<GatyaEftImageElement*> *pVVar7;
  int iVar8;
  undefined4 *puVar9;
  FontManager *pFVar10;
  float extraout_s0;
  char acStack_11c [256];
  int local_1c;
  
  iVar3 = DAT_00159428 + 0x159100;
  local_1c = **(int **)(iVar3 + DAT_0015942c);
  L_PrintLog((char *)(DAT_00159434 + 0x159110),(char *)(DAT_00159430 + 0x15910e));
  *(undefined4 *)(*(int *)(this + 0xc) + DAT_00159438) = 0;
  unSelectCharacter(this);
  iVar1 = CCSound::IsEnabled();
  if (iVar1 != 0) {
    ZombieCafe::stopMusic(extraout_s0);
    ZombieCafe::unloadMusic(*(ZombieCafe **)(this + 0xc),0);
  }
  iVar1 = DAT_0015943c;
  if (*(int **)(this + DAT_0015943c) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_0015943c) + 4))();
    *(undefined4 *)(this + iVar1) = 0;
  }
  if (*(int **)(this + 0xf00) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xf00) + 4))();
    *(undefined4 *)(this + 0xf00) = 0;
  }
  iVar1 = DAT_00159440;
  if (*(int **)(this + DAT_00159440) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_00159440) + 4))();
    *(undefined4 *)(this + iVar1) = 0;
  }
  if (*(int **)(this + 0xed0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xed0) + 4))();
    *(undefined4 *)(this + 0xed0) = 0;
  }
  if (*(int **)(this + 0xef0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xef0) + 4))();
    *(undefined4 *)(this + 0xef0) = 0;
  }
  iVar1 = DAT_00159444;
  if (*(int **)(this + DAT_00159444) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_00159444) + 4))();
    *(undefined4 *)(this + iVar1) = 0;
  }
  iVar1 = DAT_00159448;
  if (*(int **)(this + DAT_00159448) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_00159448) + 4))();
    *(undefined4 *)(this + iVar1) = 0;
  }
  iVar1 = DAT_0015944c;
  if (*(int **)(this + DAT_0015944c) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_0015944c) + 4))();
    *(undefined4 *)(this + iVar1) = 0;
  }
  iVar1 = DAT_00159450;
  if (*(int **)(this + DAT_00159450) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_00159450) + 4))();
    *(undefined4 *)(this + iVar1) = 0;
  }
  if (*(int *)(this + 0x54) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x54) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x54) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x54) + 4))();
    }
    *(undefined4 *)(this + 0x54) = 0;
  }
  if (*(int **)(this + 100) != (int *)0x0) {
    (**(code **)(**(int **)(this + 100) + 4))();
    *(undefined4 *)(this + 100) = 0;
  }
  if (*(int *)(this + 0x58) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x58) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x58) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x58) + 4))();
    }
    *(undefined4 *)(this + 0x58) = 0;
  }
  if (*(int *)(this + 0x5c) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x5c) + 0x60);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x5c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x5c) + 4))();
    }
    *(undefined4 *)(this + 0x5c) = 0;
  }
  if (*(int *)(this + 0x60) != 0) {
    L_PrintLog((char *)(DAT_00159454 + 0x159266),(char *)(DAT_00159458 + 0x159268));
    piVar2 = *(int **)(iVar3 + DAT_0015945c);
    Vector<CImage*>::removeElement
              ((Vector<CImage*> *)*piVar2,*(CImage **)(*(int *)(this + 0x60) + 100));
    if (*(int **)(*(int *)(this + 0x60) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x60) + 100) + 4))();
    }
    if (*(int **)(this + 0x60) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x60) + 4))();
    }
    *(undefined4 *)(this + 0x60) = 0;
    sprintf(acStack_11c,(char *)(DAT_00159460 + 0x1592a4),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_00159464 + 0x1592b0),acStack_11c);
  }
  *(undefined4 *)(this + DAT_00159468) = 0;
  *(undefined4 *)(this + DAT_0015946c) = 0;
  if (*(int **)(this + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x74) + 4))();
    *(undefined4 *)(this + 0x74) = 0;
  }
  if (*(int *)(this + 200) != 0) {
    piVar2 = *(int **)(*(int *)(this + 200) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 200) != (int *)0x0) {
      (**(code **)(**(int **)(this + 200) + 4))();
    }
    *(undefined4 *)(this + 200) = 0;
  }
  if (*(int *)(this + 0x68) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x68) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x68) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x68) + 4))();
    }
    *(undefined4 *)(this + 0x68) = 0;
  }
  if (*(int *)(this + 0x70) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x70) + 0x60);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x70) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x70) + 4))();
    }
    *(undefined4 *)(this + 0x70) = 0;
  }
  if (*(int **)(this + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7c) + 4))();
    *(undefined4 *)(this + 0x7c) = 0;
  }
  if (*(int *)(this + 0x78) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x78) + 0x60);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x78) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x78) + 4))();
    }
    *(undefined4 *)(this + 0x78) = 0;
  }
  if (*(int *)(this + 0x6c) != 0) {
    L_PrintLog((char *)(DAT_00159470 + 0x15937c),(char *)(DAT_00159474 + 0x15937e));
    piVar2 = *(int **)(iVar3 + DAT_0015945c);
    Vector<CImage*>::removeElement
              ((Vector<CImage*> *)*piVar2,*(CImage **)(*(int *)(this + 0x6c) + 100));
    if (*(int **)(*(int *)(this + 0x6c) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x6c) + 100) + 4))();
    }
    if (*(int **)(this + 0x6c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x6c) + 4))();
    }
    *(undefined4 *)(this + 0x6c) = 0;
    sprintf(acStack_11c,(char *)(DAT_00159478 + 0x1593ba),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_0015947c + 0x1593c6),acStack_11c);
  }
  *(undefined4 *)(this + 0xec0) = 0;
  *(undefined4 *)(this + DAT_00159480) = 0;
  if (*(int *)(this + 0x80) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x80) + 0x60);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x80) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x80) + 4))();
    }
    *(undefined4 *)(this + 0x80) = 0;
  }
  piVar2 = *(int **)(this + 0x90);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
    *(undefined4 *)(this + 0x90) = 0;
  }
  piVar2 = *(int **)(this + 0x98);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
    *(undefined4 *)(this + 0x98) = 0;
  }
  if (*(int *)(this + 0x84) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x84) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x84) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x84) + 4))();
    }
    *(undefined4 *)(this + 0x84) = 0;
  }
  if (*(int *)(this + 0x8c) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x8c) + 0x60);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x8c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x8c) + 4))();
    }
    *(undefined4 *)(this + 0x8c) = 0;
  }
  if (*(int *)(this + 0x94) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x94) + 0x60);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x94) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x94) + 4))();
    }
    *(undefined4 *)(this + 0x94) = 0;
  }
  pGVar4 = this + 0x88;
  if (*(int *)pGVar4 != 0) {
    L_PrintLog((char *)(DAT_00159838 + 0x159520),(char *)(DAT_0015983c + 0x159522));
    piVar2 = *(int **)(iVar3 + DAT_00159840);
    Vector<CImage*>::removeElement((Vector<CImage*> *)*piVar2,*(CImage **)(*(int *)pGVar4 + 100));
    if (*(int **)(*(int *)pGVar4 + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)pGVar4 + 100) + 4))();
    }
    if (*(int **)(this + 0x88) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x88) + 4))();
    }
    *(undefined4 *)(this + 0x88) = 0;
    sprintf(acStack_11c,(char *)(DAT_00159844 + 0x159566),*(int *)(*piVar2 + 4) + 1);
    L_PrintLog((char *)(DAT_00159848 + 0x159572),acStack_11c);
  }
  *(undefined4 *)(this + DAT_0015984c) = 0;
  *(undefined4 *)(this + DAT_00159850) = 0;
  if (*(int *)(this + 0x9c) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x9c) + 0x60);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x9c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x9c) + 4))();
    }
    *(undefined4 *)(this + 0x9c) = 0;
  }
  piVar2 = *(int **)(this + 0xb4);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
    *(undefined4 *)(this + 0xb4) = 0;
  }
  if (*(int *)(this + 0xa8) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0xa8) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0xa8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xa8) + 4))();
    }
    *(undefined4 *)(this + 0xa8) = 0;
  }
  if (*(int *)(this + 0xac) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0xac) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0xac) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xac) + 4))();
    }
    *(undefined4 *)(this + 0xac) = 0;
  }
  if (*(int *)(this + 0xb0) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0xb0) + 0x60);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0xb0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xb0) + 4))();
    }
    *(undefined4 *)(this + 0xb0) = 0;
  }
  if (*(int *)(this + 0xb8) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0xb8) + 0x60);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0xb8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xb8) + 4))();
    }
    *(undefined4 *)(this + 0xb8) = 0;
  }
  if (*(int *)(this + 0xa0) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0xa0) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0xa0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xa0) + 4))();
    }
    *(undefined4 *)(this + 0xa0) = 0;
  }
  if (*(int *)(this + 0xa4) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0xa4) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0xa4) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xa4) + 4))();
    }
    *(undefined4 *)(this + 0xa4) = 0;
  }
  piVar2 = *(int **)(this + 0xbc);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
    *(undefined4 *)(this + 0xbc) = 0;
  }
  if (*(int *)(this + 0x1ac) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x1ac) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x1ac) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1ac) + 4))();
    }
    *(undefined4 *)(this + 0x1ac) = 0;
  }
  if (*(int *)(this + 0x1a4) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x1a4) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x1a4) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1a4) + 4))();
    }
    *(undefined4 *)(this + 0x1a4) = 0;
  }
  if (*(int *)(this + 0x1a8) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x1a8) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x1a8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1a8) + 4))();
    }
    *(undefined4 *)(this + 0x1a8) = 0;
  }
  if (*(int *)(this + 0x1a0) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x1a0) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x1a0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1a0) + 4))();
    }
    *(undefined4 *)(this + 0x1a0) = 0;
  }
  if (*(int *)(this + 0x194) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x194) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x194) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x194) + 4))();
    }
    *(undefined4 *)(this + 0x194) = 0;
  }
  if (*(int *)(this + 0x198) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x198) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x198) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x198) + 4))();
    }
    *(undefined4 *)(this + 0x198) = 0;
  }
  if (*(int *)(this + 0x19c) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x19c) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x19c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x19c) + 4))();
    }
    *(undefined4 *)(this + 0x19c) = 0;
  }
  if (*(int *)(this + 0x164) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x164) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x164) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x164) + 4))();
    }
    *(undefined4 *)(this + 0x164) = 0;
  }
  if (*(int *)(this + 0x168) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x168) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x168) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x168) + 4))();
    }
    *(undefined4 *)(this + 0x168) = 0;
  }
  if (*(int *)(this + 0x16c) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x16c) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x16c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x16c) + 4))();
    }
    *(undefined4 *)(this + 0x16c) = 0;
  }
  if (*(int *)(this + 0x170) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x170) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x170) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x170) + 4))();
    }
    *(undefined4 *)(this + 0x170) = 0;
  }
  if (*(int *)(this + 0x174) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x174) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x174) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x174) + 4))();
    }
    *(undefined4 *)(this + 0x174) = 0;
  }
  if (*(int *)(this + 0x178) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x178) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x178) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x178) + 4))();
    }
    *(undefined4 *)(this + 0x178) = 0;
  }
  if (*(int *)(this + 0x17c) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x17c) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x17c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x17c) + 4))();
    }
    *(undefined4 *)(this + 0x17c) = 0;
  }
  if (*(int *)(this + 0x180) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x180) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x180) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x180) + 4))();
    }
    *(undefined4 *)(this + 0x180) = 0;
  }
  if (*(int *)(this + 0x184) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x184) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x184) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x184) + 4))();
    }
    *(undefined4 *)(this + 0x184) = 0;
  }
  if (*(int *)(this + 0x188) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x188) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x188) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x188) + 4))();
    }
    *(undefined4 *)(this + 0x188) = 0;
  }
  if (*(int *)(this + 0x18c) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x18c) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x18c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x18c) + 4))();
    }
    *(undefined4 *)(this + 0x18c) = 0;
  }
  if (*(int *)(this + 400) != 0) {
    piVar2 = *(int **)(*(int *)(this + 400) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 400) != (int *)0x0) {
      (**(code **)(**(int **)(this + 400) + 4))();
    }
    *(undefined4 *)(this + 400) = 0;
  }
  if (*(int *)(this + 0x15c) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x15c) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x15c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x15c) + 4))();
    }
    *(undefined4 *)(this + 0x15c) = 0;
  }
  if (*(int *)(this + 0x1b0) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x1b0) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x1b0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1b0) + 4))();
    }
    *(undefined4 *)(this + 0x1b0) = 0;
  }
  if (*(int *)(this + 0x1d4) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x1d4) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x1d4) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1d4) + 4))();
    }
    *(undefined4 *)(this + 0x1d4) = 0;
  }
  if (*(int *)(this + 0x1b4) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x1b4) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x1b4) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1b4) + 4))();
    }
    *(undefined4 *)(this + 0x1b4) = 0;
  }
  if (*(int *)(this + 0x1b8) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x1b8) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x1b8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1b8) + 4))();
    }
    *(undefined4 *)(this + 0x1b8) = 0;
  }
  if (*(int *)(this + 0x1bc) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x1bc) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x1bc) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1bc) + 4))();
    }
    *(undefined4 *)(this + 0x1bc) = 0;
  }
  if (*(int *)(this + 0x1c0) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x1c0) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x1c0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1c0) + 4))();
    }
    *(undefined4 *)(this + 0x1c0) = 0;
  }
  if (*(int *)(this + 0x1c4) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x1c4) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x1c4) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1c4) + 4))();
    }
    *(undefined4 *)(this + 0x1c4) = 0;
  }
  if (*(int *)(this + 0x1c8) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x1c8) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x1c8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1c8) + 4))();
    }
    *(undefined4 *)(this + 0x1c8) = 0;
  }
  if (*(int *)(this + 0x1cc) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x1cc) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x1cc) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1cc) + 4))();
    }
    *(undefined4 *)(this + 0x1cc) = 0;
  }
  iVar1 = 0;
  if (*(int *)(this + 0x1d0) != 0) {
    for (; iVar8 = *(int *)(this + 0x1d0), iVar1 < *(int *)(iVar8 + 4) + 1; iVar1 = iVar1 + 1) {
      piVar2 = *(int **)(*(int *)(*(int *)(iVar8 + 8) + iVar1 * 4) + 100);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
      piVar2 = *(int **)(*(int *)(*(int *)(this + 0x1d0) + 8) + iVar1 * 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
    }
    *(undefined4 *)(iVar8 + 4) = 0xffffffff;
  }
  pvVar5 = *(void **)(this + 0x1d0);
  if (pvVar5 != (void *)0x0) {
    if (*(void **)((int)pvVar5 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((int)pvVar5 + 8));
    }
    operator_delete(pvVar5);
    *(undefined4 *)(this + 0x1d0) = 0;
  }
  if (*(int **)(this + 0x160) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x160) + 4))();
    *(undefined4 *)(this + 0x160) = 0;
  }
  iVar1 = 0;
  if (*(int *)(this + 0x1d8) != 0) {
    for (; iVar8 = *(int *)(this + 0x1d8), iVar1 < *(int *)(iVar8 + 4) + 1; iVar1 = iVar1 + 1) {
      pCVar6 = *(Character **)(*(int *)(*(int *)(iVar8 + 8) + iVar1 * 4) + 0x8c);
      if (pCVar6 != (Character *)0x0) {
        Character::~Character(pCVar6);
        operator_delete(pCVar6);
      }
      piVar2 = *(int **)(*(int *)(*(int *)(this + 0x1d8) + 8) + iVar1 * 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
    }
    *(undefined4 *)(iVar8 + 4) = 0xffffffff;
  }
  pvVar5 = *(void **)(this + 0x1d8);
  if (pvVar5 != (void *)0x0) {
    if (*(void **)((int)pvVar5 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((int)pvVar5 + 8));
    }
    operator_delete(pvVar5);
    *(undefined4 *)(this + 0x1d8) = 0;
  }
  iVar1 = 0;
  if (*(int *)(this + 0x1dc) != 0) {
    for (; iVar8 = *(int *)(this + 0x1dc), iVar1 < *(int *)(iVar8 + 4) + 1; iVar1 = iVar1 + 1) {
      pCVar6 = *(Character **)(*(int *)(*(int *)(iVar8 + 8) + iVar1 * 4) + 0x8c);
      if (pCVar6 != (Character *)0x0) {
        Character::~Character(pCVar6);
        operator_delete(pCVar6);
      }
      piVar2 = *(int **)(*(int *)(*(int *)(this + 0x1dc) + 8) + iVar1 * 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
    }
    *(undefined4 *)(iVar8 + 4) = 0xffffffff;
  }
  pvVar5 = *(void **)(this + 0x1dc);
  if (pvVar5 != (void *)0x0) {
    if (*(void **)((int)pvVar5 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((int)pvVar5 + 8));
    }
    operator_delete(pvVar5);
    *(undefined4 *)(this + 0x1dc) = 0;
  }
  iVar1 = 0;
  if (*(int *)(this + 0x1e0) != 0) {
    for (; iVar8 = *(int *)(this + 0x1e0), iVar1 < *(int *)(iVar8 + 4) + 1; iVar1 = iVar1 + 1) {
      piVar2 = *(int **)(*(int *)(*(int *)(iVar8 + 8) + iVar1 * 4) + 100);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
      piVar2 = *(int **)(*(int *)(*(int *)(this + 0x1e0) + 8) + iVar1 * 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
    }
    *(undefined4 *)(iVar8 + 4) = 0xffffffff;
  }
  pVVar7 = *(Vector<GatyaEftImageElement*> **)(this + 0x1e0);
  if (pVVar7 != (Vector<GatyaEftImageElement*> *)0x0) {
    Vector<GatyaEftImageElement*>::~Vector(pVVar7);
    operator_delete(pVVar7);
    *(undefined4 *)(this + 0x1e0) = 0;
  }
  iVar1 = 0;
  if (*(int *)(this + 0x1e4) != 0) {
    for (; iVar8 = *(int *)(this + 0x1e4), iVar1 < *(int *)(iVar8 + 4) + 1; iVar1 = iVar1 + 1) {
      piVar2 = *(int **)(*(int *)(*(int *)(iVar8 + 8) + iVar1 * 4) + 100);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
      piVar2 = *(int **)(*(int *)(*(int *)(this + 0x1e4) + 8) + iVar1 * 4);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
    }
    *(undefined4 *)(iVar8 + 4) = 0xffffffff;
  }
  pVVar7 = *(Vector<GatyaEftImageElement*> **)(this + 0x1e4);
  if (pVVar7 != (Vector<GatyaEftImageElement*> *)0x0) {
    Vector<GatyaEftImageElement*>::~Vector(pVVar7);
    operator_delete(pVVar7);
    *(undefined4 *)(this + 0x1e4) = 0;
  }
  iVar1 = DAT_0015a070;
  if (*(int *)(this + DAT_0015a070) != 0) {
    piVar2 = *(int **)(*(int *)(this + DAT_0015a070) + 0x60);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + iVar1) != (int *)0x0) {
      (**(code **)(**(int **)(this + iVar1) + 4))();
    }
    *(undefined4 *)(this + iVar1) = 0;
  }
  iVar1 = DAT_0015a074;
  if (*(int **)(this + DAT_0015a074) != (int *)0x0) {
    (**(code **)(**(int **)(this + DAT_0015a074) + 4))();
    *(undefined4 *)(this + iVar1) = 0;
  }
  iVar1 = DAT_0015a078;
  if (*(int *)(this + DAT_0015a078) != 0) {
    piVar2 = *(int **)(*(int *)(this + DAT_0015a078) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + iVar1) != (int *)0x0) {
      (**(code **)(**(int **)(this + iVar1) + 4))();
    }
    *(undefined4 *)(this + iVar1) = 0;
  }
  if (*(int **)(this + 0xee0) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xee0) + 4))();
    *(undefined4 *)(this + 0xee0) = 0;
  }
  if (*(int *)(this + 0x1e8) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x1e8) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x1e8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1e8) + 4))();
    }
    *(undefined4 *)(this + 0x1e8) = 0;
  }
  if (*(int *)(this + 0x1ec) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x1ec) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x1ec) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1ec) + 4))();
    }
    *(undefined4 *)(this + 0x1ec) = 0;
  }
  if (*(int *)(this + 0x1f0) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x1f0) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x1f0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1f0) + 4))();
    }
    *(undefined4 *)(this + 0x1f0) = 0;
  }
  if (*(int *)(this + 500) != 0) {
    piVar2 = *(int **)(*(int *)(this + 500) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 500) != (int *)0x0) {
      (**(code **)(**(int **)(this + 500) + 4))();
    }
    *(undefined4 *)(this + 500) = 0;
  }
  if (*(int *)(this + 0x1f8) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x1f8) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x1f8) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1f8) + 4))();
    }
    *(undefined4 *)(this + 0x1f8) = 0;
  }
  if (*(int *)(this + 0x1fc) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x1fc) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x1fc) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x1fc) + 4))();
    }
    *(undefined4 *)(this + 0x1fc) = 0;
  }
  if (*(int *)(this + 0x204) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x204) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x204) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x204) + 4))();
    }
    *(undefined4 *)(this + 0x204) = 0;
  }
  if (*(int *)(this + 0x208) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x208) + 0x60);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x208) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x208) + 4))();
    }
    *(undefined4 *)(this + 0x208) = 0;
  }
  if (*(int **)(this + 0x20c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x20c) + 4))();
    *(undefined4 *)(this + 0x20c) = 0;
  }
  if (*(int *)(this + 0x200) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x200) + 100);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    if (*(int **)(this + 0x200) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x200) + 4))();
    }
    *(undefined4 *)(this + 0x200) = 0;
  }
  if (*(int **)(this + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x14) + 4))();
    *(undefined4 *)(this + 0x14) = 0;
  }
  if (*(int **)(this + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x18) + 4))();
    *(undefined4 *)(this + 0x18) = 0;
  }
  if (*(int **)(this + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x1c) + 4))();
    *(undefined4 *)(this + 0x1c) = 0;
  }
  if (*(int **)(this + 0x20) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x20) + 4))();
    *(undefined4 *)(this + 0x20) = 0;
  }
  if (*(int **)(this + 0x24) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x24) + 4))();
    *(undefined4 *)(this + 0x24) = 0;
  }
  if (*(int **)(this + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x2c) + 4))();
    *(undefined4 *)(this + 0x2c) = 0;
  }
  if (*(int **)(this + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x28) + 4))();
    *(undefined4 *)(this + 0x28) = 0;
  }
  pvVar5 = *(void **)(this + 0xeb0);
  if (pvVar5 != (void *)0x0) {
    if (*(void **)((int)pvVar5 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((int)pvVar5 + 8));
    }
    operator_delete(pvVar5);
    *(undefined4 *)(this + 0xeb0) = 0;
  }
  iVar1 = DAT_0015a07c;
  pvVar5 = *(void **)(this + DAT_0015a07c);
  if (pvVar5 != (void *)0x0) {
    if (*(void **)((int)pvVar5 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((int)pvVar5 + 8));
    }
    operator_delete(pvVar5);
    *(undefined4 *)(this + iVar1) = 0;
  }
  releaseCharacterAll(this);
  puVar9 = *(undefined4 **)(iVar3 + DAT_0015a080);
  iVar8 = DAT_0015a084 + 0x15a018;
  pFVar10 = (FontManager *)*puVar9;
  iVar1 = SmDev();
  FontManager::delFont(pFVar10,*(int *)(iVar8 + iVar1 * 4 + 0x54));
  pFVar10 = (FontManager *)*puVar9;
  iVar1 = SmDev();
  FontManager::delFont(pFVar10,*(int *)(iVar8 + iVar1 * 4 + 0x6c));
  ZombieCafe::unloadInGameImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadMenuImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadZombieCollectionImages(*(ZombieCafe **)(this + 0xc),false);
  ZombieCafe::unloadGatyaImages(*(ZombieCafe **)(this + 0xc),false);
  if (local_1c == **(int **)(iVar3 + DAT_0015a088)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


