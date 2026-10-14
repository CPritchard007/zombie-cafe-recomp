/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000fa0f0 FrequentFryerDialog::show */

/* FrequentFryerDialog::show(int) */

void __thiscall FrequentFryerDialog::show(FrequentFryerDialog *this,int param_1)

{
  char cVar1;
  PackedImage *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FoodStack *pFVar5;
  void *__ptr;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  FrequentFryerDialog *pFVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  CImage *pCVar15;
  byte *pbVar16;
  FrequentFryerDialog *pFVar17;
  int *piVar18;
  byte *pbVar19;
  uint uVar20;
  int iVar21;
  FrequentFryerDialog *local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_b4;
  uint local_b0;
  String aSStack_ac [8];
  String aSStack_a4 [8];
  String aSStack_9c [8];
  String aSStack_94 [8];
  String aSStack_8c [8];
  String aSStack_84 [8];
  String aSStack_7c [8];
  String aSStack_74 [8];
  String aSStack_6c [8];
  String aSStack_64 [8];
  String aSStack_5c [8];
  String aSStack_54 [8];
  StringUtil aSStack_4c [8];
  String aSStack_44 [8];
  String aSStack_3c [8];
  String aSStack_34 [8];
  String aSStack_2c [8];
  int local_24;
  int local_20;
  void *local_1c;
  
  iVar12 = DAT_000fa420 + 0xfa104;
  if (*(int **)(*(int *)(this + 0x14c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x14c) + 100) + 4))();
  }
  *(undefined4 *)(this + 0x18c) = 0;
  for (local_c8 = param_1; 10 < local_c8;
      local_c8 = local_c8 + (**(byte **)(iVar12 + DAT_000fa424) - 0xb)) {
  }
  if (local_c8 < 1) {
    local_c8 = 1;
  }
  setDescroptions(this);
  getItemData((int)&local_b4);
  *(undefined4 *)(this + 0x18c) = 0;
  cVar1 = (char)&stack0xffffffec;
  if (local_b4 == 0) {
    if ((int)local_b0 < 0) {
      local_b0 = (uint)**(short **)(iVar12 + DAT_000fa428);
    }
    ZombieCafe::addCash(*(ZombieCafe **)(this + 0x60),local_b0);
    piVar18 = *(int **)(this + 0x170);
    pcVar10 = *(code **)(*piVar18 + 0x44);
    String::String(aSStack_ac,(char *)(DAT_000fa42c + 0xfa182));
    String::valueOf((int)aSStack_a4);
    String::operator+(aSStack_9c,aSStack_ac,aSStack_a4);
    (*pcVar10)(piVar18,aSStack_9c);
    String::~String(aSStack_9c);
    String::~String(aSStack_a4);
    String::~String(aSStack_ac);
    iVar13 = *(int *)(this + 0x14c);
    this_00 = *(PackedImage **)(*(int *)(this + 0x60) + DAT_000fa430);
    iVar6 = 0x74;
LAB_000fa626:
    uVar2 = PackedImage::getImage(this_00,iVar6,false);
    *(undefined4 *)(iVar13 + 100) = uVar2;
    piVar18 = *(int **)(this + 0x14c);
    pCVar15 = (CImage *)piVar18[0x19];
    uVar3 = CImage::getWidth(pCVar15);
    uVar2 = CImage::getHeight(pCVar15);
    pcVar10 = *(code **)(*piVar18 + 0x18);
  }
  else {
    if (local_b4 == 4) {
      if ((int)local_b0 < 0) {
        local_b0 = 10;
      }
      ZombieCafe::addXp(*(ZombieCafe **)(this + 0x60),local_b0);
      piVar18 = *(int **)(this + 0x170);
      pcVar10 = *(code **)(*piVar18 + 0x44);
      String::valueOf((int)aSStack_94);
      String::String(aSStack_8c,(char *)(DAT_000fa434 + 0xfa1ec));
      String::operator+(aSStack_84,aSStack_94,aSStack_8c);
      (*pcVar10)(piVar18,aSStack_84);
      String::~String(aSStack_84);
      String::~String(aSStack_8c);
      String::~String(aSStack_94);
      iVar13 = *(int *)(this + 0x14c);
      this_00 = *(PackedImage **)(*(int *)(this + 0x60) + DAT_000fa430);
      iVar6 = 0x4d;
      goto LAB_000fa626;
    }
    if (local_b4 == 1) {
      if (((int)local_b0 < 0) || (local_b0 == 0)) {
        pbVar16 = *(byte **)(iVar12 + DAT_000fa438);
        if (*pbVar16 == 0) goto LAB_000fa4d4;
        iVar6 = CapcomMath::random(100);
        if (**(int **)(iVar12 + DAT_000fa43c) <= iVar6) {
LAB_000fa2f2:
          iVar13 = CapcomMath::random((uint)*pbVar16);
          iVar6 = DAT_000fa448;
LAB_000fa35c:
          piVar18 = *(int **)(iVar12 + iVar6);
          goto LAB_000fa35e;
        }
        local_24 = 10;
        local_1c = operator_new__(0x28);
        memset(local_1c,0,local_24 << 2);
        local_20 = -1;
        pbVar19 = *(byte **)(iVar12 + DAT_000fa440);
        for (iVar6 = 0; iVar6 < (int)(uint)*pbVar19; iVar6 = iVar6 + 1) {
          uVar20 = (uint)*(byte *)(**(int **)(iVar12 + DAT_000fa444) + iVar6);
          if ((int)(uint)*(byte *)(*(int *)(*(int *)(this + 0x60) + 0x4e8) + uVar20 * 0x1c + 0x16)
              <= *(int *)(*(int *)(this + 0x60) + 0x680)) {
            iVar13 = local_20 + 2;
            if (local_24 < iVar13) {
              iVar8 = local_24 * 2;
              if (local_24 * 2 < iVar13) {
                iVar8 = iVar13;
              }
              Vector<int>::resize((Vector<int> *)&local_24,iVar8,-1);
            }
            local_20 = local_20 + 1;
            *(uint *)(local_20 * 4 + (int)local_1c) = uVar20;
          }
        }
        if (local_20 < 0) {
          uVar20 = 0xffffffff;
        }
        else {
          iVar6 = CapcomMath::random(local_20 + 1);
          uVar20 = *(uint *)(iVar6 * 4 + (int)local_1c);
        }
        if (local_1c != (void *)0x0) {
          operator_delete__(local_1c);
        }
        uVar14 = 0;
        if (uVar20 == 0xffffffff) goto LAB_000fa2f2;
      }
      else if (local_b0 == 1) {
        pbVar16 = *(byte **)(iVar12 + DAT_000fa44c);
        if (*pbVar16 == 0) goto LAB_000fa4d4;
        iVar6 = CapcomMath::random(100);
        if (iVar6 < **(int **)(iVar12 + DAT_000fa43c)) {
LAB_000fa350:
          iVar13 = CapcomMath::random((uint)**(byte **)(iVar12 + DAT_000fa440));
          iVar6 = DAT_000fa444;
          goto LAB_000fa35c;
        }
        iVar13 = CapcomMath::random((uint)*pbVar16);
        iVar6 = DAT_000fa450;
LAB_000fa4b6:
        piVar18 = *(int **)(iVar12 + iVar6);
LAB_000fa35e:
        uVar20 = (uint)*(byte *)(*piVar18 + iVar13);
LAB_000fa362:
        uVar14 = 0;
      }
      else {
        if (local_b0 == 2) {
          pbVar16 = *(byte **)(iVar12 + DAT_000fa454);
          if (*pbVar16 != 0) {
            iVar6 = CapcomMath::random(100);
            if (iVar6 < **(int **)(iVar12 + DAT_000fa43c)) goto LAB_000fa350;
            iVar13 = CapcomMath::random((uint)*pbVar16);
            iVar6 = DAT_000fa458;
            goto LAB_000fa4b6;
          }
        }
        else {
          if (local_b0 != 3) {
            if (local_b0 != 4) {
              if (local_b0 == 5) {
                iVar6 = CapcomMath::random(100);
                if (**(int **)(iVar12 + DAT_000fa43c) <= iVar6) {
                  iVar6 = CapcomMath::random(5);
                  iVar13 = DAT_000fa468 + 0xfa48e;
                  goto LAB_000fa48e;
                }
              }
              else if (local_b0 == 6) {
                iVar6 = CapcomMath::random(100);
                if (**(int **)(iVar12 + DAT_000fa7b0) <= iVar6) {
                  iVar6 = CapcomMath::random(3);
                  iVar13 = DAT_000fa7b4 + 0xfa508;
                  goto LAB_000fa48e;
                }
              }
              else {
                if (local_b0 != 7) goto LAB_000fa4d4;
                iVar6 = CapcomMath::random(100);
                if (**(int **)(iVar12 + DAT_000fa7b0) <= iVar6) {
                  iVar6 = CapcomMath::random(3);
                  uVar20 = (uint)*(short *)(iVar6 * 2 + DAT_000fa7c0 + 0xfa4c8);
                  goto LAB_000fa4ca;
                }
              }
              iVar13 = CapcomMath::random((uint)**(byte **)(iVar12 + DAT_000fa7b8));
              iVar6 = DAT_000fa7bc;
              goto LAB_000fa4b6;
            }
            iVar6 = CapcomMath::random(100);
            if (iVar6 < **(int **)(iVar12 + DAT_000fa43c)) goto LAB_000fa350;
            iVar6 = CapcomMath::random(4);
            iVar13 = DAT_000fa464 + 0xfa462;
LAB_000fa48e:
            uVar20 = (uint)*(short *)(iVar6 * 2 + iVar13);
            goto LAB_000fa362;
          }
          pbVar16 = *(byte **)(iVar12 + DAT_000fa45c);
          if (*pbVar16 != 0) {
            iVar6 = CapcomMath::random(100);
            if (iVar6 < **(int **)(iVar12 + DAT_000fa43c)) {
              iVar6 = CapcomMath::random((uint)**(byte **)(iVar12 + DAT_000fa440));
              uVar20 = (uint)*(byte *)(**(int **)(iVar12 + DAT_000fa444) + iVar6);
              iVar6 = (int)(uVar20 * 10) >> 3;
              if (((int)(uint)*(byte *)(*(int *)(*(int *)(this + 0x60) + 0x1c) + iVar6) >>
                   (uVar20 * 10 + iVar6 * -8 & 0xff) & 1U) == 0) {
                uVar14 = 0;
                goto LAB_000fa4d6;
              }
            }
            else {
              iVar6 = CapcomMath::random((uint)*pbVar16);
              uVar20 = (uint)*(byte *)(**(int **)(iVar12 + DAT_000fa460) + iVar6);
            }
LAB_000fa4ca:
            uVar14 = CapcomMath::random(10);
            goto LAB_000fa4d6;
          }
        }
LAB_000fa4d4:
        uVar14 = 0;
        uVar20 = uVar14;
      }
LAB_000fa4d6:
      iVar6 = ZombieCafe::isAddFridgeFood(*(ZombieCafe **)(this + 0x60));
      if (iVar6 != 0) {
        iVar6 = *(int *)(this + 0x60);
        pFVar5 = (FoodStack *)operator_new(0x24);
        FoodStack::FoodStack(pFVar5,(uchar)uVar20,(uchar)uVar14);
        Vector<FoodStack*>::addElement((Vector<FoodStack*> *)(iVar6 + DAT_000fa7c4),pFVar5);
      }
      *(uint *)(this + 0x18c) = uVar20;
      *(uint *)(this + 400) = uVar14;
      piVar18 = *(int **)(this + 0x170);
      pcVar10 = *(code **)(*piVar18 + 0x44);
      Recipe::getFullName(cVar1 + 0x98);
      (*pcVar10)(piVar18,aSStack_7c);
      String::~String(aSStack_7c);
      iVar6 = *(int *)(this + 0x14c);
      uVar2 = PackedImage::getImage
                        (*(PackedImage **)(*(int *)(this + 0x60) + DAT_000fa7c8),
                         (int)*(short *)(*(int *)(*(int *)(this + 0x60) + 0x4e8) + uVar20 * 0x1c +
                                        0x14),true);
      *(undefined4 *)(iVar6 + 100) = uVar2;
      iVar6 = CapcomApp::getInstance();
      uVar2 = *(undefined4 *)(iVar6 + 0x44);
      iVar6 = CapcomApp::getInstance();
      uVar2 = __mulsf3(uVar2,*(undefined4 *)(iVar6 + 0x50));
      uVar3 = CImage::getWidth(*(CImage **)(*(int *)(this + 0x14c) + 100));
      iVar6 = SmDev();
      uVar3 = __floatsisf(uVar3);
      uVar4 = __mulsf3(*(undefined4 *)(DAT_000fa7cc + iVar6 * 4 + 0xfa59a),DAT_000fa7d0);
      uVar3 = __divsf3(uVar3,uVar4);
      __mulsf3(uVar3,uVar2);
      uVar3 = __fixsfsi();
      piVar18 = *(int **)(this + 0x14c);
      pcVar10 = *(code **)(*piVar18 + 0x18);
      uVar2 = uVar3;
    }
    else {
      if (local_b4 == 2) {
        ZombieCafe::addToxin(*(ZombieCafe **)(this + 0x60),local_b0 & (int)~local_b0 >> 0x1f,false);
        piVar18 = *(int **)(this + 0x170);
        pcVar10 = *(code **)(*piVar18 + 0x44);
        String::valueOf((int)aSStack_74);
        Vector<String>::elementAt((int)aSStack_6c);
        String::operator+(aSStack_64,aSStack_74,aSStack_6c);
        (*pcVar10)(piVar18,aSStack_64);
        String::~String(aSStack_64);
        String::~String(aSStack_6c);
        String::~String(aSStack_74);
        iVar13 = *(int *)(this + 0x14c);
        this_00 = *(PackedImage **)(*(int *)(this + 0x60) + DAT_000fa7d8);
        iVar6 = 0x77;
        goto LAB_000fa626;
      }
      if (local_b4 != 3) goto LAB_000fa704;
      iVar6 = ZombieCafe::isAddFridgeFood(*(ZombieCafe **)(this + 0x60));
      if (iVar6 != 0) {
        iVar6 = *(int *)(this + 0x60);
        pFVar5 = (FoodStack *)operator_new(0x24);
        FoodStack::FoodStack(pFVar5,(uchar)local_b0,'\0');
        Vector<FoodStack*>::addElement((Vector<FoodStack*> *)(iVar6 + DAT_000fa7c4),pFVar5);
      }
      *(uint *)(this + 0x18c) = local_b0;
      *(undefined4 *)(this + 400) = 0;
      piVar18 = *(int **)(this + 0x170);
      pcVar10 = *(code **)(*piVar18 + 0x44);
      Recipe::getFullName(cVar1 + 0xb8);
      (*pcVar10)(piVar18,aSStack_5c);
      String::~String(aSStack_5c);
      iVar6 = *(int *)(this + 0x14c);
      uVar2 = PackedImage::getImage
                        (*(PackedImage **)(*(int *)(this + 0x60) + DAT_000fa7c8),
                         (int)*(short *)(*(int *)(*(int *)(this + 0x60) + 0x4e8) + local_b0 * 0x1c +
                                        0x14),true);
      *(undefined4 *)(iVar6 + 100) = uVar2;
      piVar18 = *(int **)(this + 0x14c);
      pCVar15 = (CImage *)piVar18[0x19];
      uVar2 = CImage::getWidth(pCVar15);
      uVar4 = CImage::getHeight(pCVar15);
      uVar3 = __divsi3(uVar2,3);
      uVar2 = __divsi3(uVar4,3);
      pcVar10 = *(code **)(*piVar18 + 0x18);
    }
  }
  (*pcVar10)(piVar18,uVar3,uVar2);
