/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b2b1c GameStateEventRaid2Menu::getItemMain */

/* GameStateEventRaid2Menu::getItemMain() */

void __thiscall GameStateEventRaid2Menu::getItemMain(GameStateEventRaid2Menu *this)

{
  short sVar1;
  int iVar2;
  int iVar3;
  ZombieCafe *pZVar4;
  FoodStack *this_00;
  Character *pCVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  String *this_01;
  int extraout_r1;
  int extraout_r1_00;
  int *piVar8;
  uchar uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  NoticeDialog *pNVar13;
  int local_144;
  String aSStack_134 [8];
  String aSStack_12c [8];
  String aSStack_124 [8];
  String aSStack_11c [8];
  String aSStack_114 [8];
  String aSStack_10c [8];
  String aSStack_104 [8];
  String aSStack_fc [8];
  String aSStack_f4 [8];
  String aSStack_ec [8];
  String aSStack_e4 [8];
  String aSStack_dc [8];
  String aSStack_d4 [8];
  String aSStack_cc [8];
  String aSStack_c4 [8];
  String aSStack_bc [8];
  String aSStack_b4 [8];
  String aSStack_ac [8];
  String aSStack_a4 [8];
  String aSStack_9c [8];
  String aSStack_94 [8];
  String aSStack_8c [8];
  String aSStack_84 [8];
  String aSStack_7c [8];
  CharacterData aCStack_74 [8];
  String aSStack_6c [8];
  String aSStack_64 [8];
  String aSStack_5c [8];
  String aSStack_54 [8];
  String aSStack_4c [8];
  String aSStack_44 [8];
  String aSStack_3c [8];
  StringBuffer aSStack_34 [32];
  
  iVar10 = DAT_001b2d8c + 0x1b2b28;
  iVar2 = isGetEventRaid2Item(this);
  if (iVar2 < 1) goto LAB_001b3154;
  iVar11 = *(int *)(*(int *)(this + 0xc) + 0x1d0);
  iVar3 = ZombieCafe::checkEventRaid2_half();
  iVar2 = DAT_001b2d94;
  if (iVar3 != 0) {
    iVar2 = DAT_001b2d90;
  }
  iVar3 = *(int *)(*(int *)(this + 0x100) * 4 + *(int *)(iVar10 + iVar2)) + iVar11 * 0x14;
  iVar2 = *(int *)(iVar3 + 0xc);
  sVar1 = *(short *)(iVar3 + 4);
  iVar12 = *(int *)(iVar3 + 8);
  iVar3 = *(int *)(iVar3 + 0x10);
  if (iVar11 + 1 < 1) goto LAB_001b3154;
  if (sVar1 == 0) {
    ZombieCafe::addCash(*(ZombieCafe **)(this + 0xc),iVar12);
    *(int *)(*(int *)(this + 0xc) + 0x1d0) = *(int *)(*(int *)(this + 0xc) + 0x1d0) + 1;
    ZombieCafe::save();
    StringBuffer::StringBuffer(aSStack_34);
    String::valueOf((int)aSStack_134);
    StringBuffer::append(aSStack_34,aSStack_134);
    String::~String(aSStack_134);
    String::String(aSStack_12c,(char *)(DAT_001b2d98 + 0x1b2bb2));
    StringBuffer::append(aSStack_34,aSStack_12c);
    String::~String(aSStack_12c);
    String::String(aSStack_124,(char *)(DAT_001b2d9c + 0x1b2bca));
    StringBuffer::append(aSStack_34,aSStack_124);
    String::~String(aSStack_124);
    String::valueOf((int)aSStack_11c);
    StringBuffer::append(aSStack_34,aSStack_11c);
    String::~String(aSStack_11c);
    String::String(aSStack_114,(char *)(DAT_001b2da0 + 0x1b2bf8));
    StringBuffer::append(aSStack_34,aSStack_114);
    String::~String(aSStack_114);
    pNVar13 = *(NoticeDialog **)(this + 0x5c);
    StringBuffer::toString();
    String::String(aSStack_104,
                   (String *)
                   (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                   **(int **)(iVar10 + DAT_001b2da4) * 8));
    NoticeDialog::show(pNVar13,aSStack_10c,aSStack_104,0,this);
    String::~String(aSStack_104);
    String::~String(aSStack_10c);
  }
  else {
    if (sVar1 != 7) {
      if ((ushort)(sVar1 - 5U) < 2) {
        iVar3 = iVar12;
        local_144 = iVar2;
        if (iVar12 == 0) {
          iVar3 = iVar2;
          if (iVar2 == 0) {
            iVar3 = iVar12;
          }
        }
        else {
          local_144 = iVar12;
          if (iVar2 != 0) {
            local_144 = iVar2;
          }
        }
        uVar9 = (uchar)iVar3;
        iVar2 = arc4random();
        if (-1 < (iVar2 + (iVar2 >> 0x1f) ^ iVar2 >> 0x1f) << 0x1f) {
          uVar9 = (uchar)local_144;
        }
        iVar2 = arc4random();
        __aeabi_idivmod(iVar2 + (iVar2 >> 0x1f) ^ iVar2 >> 0x1f,100);
        piVar8 = (int *)((int)&DAT_001b2d8c + DAT_001b2db4);
        for (local_144 = 0; local_144 < **(int **)(iVar10 + DAT_001b2db0); local_144 = local_144 + 1
            ) {
          iVar2 = *piVar8;
          piVar8 = piVar8 + 1;
          if (extraout_r1 < iVar2) goto LAB_001b2dba;
        }
        local_144 = 0;
LAB_001b2dba:
        iVar2 = ZombieCafe::isAddFridgeFood(*(ZombieCafe **)(this + 0xc));
        piVar8 = *(int **)(iVar10 + DAT_001b3164);
        if (iVar2 != 0) {
          iVar10 = *(int *)(this + 0xc);
          this_00 = (FoodStack *)operator_new(0x24);
          FoodStack::FoodStack(this_00,uVar9,(uchar)local_144);
          iVar2 = *(int *)((Vector<FoodStack*> *)(iVar10 + DAT_001b3168) + 4) + 2;
          if (*(int *)(iVar10 + DAT_001b3168) < iVar2) {
            iVar3 = *(int *)(iVar10 + DAT_001b3168) * 2;
            if (iVar3 < iVar2) {
              iVar3 = iVar2;
            }
            Vector<FoodStack*>::resize((Vector<FoodStack*> *)(iVar10 + DAT_001b3168),iVar3,-1);
          }
          iVar10 = iVar10 + DAT_001b3168;
          iVar2 = *(int *)(iVar10 + 4) + 1;
          *(int *)(iVar10 + 4) = iVar2;
          *(FoodStack **)(iVar2 * 4 + *(int *)(iVar10 + 8)) = this_00;
          uVar6 = arc4random();
          __aeabi_uidivmod(uVar6,0x14);
          *(int *)(this_00 + 4) = extraout_r1_00 + 10;
          *(int *)(*(int *)(this + 0xc) + 0x1d0) = *(int *)(*(int *)(this + 0xc) + 0x1d0) + 1;
          ZombieCafe::save();
          FoodStack::getRecipe(this_00);
          Recipe::getFullName((char)&stack0xffffffec + 0xa8);
          StringBuffer::StringBuffer(aSStack_34);
          String::valueOf((int)aSStack_cc);
          StringBuffer::append(aSStack_34,aSStack_cc);
          String::~String(aSStack_cc);
          String::String(aSStack_c4,(char *)(DAT_001b316c + 0x1b2e6a));
          StringBuffer::append(aSStack_34,aSStack_c4);
          String::~String(aSStack_c4);
          String::String(aSStack_bc,aSStack_6c);
          StringBuffer::append(aSStack_34,aSStack_bc);
          String::~String(aSStack_bc);
          String::String(aSStack_b4,(char *)(DAT_001b3170 + 0x1b2e98));
          StringBuffer::append(aSStack_34,aSStack_b4);
          String::~String(aSStack_b4);
          pNVar13 = *(NoticeDialog **)(this + 0x5c);
          StringBuffer::toString();
          String::String(aSStack_a4,
                         (String *)
                         (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) + *piVar8 * 8));
          NoticeDialog::show(pNVar13,aSStack_ac,aSStack_a4,0,this);
          String::~String(aSStack_a4);
          String::~String(aSStack_ac);
          CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
          goto LAB_001b314e;
        }
        pNVar13 = *(NoticeDialog **)(this + 0x5c);
        String::String(aSStack_9c,(char *)(DAT_001b3174 + 0x1b2ef4));
        String::String(aSStack_94,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) + *piVar8 * 8));
        NoticeDialog::show(pNVar13,aSStack_9c,aSStack_94,0,this);
        String::~String(aSStack_94);
        this_01 = aSStack_9c;
      }
      else {
        if (sVar1 != 3) goto LAB_001b3154;
        iVar11 = playerHaveZombieCountCheck(this);
        piVar8 = *(int **)(iVar10 + DAT_001b3164);
        if (iVar11 == 0) {
          pNVar13 = *(NoticeDialog **)(this + 0x5c);
          String::String(aSStack_8c,(char *)(DAT_001b3178 + 0x1b2f46));
          String::String(aSStack_84,
                         (String *)
                         (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) + *piVar8 * 8));
          NoticeDialog::show(pNVar13,aSStack_8c,aSStack_84,0,this);
          String::~String(aSStack_84);
          String::~String(aSStack_8c);
          return;
        }
        String::String(aSStack_7c,(char *)(DAT_001b317c + 0x1b2f84));
        pCVar5 = (Character *)operator_new(0x6c);
        Character::Character
                  (pCVar5,*(undefined4 *)
                           (iVar12 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_001b3180)),2,1,
                   aSStack_7c);
        String::~String(aSStack_7c);
        CharacterData::getRandomName(aCStack_74,*(bool *)(*(int *)pCVar5 + DAT_001b3184),0);
        String::operator=((String *)(pCVar5 + 8),aCStack_74);
        String::~String((String *)aCStack_74);
        Platform::getAppTime();
        uVar6 = __fixdfsi();
        pCVar5[4] = (Character)0x1;
        *(int *)(pCVar5 + 0x28) = iVar2;
        *(undefined4 *)(pCVar5 + 0x10) = uVar6;
        pCVar5[5] = (Character)0x2;
        if ((((iVar3 == 1) || (iVar3 == 2)) || (iVar3 == 3)) || (iVar3 == 4)) {
          *(int *)(pCVar5 + 0x30) = iVar3;
        }
        else {
          *(undefined4 *)(pCVar5 + 0x30) = 0;
        }
        uVar6 = Character::getMaxEnergy();
        uVar7 = Character::getMaxEnergy();
        iVar2 = __aeabi_fcmplt(uVar6,0);
        if (iVar2 == 0) {
          iVar2 = __aeabi_fcmpgt(uVar6,uVar7);
          if (iVar2 != 0) {
            uVar6 = uVar7;
          }
        }
        else {
          uVar6 = 0;
        }
        *(undefined4 *)(pCVar5 + 0x40) = uVar6;
        pZVar4 = *(ZombieCafe **)(this + 0xc);
        iVar2 = *(int *)((Vector<Character*> *)(pZVar4 + DAT_001b3188) + 4);
        if (iVar2 + 1 <
            (int)*(short *)((*(int *)(pZVar4 + 0x680) + -1) * 2 + **(int **)(iVar10 + DAT_001b318c))
           ) {
          iVar2 = iVar2 + 2;
          if (*(int *)(pZVar4 + DAT_001b3188) < iVar2) {
            iVar10 = *(int *)(pZVar4 + DAT_001b3188) * 2;
            if (iVar10 < iVar2) {
              iVar10 = iVar2;
            }
            Vector<Character*>::resize((Vector<Character*> *)(pZVar4 + DAT_001b3188),iVar10,-1);
          }
          iVar10 = *(int *)(pZVar4 + DAT_001b3188 + 4);
          iVar2 = DAT_001b3188 + 8;
          *(int *)(pZVar4 + DAT_001b3188 + 4) = iVar10 + 1;
          *(Character **)((iVar10 + 1) * 4 + *(int *)(pZVar4 + iVar2)) = pCVar5;
        }
        else {
          ZombieCafe::putZombieInMeetlocker(pZVar4,pCVar5,(PullMenuElement *)0x0);
        }
        iVar2 = DAT_001b3190;
        *(int *)(*(int *)(this + 0xc) + 0x1d0) = *(int *)(*(int *)(this + 0xc) + 0x1d0) + 1;
        ZombieCafe::save();
        String::String(aSStack_6c,(String *)(*(int *)pCVar5 + iVar2));
        StringBuffer::StringBuffer(aSStack_34);
        String::valueOf((int)aSStack_64);
        StringBuffer::append(aSStack_34,aSStack_64);
        String::~String(aSStack_64);
        String::String(aSStack_5c,(char *)(DAT_001b3194 + 0x1b30ce));
        StringBuffer::append(aSStack_34,aSStack_5c);
        String::~String(aSStack_5c);
        String::String(aSStack_54,aSStack_6c);
        StringBuffer::append(aSStack_34,aSStack_54);
        String::~String(aSStack_54);
        String::String(aSStack_4c,(char *)(DAT_001b3198 + 0x1b30fc));
        StringBuffer::append(aSStack_34,aSStack_4c);
        String::~String(aSStack_4c);
        pNVar13 = *(NoticeDialog **)(this + 0x5c);
        StringBuffer::toString();
        String::String(aSStack_3c,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) + *piVar8 * 8));
        NoticeDialog::show(pNVar13,aSStack_44,aSStack_3c,0,this);
        String::~String(aSStack_3c);
        String::~String(aSStack_44);
        CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
