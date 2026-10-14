/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00182f36 FUN_00182f36 */

void FUN_00182f36(void)

{
  byte bVar1;
  ushort uVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  CapcomOrderableList<Furniture*> *pCVar6;
  undefined4 uVar7;
  String *this;
  DataInputStream *this_00;
  uint uVar8;
  int iVar9;
  CharacterData *pCVar10;
  Character *pCVar11;
  CharacterInstance *pCVar12;
  undefined4 uVar13;
  ScreenElement *this_01;
  NoticeDialog *this_02;
  HudElement *this_03;
  ConfirmDialog *this_04;
  CharacterDetails *this_05;
  ObjectiveCompleteDialog *this_06;
  ObjectiveDialog *this_07;
  MessageElement *this_08;
  BuyToxinDialog *this_09;
  CharacterCommandBar *this_10;
  long lVar14;
  TutorialArrow *this_11;
  ImageElement *this_12;
  BitmapTextElement *pBVar15;
  uchar uVar16;
  CapcomOrderableListNode *pCVar17;
  int *piVar18;
  byte *pbVar19;
  int iVar20;
  code *pcVar21;
  undefined4 uVar22;
  CapcomOrderableList<Furniture*> *unaff_r4;
  CFPathFinder *pCVar23;
  GameStateRaid *pGVar24;
  GameStateRaid *unaff_r5;
  CapcomOrderableListNode *pCVar25;
  CharacterData *this_13;
  undefined1 unaff_r7;
  float fVar26;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s1;
  int iStack0000001c;
  int in_stack_00000020;
  int *in_stack_00000024;
  InputStream *pIStack0000002c;
  int in_stack_000000b4;
  int in_stack_000003cc;
  
  while (iVar5 = CapcomOrderableList<Furniture*>::nextItem(unaff_r4), iVar5 != 0) {
    *(undefined1 *)(iVar5 + 0x81) = unaff_r7;
  }
  CapcomOrderableList<Furniture*>::removeAll(unaff_r4);
  operator_delete(unaff_r4);
  pCVar6 = (CapcomOrderableList<Furniture*> *)
           Cafe::createDistanceSortedFurnitureList(*(Cafe **)(unaff_r5 + 0x78),'\x04',0);
  *(undefined4 *)(pCVar6 + 0x10) = *(undefined4 *)(pCVar6 + 8);
  while (iVar5 = CapcomOrderableList<Furniture*>::nextItem(pCVar6), iVar5 != 0) {
    *(undefined1 *)(iVar5 + 0x2e) = 0;
  }
  CapcomOrderableList<Furniture*>::removeAll(pCVar6);
  operator_delete(pCVar6);
  pCVar6 = (CapcomOrderableList<Furniture*> *)
           Cafe::createDistanceSortedFurnitureList(*(Cafe **)(unaff_r5 + 0x78),'\x03',0);
  *(undefined4 *)(pCVar6 + 0x10) = *(undefined4 *)(pCVar6 + 8);
  while (iVar5 = CapcomOrderableList<Furniture*>::nextItem(pCVar6), iVar5 != 0) {
    *(undefined1 *)(iVar5 + 0x2e) = 0;
  }
  CapcomOrderableList<Furniture*>::removeAll(pCVar6);
  operator_delete(pCVar6);
  pCVar6 = (CapcomOrderableList<Furniture*> *)
           Cafe::createDistanceSortedFurnitureList(*(Cafe **)(unaff_r5 + 0x78),'\x01',0);
  *(undefined4 *)(pCVar6 + 0x10) = *(undefined4 *)(pCVar6 + 8);
  while (iVar5 = CapcomOrderableList<Furniture*>::nextItem(pCVar6), iVar5 != 0) {
    *(int *)(unaff_r5 + 0x160) = iVar5;
  }
  CapcomOrderableList<Furniture*>::removeAll(pCVar6);
  operator_delete(pCVar6);
  pCVar6 = (CapcomOrderableList<Furniture*> *)
           Cafe::createDistanceSortedFurnitureList(*(Cafe **)(unaff_r5 + 0x78),'\x02',0);
  *(undefined4 *)(pCVar6 + 0x10) = *(undefined4 *)(pCVar6 + 8);
  do {
    iVar5 = CapcomOrderableList<Furniture*>::nextItem(pCVar6);
    if (iVar5 == 0) break;
    iVar9 = *(int *)(iVar5 + 100);
    *(int *)(unaff_r5 + 300) = iVar5;
  } while (iVar9 < 1);
  CapcomOrderableList<Furniture*>::removeAll(pCVar6);
  operator_delete(pCVar6);
  pCVar6 = (CapcomOrderableList<Furniture*> *)
           Cafe::createDistanceSortedObjectList(*(Cafe **)(unaff_r5 + 0x78),'\x01',0);
  *(undefined4 *)(pCVar6 + 0x10) = *(undefined4 *)(pCVar6 + 8);
  while (iVar5 = CapcomOrderableList<Furniture*>::nextItem(pCVar6), iVar5 != 0) {
    *(undefined1 *)(iVar5 + 0x54) = 0;
  }
  if (*(int *)(pCVar6 + 0x14) != 0) {
    pCVar17 = *(CapcomOrderableListNode **)(pCVar6 + 8);
    while (pCVar17 != (CapcomOrderableListNode *)0x0) {
      pCVar25 = *(CapcomOrderableListNode **)(pCVar17 + 8);
      CapcomOrderableList<CafeObject*>::deleteNode
                ((CapcomOrderableList<CafeObject*> *)pCVar6,pCVar17);
      pCVar17 = pCVar25;
    }
    *(undefined4 *)(pCVar6 + 0x14) = 0;
    *(CapcomOrderableList<Furniture*> **)(pCVar6 + 0xc) = pCVar6;
    *(undefined4 *)(pCVar6 + 0x10) = *(undefined4 *)(pCVar6 + 8);
  }
  operator_delete(pCVar6);
  uVar7 = Cafe::getNextTile((int)*(short *)(*(int *)(unaff_r5 + 0x160) + 0x2c),
                            (uint)*(byte *)(*(int *)(unaff_r5 + 0x160) + 0x34));
  *(undefined4 *)(unaff_r5 + 0x44) = uVar7;
  uVar7 = Cafe::getNewRandomFoodStack(*(Cafe **)(unaff_r5 + 0x78),false);
  *(undefined4 *)(unaff_r5 + 0x58) = uVar7;
  (**(code **)(*in_stack_00000024 + 0xc))(in_stack_00000024);
  (**(code **)(*in_stack_00000024 + 4))(in_stack_00000024);
  if (unaff_r5[0x12] == (GameStateRaid)0x0) {
    sprintf(&stack0x000001cc,(char *)(DAT_001832ec + 0x1830e0),*(int *)(unaff_r5 + 0x4c));
    String::String((String *)&stack0x00000070,&stack0x000001cc);
    pIStack0000002c = (InputStream *)SaveDataInputStream::open(&stack0x00000070);
    this = (String *)&stack0x00000070;
  }
  else {
    sprintf(&stack0x000001cc,(char *)(DAT_001830d4 + 0x1830a8),
            (uint)**(byte **)(in_stack_00000020 + DAT_001830d0) + *(int *)(unaff_r5 + 0x4c));
    String::String((String *)&stack0x00000068,&stack0x000001cc);
    pIStack0000002c = (InputStream *)SaveDataInputStream::open(&stack0x00000068);
    this = (String *)&stack0x00000068;
  }
  String::~String(this);
  L_PrintLog((char *)(DAT_001832f0 + 0x183100),(char *)(DAT_001832f4 + 0x183102));
  this_00 = (DataInputStream *)operator_new(8);
  DataInputStream::DataInputStream(this_00,pIStack0000002c);
  if (((((pIStack0000002c != (InputStream *)0x0) &&
        (uVar8 = DataInputStream::readByte(this_00), 0x16 < uVar8)) &&
       (unaff_r5[0x13] == (GameStateRaid)0x0)) &&
      ((unaff_r5[0x14] == (GameStateRaid)0x0 && (unaff_r5[0x15] == (GameStateRaid)0x0)))) &&
     (unaff_r5[0x16] == (GameStateRaid)0x0)) {
    FUN_001843ce();
  }
  iVar5 = *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_001832f8);
  pbVar19 = *(byte **)(in_stack_00000020 + DAT_001832fc);
  this_13 = *(CharacterData **)(((uint)*pbVar19 + *(int *)(unaff_r5 + 0x50) + 10) * 4 + iVar5);
  if (unaff_r5[0x16] == (GameStateRaid)0x0) {
    if (((unaff_r5[0x12] != (GameStateRaid)0x0) || (unaff_r5[0x13] != (GameStateRaid)0x0)) ||
       ((unaff_r5[0x14] != (GameStateRaid)0x0 || (unaff_r5[0x15] != (GameStateRaid)0x0)))) {
      iVar9 = *(int *)(unaff_r5 + 0x24);
      if (iVar9 == 0x7b) {
        if ((*(int *)(unaff_r5 + 0x48) == 4) ||
           (iVar20 = DAT_0018331c, *(int *)(unaff_r5 + 0x48) == 3)) {
          iVar20 = DAT_00183318;
        }
        goto LAB_00183356;
      }
      iVar20 = DAT_00183664;
      if (iVar9 < 0x7c) {
        if (iVar9 == 0x18) {
          iVar9 = CapcomMath::random(7);
          this_13 = *(CharacterData **)((iVar9 + 0x1b0) * 4 + iVar5);
          goto LAB_00183358;
        }
        if (0x18 < iVar9) {
          if (iVar9 < 0x76) {
            if ((0x39 < iVar9) || (iVar20 = DAT_00183348, iVar9 < 0x39)) goto LAB_00183238;
          }
          else {
            if (iVar9 != 0x76) goto LAB_00183238;
            iVar20 = DAT_00183310;
            if ((*(int *)(unaff_r5 + 0x48) != 4) && (*(int *)(unaff_r5 + 0x48) != 3)) {
              iVar20 = DAT_00183314;
            }
          }
          goto LAB_00183356;
        }
        if (iVar9 == 4) {
          iVar9 = 0xf5;
        }
        else if (iVar9 < 5) {
          if (iVar9 == 2) {
            iVar9 = 0xd9;
          }
          else if (iVar9 < 3) {
            if (iVar9 != 1) goto LAB_0018334e;
            iVar9 = 0x89;
          }
          else {
            iVar9 = 0xe0;
          }
        }
        else {
          iVar20 = DAT_00183304;
          if (iVar9 == 6) goto LAB_00183356;
          if (6 < iVar9) goto LAB_00183238;
          iVar9 = 0xfc;
        }
LAB_00183354:
        iVar20 = iVar9 << 2;
      }
      else {
        if (iVar9 < 0x8e) {
          if (iVar9 < 0x89) {
            if (0x86 < iVar9) {
              if (iVar9 == 0x87) {
                iVar20 = DAT_00183324;
                if ((*(int *)(unaff_r5 + 0x48) != 4) &&
                   (iVar20 = DAT_00183328, *(int *)(unaff_r5 + 0x48) == 3)) {
                  iVar20 = 0xb1;
LAB_001832a0:
                  iVar20 = iVar20 << 5;
                }
              }
              else {
                if (iVar9 != 0x88) goto LAB_0018334e;
                if ((*(int *)(unaff_r5 + 0x48) == 4) ||
                   (iVar20 = DAT_0018332c, *(int *)(unaff_r5 + 0x48) == 3)) {
                  iVar20 = 0xb3;
                  goto LAB_001832a0;
                }
              }
              goto LAB_00183356;
            }
            if ((iVar9 < 0x84) && (0x82 < iVar9)) {
              iVar9 = *(int *)(unaff_r5 + 0x48);
              iVar20 = DAT_00183320;
              goto joined_r0x001832c8;
            }
          }
LAB_00183238:
          iVar20 = DAT_0018330c;
          if (unaff_r5[0x15] == (GameStateRaid)0x0) {
LAB_0018334e:
            iVar9 = **(int **)(in_stack_00000020 + iVar20);
          }
          else {
            iVar9 = *(int *)(*(int *)(in_stack_00000020 + DAT_00183308) + 0xc);
          }
          goto LAB_00183354;
        }
        if (iVar9 < 0x95) {
          if ((0x90 < iVar9) || (iVar9 == 0x8f)) goto LAB_00183238;
          if (iVar9 < 0x90) {
            iVar20 = DAT_00183334;
            if (*(int *)(unaff_r5 + 0x48) - 3U < 2) {
              iVar20 = DAT_00183330;
            }
          }
          else {
            iVar20 = DAT_0018333c;
            if (*(int *)(unaff_r5 + 0x48) - 3U < 2) {
              iVar20 = DAT_00183338;
            }
          }
        }
        else {
          if (iVar9 != 0x95) {
            if (iVar9 < 0xac) goto LAB_00183238;
            goto LAB_0018334e;
          }
          iVar9 = *(int *)(unaff_r5 + 0x48);
          iVar20 = DAT_00183340;
joined_r0x001832c8:
          if ((iVar9 != 4) && (iVar9 != 3)) {
            iVar20 = DAT_00183344;
          }
        }
      }
LAB_00183356:
      this_13 = *(CharacterData **)(iVar20 + iVar5);
    }
  }
  else {
    iVar5 = 0;
    do {
      iVar9 = ZombieCafe::getWeekRaid_getHatoID
                        (*(ZombieCafe **)(unaff_r5 + 0xc),iVar5,*(int *)(unaff_r5 + 0x48) + -1);
      if (1 < iVar9 + 1U) break;
      iVar5 = iVar5 + 1;
      iVar9 = DAT_00183300;
    } while (iVar5 != 4);
    this_13 = *(CharacterData **)(iVar9 * 4 + *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_001832f8));
  }
