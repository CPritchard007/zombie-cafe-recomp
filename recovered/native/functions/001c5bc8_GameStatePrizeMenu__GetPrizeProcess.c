/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c5bc8 GameStatePrizeMenu::GetPrizeProcess */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x001c5bfe) */
/* WARNING: Removing unreachable block (ram,0x001c5bfe) */
/* GameStatePrizeMenu::GetPrizeProcess(PrizeItemStatus) */

undefined4
GameStatePrizeMenu::GetPrizeProcess
          (GameStatePrizeMenu *param_1,short param_2,undefined4 param_3,long param_4,
          undefined2 param_5,undefined4 param_6,int param_7,int param_8,int param_9)

{
  Character *pCVar1;
  undefined4 uVar2;
  FoodStack *this;
  String *this_00;
  int *piVar3;
  int extraout_r1;
  int iVar4;
  ZombieCafe *this_01;
  void *pvVar5;
  int iVar6;
  undefined4 uVar7;
  NoticeDialog *pNVar8;
  int iVar9;
  int iVar10;
  int local_11c;
  int local_118;
  String aSStack_104 [8];
  String aSStack_fc [8];
  String aSStack_f4 [8];
  String aSStack_ec [8];
  String aSStack_e4 [8];
  String aSStack_dc [8];
  String aSStack_d4 [8];
  String aSStack_cc [8];
  CharacterData aCStack_c4 [8];
  String aSStack_bc [8];
  String aSStack_b4 [8];
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
  String aSStack_4c [8];
  StringBuffer aSStack_44 [32];
  
  local_118 = param_9;
  StringBuffer::StringBuffer(aSStack_44);
  String::String(aSStack_104);
  switch(param_5) {
  case 1:
  case 4:
    iVar9 = ZombieCafe::CheckCanFurnitureGiftReceived
                      (*(ZombieCafe **)(param_1 + 0xc),*(Cafe **)(param_1 + 0x14),param_7,1);
    if (iVar9 == 1) {
      iVar9 = ZombieCafe::ExecuteFurnitureReceived
                        (*(ZombieCafe **)(param_1 + 0xc),*(Cafe **)(param_1 + 0x14),param_7,param_9)
      ;
      if (iVar9 != 0) {
        ZombieCafe::addEventRaid2_prizeGot(*(ZombieCafe **)(param_1 + 0xc),(int)param_2);
        ZombieCafe::subEventRaid2_totalPoint(*(ZombieCafe **)(param_1 + 0xc),param_4);
        String::String(aSStack_b4,(char *)(DAT_001c5f68 + 0x1c5ea0));
        String::operator=(aSStack_104,aSStack_b4);
        String::~String(aSStack_b4);
        local_11c = param_7;
        param_9 = 0;
        iVar9 = 0x10;
        goto LAB_001c612e;
      }
      String::String(aSStack_ac,(char *)(DAT_001c5f6c + 0x1c5eba));
      StringBuffer::append(aSStack_44,aSStack_ac);
      this_00 = aSStack_ac;
    }
    else if (iVar9 == 2) {
      String::String(aSStack_a4,(char *)(DAT_001c5f70 + 0x1c5ed4));
      StringBuffer::append(aSStack_44,aSStack_a4);
      this_00 = aSStack_a4;
    }
    else {
      String::String(aSStack_9c,(char *)(DAT_001c5f74 + 0x1c5eea));
      StringBuffer::append(aSStack_44,aSStack_9c);
      this_00 = aSStack_9c;
    }
    break;
  case 2:
    iVar9 = GetCiefIDfromCharaID(param_1,param_7);
    if (iVar9 == -1) {
      String::String(aSStack_e4,(char *)(DAT_001c5f40 + 0x1c5ce0));
      StringBuffer::append(aSStack_44,aSStack_e4);
      this_00 = aSStack_e4;
    }
    else {
      if (*(char *)(*(int *)(*(int *)(param_1 + 0xc) + 0x988) + iVar9) == '\0') {
        *(undefined1 *)(*(int *)(param_1 + 0xc) + DAT_001c5f30) = 1;
        if ((-1 < iVar9) && (iVar9 <= *(int *)(*(int *)(param_1 + 0xc) + 0x984))) {
          *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xc) + 0x988) + iVar9) = 1;
        }
        if ((-1 < iVar9) && (iVar9 <= *(int *)(*(int *)(param_1 + 0xc) + DAT_001c5f34 + 4))) {
          *(undefined1 *)(*(int *)(*(int *)(param_1 + 0xc) + DAT_001c5f34 + 8) + iVar9) = 1;
        }
        ZombieCafe::addEventRaid2_prizeGot(*(ZombieCafe **)(param_1 + 0xc),(int)param_2);
        ZombieCafe::subEventRaid2_totalPoint(*(ZombieCafe **)(param_1 + 0xc),param_4);
        String::String(aSStack_f4,(char *)(DAT_001c5f38 + 0x1c5cb0));
        String::operator=(aSStack_104,aSStack_f4);
        String::~String(aSStack_f4);
        param_9 = 0;
        local_11c = param_7;
        local_118 = 0;
        iVar9 = 0x19;
        goto LAB_001c612e;
      }
      String::String(aSStack_ec,(char *)(DAT_001c5f3c + 0x1c5cca));
      StringBuffer::append(aSStack_44,aSStack_ec);
      this_00 = aSStack_ec;
    }
    break;
  case 3:
    if ((param_7 == -1) ||
       ((iVar9 = *(int *)(param_7 * 4 + *(int *)(*(int *)(param_1 + 0xc) + DAT_001c5f44)),
        *(int *)(iVar9 + 0x560) != 0 && (*(int *)(iVar9 + DAT_001c5f48) != 0)))) {
      iVar9 = PlayerHaveZombieCountCheck(param_1);
      if (iVar9 != 0) {
        String::String(aSStack_cc,(char *)(DAT_001c5f54 + 0x1c5d4a));
        pCVar1 = (Character *)operator_new(0x6c);
        Character::Character
                  (pCVar1,*(undefined4 *)
                           (param_7 * 4 + *(int *)(*(int *)(param_1 + 0xc) + DAT_001c5f44)),2,1,
                   aSStack_cc);
        String::~String(aSStack_cc);
        if ((param_8 != 0) && (param_8 < 100)) {
          *(int *)(pCVar1 + 0x28) = param_8;
        }
        uVar7 = Character::getMaxEnergy();
        uVar2 = Character::getMaxEnergy();
        iVar9 = __aeabi_fcmplt(uVar7,0);
        if (iVar9 == 0) {
          iVar9 = __aeabi_fcmpgt(uVar7,uVar2);
          if (iVar9 != 0) {
            uVar7 = uVar2;
          }
        }
        else {
          uVar7 = 0;
        }
        iVar9 = DAT_001c5f58;
        *(undefined4 *)(pCVar1 + 0x40) = uVar7;
        CharacterData::getRandomName(aCStack_c4,*(bool *)(*(int *)pCVar1 + iVar9),0);
        String::operator=((String *)(pCVar1 + 8),aCStack_c4);
        String::~String((String *)aCStack_c4);
        Platform::getAppTime();
        uVar7 = __fixdfsi();
        pCVar1[4] = (Character)0x1;
        *(undefined4 *)(pCVar1 + 0x10) = uVar7;
        pCVar1[5] = (Character)0x2;
        this_01 = *(ZombieCafe **)(param_1 + 0xc);
        iVar9 = *(int *)((Vector<Character*> *)(this_01 + DAT_001c5f5c) + 4);
        if (iVar9 + 1 <
            (int)*(short *)((*(int *)(this_01 + 0x680) + -1) * 2 +
                           **(int **)(DAT_001c5f60 + 0x1c5df6))) {
          iVar9 = iVar9 + 2;
          if (*(int *)(this_01 + DAT_001c5f5c) < iVar9) {
            iVar6 = *(int *)(this_01 + DAT_001c5f5c) * 2;
            if (iVar6 < iVar9) {
              iVar6 = iVar9;
            }
            Vector<Character*>::resize((Vector<Character*> *)(this_01 + DAT_001c5f5c),iVar6,-1);
          }
          iVar6 = *(int *)(this_01 + DAT_001c5f5c + 4);
          iVar9 = DAT_001c5f5c + 8;
          *(int *)(this_01 + DAT_001c5f5c + 4) = iVar6 + 1;
          *(Character **)((iVar6 + 1) * 4 + *(int *)(this_01 + iVar9)) = pCVar1;
        }
        else {
          ZombieCafe::putZombieInMeetlocker(this_01,pCVar1,(PullMenuElement *)0x0);
        }
        ZombieCafe::addEventRaid2_prizeGot(*(ZombieCafe **)(param_1 + 0xc),(int)param_2);
        ZombieCafe::subEventRaid2_totalPoint(*(ZombieCafe **)(param_1 + 0xc),param_4);
        String::String(aSStack_bc,(char *)(DAT_001c5f64 + 0x1c5e52));
        String::operator=(aSStack_104,aSStack_bc);
        String::~String(aSStack_bc);
        local_11c = param_7;
        local_118 = param_8;
        iVar9 = 0xc;
        goto LAB_001c612e;
      }
      String::String(aSStack_d4,(char *)(DAT_001c5f50 + 0x1c5d34));
      StringBuffer::append(aSStack_44,aSStack_d4);
      this_00 = aSStack_d4;
    }
    else {
      String::String(aSStack_dc,(char *)(DAT_001c5f4c + 0x1c5d1e));
      StringBuffer::append(aSStack_44,aSStack_dc);
      this_00 = aSStack_dc;
    }
    break;
  case 5:
    iVar9 = arc4random();
    __aeabi_idivmod(iVar9 + (iVar9 >> 0x1f) ^ iVar9 >> 0x1f,100);
    piVar3 = (int *)(DAT_001c5f7c + 0x1c5f84);
    for (local_11c = 0; local_11c < **(int **)(DAT_001c5f78 + 0x1c5f10); local_11c = local_11c + 1)
    {
      iVar9 = *piVar3;
      piVar3 = piVar3 + 1;
      if (extraout_r1 < iVar9) goto LAB_001c5f82;
    }
    local_11c = 0;
