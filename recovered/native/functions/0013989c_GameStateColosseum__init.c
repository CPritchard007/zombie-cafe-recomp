/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013989c GameStateColosseum::init */

/* GameStateColosseum::init() */

void __thiscall GameStateColosseum::init(GameStateColosseum *this)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  Furniture *pFVar4;
  ScreenElement *this_00;
  NoticeDialog *this_01;
  HudElement *this_02;
  ConfirmDialog *this_03;
  ObjectiveCompleteDialog *this_04;
  ObjectiveDialog *this_05;
  MessageElement *this_06;
  BuyToxinDialog *this_07;
  CharacterCommandBar *this_08;
  undefined4 uVar5;
  CImage *pCVar6;
  ImageElement *pIVar7;
  BitmapTextElement *pBVar8;
  Cafe *this_09;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  GameStateColosseum *pGVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  FurnitureData *pFVar20;
  code *pcVar21;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  String aSStack_10c [8];
  String aSStack_104 [8];
  String aSStack_fc [8];
  String aSStack_f4 [8];
  String aSStack_ec [8];
  int local_e4 [5];
  int local_d0 [5];
  byte local_bc [112];
  char local_4c [12];
  char local_40 [12];
  char local_34 [12];
  char local_28 [12];
  int local_1c;
  
  iVar12 = DAT_00139b80 + 0x1398a8;
  local_1c = **(int **)(iVar12 + DAT_00139b84);
  puts((char *)(DAT_00139b88 + 0x1398b6));
  *(undefined4 *)(this + 0x30) = 0;
  ZombieCafe::loadInGameImages(*(ZombieCafe **)(this + 0xc));
  uVar2 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + DAT_00139b8c),false);
  *(undefined4 *)(this + 0x7c) = uVar2;
  uVar2 = PackedImage::getImages(*(PackedImage **)(*(int *)(this + 0xc) + 0x7f0),false);
  *(undefined4 *)(this + 0x80) = uVar2;
  colosseumLayouts::load();
  colosseumItems::load();
  this[0xd0] = (GameStateColosseum)0x0;
  this[0xd6] = (GameStateColosseum)0x0;
  for (iVar17 = 0; iVar17 < *(int *)(*(int *)(this + 0xc) + DAT_00139b90 + 4) + 1;
      iVar17 = iVar17 + 1) {
    iVar18 = iVar17 * 4;
    Vector<int>::addElement
              ((Vector<int> *)(this + 0xd8),
               (uint)*(byte *)(*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_00139b90 + 8) + iVar18)
                              + 0x44));
    iVar13 = *(int *)(this + 0xe4);
    uVar2 = *(undefined4 *)
             (*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_00139b90 + 8) + iVar18) + 0x48);
    iVar9 = *(int *)(this + 0xe8) + 2;
    if (iVar13 < iVar9) {
      iVar13 = iVar13 * 2;
      if (iVar13 < iVar9) {
        iVar13 = iVar9;
      }
      Vector<long>::resize((Vector<long> *)(this + 0xe4),iVar13,-1);
    }
    iVar13 = DAT_00139b90;
    iVar9 = *(int *)(this + 0xe8);
    *(int *)(this + 0xe8) = iVar9 + 1;
    *(undefined4 *)((iVar9 + 1) * 4 + *(int *)(this + 0xec)) = uVar2;
    Vector<int>::addElement
              ((Vector<int> *)(this + 0xf0),
               (uint)*(byte *)(*(int *)(*(int *)(*(int *)(this + 0xc) + iVar13 + 8) + iVar18) + 0x4c
                              ));
    iVar13 = *(int *)(this + 0xfc);
    uVar2 = *(undefined4 *)
             (*(int *)(*(int *)(*(int *)(this + 0xc) + DAT_00139b90 + 8) + iVar18) + 0x40);
    iVar9 = *(int *)(this + 0x100) + 2;
    if (iVar13 < iVar9) {
      iVar13 = iVar13 * 2;
      if (iVar13 < iVar9) {
        iVar13 = iVar9;
      }
      Vector<float>::resize((Vector<float> *)(this + 0xfc),iVar13,-1);
    }
    iVar13 = *(int *)(this + 0x100);
    *(int *)(this + 0x100) = iVar13 + 1;
    *(undefined4 *)((iVar13 + 1) * 4 + *(int *)(this + 0x104)) = uVar2;
  }
  puts((char *)(DAT_00139b94 + 0x1399ac));
  iVar17 = 0;
  if (0 < **(short **)(iVar12 + DAT_00139b98)) {
    iVar17 = **(int **)(iVar12 + DAT_00139b9c);
  }
  iVar13 = *(int *)(this + 0xc);
  uVar2 = Cafe::createForNewColosseum(*(int *)(iVar17 + 0xc),*(int *)(iVar17 + 0x10));
  *(undefined4 *)(this + 0x70) = uVar2;
  *(undefined4 *)(iVar13 + 0x7e8) = uVar2;
  iVar13 = DAT_00139ba4;
  iVar9 = *(int *)(*(int *)(*(int *)(this + 0x70) + 0x94) + DAT_00139ba0);
  iVar18 = *(int *)(*(int *)(*(int *)(this + 0x70) + 0x94) + DAT_00139ba8);
  memcpy(local_4c,(void *)(DAT_00139ba4 + 0x139a0e),10);
  memcpy(local_34,(void *)(iVar13 + 0x139a18),0xb);
  for (iVar13 = 0; iVar13 < *(int *)(iVar17 + 0xc); iVar13 = iVar13 + 1) {
    piVar10 = *(int **)(this + 0x70);
    iVar19 = Cafe::diamondToStaggeredCoords
                       ((**(int **)(iVar12 + DAT_00139bac) - *(int *)(iVar17 + 0xc)) + iVar13,
                        **(int **)(iVar12 + DAT_00139bb0) + 1);
    iVar19 = *(int *)(*(int *)(((iVar19 >> 0x10) +
                               **(int **)(iVar12 + DAT_00139bb4) * (int)(short)iVar19) * 4 +
                              *piVar10) + 0xc);
    if (local_4c[iVar13] == '\0') {
      *(undefined2 *)(iVar19 + 0x38) = *(undefined2 *)(iVar9 + 0x3c);
      uVar2 = *(undefined4 *)(iVar9 + 0x48);
LAB_00139a5c:
      *(undefined4 *)(iVar19 + 0x40) = uVar2;
    }
    else if (local_4c[iVar13] == '\x01') {
      *(undefined2 *)(iVar19 + 0x38) = *(undefined2 *)(iVar18 + 0x3c);
      uVar2 = *(undefined4 *)(iVar18 + 0x48);
      goto LAB_00139a5c;
    }
  }
  iVar13 = 0;
  do {
    if (*(int *)(iVar17 + 0x10) <= iVar13) {
      memcpy(local_bc,(void *)(DAT_00139bb8 + 0x139b11),0x6e);
      for (iVar13 = 0; iVar9 = DAT_00139bbc, iVar13 < *(int *)(iVar17 + 0xc); iVar13 = iVar13 + 1) {
        for (iVar9 = 0; iVar9 < *(int *)(iVar17 + 0x10); iVar9 = iVar9 + 1) {
          this_09 = *(Cafe **)(this + 0x70);
          iVar19 = *(int *)((local_bc[iVar9 * 10 + iVar13] + 0x1fc) * 4 + *(int *)(this_09 + 0x94));
          iVar18 = Cafe::diamondToStaggeredCoords
                             ((**(int **)(iVar12 + DAT_00139bac) - *(int *)(iVar17 + 0xc)) + iVar13,
                              (*(int *)(iVar17 + 0x10) + **(int **)(iVar12 + DAT_00139bb0)) - iVar9)
          ;
          Cafe::setTileImageIndex
                    (this_09,(iVar18 >> 0x10) +
                             (int)(short)iVar18 * **(int **)(iVar12 + DAT_00139bb4),
                     (int)*(short *)(iVar19 + 0x3c),*(long *)(iVar19 + 0x48));
        }
      }
      memcpy(local_40,(void *)((int)&DAT_00139b84 + DAT_00139bbc + 1),10);
      memcpy(local_28,(void *)((int)&DAT_00139b8c + iVar9 + 3),0xb);
      piVar10 = *(int **)(iVar12 + DAT_00139bac);
      piVar11 = *(int **)(iVar12 + DAT_00139bb0);
      for (iVar13 = 0; iVar9 = *(int *)(iVar17 + 0xc), iVar13 < iVar9; iVar13 = iVar13 + 1) {
        iVar18 = *piVar10;
        iVar19 = *piVar11;
        iVar14 = *(int *)(iVar17 + 0x10);
        if (local_40[iVar13] == '\x01') {
          iVar15 = *(int *)(*(int *)(this + 0x70) + 0x94);
          iVar3 = CapcomMath::random(4);
          pFVar20 = *(FurnitureData **)((iVar3 + 0x1b0) * 4 + iVar15);
          pFVar4 = (Furniture *)operator_new(100);
          Furniture::Furniture(pFVar4,pFVar20);
          uVar2 = Cafe::diamondToStaggeredCoords((iVar18 - iVar9) + iVar13,iVar19 + iVar14 + 1);
          sVar1 = (short)((uint)uVar2 >> 0x10) +
                  (short)uVar2 * (short)**(undefined4 **)(iVar12 + DAT_00139c68);
          *(short *)(pFVar4 + 0x2c) = sVar1;
          pcVar21 = *(code **)(*(int *)pFVar4 + 0xc);
          uVar2 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x70),(int)sVar1);
          (*pcVar21)(pFVar4,uVar2);
          Furniture::setOrientation(pFVar4,'\x01');
          pFVar4[0x54] = (Furniture)0x0;
          Cafe::addFurniture(*(Cafe **)(this + 0x70),pFVar4);
        }
      }
      for (iVar13 = 0; iVar9 = *(int *)(iVar17 + 0x10), iVar13 < iVar9; iVar13 = iVar13 + 1) {
        iVar18 = *piVar10;
        iVar19 = *(int *)(iVar17 + 0xc);
        iVar14 = *piVar11;
        if (local_28[iVar13] == '\x01') {
          iVar15 = *(int *)(*(int *)(this + 0x70) + 0x94);
          iVar3 = CapcomMath::random(4);
          pFVar20 = *(FurnitureData **)((iVar3 + 0x1b0) * 4 + iVar15);
          pFVar4 = (Furniture *)operator_new(100);
          Furniture::Furniture(pFVar4,pFVar20);
          uVar2 = Cafe::diamondToStaggeredCoords((iVar18 - iVar19) + -1,(iVar14 + iVar9) - iVar13);
          sVar1 = (short)((uint)uVar2 >> 0x10) +
                  (short)uVar2 * (short)**(undefined4 **)(iVar12 + DAT_0013a08c);
          *(short *)(pFVar4 + 0x2c) = sVar1;
          pcVar21 = *(code **)(*(int *)pFVar4 + 0xc);
          uVar2 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x70),(int)sVar1);
          (*pcVar21)(pFVar4,uVar2);
          Furniture::setOrientation(pFVar4,'\0');
          pFVar4[0x54] = (Furniture)0x0;
          Cafe::addFurniture(*(Cafe **)(this + 0x70),pFVar4);
        }
      }
      local_e4[0] = *(int *)(DAT_0013a090 + 0x139d58);
      local_e4[1] = *(undefined4 *)(DAT_0013a090 + 0x139d5c);
      local_e4[2] = *(undefined4 *)(DAT_0013a090 + 0x139d60);
      local_e4[3] = *(undefined4 *)(DAT_0013a090 + 0x139d64);
      local_e4[4] = *(undefined4 *)(DAT_0013a090 + 0x139d68);
      local_d0[0] = *(int *)(DAT_0013a090 + 0x139d6c);
      local_d0[1] = *(undefined4 *)(DAT_0013a090 + 0x139d70);
      local_d0[2] = *(undefined4 *)(DAT_0013a090 + 0x139d74);
      local_d0[3] = *(undefined4 *)(DAT_0013a090 + 0x139d78);
      local_d0[4] = *(undefined4 *)(DAT_0013a090 + 0x139d7c);
      iVar17 = 0;
      do {
        iVar13 = *(int *)((int)local_e4 + iVar17);
        iVar9 = *(int *)((int)local_d0 + iVar17);
        iVar19 = *piVar11;
        iVar18 = *piVar10;
        pFVar20 = *(FurnitureData **)(*(int *)(*(int *)(this + 0x70) + 0x94) + 0x810);
        pFVar4 = (Furniture *)operator_new(100);
        Furniture::Furniture(pFVar4,pFVar20);
        iVar17 = iVar17 + 4;
        uVar2 = Cafe::diamondToStaggeredCoords(iVar18 - iVar13,iVar19 + iVar9);
        sVar1 = (short)((uint)uVar2 >> 0x10) +
                (short)uVar2 * (short)**(undefined4 **)(iVar12 + DAT_0013a08c);
        *(short *)(pFVar4 + 0x2c) = sVar1;
        pcVar21 = *(code **)(*(int *)pFVar4 + 0xc);
        uVar2 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(this + 0x70),(int)sVar1);
        (*pcVar21)(pFVar4,uVar2);
        Furniture::setOrientation(pFVar4,'\0');
        pFVar4[0x54] = (Furniture)0x0;
        Cafe::addFurniture(*(Cafe **)(this + 0x70),pFVar4);
      } while (iVar17 != 0x14);
      iVar17 = 10;
      puts((char *)(DAT_0013a094 + 0x139dc6));
      *(undefined4 *)(this + 0x138) = 0;
      do {
        iVar17 = iVar17 + -1;
        addEnemyZombie(this,0);
        iVar13 = DAT_0013a098;
      } while (iVar17 != 0);
      *(undefined4 *)(this + 0x3c) = 0;
      iVar13 = **(int **)(iVar12 + iVar13);
      iVar17 = SmDev();
      *(undefined4 *)(this + 0x40) = *(undefined4 *)(iVar17 * 4 + iVar13);
      *(undefined4 *)(this + 0x38) = 0;
      *(undefined4 *)(this + 0x34) = 0;
      this[0xd1] = (GameStateColosseum)0x0;
      this[0x2c] = (GameStateColosseum)0x0;
      this_00 = (ScreenElement *)operator_new(0x60);
      ScreenElement::ScreenElement(this_00,(ScreenElement *)0x0);
      *(ScreenElement **)(this + 0x78) = this_00;
      this_01 = (NoticeDialog *)operator_new(0x90);
      NoticeDialog::NoticeDialog
                (this_01,*(CImage **)(*(int *)(this + 0x80) + 0x14),
                 *(CImage **)(*(int *)(this + 0x7c) + 0x28),extraout_s0);
      pGVar16 = this + 0x88;
      *(NoticeDialog **)pGVar16 = this_01;
      ScreenElement::setOrder((ScreenElement *)this_01,0x62);
      (**(code **)(**(int **)pGVar16 + 0x1c))(*(int **)pGVar16,0x12);
      (**(code **)(**(int **)(this + 0x78) + 0x2c))(*(int **)(this + 0x78),*(undefined4 *)pGVar16);
      this_02 = (HudElement *)operator_new(0x16c);
      HudElement::HudElement
                (this_02,*(_func_bool_void_ptr_int **)(iVar12 + DAT_0013a09c),this,false);
      *(HudElement **)(this + 0x74) = this_02;
      HudElement::setButtonAvailability((int)this_02,false);
      HudElement::setButtonAvailability(*(int *)(this + 0x74),true);
      HudElement::setButtonAvailability(*(int *)(this + 0x74),true);
      HudElement::setButtonAvailability(*(int *)(this + 0x74),true);
      HudElement::setButtonAvailability(*(int *)(this + 0x74),true);
      HudElement::setButtonAvailability(*(int *)(this + 0x74),true);
      HudElement::setButtonAvailability(*(int *)(this + 0x74),true);
      HudElement::setButtonAvailability(*(int *)(this + 0x74),true);
      HudElement::setButtonAvailability(*(int *)(this + 0x74),true);
      HudElement::setButtonAvailability(*(int *)(this + 0x74),true);
      HudElement::setButtonAvailability(*(int *)(this + 0x74),true);
      HudElement::setButtonAvailability(*(int *)(this + 0x74),true);
      HudElement::setButtonAvailability(*(int *)(this + 0x74),true);
      HudElement::setButtonAvailability(*(int *)(this + 0x74),true);
      HudElement::setButtonAvailability(*(int *)(this + 0x74),true);
      HudElement::setButtonAvailability(*(int *)(this + 0x74),true);
      HudElement::invisibleAddToxinButton(*(HudElement **)(this + 0x74));
      ScreenElement::setOrder
                (*(ScreenElement **)(this + 0x74),(int)**(char **)(iVar12 + DAT_0013a0a0));
      (**(code **)(**(int **)(this + 0x78) + 0x2c))
                (*(int **)(this + 0x78),*(undefined4 *)(this + 0x74));
      this_03 = (ConfirmDialog *)operator_new(0x9c);
      ConfirmDialog::ConfirmDialog
                (this_03,*(CImage **)(*(int *)(this + 0x80) + 0x14),
                 *(CImage **)(*(int *)(this + 0x7c) + 0x28),
                 *(CImage **)(*(int *)(this + 0x7c) + 0x44),0,extraout_s0_00,(CImage *)0x40000000);
      pGVar16 = this + 0x8c;
      *(ConfirmDialog **)pGVar16 = this_03;
      ScreenElement::setOrder((ScreenElement *)this_03,99);
      (**(code **)(**(int **)pGVar16 + 0x1c))(*(int **)pGVar16,0x12);
      (**(code **)(**(int **)(this + 0x78) + 0x2c))(*(int **)(this + 0x78),*(undefined4 *)pGVar16);
      this_04 = (ObjectiveCompleteDialog *)operator_new(0xb4);
      ObjectiveCompleteDialog::ObjectiveCompleteDialog(this_04);
      pGVar16 = this + 0x94;
      *(ObjectiveCompleteDialog **)pGVar16 = this_04;
      (**(code **)(*(int *)this_04 + 0x1c))(this_04,0x12);
      (**(code **)(**(int **)pGVar16 + 0x14))
                (*(int **)pGVar16,*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
                 (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
      ScreenElement::setOrder(*(ScreenElement **)pGVar16,(int)**(char **)(iVar12 + DAT_0013a0a4));
      (**(code **)(**(int **)pGVar16 + 0x20))(*(int **)pGVar16,0);
      (**(code **)(**(int **)(this + 0x78) + 0x2c))(*(int **)(this + 0x78),*(undefined4 *)pGVar16);
      this_05 = (ObjectiveDialog *)operator_new(0x16c);
      ObjectiveDialog::ObjectiveDialog
                (this_05,*(ConfirmDialog **)(this + 0x8c),*(ObjectiveCompleteDialog **)pGVar16,
                 *(BuyToxinDialog **)(this + 0x90));
      *(ObjectiveDialog **)(this + 0x98) = this_05;
      (**(code **)(*(int *)this_05 + 0x1c))(this_05,0x12);
      (**(code **)(**(int **)(this + 0x98) + 0x14))
                (*(int **)(this + 0x98),*(int *)(*(int *)(this + 0xc) + 0x14) >> 0x10,
                 (int)(short)*(int *)(*(int *)(this + 0xc) + 0x14));
      ScreenElement::setOrder
                (*(ScreenElement **)(this + 0x98),(int)**(char **)(iVar12 + DAT_0013a0a8));
      (**(code **)(**(int **)(this + 0x98) + 0x20))(*(int **)(this + 0x98),0);
      (**(code **)(**(int **)(this + 0x78) + 0x2c))
                (*(int **)(this + 0x78),*(undefined4 *)(this + 0x98));
      this_06 = (MessageElement *)operator_new(0x90);
      MessageElement::MessageElement(this_06,*(CImage ***)(this + 0x7c),'\f');
      *(MessageElement **)(this + 0x84) = this_06;
      ScreenElement::setOrder((ScreenElement *)this_06,100);
      (**(code **)(**(int **)(this + 0x78) + 0x2c))
                (*(int **)(this + 0x78),*(undefined4 *)(this + 0x84));
      this_07 = (BuyToxinDialog *)operator_new(0xe4);
      BuyToxinDialog::BuyToxinDialog(this_07);
      iVar17 = DAT_0013a0ac;
      pGVar16 = this + 0x90;
      *(BuyToxinDialog **)pGVar16 = this_07;
      ScreenElement::setOrder((ScreenElement *)this_07,(int)**(char **)(iVar12 + iVar17));
      (**(code **)(**(int **)(this + 0x78) + 0x2c))(*(int **)(this + 0x78),*(undefined4 *)pGVar16);
      (**(code **)(**(int **)pGVar16 + 0x1c))(*(int **)pGVar16,0x12);
      (**(code **)(**(int **)pGVar16 + 0x20))(*(int **)pGVar16,0);
      this_08 = (CharacterCommandBar *)operator_new(0xd8);
      CharacterCommandBar::CharacterCommandBar
                (this_08,*(ConfirmDialog **)(this + 0x8c),*(BuyToxinDialog **)pGVar16);
      iVar17 = DAT_0013a478;
      *(CharacterCommandBar **)(this + 0x9c) = this_08;
      uVar2 = CharacterCommandBar::addColosseumAttackButton
                        (this_08,*(_func_void_void_ptr_ScreenElement_ptr **)(iVar12 + iVar17),this);
      *(undefined4 *)(this + 0xa0) = uVar2;
      uVar2 = CharacterCommandBar::addHealButton
                        (*(CharacterCommandBar **)(this + 0x9c),
                         *(_func_void_void_ptr_ScreenElement_ptr **)(iVar12 + DAT_0013a47c),this);
      *(undefined4 *)(this + 0xa4) = uVar2;
      CharacterCommandBar::layout(*(CharacterCommandBar **)(this + 0x9c));
      (**(code **)(**(int **)(this + 0x9c) + 0x1c))(*(int **)(this + 0x9c),0x11);
      iVar17 = *(int *)(*(int *)(this + 0xc) + 0x10);
      (**(code **)(**(int **)(this + 0x9c) + 0x14))
                (*(int **)(this + 0x9c),(iVar17 >> 0x10) - (iVar17 >> 0x1f) >> 1,(int)(short)iVar17)
      ;
      ScreenElement::setOrder
                (*(ScreenElement **)(this + 0x9c),(int)**(char **)(iVar12 + DAT_0013a480));
      (**(code **)(**(int **)(this + 0x78) + 0x2c))
                (*(int **)(this + 0x78),*(undefined4 *)(this + 0x9c));
      makePlayerZombie(this);
      autoSelectPlayerZombie(this);
      *(undefined4 *)(this + 0x13c) = 0;
      iVar17 = *(int *)(this + 0xc);
      if (*(int *)(this + 0x118) < 0) {
        *(undefined4 *)(this + 0x3c) = 0;
      }
      else {
        uVar2 = __floatsisf((int)*(short *)(**(int **)(this + 0x11c) + 6));
        uVar2 = __mulsf3(uVar2,*(undefined4 *)(this + 0x40));
        __divsi3((int)*(short *)(iVar17 + 0x12),3);
        uVar5 = __floatsisf();
        iVar13 = __subsf3(uVar2,uVar5);
        iVar13 = __fixsfsi(iVar13 + -0x80000000);
        *(int *)(this + 0x3c) = iVar13 << 0x10;
      }
      piVar10 = *(int **)(this + 0x78);
      pcVar21 = *(code **)(*piVar10 + 0x2c);
      pCVar6 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar17 + DAT_0013a484),0xe2,false);
      pIVar7 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(pIVar7,pCVar6,extraout_s0_01,extraout_s1,'\0',false);
      *(ImageElement **)(this + 100) = pIVar7;
      (*pcVar21)(piVar10,pIVar7);
      piVar10 = *(int **)(this + 0x78);
      pcVar21 = *(code **)(*piVar10 + 0x2c);
      String::String(aSStack_10c,(char *)(DAT_0013a488 + 0x13a1c0));
      iVar13 = *(int *)(this + 0xc);
      iVar17 = SmDev();
      uVar2 = *(undefined4 *)((*(int *)(DAT_0013a48c + iVar17 * 4 + 0x13a23c) + 0x136) * 4 + iVar13)
      ;
      pBVar8 = (BitmapTextElement *)operator_new(0xc0);
      BitmapTextElement::BitmapTextElement(pBVar8,aSStack_10c,uVar2,0xffffff92,1,1,0x12,0,0);
      *(BitmapTextElement **)(this + 0xb0) = pBVar8;
      (*pcVar21)(piVar10,pBVar8);
      String::~String(aSStack_10c);
      iVar9 = *(int *)(this + 0xb0);
      iVar13 = SmDev();
      iVar17 = DAT_0013a494;
      *(undefined4 *)(iVar9 + 0xbc) = *(undefined4 *)(iVar13 * 4 + DAT_0013a490 + 0x13a226);
      piVar10 = *(int **)(this + 0x78);
      pcVar21 = *(code **)(*piVar10 + 0x2c);
      String::String(aSStack_104,(char *)(iVar17 + 0x13a232));
      pBVar8 = (BitmapTextElement *)operator_new(0xc0);
      BitmapTextElement::BitmapTextElement
                (pBVar8,aSStack_104,*(undefined4 *)(*(int *)(this + 0xc) + 0x4e0),0xffffff92,1,1,
                 0x21,0,0);
      *(BitmapTextElement **)(this + 0xb4) = pBVar8;
      (*pcVar21)(piVar10,pBVar8);
      String::~String(aSStack_104);
      piVar10 = *(int **)(this + 0x78);
      pcVar21 = *(code **)(*piVar10 + 0x2c);
      pIVar7 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement
                (pIVar7,*(CImage **)(*(int *)(this + 0x80) + 0x14),extraout_s0_02,extraout_s1_00,
                 '\0',false);
      *(ImageElement **)(this + 0x68) = pIVar7;
      (*pcVar21)(piVar10,pIVar7);
      (**(code **)(**(int **)(this + 0x68) + 0x20))(*(int **)(this + 0x68),0);
      piVar10 = *(int **)(this + 0x68);
      pcVar21 = *(code **)(*piVar10 + 0x2c);
      String::String(aSStack_fc,(char *)(DAT_0013a498 + 0x13a2b8));
      iVar13 = *(int *)(this + 0xc);
      iVar17 = SmDev();
      uVar2 = *(undefined4 *)((*(int *)(DAT_0013a49c + iVar17 * 4 + 0x13a2e4) + 0x136) * 4 + iVar13)
      ;
      pBVar8 = (BitmapTextElement *)operator_new(0xc0);
      BitmapTextElement::BitmapTextElement(pBVar8,aSStack_fc,uVar2,0xffffff92,1,1,0x12,0,0);
      *(BitmapTextElement **)(this + 0xb8) = pBVar8;
      (*pcVar21)(piVar10,pBVar8);
      String::~String(aSStack_fc);
      piVar10 = *(int **)(this + 0x68);
      pcVar21 = *(code **)(*piVar10 + 0x2c);
      String::String(aSStack_f4,(char *)(DAT_0013a4a0 + 0x13a31a));
      iVar13 = *(int *)(this + 0xc);
      iVar17 = SmDev();
      uVar2 = *(undefined4 *)((*(int *)(DAT_0013a4a4 + iVar17 * 4 + 0x13a346) + 0x136) * 4 + iVar13)
      ;
      pBVar8 = (BitmapTextElement *)operator_new(0xc0);
      BitmapTextElement::BitmapTextElement(pBVar8,aSStack_f4,uVar2,0xffffffff,1,1,0x12,0,0);
      *(BitmapTextElement **)(this + 0xbc) = pBVar8;
      (*pcVar21)(piVar10,pBVar8);
      String::~String(aSStack_f4);
      iVar13 = DAT_0013a4a8 + 0x13a380;
      (**(code **)(**(int **)(this + 0xb8) + 0x20))(*(int **)(this + 0xb8),0);
      (**(code **)(**(int **)(this + 0xbc) + 0x20))(*(int **)(this + 0xbc),0);
      piVar10 = *(int **)(this + 0x78);
      pcVar21 = *(code **)(*piVar10 + 0x2c);
      iVar17 = SmDev();
      uVar2 = *(undefined4 *)(iVar13 + iVar17 * 4 + 0x30);
      iVar17 = SmDev();
      uVar5 = *(undefined4 *)(iVar13 + iVar17 * 4 + 0x48);
      pIVar7 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement
                (pIVar7,*(CImage **)(*(int *)(this + 0x80) + 0x14),extraout_s0_03,extraout_s1_01,
                 (uchar)uVar2,SUB41(uVar5,0));
      *(ImageElement **)(this + 0x6c) = pIVar7;
      (*pcVar21)(piVar10,pIVar7);
      (**(code **)(**(int **)(this + 0x6c) + 0x20))(*(int **)(this + 0x6c),0);
      piVar10 = *(int **)(this + 0x6c);
      pcVar21 = *(code **)(*piVar10 + 0x2c);
      String::String(aSStack_ec,(char *)(DAT_0013a4ac + 0x13a3ec));
      pBVar8 = (BitmapTextElement *)operator_new(0xc0);
      BitmapTextElement::BitmapTextElement
                (pBVar8,aSStack_ec,*(undefined4 *)(*(int *)(this + 0xc) + 0x4e0),0xffffff92,1,1,0x12
                 ,0,0);
      *(BitmapTextElement **)(this + 0xc0) = pBVar8;
      (*pcVar21)(piVar10,pBVar8);
      String::~String(aSStack_ec);
      piVar10 = *(int **)(this + 0xc0);
      (**(code **)(*piVar10 + 0x20))(piVar10,0);
      this[0xd2] = (GameStateColosseum)0x0;
      this[0xd3] = (GameStateColosseum)0x0;
      if (local_1c != **(int **)(iVar12 + DAT_0013a4b0)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(1);
      }
      return;
    }
    piVar10 = *(int **)(this + 0x70);
    iVar19 = Cafe::diamondToStaggeredCoords
                       (**(int **)(iVar12 + DAT_00139bac) + -1,
                        (*(int *)(iVar17 + 0x10) + **(int **)(iVar12 + DAT_00139bb0)) - iVar13);
    iVar19 = *(int *)(*(int *)(((iVar19 >> 0x10) +
                               **(int **)(iVar12 + DAT_00139bb4) * (int)(short)iVar19) * 4 +
                              *piVar10) + 0x10);
    if (local_34[iVar13] == '\0') {
      *(undefined2 *)(iVar19 + 0x38) = *(undefined2 *)(iVar9 + 0x3c);
      uVar2 = *(undefined4 *)(iVar9 + 0x48);
LAB_00139ac0:
      *(undefined4 *)(iVar19 + 0x40) = uVar2;
    }
    else if (local_34[iVar13] == '\x01') {
      *(undefined2 *)(iVar19 + 0x38) = *(undefined2 *)(iVar18 + 0x3c);
      uVar2 = *(undefined4 *)(iVar18 + 0x48);
      goto LAB_00139ac0;
    }
    iVar13 = iVar13 + 1;
  } while( true );
}