LAB_00183358:
  pCVar10 = (CharacterData *)CharacterData::copy(this_13);
  memcpy(pCVar10 + 0xaf0,this_13 + 0xaf0,0x18);
  GameStateRaid::setEnemyStatus(unaff_r5,pCVar10,true);
  String::String((String *)&stack0x00000078,(char *)(DAT_00183668 + 0x183380));
  pCVar11 = (Character *)operator_new(0x6c);
  Character::Character(pCVar11,pCVar10,0,0);
  String::~String((String *)&stack0x00000078);
  iVar20 = *(int *)pCVar11;
  iVar9 = __fixsfsi(*(undefined4 *)(iVar20 + DAT_0018366c));
  iVar5 = __fixsfsi(*(undefined4 *)(pCVar11 + 0x40));
  if (iVar9 < iVar5) {
    iVar5 = iVar9;
  }
  uVar7 = __floatsisf(iVar5);
  iVar5 = DAT_00183670;
  *(undefined4 *)(pCVar11 + 0x40) = uVar7;
  CharacterData::getRandomName((CharacterData *)&stack0x00000080,*(bool *)(iVar20 + iVar5),0);
  String::operator=((String *)(pCVar11 + 8),&stack0x00000080);
  String::~String((String *)&stack0x00000080);
  pCVar23 = *(CFPathFinder **)(*(int *)(unaff_r5 + 0x78) + 0x5c);
  pCVar12 = (CharacterInstance *)operator_new(0xdc);
  CharacterInstance::CharacterInstance(pCVar12,pCVar11,pCVar23);
  pGVar24 = unaff_r5 + 0xf8;
  *(CharacterInstance **)pGVar24 = pCVar12;
  *(short *)(pCVar12 + 0x2c) = (short)*(undefined4 *)(unaff_r5 + 0x44);
  piVar18 = *(int **)pGVar24;
  pcVar21 = *(code **)(*piVar18 + 0xc);
  uVar7 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(unaff_r5 + 0x78),(int)(short)piVar18[0xb]);
  (*pcVar21)(piVar18,uVar7);
  *(undefined1 *)(*(int *)pGVar24 + 0x84) = 1;
  if (unaff_r5[0x13] != (GameStateRaid)0x0) {
    pCVar12 = *(CharacterInstance **)pGVar24;
    uVar22 = **(undefined4 **)(in_stack_00000020 + DAT_00183674);
    uVar7 = __mulsf3(uVar22,DAT_00183678);
    __divsi3(*(byte *)(*(int *)(unaff_r5 + 0xc) + 0x48) + 1,5);
    uVar13 = __floatsisf();
    uVar7 = __mulsf3(uVar7,uVar13);
    fVar26 = (float)__addsf3(uVar22,uVar7);
    CharacterInstance::setScale(pCVar12,fVar26);
  }
  Cafe::addCafeObject(*(Cafe **)(unaff_r5 + 0x78),*(CafeObject **)(unaff_r5 + 0xf8));
  iVar5 = __aeabi_fcmpgt(*(undefined4 *)(pCVar11 + 0x40),0);
  if (iVar5 != 0) {
    GameStateRaid::addDefenderTotalHp(extraout_s0);
  }
  if (*(int *)(unaff_r5 + 0x24) == 0x18) {
    uVar2 = *(ushort *)(*(int *)pCVar11 + DAT_0018367c);
    uVar8 = 0x1b0;
    iVar5 = 0;
    do {
      if (uVar8 != uVar2) {
        (&stack0x000000b4)[iVar5] = uVar8;
        iVar5 = iVar5 + 1;
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 != DAT_00183680);
    iVar5 = 0x1e;
    do {
      iVar9 = CapcomMath::random(6);
      iVar20 = CapcomMath::random(6);
      uVar7 = (&stack0x000000b4)[iVar9];
      iVar5 = iVar5 + -1;
      (&stack0x000000b4)[iVar9] = (&stack0x000000b4)[iVar20];
      (&stack0x000000b4)[iVar20] = uVar7;
    } while (iVar5 != 0);
    uVar8 = *(uint *)(*(int *)(unaff_r5 + 0xc) + 0x680);
    iStack0000001c = 6;
    if ((((int)uVar8 < 0x28) && (iStack0000001c = 5, (int)uVar8 < 0x1e)) &&
       (iStack0000001c = 4, (int)uVar8 < 0x14)) {
      iStack0000001c = 3 - ((uint)(uVar8 < 10) - ((int)uVar8 >> 0x1f));
    }
  }
  else if (unaff_r5[0x15] == (GameStateRaid)0x0) {
    iStack0000001c = 6;
    if (((unaff_r5[0x16] == (GameStateRaid)0x0) &&
        (iStack0000001c =
              *(int *)((*(int *)(unaff_r5 + 0x54) + -1) * 4 +
                      **(int **)(in_stack_00000020 + DAT_00183684)),
        unaff_r5[0x13] != (GameStateRaid)0x0)) && (6 < iStack0000001c)) goto LAB_00183554;
  }
  else {
    iVar5 = *(int *)(unaff_r5 + 0x48);
    iStack0000001c = 5;
    if (((iVar5 != 2) && (iStack0000001c = 6, iVar5 != 3)) && (iStack0000001c = 4, iVar5 == 4)) {
LAB_00183554:
      iStack0000001c = 6;
    }
  }
  if (iStack0000001c < 1) {
    Cafe::populateWithCustomers(*(Cafe **)(unaff_r5 + 0x78),unaff_r5);
    if (this_00 != (DataInputStream *)0x0) {
      (**(code **)(*(int *)this_00 + 4))(this_00);
    }
    if (pIStack0000002c != (InputStream *)0x0) {
      (**(code **)(*(int *)pIStack0000002c + 0xc))(pIStack0000002c);
      (**(code **)(*(int *)pIStack0000002c + 4))(pIStack0000002c);
    }
    *(undefined4 *)(unaff_r5 + 0x94) = 0;
    iVar9 = **(int **)(in_stack_00000020 + DAT_00183d38);
    iVar5 = SmDev();
    *(undefined4 *)(unaff_r5 + 0x98) = *(undefined4 *)(iVar5 * 4 + iVar9);
    *(undefined4 *)(unaff_r5 + 0x90) = 0;
    *(undefined4 *)(unaff_r5 + 0x8c) = 0;
    *(undefined4 *)(unaff_r5 + 0x118) = 0;
    *(undefined4 *)(unaff_r5 + 0x11c) = 0;
    unaff_r5[0x130] = (GameStateRaid)0x0;
    unaff_r5[0x15c] = (GameStateRaid)0x0;
    this_01 = (ScreenElement *)operator_new(0x60);
    ScreenElement::ScreenElement(this_01,(ScreenElement *)0x0);
    *(ScreenElement **)(unaff_r5 + 0x134) = this_01;
    this_02 = (NoticeDialog *)operator_new(0x90);
    NoticeDialog::NoticeDialog
              (this_02,*(CImage **)(*(int *)(unaff_r5 + 0x80) + 0x14),
               *(CImage **)(*(int *)(unaff_r5 + 0x7c) + 0x28),extraout_s0_00);
    *(NoticeDialog **)(unaff_r5 + 0x30) = this_02;
    ScreenElement::setOrder((ScreenElement *)this_02,0x62);
    (**(code **)(**(int **)(unaff_r5 + 0x30) + 0x1c))(*(int **)(unaff_r5 + 0x30),0x12);
    (**(code **)(**(int **)(unaff_r5 + 0x134) + 0x2c))
              (*(int **)(unaff_r5 + 0x134),*(undefined4 *)(unaff_r5 + 0x30));
    this_03 = (HudElement *)operator_new(0x16c);
    HudElement::HudElement
              (this_03,*(_func_bool_void_ptr_int **)(in_stack_00000020 + DAT_00183d3c),unaff_r5,
               false);
    *(HudElement **)(unaff_r5 + 0x138) = this_03;
    HudElement::setButtonAvailability((int)this_03,false);
    HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x138),true);
    HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x138),true);
    HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x138),true);
    HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x138),true);
    HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x138),true);
    HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x138),true);
    HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x138),true);
    HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x138),true);
    HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x138),true);
    HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x138),true);
    iVar5 = DAT_00183d40;
    iVar9 = *(int *)(unaff_r5 + 0xc);
    if (((*(char *)(iVar9 + DAT_00183d40) == '\0') || (*(char *)(iVar9 + 0x9e0) != '\0')) &&
       ((*(char *)(iVar9 + DAT_00183d44) == '\0' || (*(char *)(iVar9 + DAT_00183d48) != '\0')))) {
      iVar9 = *(int *)(unaff_r5 + 0x138);
    }
    else {
      iVar9 = *(int *)(unaff_r5 + 0x138);
    }
    HudElement::setButtonAvailability(iVar9,true);
    iVar9 = DAT_00183d4c;
    iVar20 = *(int *)(unaff_r5 + 0xc);
    if (((*(char *)(iVar20 + DAT_00183d4c) == '\0') || (*(char *)(iVar20 + DAT_00183d50) != '\0'))
       && ((*(char *)(iVar20 + DAT_00183d54) == '\0' || (*(char *)(iVar20 + DAT_00183d58) != '\0')))
       ) {
      iVar20 = *(int *)(unaff_r5 + 0x138);
    }
    else {
      iVar20 = *(int *)(unaff_r5 + 0x138);
    }
    HudElement::setButtonAvailability(iVar20,true);
    if ((*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_00183d5c) == '\0') ||
       (*(char *)(*(int *)(unaff_r5 + 0xc) + DAT_00183d60) != '\0')) {
      iVar20 = *(int *)(unaff_r5 + 0x138);
    }
    else {
      iVar20 = *(int *)(unaff_r5 + 0x138);
    }
    HudElement::setButtonAvailability(iVar20,true);
    iVar20 = *(int *)(unaff_r5 + 0xc);
    if (((((*(char *)(iVar20 + iVar5) == '\0') || (*(char *)(iVar20 + 0x9e0) != '\0')) &&
         ((*(char *)(iVar20 + DAT_00183d44) == '\0' || (*(char *)(iVar20 + DAT_00183d48) != '\0'))))
        && ((*(char *)(iVar20 + iVar9) == '\0' || (*(char *)(iVar20 + DAT_00183d50) != '\0')))) &&
       ((*(char *)(iVar20 + DAT_00183d54) == '\0' || (*(char *)(iVar20 + DAT_00183d58) != '\0')))) {
      iVar5 = *(int *)(unaff_r5 + 0x138);
    }
    else {
      iVar5 = *(int *)(unaff_r5 + 0x138);
    }
    HudElement::setButtonAvailability(iVar5,true);
    iVar5 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_001840f8),'&');
    if (iVar5 != 0) {
      HudElement::setButtonAvailability(*(int *)(unaff_r5 + 0x138),true);
    }
    (**(code **)(**(int **)(unaff_r5 + 0x134) + 0x2c))
              (*(int **)(unaff_r5 + 0x134),*(undefined4 *)(unaff_r5 + 0x138));
    ScreenElement::setOrder
              (*(ScreenElement **)(unaff_r5 + 0x138),
               (int)**(char **)(in_stack_00000020 + DAT_001840fc));
    HudElement::invisibleAddToxinButton(*(HudElement **)(unaff_r5 + 0x138));
    this_04 = (ConfirmDialog *)operator_new(0x9c);
    ConfirmDialog::ConfirmDialog
              (this_04,*(CImage **)(*(int *)(unaff_r5 + 0x80) + 0x14),
               *(CImage **)(*(int *)(unaff_r5 + 0x7c) + 0x28),
               *(CImage **)(*(int *)(unaff_r5 + 0x7c) + 0x44),0,extraout_s0_01,(CImage *)0x40000000)
    ;
    *(ConfirmDialog **)(unaff_r5 + 0x164) = this_04;
    ScreenElement::setOrder((ScreenElement *)this_04,99);
    (**(code **)(**(int **)(unaff_r5 + 0x164) + 0x1c))(*(int **)(unaff_r5 + 0x164),0x12);
    (**(code **)(**(int **)(unaff_r5 + 0x134) + 0x2c))
              (*(int **)(unaff_r5 + 0x134),*(undefined4 *)(unaff_r5 + 0x164));
    this_05 = (CharacterDetails *)operator_new(0x194);
    CharacterDetails::CharacterDetails
              (this_05,(Vector *)(*(int *)(unaff_r5 + 0xc) + DAT_00184100),false,
               *(ConfirmDialog **)(unaff_r5 + 0x164),(NoticeDialog *)0x0,(GameStateCafe *)0x0,'\x02'
               ,false);
    *(CharacterDetails **)(unaff_r5 + 0x140) = this_05;
    (**(code **)(*(int *)this_05 + 0x1c))(this_05,0x12);
    iVar5 = *(int *)(*(int *)(unaff_r5 + 0xc) + 0x10);
    (**(code **)(**(int **)(unaff_r5 + 0x140) + 0x14))
              (*(int **)(unaff_r5 + 0x140),(iVar5 >> 0x10) - (iVar5 >> 0x1f) >> 1,
               (int)(short)iVar5 / 2);
    (**(code **)(**(int **)(unaff_r5 + 0x140) + 0x20))(*(int **)(unaff_r5 + 0x140),0);
    ScreenElement::setOrder
              (*(ScreenElement **)(unaff_r5 + 0x140),
               (int)**(char **)(in_stack_00000020 + DAT_00184104));
    (**(code **)(**(int **)(unaff_r5 + 0x134) + 0x2c))
              (*(int **)(unaff_r5 + 0x134),*(undefined4 *)(unaff_r5 + 0x140));
    this_06 = (ObjectiveCompleteDialog *)operator_new(0xb4);
    ObjectiveCompleteDialog::ObjectiveCompleteDialog(this_06);
    *(ObjectiveCompleteDialog **)(unaff_r5 + 0x16c) = this_06;
    (**(code **)(*(int *)this_06 + 0x1c))(this_06,0x12);
    (**(code **)(**(int **)(unaff_r5 + 0x16c) + 0x14))
              (*(int **)(unaff_r5 + 0x16c),*(int *)(*(int *)(unaff_r5 + 0xc) + 0x14) >> 0x10,
               (int)(short)*(int *)(*(int *)(unaff_r5 + 0xc) + 0x14));
    ScreenElement::setOrder
              (*(ScreenElement **)(unaff_r5 + 0x16c),
               (int)**(char **)(in_stack_00000020 + DAT_00184108));
    (**(code **)(**(int **)(unaff_r5 + 0x16c) + 0x20))(*(int **)(unaff_r5 + 0x16c),0);
    (**(code **)(**(int **)(unaff_r5 + 0x134) + 0x2c))
              (*(int **)(unaff_r5 + 0x134),*(undefined4 *)(unaff_r5 + 0x16c));
    this_07 = (ObjectiveDialog *)operator_new(0x16c);
    ObjectiveDialog::ObjectiveDialog
              (this_07,*(ConfirmDialog **)(unaff_r5 + 0x164),
               *(ObjectiveCompleteDialog **)(unaff_r5 + 0x16c),
               *(BuyToxinDialog **)(unaff_r5 + 0x168));
    *(ObjectiveDialog **)(unaff_r5 + 0x170) = this_07;
    (**(code **)(*(int *)this_07 + 0x1c))(this_07,0x12);
    (**(code **)(**(int **)(unaff_r5 + 0x170) + 0x14))
              (*(int **)(unaff_r5 + 0x170),*(int *)(*(int *)(unaff_r5 + 0xc) + 0x14) >> 0x10,
               (int)(short)*(int *)(*(int *)(unaff_r5 + 0xc) + 0x14));
    ScreenElement::setOrder
              (*(ScreenElement **)(unaff_r5 + 0x170),
               (int)**(char **)(in_stack_00000020 + DAT_0018410c));
    (**(code **)(**(int **)(unaff_r5 + 0x170) + 0x20))(*(int **)(unaff_r5 + 0x170),0);
    (**(code **)(**(int **)(unaff_r5 + 0x134) + 0x2c))
              (*(int **)(unaff_r5 + 0x134),*(undefined4 *)(unaff_r5 + 0x170));
    this_08 = (MessageElement *)operator_new(0x90);
    MessageElement::MessageElement(this_08,*(CImage ***)(unaff_r5 + 0x7c),'\f');
    *(MessageElement **)(unaff_r5 + 0x14c) = this_08;
    ScreenElement::setOrder((ScreenElement *)this_08,100);
    (**(code **)(**(int **)(unaff_r5 + 0x134) + 0x2c))
              (*(int **)(unaff_r5 + 0x134),*(undefined4 *)(unaff_r5 + 0x14c));
    this_09 = (BuyToxinDialog *)operator_new(0xe4);
    BuyToxinDialog::BuyToxinDialog(this_09);
    iVar5 = DAT_00184110;
    *(BuyToxinDialog **)(unaff_r5 + 0x168) = this_09;
    ScreenElement::setOrder((ScreenElement *)this_09,(int)**(char **)(in_stack_00000020 + iVar5));
    (**(code **)(**(int **)(unaff_r5 + 0x134) + 0x2c))
              (*(int **)(unaff_r5 + 0x134),*(undefined4 *)(unaff_r5 + 0x168));
    (**(code **)(**(int **)(unaff_r5 + 0x168) + 0x1c))(*(int **)(unaff_r5 + 0x168),0x12);
    (**(code **)(**(int **)(unaff_r5 + 0x168) + 0x20))(*(int **)(unaff_r5 + 0x168),0);
    this_10 = (CharacterCommandBar *)operator_new(0xd8);
    CharacterCommandBar::CharacterCommandBar
              (this_10,*(ConfirmDialog **)(unaff_r5 + 0x164),*(BuyToxinDialog **)(unaff_r5 + 0x168))
    ;
    iVar5 = DAT_00184114;
    *(CharacterCommandBar **)(unaff_r5 + 0x13c) = this_10;
    CharacterCommandBar::addInfoButton
              (this_10,*(_func_void_void_ptr_ScreenElement_ptr **)(in_stack_00000020 + iVar5),
               unaff_r5);
    uVar7 = CharacterCommandBar::addAttackButton(*(CharacterCommandBar **)(unaff_r5 + 0x13c));
    iVar5 = DAT_00184118;
    *(undefined4 *)(unaff_r5 + 0x154) = uVar7;
    uVar7 = CharacterCommandBar::addHealButton
                      (*(CharacterCommandBar **)(unaff_r5 + 0x13c),
                       *(_func_void_void_ptr_ScreenElement_ptr **)(in_stack_00000020 + iVar5),
                       unaff_r5);
    *(undefined4 *)(unaff_r5 + 0x144) = uVar7;
    CharacterCommandBar::layout(*(CharacterCommandBar **)(unaff_r5 + 0x13c));
    (**(code **)(**(int **)(unaff_r5 + 0x13c) + 0x1c))(*(int **)(unaff_r5 + 0x13c),0x11);
    iVar5 = *(int *)(*(int *)(unaff_r5 + 0xc) + 0x10);
    (**(code **)(**(int **)(unaff_r5 + 0x13c) + 0x14))
              (*(int **)(unaff_r5 + 0x13c),(iVar5 >> 0x10) - (iVar5 >> 0x1f) >> 1,(int)(short)iVar5)
    ;
    iVar5 = 0;
    ScreenElement::setOrder
              (*(ScreenElement **)(unaff_r5 + 0x13c),
               (int)**(char **)(in_stack_00000020 + DAT_0018411c));
    (**(code **)(**(int **)(unaff_r5 + 0x134) + 0x2c))
              (*(int **)(unaff_r5 + 0x134),*(undefined4 *)(unaff_r5 + 0x13c));
    while( true ) {
      iVar20 = *(int *)(unaff_r5 + 0xc);
      iVar9 = iVar20 + DAT_00184100;
      if (*(int *)(iVar9 + 4) + 1 <= iVar5) break;
      pCVar11 = *(Character **)(iVar5 * 4 + *(int *)(iVar9 + 8));
      if (pCVar11[0x44] != (Character)0x6) {
        pCVar23 = *(CFPathFinder **)(*(int *)(unaff_r5 + 0x78) + 0x5c);
        pCVar12 = (CharacterInstance *)operator_new(0xdc);
        CharacterInstance::CharacterInstance(pCVar12,pCVar11,pCVar23);
        Vector<CharacterInstance*>::addElement
                  ((Vector<CharacterInstance*> *)(unaff_r5 + 0xac),pCVar12);
        uVar8 = **(int **)(in_stack_00000020 + DAT_00184124) - 5;
        lVar14 = Cafe::diamondToStaggeredCoords
                           ((int)(uVar8 & 0xffff |
                                 ((**(int **)(in_stack_00000020 + DAT_00184120) + -4) - iVar5) *
                                 0x10000) >> 0x10,(int)(short)uVar8);
        sVar4 = Cafe::staggeredCoordsToIndex(lVar14);
        *(short *)(pCVar12 + 0x2c) = sVar4;
        pcVar21 = *(code **)(*(int *)pCVar12 + 0xc);
        uVar7 = Cafe::indexToWorldCoordsCenter(*(Cafe **)(unaff_r5 + 0x78),(int)sVar4);
        (*pcVar21)(pCVar12,uVar7);
        CharacterInstance::setCurrentAnimation(pCVar12,'\x01','\0',false);
        Cafe::addCafeObject(*(Cafe **)(unaff_r5 + 0x78),(CafeObject *)pCVar12);
        pCVar12[0x84] = (CharacterInstance)0x1;
        *(undefined1 *)(*(int *)(pCVar12 + 0x8c) + 0x44) = 0;
        iVar9 = *(int *)(pCVar12 + 0x8c);
        *(int *)(iVar9 + 0x18) = *(int *)(iVar9 + 0x18) + 1;
      }
      iVar5 = iVar5 + 1;
    }
    *(undefined4 *)(unaff_r5 + 0x114) = 0;
    if (*(int *)(unaff_r5 + 0xb0) < 0) {
      *(int *)(unaff_r5 + 0x94) = 0;
    }
    else {
      uVar7 = __floatsisf((int)*(short *)(**(int **)(unaff_r5 + 0xb4) + 6));
      uVar7 = __mulsf3(uVar7,*(undefined4 *)(unaff_r5 + 0x98));
      __divsi3((int)*(short *)(iVar20 + 0x12),3);
      uVar13 = __floatsisf();
      iVar5 = __subsf3(uVar7,uVar13);
      iVar5 = __fixsfsi(iVar5 + -0x80000000);
      *(int *)(unaff_r5 + 0x94) = iVar5 << 0x10;
    }
    piVar18 = *(int **)(unaff_r5 + 0x134);
    pcVar21 = *(code **)(*piVar18 + 0x2c);
    this_11 = (TutorialArrow *)operator_new(0x7c);
    TutorialArrow::TutorialArrow(this_11);
    *(TutorialArrow **)(unaff_r5 + 0x150) = this_11;
    (*pcVar21)(piVar18,this_11);
    iVar5 = DAT_00184464;
    ScreenElement::setOrder
              (*(ScreenElement **)(unaff_r5 + 0x150),
               (int)**(char **)(in_stack_00000020 + DAT_00184460));
    iVar9 = *(int *)(*(int *)(unaff_r5 + 0xc) + iVar5);
    uVar7 = *(undefined4 *)(unaff_r5 + 0x150);
    *(undefined4 *)(iVar9 + DAT_00184468) = *(undefined4 *)(unaff_r5 + 0x14c);
    *(undefined4 *)(iVar9 + 0x788) = uVar7;
    *(undefined4 *)(iVar9 + 0x778) = *(undefined4 *)(in_stack_00000020 + DAT_0018446c);
    *(GameStateRaid **)(iVar9 + DAT_00184470) = unaff_r5;
    iVar9 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar5),'&');
    uVar16 = '\x1f';
    if (iVar9 != 0) {
      uVar16 = 'B';
      iVar9 = 0;
    }
    TutorialSystem::triggerEvent
              (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + iVar5),uVar16,SUB41(iVar9,0));
    piVar18 = *(int **)(unaff_r5 + 0x134);
    pcVar21 = *(code **)(*piVar18 + 0x2c);
    this_12 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement
              (this_12,*(CImage **)(*(int *)(unaff_r5 + 0x80) + 0x14),extraout_s0_02,extraout_s1,
               '\0',false);
    *(ImageElement **)(unaff_r5 + 0x18) = this_12;
    (*pcVar21)(piVar18,this_12);
    (**(code **)(**(int **)(unaff_r5 + 0x18) + 0x20))(*(int **)(unaff_r5 + 0x18),0);
    piVar18 = *(int **)(unaff_r5 + 0x18);
    pcVar21 = *(code **)(*piVar18 + 0x2c);
    String::String((String *)&stack0x00000098,(char *)(DAT_00184474 + 0x1841e4));
    iVar9 = *(int *)(unaff_r5 + 0xc);
    iVar5 = SmDev();
    uVar7 = *(undefined4 *)((*(int *)(DAT_00184478 + iVar5 * 4 + 0x184238) + 0x136) * 4 + iVar9);
    pBVar15 = (BitmapTextElement *)operator_new(0xc0);
    BitmapTextElement::BitmapTextElement(pBVar15,&stack0x00000098,uVar7,0xffffff92);
    *(BitmapTextElement **)(unaff_r5 + 0x1c) = pBVar15;
    (*pcVar21)(piVar18,pBVar15);
    String::~String((String *)&stack0x00000098);
    piVar18 = *(int **)(unaff_r5 + 0x18);
    pcVar21 = *(code **)(*piVar18 + 0x2c);
    String::String((String *)&stack0x000000a0,(char *)(DAT_0018447c + 0x184242));
    iVar9 = *(int *)(unaff_r5 + 0xc);
    iVar5 = SmDev();
    uVar7 = *(undefined4 *)((*(int *)(DAT_00184480 + iVar5 * 4 + 0x184296) + 0x136) * 4 + iVar9);
    pBVar15 = (BitmapTextElement *)operator_new(0xc0);
    BitmapTextElement::BitmapTextElement(pBVar15,&stack0x000000a0,uVar7,0xffffffff);
    *(BitmapTextElement **)(unaff_r5 + 0x20) = pBVar15;
    (*pcVar21)(piVar18,pBVar15);
    String::~String((String *)&stack0x000000a0);
    (**(code **)(**(int **)(unaff_r5 + 0x1c) + 0x20))(*(int **)(unaff_r5 + 0x1c),0);
    (**(code **)(**(int **)(unaff_r5 + 0x20) + 0x20))(*(int **)(unaff_r5 + 0x20),0);
    unaff_r5[DAT_00184484] = (GameStateRaid)0x0;
    unaff_r5[0x15e] = (GameStateRaid)0x0;
    unaff_r5[0x38] = (GameStateRaid)0x0;
    *(undefined4 *)(unaff_r5 + 0x74) = 0;
    GameStateRaid::saveData(unaff_r5);
    uVar7 = CCSecondsSince1970();
    *(undefined4 *)(unaff_r5 + 0x178) = uVar7;
    *(undefined4 *)(unaff_r5 + 0x184) = 0;
    *(undefined4 *)(unaff_r5 + 0x188) = 0;
    *(undefined4 *)(unaff_r5 + 0x17c) = 0;
    if (in_stack_000003cc == **(int **)(in_stack_00000020 + DAT_00184488)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  iVar9 = *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_00183688);
  bVar1 = *pbVar19;
  iVar5 = CapcomMath::random(9);
  pCVar10 = (CharacterData *)
            CharacterData::copy(*(CharacterData **)((bVar1 + 1 + iVar5) * 4 + iVar9));
  if (unaff_r5[0x16] == (GameStateRaid)0x0) {
    if ((((unaff_r5[0x12] == (GameStateRaid)0x0) && (unaff_r5[0x13] == (GameStateRaid)0x0)) &&
        (unaff_r5[0x14] == (GameStateRaid)0x0)) && (unaff_r5[0x15] == (GameStateRaid)0x0))
    goto LAB_00183742;
    iVar5 = CapcomMath::random(5);
    iVar9 = *(int *)(unaff_r5 + 0x24);
    if (iVar9 == 0x76) {
      if ((1 < *(int *)(unaff_r5 + 0x48) - 3U) || (iVar20 = DAT_00183a08, iVar5 < 2))
      goto LAB_0018371c;
      goto LAB_00183732;
    }
    if (0x76 < iVar9) {
      if (iVar9 < 0x87) {
        if (iVar9 < 0x84) {
          if (iVar9 == 0x7b) goto LAB_0018371c;
          if ((0x7a < iVar9) && (iVar20 = DAT_00183a00, 0x82 < iVar9)) goto LAB_00183732;
        }
      }
      else if (iVar9 < 0x95) {
        if (iVar9 < 0x89) {
          if (iVar9 == 0x87) {
            iVar20 = DAT_00183a0c;
            if ((*(int *)(unaff_r5 + 0x48) == 4) && (1 < iVar5)) {
              iVar20 = 0x588;
            }
            goto LAB_00183732;
          }
          if (iVar9 != 0x88) goto LAB_00183700;
LAB_0018371c:
          iVar9 = 0x81;
LAB_0018371e:
          iVar20 = iVar9 << 1;
          goto LAB_00183732;
        }
      }
      else {
        if (iVar9 == 0x95) goto LAB_0018371c;
        if (0xab < iVar9) {
LAB_00183700:
          iVar9 = **(int **)(in_stack_00000020 + DAT_001839fc);
          iVar5 = CapcomMath::random(4);
          iVar20 = iVar9 + 1 + iVar5;
          goto LAB_00183732;
        }
      }
      goto LAB_001836aa;
    }
    if (iVar9 < 0x18) {
      if (6 < iVar9) goto LAB_001836aa;
      if (iVar9 == 3) {
        iVar9 = **(int **)(in_stack_00000020 + DAT_00183690);
        iVar5 = CapcomMath::random(**(int **)(in_stack_00000020 + DAT_00183694) + -1);
        iVar20 = *(int *)(iVar5 * 4 + iVar9);
      }
      else if (iVar9 < 4) {
        if (iVar9 == 1) {
          iVar20 = 0x8c - (uint)(iVar5 != 0);
        }
        else {
          if (iVar9 != 2) goto LAB_00183700;
          iVar20 = 0xdb - (uint)(iVar5 == 0);
        }
      }
      else if (iVar9 == 5) {
        iVar20 = 0xf7;
        if (iVar5 < 2) {
          iVar20 = 0xfa;
        }
      }
      else if (iVar9 < 6) {
        iVar20 = 0xf0;
        if (iVar5 < 2) {
          iVar20 = 0xf1;
        }
      }
      else {
        iVar9 = 0x96;
        iVar20 = DAT_00183a04;
        if (iVar5 < 2) goto LAB_0018371e;
      }
    }
    else if (iVar9 < 0x39) {
      iVar20 = in_stack_000000b4;
      if (0x18 < iVar9) {
LAB_001836aa:
        if (unaff_r5[0x15] == (GameStateRaid)0x0) {
          if (iVar5 < 2) {
            iVar20 = **(int **)(in_stack_00000020 + DAT_001839f4);
          }
          else {
            iVar20 = (*(int **)(in_stack_00000020 + DAT_001839f4))[1];
          }
        }
        else if (iVar5 < 2) {
          iVar20 = *(int *)(*(int *)(in_stack_00000020 + DAT_001839f0) + 0x10);
        }
        else {
          iVar20 = *(int *)(*(int *)(in_stack_00000020 + DAT_001839f0) + 0x14);
        }
      }
    }
    else {
      if (iVar9 != 0x39) goto LAB_001836aa;
      iVar20 = DAT_00183a10;
      if (iVar5 < 2) {
        iVar20 = DAT_001839f8;
      }
    }
LAB_00183732:
    pCVar10 = *(CharacterData **)(iVar20 * 4 + *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_00183a14));
  }
  else {
    pCVar10 = *(CharacterData **)
               ((DAT_0018368c + 1) * 4 + *(int *)(*(int *)(unaff_r5 + 0xc) + DAT_00183688));
  }
  pCVar10 = (CharacterData *)CharacterData::copy(pCVar10);