LAB_001c5f82:
    iVar6 = local_11c;
    iVar9 = ZombieCafe::isAddFridgeFood(*(ZombieCafe **)(param_1 + 0xc));
    if (iVar9 != 0) {
      iVar10 = *(int *)(param_1 + 0xc);
      this = (FoodStack *)operator_new(0x24);
      FoodStack::FoodStack(this,(uchar)param_7,(uchar)local_11c);
      iVar9 = *(int *)((Vector<FoodStack*> *)(iVar10 + DAT_001c62f4) + 4) + 2;
      if (*(int *)(iVar10 + DAT_001c62f4) < iVar9) {
        iVar4 = *(int *)(iVar10 + DAT_001c62f4) * 2;
        if (iVar4 < iVar9) {
          iVar4 = iVar9;
        }
        Vector<FoodStack*>::resize((Vector<FoodStack*> *)(iVar10 + DAT_001c62f4),iVar4,-1);
      }
      iVar10 = iVar10 + DAT_001c62f4;
      iVar9 = *(int *)(iVar10 + 4) + 1;
      *(int *)(iVar10 + 4) = iVar9;
      *(FoodStack **)(iVar9 * 4 + *(int *)(iVar10 + 8)) = this;
      *(int *)(this + 4) = param_9;
      *(int *)(*(int *)(param_1 + 0xc) + 0x1d0) = *(int *)(*(int *)(param_1 + 0xc) + 0x1d0) + 1;
      ZombieCafe::addEventRaid2_prizeGot(*(ZombieCafe **)(param_1 + 0xc),(int)param_2);
      ZombieCafe::subEventRaid2_totalPoint(*(ZombieCafe **)(param_1 + 0xc),param_4);
      String::String(aSStack_94,(char *)(DAT_001c62f8 + 0x1c5ffe));
      String::operator=(aSStack_104,aSStack_94);
      String::~String(aSStack_94);
      local_11c = param_7;
      iVar9 = 0xf;
      param_9 = iVar6;
      goto LAB_001c612e;
    }
    String::String(aSStack_8c,(char *)(DAT_001c62fc + 0x1c6018));
    StringBuffer::append(aSStack_44,aSStack_8c);
    this_00 = aSStack_8c;
    break;
  case 6:
    if (param_7 - 1U < 0x1e) {
      ZombieCafe::addToxin(*(ZombieCafe **)(param_1 + 0xc),param_7,false);
      ZombieCafe::addEventRaid2_prizeGot(*(ZombieCafe **)(param_1 + 0xc),(int)param_2);
      ZombieCafe::subEventRaid2_totalPoint(*(ZombieCafe **)(param_1 + 0xc),param_4);
      String::String(aSStack_84,(char *)(DAT_001c6300 + 0x1c6052));
      String::operator=(aSStack_104,aSStack_84);
      String::~String(aSStack_84);
      local_118 = param_7;
      iVar9 = 0x12;
      param_9 = 0;
      goto LAB_001c612e;
    }
    String::String(aSStack_7c,(char *)(DAT_001c6304 + 0x1c606c));
    StringBuffer::append(aSStack_44,aSStack_7c);
    this_00 = aSStack_7c;
    break;
  case 7:
    if (param_7 - 1U < 10) {
      iVar9 = ZombieCafe::getGatyaTicket(*(ZombieCafe **)(param_1 + 0xc));
      if (iVar9 + param_7 < 100) {
        ZombieCafe::addGatyaTicket(*(ZombieCafe **)(param_1 + 0xc),param_7);
        ZombieCafe::addEventRaid2_prizeGot(*(ZombieCafe **)(param_1 + 0xc),(int)param_2);
        ZombieCafe::subEventRaid2_totalPoint(*(ZombieCafe **)(param_1 + 0xc),param_4);
        String::String(aSStack_6c,(char *)(DAT_001c630c + 0x1c60c6));
        String::operator=(aSStack_104,aSStack_6c);
        String::~String(aSStack_6c);
        local_118 = param_7;
        iVar9 = 0x1a;
        param_9 = 0;
        goto LAB_001c612e;
      }
      String::String(aSStack_74,(char *)(DAT_001c6308 + 0x1c6094));
      StringBuffer::append(aSStack_44,aSStack_74);
      this_00 = aSStack_74;
    }
    else {
      String::String(aSStack_64,(char *)(DAT_001c6310 + 0x1c60e0));
      StringBuffer::append(aSStack_44,aSStack_64);
      this_00 = aSStack_64;
    }
    break;
  default:
    ZombieCafe::addCash(*(ZombieCafe **)(param_1 + 0xc),param_7);
    ZombieCafe::addEventRaid2_prizeGot(*(ZombieCafe **)(param_1 + 0xc),(int)param_2);
    ZombieCafe::subEventRaid2_totalPoint(*(ZombieCafe **)(param_1 + 0xc),param_4);
    String::String(aSStack_fc,(char *)(DAT_001c5f2c + 0x1c5c34));
    String::operator=(aSStack_104,aSStack_fc);
    String::~String(aSStack_fc);
    local_118 = param_7;
    iVar9 = 0xd;
    param_9 = 99;
