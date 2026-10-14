/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00191168 GameStateSurvivalMenu::getItemMain */

/* GameStateSurvivalMenu::getItemMain() */

void __thiscall GameStateSurvivalMenu::getItemMain(GameStateSurvivalMenu *this)

{
  int iVar1;
  Character *pCVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  String *pSVar5;
  int *piVar6;
  int *piVar7;
  ZombieCafe *this_00;
  NoticeDialog *pNVar8;
  int *piVar9;
  int iVar10;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  String aSStack_ac [8];
  String aSStack_a4 [8];
  String aSStack_9c [8];
  String aSStack_94 [8];
  String aSStack_8c [8];
  CharacterData aCStack_84 [8];
  String aSStack_7c [8];
  String aSStack_74 [8];
  String aSStack_6c [8];
  String aSStack_64 [8];
  String aSStack_5c [8];
  String aSStack_54 [8];
  String aSStack_4c [8];
  String aSStack_44 [8];
  String aSStack_3c [8];
  StringBuffer aSStack_34 [32];
  
  iVar10 = DAT_001914ec + 0x191178;
  if (this[0x68] == (GameStateSurvivalMenu)0x0) {
    iVar1 = isPointGiftZombie(this);
    if ((iVar1 == 0) || (iVar1 = playerHaveZombieCountCheck(this), iVar1 != 0)) {
      local_c0 = *(int *)(*(int *)(this + 0xc) + DAT_001914fc);
      local_bc = local_c0 * 0x90;
      local_c4 = 0;
      local_c8 = 0;
      piVar6 = *(int **)(iVar10 + DAT_00191500);
      for (; local_c0 < *piVar6; local_c0 = local_c0 + 1) {
        piVar9 = *(int **)(iVar10 + DAT_00191504);
        piVar7 = (int *)(*piVar9 + local_bc);
        if (*piVar7 <= *(int *)(this + 0xac)) {
          if (piVar7[1] == 0xc) {
            iVar1 = playerHaveZombieCountCheck(this);
            if (iVar1 == 0) break;
            iVar1 = *(int *)(*piVar9 + local_bc + 8);
            String::String(aSStack_8c,(char *)(DAT_00191508 + 0x191280));
            pCVar2 = (Character *)operator_new(0x6c);
            Character::Character
                      (pCVar2,*(undefined4 *)
                               (iVar1 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_0019150c)),2,1,
                       aSStack_8c);
            String::~String(aSStack_8c);
            uVar3 = __floatsisf((int)**(short **)(iVar10 + DAT_00191510));
            uVar4 = Character::getMaxEnergy();
            iVar1 = __aeabi_fcmplt(uVar3,0);
            if (iVar1 == 0) {
              iVar1 = __aeabi_fcmpgt(uVar3,uVar4);
              if (iVar1 != 0) {
                uVar3 = uVar4;
              }
            }
            else {
              uVar3 = 0;
            }
            iVar1 = DAT_00191514;
            *(undefined4 *)(pCVar2 + 0x40) = uVar3;
            CharacterData::getRandomName(aCStack_84,*(bool *)(*(int *)pCVar2 + iVar1),0);
            String::operator=((String *)(pCVar2 + 8),aCStack_84);
            String::~String((String *)aCStack_84);
            Platform::getAppTime();
            uVar3 = __fixdfsi();
            pCVar2[4] = (Character)0x1;
            *(undefined4 *)(pCVar2 + 0x10) = uVar3;
            pCVar2[5] = (Character)0x2;
            this_00 = *(ZombieCafe **)(this + 0xc);
            if (*(int *)((Vector<Character*> *)(this_00 + DAT_00191518) + 4) + 1 <
                (int)*(short *)((*(int *)(this_00 + 0x680) + -1) * 2 +
                               **(int **)(iVar10 + DAT_0019151c))) {
              Vector<Character*>::addElement((Vector<Character*> *)(this_00 + DAT_00191518),pCVar2);
            }
            else {
              ZombieCafe::putZombieInMeetlocker(this_00,pCVar2,(PullMenuElement *)0x0);
            }
            local_c4 = local_c4 + 1;
            *(int *)(*(int *)(this + 0xc) + DAT_001914fc) =
                 *(int *)(*(int *)(this + 0xc) + DAT_001914fc) + 1;
          }
          else if (piVar7[1] == 0xd) {
            iVar1 = piVar7[3];
            ZombieCafe::addCash(*(ZombieCafe **)(this + 0xc),iVar1);
            local_c8 = local_c8 + iVar1;
            *(int *)(*(int *)(this + 0xc) + DAT_001914fc) =
                 *(int *)(*(int *)(this + 0xc) + DAT_001914fc) + 1;
          }
        }
        local_bc = local_bc + 0x90;
      }
      if ((0 < local_c4) || (0 < local_c8)) {
        ZombieCafe::save();
        StringBuffer::StringBuffer(aSStack_34);
        piVar6 = *(int **)(iVar10 + DAT_001914f4);
        if (local_c4 == 0) {
          String::String(aSStack_7c,(char *)(DAT_00191520 + 0x1913b8));
          StringBuffer::append(aSStack_34,aSStack_7c);
          String::~String(aSStack_7c);
          String::valueOf((int)aSStack_74);
          StringBuffer::append(aSStack_34,aSStack_74);
          String::~String(aSStack_74);
          String::String(aSStack_6c,(char *)(DAT_00191524 + 0x1913e6));
          StringBuffer::append(aSStack_34,aSStack_6c);
          String::~String(aSStack_6c);
          pNVar8 = *(NoticeDialog **)(this + 0x34);
          StringBuffer::toString();
          String::String(aSStack_5c,
                         (String *)
                         (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) + *piVar6 * 8));
          NoticeDialog::show(pNVar8,aSStack_64,aSStack_5c,0,this);
          String::~String(aSStack_5c);
          pSVar5 = aSStack_64;
        }
        else {
          pNVar8 = *(NoticeDialog **)(this + 0x34);
          if (local_c8 == 0) {
            String::String(aSStack_54,(char *)(DAT_00191528 + 0x19143a));
            String::String(aSStack_4c,
                           (String *)
                           (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) + *piVar6 * 8));
            NoticeDialog::show(pNVar8,aSStack_54,aSStack_4c,0,this);
            String::~String(aSStack_4c);
            pSVar5 = aSStack_54;
          }
          else {
            String::String(aSStack_44,(char *)(DAT_0019152c + 0x19146e));
            String::String(aSStack_3c,
                           (String *)
                           (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) + *piVar6 * 8));
            NoticeDialog::show(pNVar8,aSStack_44,aSStack_3c,0,this);
            String::~String(aSStack_3c);
            pSVar5 = aSStack_44;
          }
        }
        String::~String(pSVar5);
        CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
      }
      Layout_GetItemButton(this);
      return;
    }
    pNVar8 = *(NoticeDialog **)(this + 0x34);
    String::String(aSStack_9c,(char *)(DAT_001914f8 + 0x1911ee));
    String::String(aSStack_94,
                   (String *)
                   (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                   **(int **)(iVar10 + DAT_001914f4) * 8));
    NoticeDialog::show(pNVar8,aSStack_9c,aSStack_94,0,this);
    String::~String(aSStack_94);
    pSVar5 = aSStack_9c;
  }
  else {
    iVar1 = playerHaveZombieCountCheck(this);
    if (iVar1 != 0) {
      *(undefined4 *)(this + 0xb4) = 0;
      *(undefined4 *)(this + 0xa4) = 5;
      return;
    }
    pNVar8 = *(NoticeDialog **)(this + 0x34);
    String::String(aSStack_ac,(char *)(DAT_001914f0 + 0x19118e));
    String::String(aSStack_a4,
                   (String *)
                   (*(int *)(*(int *)(*(int *)(this + 0xc) + 0x4b0) + 8) +
                   **(int **)(iVar10 + DAT_001914f4) * 8));
    NoticeDialog::show(pNVar8,aSStack_ac,aSStack_a4,0,this);
    String::~String(aSStack_a4);
    pSVar5 = aSStack_ac;
  }
  String::~String(pSVar5);
  return;
}


