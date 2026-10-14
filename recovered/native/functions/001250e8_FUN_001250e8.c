/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001250e8 FUN_001250e8 */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00125312) */
/* WARNING: Removing unreachable block (ram,0x00125312) */

uint FUN_001250e8(void)

{
  short sVar1;
  uchar uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  CharacterDetails *this;
  String *this_00;
  Furniture *pFVar6;
  long lVar7;
  StatusNote *pSVar8;
  void *pvVar9;
  uint uVar10;
  undefined4 uVar11;
  int extraout_r1;
  FurnitureData *pFVar12;
  undefined4 uVar13;
  GameStateCafe *pGVar14;
  Cafe *this_01;
  ConfirmDialog *pCVar15;
  code *pcVar16;
  ZombieCafe *pZVar17;
  undefined4 uVar18;
  NoticeDialog *pNVar19;
  GameStateCafe *unaff_r6;
  int unaff_r7;
  undefined4 extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float fVar20;
  float extraout_s0_03;
  undefined4 extraout_s1;
  undefined8 uVar21;
  float extraout_s1_00;
  float extraout_s1_01;
  int in_stack_00000030;
  
  if (in_stack_00000030 != *(int *)(unaff_r6 + 0x168)) {
    StringBuffer::StringBuffer((StringBuffer *)&stack0x0000020c);
    Vector<String>::elementAt((int)&stack0x000000ac);
    StringBuffer::append(&stack0x0000020c,&stack0x000000ac);
    String::~String((String *)&stack0x000000ac);
    if (*(char *)(*(int *)(*(int *)(unaff_r6 + 0x84) + 0xd0) + 0x38) == '\0') {
      String::String((String *)&stack0x000000b4,(char *)(DAT_0012544c + 0x125138));
      StringBuffer::append(&stack0x0000020c,&stack0x000000b4);
      String::~String((String *)&stack0x000000b4);
    }
    String::valueOf((int)&stack0x000000bc);
    StringBuffer::append(&stack0x0000020c,&stack0x000000bc);
    String::~String((String *)&stack0x000000bc);
    if (*(char *)(*(int *)(*(int *)(unaff_r6 + 0x84) + 0xd0) + 0x38) != '\0') {
      Vector<String>::elementAt((int)&stack0x000000c4);
      StringBuffer::append(&stack0x0000020c,&stack0x000000c4);
      String::~String((String *)&stack0x000000c4);
    }
    piVar3 = *(int **)(unaff_r6 + 0xfc);
    pcVar16 = *(code **)(*piVar3 + 0x44);
    StringBuffer::toString();
    (*pcVar16)(piVar3,&stack0x000000cc);
    String::~String((String *)&stack0x000000cc);
    String::String((String *)&stack0x000000d4,
                   (String *)(*(int *)(*(int *)(unaff_r6 + 0x84) + 0xd0) + 100));
    GameStateCafe::setItemDescriptionText(unaff_r6,&stack0x000000d4);
    String::~String((String *)&stack0x000000d4);
    piVar3 = *(int **)(unaff_r6 + 0x100);
    pcVar16 = *(code **)(*piVar3 + 0x44);
    String::String((String *)&stack0x000000dc,(char *)(DAT_00125454 + 0x1251e0));
    iVar4 = *(int *)(*(int *)(unaff_r6 + 0x84) + 0xd0);
    __divsi3(*(undefined4 *)(unaff_r6 + 0x168),*(undefined4 *)(iVar4 + 0x34));
    uVar11 = __floatsisf();
    __mulsf3(uVar11,*(undefined4 *)(iVar4 + 0x6c));
    __fixsfsi();
    String::valueOf((int)&stack0x000000e4);
    String::operator+((String *)&stack0x000000ec,&stack0x000000dc,&stack0x000000e4);
    String::String((String *)&stack0x000000f4,(char *)(DAT_00125458 + 0x125224));
    String::operator+((String *)&stack0x000000fc,&stack0x000000ec,&stack0x000000f4);
    (*pcVar16)(piVar3,&stack0x000000fc);
    String::~String((String *)&stack0x000000fc);
    String::~String((String *)&stack0x000000f4);
    String::~String((String *)&stack0x000000ec);
    String::~String((String *)&stack0x000000e4);
    String::~String((String *)&stack0x000000dc);
    CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)&stack0x0000020c);
  }
  if ((((unaff_r6[DAT_0012545c] == (GameStateCafe)0x6) ||
       (unaff_r6[DAT_0012545c] == (GameStateCafe)0x1)) &&
      (*(int *)(*(int *)(unaff_r6 + 0x84) + 0xd0) != 0)) &&
     (*(int *)(*(int *)(unaff_r6 + 0xc) + DAT_00125460) <
      *(int *)(unaff_r6 + 0x168) + *(int *)(*(int *)(*(int *)(unaff_r6 + 0x84) + 0xd0) + 0x34))) {
    piVar3 = *(int **)(unaff_r6 + 0xf8);
    (**(code **)(*piVar3 + 0x24))(piVar3,DAT_00125464);
    piVar3 = *(int **)(unaff_r6 + 0xf8);
    pcVar16 = *(code **)(*piVar3 + 0x44);
    Vector<String>::elementAt((int)&stack0x00000104);
    (*pcVar16)(piVar3,&stack0x00000104);
    String::~String((String *)&stack0x00000104);
  }
  pZVar17 = *(ZombieCafe **)(unaff_r6 + 0xc);
  iVar4 = ZombieCafe::unhandledPressOrLongEvent(pZVar17);
  uVar21 = CONCAT44(extraout_s1,extraout_s0);
  if (iVar4 == 0) {
    uVar21 = FUN_00125b44();
  }
  iVar4 = DAT_0012545c;
  if (0xd < (byte)unaff_r6[DAT_0012545c]) {
    uVar21 = FUN_00125b44();
    iVar4 = extraout_r1;
  }
  if ((1 << (uint)(byte)unaff_r6[iVar4] & DAT_0012546c) == 0) {
    uVar21 = FUN_00125b44();
  }
  iVar4 = DAT_00125470;
  iVar5 = ZCImageButton::contains
                    (*(ZCImageButton **)(unaff_r6 + 0xe8),*(long *)(pZVar17 + DAT_00125470),
                     (float)uVar21,(float)((ulonglong)uVar21 >> 0x20));
  if (iVar5 == 0) {
    iVar5 = ZCImageButton::contains
                      (*(ZCImageButton **)(unaff_r6 + 0xec),
                       *(long *)(*(int *)(unaff_r6 + 0xc) + iVar4),extraout_s0_00,extraout_s1_00);
    if (iVar5 != 0) {
      ZombieCafe::playEffect(*(int *)(unaff_r6 + 0xc),extraout_s0_03);
      GameStateCafe::cancelAllEdits(unaff_r6);
      *(undefined1 *)(*(int *)(unaff_r6 + 0xc) + DAT_00125bd4) = 1;
      uVar10 = FUN_00125b34();
      return uVar10;
    }
    iVar4 = ZCImageButton::contains
                      (*(ZCImageButton **)(unaff_r6 + 0xf0),
                       *(long *)(*(int *)(unaff_r6 + 0xc) + iVar4),extraout_s0_03,extraout_s1_01);
    if (iVar4 != 0) {
      iVar4 = *(int *)(*(int *)(*(int *)(unaff_r6 + 0x40) + 0x38) + 0x34);
      if (*(char *)(*(int *)(*(int *)(unaff_r6 + 0x40) + 0x38) + 0x38) != '\0') {
        iVar4 = **(int **)(unaff_r7 + DAT_00125bd8) * iVar4;
      }
      uVar13 = **(undefined4 **)(unaff_r7 + DAT_00125bdc);
      StringBuffer::StringBuffer((StringBuffer *)&stack0x0000020c);
      Vector<String>::elementAt((int)&stack0x000001dc);
      StringBuffer::append(&stack0x0000020c,&stack0x000001dc);
      String::~String((String *)&stack0x000001dc);
      uVar11 = __floatsisf(iVar4);
      __mulsf3(uVar11,uVar13);
      __fixsfsi();
      String::valueOf((int)&stack0x000001e4);
      StringBuffer::append(&stack0x0000020c,&stack0x000001e4);
      String::~String((String *)&stack0x000001e4);
      String::String((String *)&stack0x000001ec,(char *)(DAT_00125be4 + 0x125acc));
      StringBuffer::append(&stack0x0000020c,&stack0x000001ec);
      String::~String((String *)&stack0x000001ec);
      pCVar15 = *(ConfirmDialog **)(unaff_r6 + 0x80);
      StringBuffer::toString();
      Vector<String>::elementAt((int)&stack0x000001fc);
      Vector<String>::elementAt((int)&stack0x00000204);
      ConfirmDialog::show(pCVar15,&stack0x000001f4,&stack0x000001fc,&stack0x00000204);
      String::~String((String *)&stack0x00000204);
      String::~String((String *)&stack0x000001fc);
      String::~String((String *)&stack0x000001f4);
      CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)&stack0x0000020c);
    }
    if (*(char *)(*(int *)(unaff_r6 + 0xc) + DAT_00125bd4) != '\0') {
      GameStateCafe::exitEditModes();
    }
    *(undefined1 *)(*(int *)(unaff_r6 + 0xc) + DAT_00125bd4) = 1;
    return (uint)(unaff_r6[DAT_00125bbc] == (GameStateCafe)0x9);
  }
  switch(unaff_r6[DAT_0012545c]) {
  case (GameStateCafe)0x7:
    if (*(char *)(*(int *)(*(int *)(unaff_r6 + 0x40) + 0x38) + 0x38) == '\0') {
      FUN_00125dd8();
    }
    iVar4 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)(unaff_r6 + 0xc) + DAT_001257ec),'\x16');
    if (iVar4 != 0) {
      FUN_00125dd8();
    }
    pNVar19 = *(NoticeDialog **)(unaff_r6 + 0xd0);
    Vector<String>::elementAt((int)&stack0x0000017c);
    Vector<String>::elementAt((int)&stack0x00000184);
    NoticeDialog::show(pNVar19,&stack0x0000017c,&stack0x00000184);
    String::~String((String *)&stack0x00000184);
    String::~String((String *)&stack0x0000017c);
    *(undefined1 *)(*(int *)(unaff_r6 + 0x84) + 0x65) = 0;
    uVar10 = FUN_00125b34();
    return uVar10;
  default:
    *(int *)(*(int *)(unaff_r6 + 0xc) + DAT_00125bc8) =
         *(int *)(*(int *)(unaff_r6 + 0xc) + DAT_00125bc8) - *(int *)(unaff_r6 + 0x168);
    ObjectiveSystem::spendMoney
              (*(ObjectiveSystem **)(*(int *)(unaff_r6 + 0xc) + DAT_00125bcc),
               *(int *)(unaff_r6 + 0x168));
    Quest::runQuest(*(int *)(*(int *)(unaff_r6 + 0xc) + 0x40),0x17,*(int **)(unaff_r6 + 0x168));
    uVar13 = *(undefined4 *)(unaff_r6 + 0x168);
    uVar18 = *(undefined4 *)(*(int *)(*(int *)(unaff_r6 + 0x84) + 0xd0) + 0x34);
    uVar11 = *(undefined4 *)(*(int *)(*(int *)(unaff_r6 + 0x84) + 0xd0) + 0x6c);
    iVar4 = ZombieCafe::checkCafeLevelMax(*(ZombieCafe **)(unaff_r6 + 0xc));
    fVar20 = extraout_s0_01;
    if (iVar4 == 0) {
      __divsi3(uVar13,uVar18);
      uVar13 = __floatsisf();
      __mulsf3(uVar13,uVar11);
      iVar4 = __fixsfsi();
      fVar20 = extraout_s0_02;
      if (0 < iVar4) {
        this_01 = *(Cafe **)(unaff_r6 + 0x14);
        String::valueOf((int)&stack0x000001d4);
        pSVar8 = (StatusNote *)operator_new(0x30);
        StatusNote::StatusNote(pSVar8,*(undefined4 *)(unaff_r6 + 0x18),1,&stack0x000001d4);
        Cafe::addStatusNote(this_01,pSVar8);
        String::~String((String *)&stack0x000001d4);
        fVar20 = (float)ZombieCafe::addXp(*(ZombieCafe **)(unaff_r6 + 0xc),iVar4);
      }
    }
    ZombieCafe::playEffect(*(int *)(unaff_r6 + 0xc),fVar20);
    while (pvVar9 = (void *)CapcomLinkedList<UndoData*>::remove
                                      ((CapcomLinkedList<UndoData*> *)(unaff_r6 + 0x144),0),
          pvVar9 != (void *)0x0) {
      operator_delete(pvVar9);
    }
    break;
  case (GameStateCafe)0x9:
    pZVar17 = *(ZombieCafe **)(unaff_r6 + 0xc);
    iVar4 = *(int *)(*(int *)(unaff_r6 + 0x84) + 0xd0);
    if (*(char *)(iVar4 + 0x38) == '\0') {
      if (*(int *)(iVar4 + 0x34) <= *(int *)(pZVar17 + DAT_00125808)) {
        *(int *)(unaff_r6 + 0x60) = iVar4;
        GameStateCafe::completeStorePurchase(unaff_r6);
        break;
      }
      ZombieCafe::playEffect((int)pZVar17,extraout_s0_00);
      pNVar19 = *(NoticeDialog **)(unaff_r6 + 0xd0);
      Vector<String>::elementAt((int)&stack0x0000016c);
      Vector<String>::elementAt((int)&stack0x00000174);
      NoticeDialog::show(pNVar19,&stack0x0000016c,&stack0x00000174);
      String::~String((String *)&stack0x00000174);
      this_00 = (String *)&stack0x0000016c;
    }
    else {
      iVar5 = ZombieCafe::getToxin(pZVar17);
      if (iVar5 < *(int *)(iVar4 + 0x34)) {
        iVar4 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(unaff_r6 + 0xc) + DAT_001257ec),'\x16');
        if (iVar4 == 0) {
          pNVar19 = *(NoticeDialog **)(unaff_r6 + 0xd0);
          Vector<String>::elementAt((int)&stack0x00000144);
          Vector<String>::elementAt((int)&stack0x0000014c);
          NoticeDialog::show(pNVar19,&stack0x00000144,&stack0x0000014c);
          String::~String((String *)&stack0x0000014c);
          this_00 = (String *)&stack0x00000144;
        }
        else {
          pCVar15 = *(ConfirmDialog **)(unaff_r6 + 0x80);
          Vector<String>::elementAt((int)&stack0x00000154);
          Vector<String>::elementAt((int)&stack0x0000015c);
          Vector<String>::elementAt((int)&stack0x00000164);
          ConfirmDialog::show(pCVar15,&stack0x00000154,&stack0x0000015c,&stack0x00000164);
          String::~String((String *)&stack0x00000164);
          String::~String((String *)&stack0x0000015c);
          this_00 = (String *)&stack0x00000154;
        }
      }
      else {
        *(int *)(unaff_r6 + 0x60) = iVar4;
        pCVar15 = *(ConfirmDialog **)(unaff_r6 + 0x80);
        Vector<String>::elementAt((int)&stack0x0000010c);
        String::valueOf((int)&stack0x00000114);
        String::operator+((String *)&stack0x0000011c,&stack0x0000010c,&stack0x00000114);
        Vector<String>::elementAt((int)&stack0x00000124);
        String::operator+((String *)&stack0x0000012c,&stack0x0000011c,&stack0x00000124);
        Vector<String>::elementAt((int)&stack0x00000134);
        Vector<String>::elementAt((int)&stack0x0000013c);
        ConfirmDialog::show(pCVar15,&stack0x0000012c,&stack0x00000134,&stack0x0000013c);
        String::~String((String *)&stack0x0000013c);
        String::~String((String *)&stack0x00000134);
        String::~String((String *)&stack0x0000012c);
        String::~String((String *)&stack0x00000124);
        String::~String((String *)&stack0x0000011c);
        String::~String((String *)&stack0x00000114);
        this_00 = (String *)&stack0x0000010c;
      }
    }
    String::~String(this_00);
    break;
  case (GameStateCafe)0xa:
    if (((*(char *)(*(int *)(*(int *)(unaff_r6 + 0x40) + 0x38) + 0x44) == '\x06') &&
        (pFVar6 = (Furniture *)Cafe::pickWall(*(long *)(unaff_r6 + 0x14)),
        pFVar6 != (Furniture *)0x0)) &&
       ((*(int *)(pFVar6 + 0x44) == 0 && (pFVar6[0x3b] == (Furniture)0x0)))) {
      unaff_r6[DAT_00125bbc] = (GameStateCafe)0x2;
      Cafe::addWallDecor(*(CafeWall **)(unaff_r6 + 0x14),pFVar6);
      iVar4 = *(int *)(unaff_r6 + 0x14);
      Vector<int>::lastIndexOf
                ((Vector<int> *)(iVar4 + 0xfc),
                 *(int *)(*(int *)(*(int *)(unaff_r6 + 0x40) + 0x38) + 0x24));
      Vector<int>::removeElementAt(iVar4 + 0xfc);
      Storage::updateItem(*(Storage **)(unaff_r6 + 0xbc),
                          *(int *)(*(int *)(*(int *)(unaff_r6 + 0x40) + 0x38) + 0x24));
      *(undefined4 *)(unaff_r6 + 0x40) = 0;
    }
    else {
      pFVar12 = *(FurnitureData **)(*(int *)(unaff_r6 + 0x40) + 0x38);
      if ((pFVar12[0x44] == (FurnitureData)0x6) ||
         (iVar4 = GameStateCafe::isValidFurnitureTile
                            (unaff_r6,(int)*(short *)(*(int *)(unaff_r6 + 0x40) + 0x2c),pFVar12),
         iVar4 == 0)) {
        pNVar19 = *(NoticeDialog **)(unaff_r6 + 0xd0);
        Vector<String>::elementAt((int)&stack0x000001c4);
        Vector<String>::elementAt((int)&stack0x000001cc);
        NoticeDialog::show(pNVar19,&stack0x000001c4,&stack0x000001cc);
        String::~String((String *)&stack0x000001cc);
        String::~String((String *)&stack0x000001c4);
        uVar10 = FUN_00125b34();
        return uVar10;
      }
      sVar1 = *(short *)(*(int *)(unaff_r6 + 0x40) + 0x2c);
      lVar7 = Cafe::diamondToStaggeredCoords
                        (*(short *)(*(int *)(unaff_r6 + 0x14) + 0x9c) + -1,
                         *(short *)(*(int *)(unaff_r6 + 0x14) + 0x9e) + 1 +
                         **(int **)(unaff_r7 + DAT_00125bc0));
      iVar4 = Cafe::staggeredCoordsToIndex(lVar7);
      if (sVar1 == iVar4) {
        TutorialSystem::triggerEvent
                  (*(TutorialSystem **)(*(int *)(unaff_r6 + 0xc) + DAT_00125bc4),'>',true);
      }
      unaff_r6[DAT_00125bbc] = (GameStateCafe)0x2;
      Cafe::addFurniture(*(Cafe **)(unaff_r6 + 0x14),*(Furniture **)(unaff_r6 + 0x40));
      iVar4 = *(int *)(unaff_r6 + 0x14);
      Vector<int>::lastIndexOf
                ((Vector<int> *)(iVar4 + 0xfc),
                 *(int *)(*(int *)(*(int *)(unaff_r6 + 0x40) + 0x38) + 0x24));
      Vector<int>::removeElementAt(iVar4 + 0xfc);
      Storage::updateItem(*(Storage **)(unaff_r6 + 0xbc),
                          *(int *)(*(int *)(*(int *)(unaff_r6 + 0x40) + 0x38) + 0x24));
      GameStateCafe::checkForTombstones(unaff_r6);
      *(undefined4 *)(unaff_r6 + 0x40) = 0;
      GameStateCafe::resetPaths(unaff_r6);
    }
    (**(code **)(**(int **)(unaff_r6 + 0xbc) + 0x20))(*(int **)(unaff_r6 + 0xbc),1);
    break;
  case (GameStateCafe)0xd:
    pGVar14 = unaff_r6 + 0xb0;
    this = *(CharacterDetails **)pGVar14;
    iVar4 = *(int *)(*(int *)(unaff_r6 + 0xbc) + 0xe4);
    if (this == (CharacterDetails *)0x0) {
      this = (CharacterDetails *)FUN_00125b34();
    }
    uVar2 = CharacterDetails::getSelectedEquipNo(this);
    CharacterDetails::setSelectCharacterEquip
              (*(CharacterDetails **)pGVar14,*(int *)(iVar4 + 0x24),uVar2);
    CharacterDetails::setEquipButtonName(*(CharacterDetails **)pGVar14);
    CharacterDetails::redrawStatus(*(CharacterDetails **)pGVar14);
    iVar5 = *(int *)(unaff_r6 + 0x14);
    Vector<int>::lastIndexOf((Vector<int> *)(iVar5 + 0xfc),*(int *)(iVar4 + 0x24));
    Vector<int>::removeElementAt(iVar5 + 0xfc);
    GameStateCafe::cancelAllEdits(unaff_r6);
    Storage::close(*(Storage **)(unaff_r6 + 0xbc));
  }
  *(undefined1 *)(*(int *)(unaff_r6 + 0xc) + DAT_00125bd4) = 1;
  uVar10 = FUN_00125b34();
  return uVar10;
}