LAB_00183742:
  GameStateRaid::setEnemyStatus(unaff_r5,pCVar10,false);
  String::String((String *)&stack0x00000088,(char *)(DAT_00183a18 + 0x183756));
  pCVar11 = (Character *)operator_new(0x6c);
  Character::Character(pCVar11,pCVar10,3,0);
  pCVar23 = *(CFPathFinder **)(*(int *)(unaff_r5 + 0x78) + 0x5c);
  pCVar12 = (CharacterInstance *)operator_new(0xdc);
  CharacterInstance::CharacterInstance(pCVar12,pCVar11,pCVar23);
  Vector<CharacterInstance*>::addElement((Vector<CharacterInstance*> *)(unaff_r5 + 0xc4),pCVar12);
  String::~String((String *)&stack0x00000088);
  piVar18 = *(int **)(pCVar12 + 0x8c);
  iVar9 = __fixsfsi(*(undefined4 *)(*piVar18 + DAT_00183a1c));
  iVar5 = __fixsfsi(piVar18[0x10]);
  if (iVar9 < iVar5) {
    iVar5 = iVar9;
  }
  iVar5 = __floatsisf(iVar5);
  piVar18[0x10] = iVar5;
  iVar5 = *(int *)(pCVar12 + 0x8c);
  CharacterData::getRandomName((CharacterData *)&stack0x00000090,(bool)this_13[DAT_00183a20],0);
  String::operator=((String *)(iVar5 + 8),&stack0x00000090);
  String::~String((String *)&stack0x00000090);
  *(undefined2 *)(pCVar12 + 0x2c) = 0;
  do {
    iVar5 = Cafe::isInside(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(pCVar12 + 0x2c));
    if ((iVar5 != 0) &&
       (iVar5 = Cafe::getFurniture(*(Cafe **)(unaff_r5 + 0x78),(int)*(short *)(pCVar12 + 0x2c)),
       iVar5 == 0)) {
      FUN_001843e0();
    }
    uVar3 = CapcomMath::random(**(int **)(in_stack_00000020 + DAT_00183a24) *
                               **(int **)(in_stack_00000020 + DAT_00183a28));
    *(undefined2 *)(pCVar12 + 0x2c) = uVar3;
  } while( true );
}