LAB_000fa704:
  if (*(int *)(this + 0x18c) != 0) {
    pFVar5 = (FoodStack *)operator_new(0x24);
    FoodStack::FoodStack(pFVar5,(uchar)this[0x18c],(uchar)this[400]);
    FoodStack::getRecipe(pFVar5);
    Recipe::getFullName(cVar1 + 0xc0);
    StringUtil::getEncodingString(aSStack_4c,'\x01');
    __ptr = (void *)String::getBytes(aSStack_54,aSStack_4c,0,0,0);
    String::~String((String *)aSStack_4c);
    String::~String(aSStack_54);
    CRAMHoover::beginTrackEvent(*(char **)(*(int *)(this + 0x60) + 0x840));
    ZombieCafe::addMixPanelHeader(*(ZombieCafe **)(this + 0x60));
    CRAMHoover::addEventStringProperty
              (*(char **)(*(int *)(this + 0x60) + 0x840),(char *)(DAT_000fa7e0 + 0xfa77c));
    CRAMHoover::endTrackEvent();
    free(__ptr);
    String::~String((String *)(pFVar5 + 0x14));
    String::~String((String *)(pFVar5 + 0xc));
    operator_delete(pFVar5);
  }
  iVar6 = *(int *)(this + 0x14c);
  uVar2 = CImage::getWidth(*(CImage **)(iVar6 + 100));
  uVar3 = __floatsisf(*(undefined4 *)(iVar6 + 0xc));
  uVar2 = __floatsisf(uVar2);
  uVar2 = __divsf3(uVar3,uVar2);
  *(undefined4 *)(iVar6 + 0x68) = uVar2;
  iVar6 = *(int *)(this + 0x14c);
  uVar2 = CImage::getHeight(*(CImage **)(iVar6 + 100));
  uVar3 = __floatsisf(*(undefined4 *)(iVar6 + 0x10));
  uVar2 = __floatsisf(uVar2);
  uVar2 = __divsf3(uVar3,uVar2);
  *(undefined4 *)(iVar6 + 0x6c) = uVar2;
  this[0x14] = (FrequentFryerDialog)0x1;
  piVar18 = *(int **)(this + 0x164);
  pcVar10 = *(code **)(*piVar18 + 0x44);
  String::valueOf((int)aSStack_44);
  (*pcVar10)(piVar18,aSStack_44);
  String::~String(aSStack_44);
  piVar18 = *(int **)(this + 0x168);
  pcVar10 = *(code **)(*piVar18 + 0x44);
  Vector<String>::elementAt((int)aSStack_3c);
  operator+(aSStack_34,DAT_000fac08 + 0xfa870,aSStack_3c);
  (*pcVar10)(piVar18,aSStack_34);
  String::~String(aSStack_34);
  String::~String(aSStack_3c);
  piVar18 = *(int **)(this + 0x16c);
  pcVar10 = *(code **)(*piVar18 + 0x44);
  getRewardType((int)this);
  Vector<String>::elementAt((int)aSStack_2c);
  (*pcVar10)(piVar18,aSStack_2c);
  String::~String(aSStack_2c);
  iVar6 = *(int *)(this + 0xc);
  (**(code **)(**(int **)(this + 0x15c) + 0x14))(*(int **)(this + 0x15c),iVar6 >> 1,10);
  iVar13 = *(int *)(*(int *)(this + 0x15c) + 0x10) + 10;
  (**(code **)(**(int **)(this + 0x150) + 0x14))(*(int **)(this + 0x150),iVar6 >> 1,iVar13);
  pbVar16 = *(byte **)(iVar12 + DAT_000fac14);
  (**(code **)(**(int **)(this + 0x150) + 0x18))
            (*(int **)(this + 0x150),*(int *)(*(int *)(this + 0x15c) + 0xc) + 0x14,*pbVar16);
  iVar6 = *(int *)(this + 0xc);
  iVar13 = iVar13 + *pbVar16 + 5;
  iVar21 = *(int *)(*(int *)(this + 0x178) + 0xc) >> 1;
  (**(code **)(**(int **)(this + 0x160) + 0x14))(*(int **)(this + 0x160),iVar21,iVar13);
  iVar8 = *(int *)(this + 0x160);
  piVar18 = *(int **)(this + 0x164);
  iVar13 = iVar13 + *(int *)(iVar8 + 0x10);
  iVar8 = (*(int *)(iVar8 + 0xc) / 2 + *(int *)(iVar8 + 4)) -
          (piVar18[3] + *(int *)(*(int *)(this + 0x168) + 0xc)) / 2;
  (**(code **)(*piVar18 + 0x14))(piVar18,iVar8,iVar13);
  (**(code **)(**(int **)(this + 0x168) + 0x14))
            (*(int **)(this + 0x168),iVar8 + *(int *)(*(int *)(this + 0x164) + 0xc),
             iVar13 + *(int *)(*(int *)(this + 0x164) + 0x10) / 2);
  iVar13 = iVar21 * 2 + (iVar21 * -3 + iVar6) / 2;
  (**(code **)(**(int **)(this + 0x16c) + 0x14))
            (*(int **)(this + 0x16c),iVar13,*(undefined4 *)(*(int *)(this + 0x160) + 8));
  uVar2 = *(undefined4 *)(*(int *)(this + 0x168) + 8);
  (**(code **)(**(int **)(this + 0x14c) + 0x14))(*(int **)(this + 0x14c),iVar13,uVar2);
  iVar6 = *(int *)(*(int *)(this + 0x14c) + 0xc);
  (**(code **)(**(int **)(this + 0x170) + 0x18))
            (*(int **)(this + 0x170),
             (*(int *)(this + 0xc) - iVar21) - (iVar6 + *(int *)(*(int *)(this + 0x14c) + 4)),0);
  (**(code **)(**(int **)(this + 0x170) + 0x14))(*(int **)(this + 0x170),iVar13 + iVar6,uVar2);
  piVar18 = *(int **)(this + 0x154);
  pcVar10 = *(code **)(*piVar18 + 0x14);
  uVar2 = __floatsisf(*(int *)(*(int *)(this + 0x164) + 8) + *(int *)(*(int *)(this + 0x164) + 0x10)
                     );
  iVar6 = SmDev();
  __addsf3(uVar2,*(undefined4 *)(iVar6 * 4 + *(int *)(iVar12 + DAT_000fac18)));
  uVar2 = __fixsfsi();
  (*pcVar10)(piVar18,iVar21,uVar2);
  piVar18 = *(int **)(this + 0x154);
  iVar6 = *(int *)(this + 0xc);
  pcVar10 = *(code **)(*piVar18 + 0x18);
  iVar13 = *(int *)(*(int *)(this + 0x164) + 8);
  iVar9 = *(int *)(*(int *)(this + 0x164) + 0x10);
  iVar8 = *(int *)(this + 0x10);
  iVar12 = SmDev();
  iVar7 = 0;
  if (iVar12 == 0) {
    iVar7 = *(int *)(*(int *)(this + 0x184) + 0x10) / 2;
  }
  (*pcVar10)(piVar18,iVar6 + iVar21 * -2,((iVar8 - (iVar13 + iVar9)) - iVar21) - iVar7);
  (**(code **)(**(int **)(this + 0x158) + 0x18))
            (*(int **)(this + 0x158),0,*(undefined4 *)(*(int *)(this + 0x154) + 0x10));
  iVar12 = *(int *)(*(int *)(this + 0x158) + 0x10);
  local_cc = 0;
  local_d0 = 10;
  local_d4 = this;
  do {
    pFVar17 = local_d4 + 0x90;
    (**(code **)(**(int **)pFVar17 + 0x14))(*(int **)pFVar17,local_d0,iVar12);
    piVar18 = *(int **)(local_d4 + 0x68);
    pCVar15 = *(CImage **)(this + 0x130);
    iVar6 = CImage::getWidth(pCVar15);
    iVar13 = CImage::getHeight(pCVar15);
    (**(code **)(*piVar18 + 0x14))(piVar18,local_d0 + iVar6 / 2 + -10,(iVar12 - iVar13) + 5);
    iVar6 = CImage::getWidth(*(CImage **)(this + 0x130));
    local_d0 = local_d0 + iVar6 + 10;
    pFVar11 = local_d4 + 0x108;
    iVar13 = *(int *)pFVar17;
    (**(code **)(**(int **)pFVar11 + 0x14))
              (*(int **)pFVar11,iVar6 / 2 + *(int *)(iVar13 + 4),
               *(int *)(iVar13 + 8) - *(int *)(iVar13 + 0x10) / 2);
    if (local_c8 <= local_cc) {
      piVar18 = *(int **)pFVar11;
      pcVar10 = *(code **)(*piVar18 + 0x20);
    }
    else {
      piVar18 = *(int **)pFVar11;
      pcVar10 = *(code **)(*piVar18 + 0x20);
    }
    (*pcVar10)(piVar18,local_c8 > local_cc);
    ScreenElement::setOrder(*(ScreenElement **)pFVar11,2);
    iVar6 = CImage::getWidth(*(CImage **)(this + 0x130));
    pFVar11 = local_d4 + 0xe0;
    (**(code **)(**(int **)pFVar11 + 0x14))
              (*(int **)pFVar11,iVar6 / 2 + *(int *)(*(int *)pFVar17 + 4),iVar12 + -5);
    *(undefined1 *)(*(int *)pFVar11 + 0x7f) = 0x11;
    iVar6 = *(int *)pFVar11;
    (**(code **)(**(int **)(local_d4 + 0xb8) + 0x14))
              (*(int **)(local_d4 + 0xb8),*(undefined4 *)(iVar6 + 4),
               *(int *)(iVar6 + 8) - *(int *)(iVar6 + 0x10));
    local_cc = local_cc + 1;
    local_d4 = local_d4 + 4;
  } while (local_cc != 10);
  iVar12 = CImage::getWidth(*(CImage **)(this + 0x130));
  (**(code **)(**(int **)(this + 0x158) + 0x18))
            (*(int **)(this + 0x158),iVar12 + *(int *)(*(int *)(this + 0xb4) + 4) + 10,
             *(undefined4 *)(*(int *)(this + 0x154) + 0x10));
  iVar12 = CImage::getWidth(*(CImage **)(this + 0x130));
  (**(code **)(**(int **)(this + 0x158) + 0x14))
            (*(int **)(this + 0x158),(local_c8 + -1) * (-10 - iVar12),0);
  (**(code **)(**(int **)(this + 0x17c) + 0x14))
            (*(int **)(this + 0x17c),0,
             *(int *)(*(int *)(this + 0x154) + 0x10) / 2 + *(int *)(*(int *)(this + 0x154) + 8));
  (**(code **)(**(int **)(this + 0x180) + 0x14))
            (*(int **)(this + 0x180),*(undefined4 *)(this + 0xc),
             *(int *)(*(int *)(this + 0x154) + 0x10) / 2 + *(int *)(*(int *)(this + 0x154) + 8));
  return;
}