LAB_001b314e:
        this_01 = aSStack_6c;
      }
      String::~String(this_01);
      goto LAB_001b3154;
    }
    pZVar4 = *(ZombieCafe **)(this + 0xc);
    if (0x1d < iVar12 - 1U) {
      *(int *)(pZVar4 + 0x1d0) = *(int *)(pZVar4 + 0x1d0) + 1;
      goto LAB_001b3154;
    }
    ZombieCafe::addToxin(pZVar4,iVar12,false);
    *(int *)(*(int *)(this + 0xc) + 0x1d0) = *(int *)(*(int *)(this + 0xc) + 0x1d0) + 1;
    ZombieCafe::save();
    StringBuffer::StringBuffer(aSStack_34);
    String::valueOf((int)aSStack_fc);
    StringBuffer::append(aSStack_34,aSStack_fc);
    String::~String(aSStack_fc);
    String::String(aSStack_f4,(char *)(DAT_001b2da8 + 0x1b2c94));
    StringBuffer::append(aSStack_34,aSStack_f4);
    String::~String(aSStack_f4);
    String::valueOf((int)aSStack_ec);
    StringBuffer::append(aSStack_34,aSStack_ec);
    String::~String(aSStack_ec);
    String::String(aSStack_e4,(char *)(DAT_001b2dac + 0x1b2cc2));
    StringBuffer::append(aSStack_34,aSStack_e4);
    String::~String(aSStack_e4);
    pNVar13 = *(NoticeDialog **)(this + 0x5c);
    StringBuffer::toString();
    String::String(aSStack_d4,
                   (String *)
                   (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                   **(int **)(iVar10 + DAT_001b2da4) * 8));
    NoticeDialog::show(pNVar13,aSStack_dc,aSStack_d4,0,this);
    String::~String(aSStack_d4);
    String::~String(aSStack_dc);
  }
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
LAB_001b3154:
  Layout_GetItemButton();
  return;
}