LAB_001c612e:
    SaveCafe();
    pvVar5 = *(void **)(param_1 + 0x70);
    if (pvVar5 != (void *)0x0) {
      String::~String((String *)((int)pvVar5 + 0x10));
      operator_delete(pvVar5);
      *(undefined4 *)(param_1 + 0x70) = 0;
    }
    piVar3 = (int *)operator_new(0x18);
    memset(piVar3,0,0x18);
    String::String((String *)(piVar3 + 4));
    *(int **)(param_1 + 0x70) = piVar3;
    *piVar3 = iVar9;
    *(int *)(*(int *)(param_1 + 0x70) + 4) = local_11c;
    *(int *)(*(int *)(param_1 + 0x70) + 8) = local_118;
    *(int *)(*(int *)(param_1 + 0x70) + 0xc) = param_9;
    iVar6 = *(int *)(param_1 + 0x70);
    String::String(aSStack_4c,aSStack_104);
    String::operator=((String *)(iVar6 + 0x10),aSStack_4c);
    String::~String(aSStack_4c);
    MakePicGiftDialog(param_1,*(PicGiftBoxInfo **)(param_1 + 0x70));
    sendMaltaLog_PEX(param_1,iVar9,local_11c);
    uVar7 = 1;
    goto LAB_001c61e4;
  }
  String::~String(this_00);
  pNVar8 = *(NoticeDialog **)(param_1 + 0x34);
  StringBuffer::toString();
  String::String(aSStack_54,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x4b0) + 8) +
                 **(int **)(DAT_001c6314 + 0x1c6146) * 8));
  NoticeDialog::show(pNVar8,aSStack_5c,aSStack_54,0,param_1);
  String::~String(aSStack_54);
  String::~String(aSStack_5c);
  uVar7 = 0;
LAB_001c61e4:
  String::~String(aSStack_104);
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_44);
  return uVar7;
}


