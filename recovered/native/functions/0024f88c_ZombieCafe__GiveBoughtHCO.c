/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024f88c ZombieCafe::GiveBoughtHCO */

/* ZombieCafe::GiveBoughtHCO(int) */

void __thiscall ZombieCafe::GiveBoughtHCO(ZombieCafe *this,int param_1)

{
  int iVar1;
  HCOManager *pHVar2;
  int iVar3;
  Character *pCVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Vector<Character*> *this_00;
  int iVar7;
  SServer *pSVar8;
  uint uVar9;
  MALTAHoover *pMVar10;
  char *pcVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  int *piVar17;
  undefined4 uStack_4;
  undefined4 *puVar18;
  undefined4 *puVar19;
  uint *puVar20;
  
  iVar1 = DAT_0024fb84;
  piVar17 = (int *)(&stack0xffffffec + DAT_0024fb84);
  puVar18 = (undefined4 *)(&stack0xffffffec + DAT_0024fb84);
  puVar19 = (undefined4 *)(&stack0xffffffec + DAT_0024fb84);
  puVar20 = (uint *)(&stack0xffffffec + DAT_0024fb84);
  puVar13 = *(undefined4 **)(DAT_0024fb8c + 0x24f8a0);
  *(undefined4 *)(&stack0xffffffec + DAT_0024fb88 + DAT_0024fb84) = *puVar13;
  pHVar2 = (HCOManager *)HCOManager::getInstance();
  HCOManager::loadHCOItemInfo(pHVar2);
  iVar3 = HCOManager::getInstance();
  iVar3 = *(int *)(iVar3 + 0x10);
  *(undefined4 **)(&stack0x00000010 + iVar1) = puVar13;
  *(int *)(&stack0x00000008 + iVar1) = iVar3;
  if (iVar3 == param_1) {
    iVar3 = HCOManager::getInstance();
    if (0 < *(int *)(iVar3 + 0x18)) {
      addToxin(this,*(int *)(iVar3 + 0x18),true);
    }
    for (iVar3 = 0; iVar7 = HCOManager::getInstance(), iVar3 < *(int *)(iVar7 + 0x1c);
        iVar3 = iVar3 + 1) {
      iVar7 = HCOManager::getInstance();
      iVar15 = iVar3 * 4;
      if (*(int *)(*(int *)(iVar7 + 0x20) + iVar15) == 0) {
        iVar14 = *(int *)(this + DAT_0024fb90);
        iVar7 = HCOManager::getInstance();
        *(undefined4 *)(&stack0x00000004 + iVar1) =
             *(undefined4 *)(*(int *)(*(int *)(iVar7 + 0x24) + iVar15) * 4 + iVar14);
        String::String((String *)(&stack0x00000014 + iVar1),(char *)(DAT_0024fb94 + 0x24f8f4));
        pCVar4 = (Character *)operator_new(0x6c);
        *piVar17 = (int)(&stack0x00000014 + iVar1);
        Character::Character(pCVar4,*(undefined4 *)(&stack0x00000004 + iVar1),2,1);
        String::~String((String *)(&stack0x00000014 + iVar1));
        iVar7 = HCOManager::getInstance();
        *(undefined4 *)(pCVar4 + 0x58) = *(undefined4 *)(*(int *)(iVar7 + 0x30) + iVar15);
        iVar7 = HCOManager::getInstance();
        pCVar4[0x36] = SUB41(*(undefined4 *)(*(int *)(iVar7 + 0x2c) + iVar15),0);
        iVar7 = HCOManager::getInstance();
        *(undefined4 *)(pCVar4 + 0x28) = *(undefined4 *)(*(int *)(iVar7 + 0x28) + iVar15);
        uVar5 = Character::getMaxEnergy();
        uVar6 = Character::getMaxEnergy();
        *(undefined4 *)(&stack0x00000004 + iVar1) = uVar6;
        iVar7 = __aeabi_fcmplt(uVar5,0);
        if (iVar7 == 0) {
          iVar7 = __aeabi_fcmpgt(uVar5,*(undefined4 *)(&stack0x00000004 + iVar1));
          if (iVar7 != 0) {
            uVar5 = *(undefined4 *)(&stack0x00000004 + iVar1);
          }
        }
        else {
          uVar5 = 0;
        }
        iVar7 = DAT_0024fb98;
        *(undefined4 *)(pCVar4 + 0x40) = uVar5;
        CharacterData::getRandomName
                  ((CharacterData *)(&stack0x0000001c + iVar1),*(bool *)(*(int *)pCVar4 + iVar7),0);
        String::operator=((String *)(pCVar4 + 8),&stack0x0000001c + iVar1);
        String::~String((String *)(&stack0x0000001c + iVar1));
        Platform::getAppTime();
        uVar5 = __fixdfsi();
        pCVar4[4] = (Character)0x1;
        pCVar4[5] = (Character)0x2;
        *(undefined4 *)(pCVar4 + 0x10) = uVar5;
        this_00 = (Vector<Character*> *)(this + DAT_0024fba0);
        if ((int)*(short *)((*(int *)(this + 0x680) + -1) * 2 + **(int **)(DAT_0024fb9c + 0x24f9aa))
            <= *(int *)((ZombieCafe *)this_00 + 4) + 1) {
          this_00 = (Vector<Character*> *)(this + 0x5a0);
        }
        Vector<Character*>::addElement(this_00,pCVar4);
      }
      else {
        iVar14 = *(int *)(this + 0x7e8);
        iVar7 = HCOManager::getInstance();
        Vector<int>::addElement
                  ((Vector<int> *)(iVar14 + 0xfc),*(int *)(*(int *)(iVar7 + 0x24) + iVar15));
      }
    }
    save();
    pHVar2 = (HCOManager *)HCOManager::getInstance();
    HCOManager::buyCompleted(pHVar2);
    memset(&stack0x00000044 + iVar1,0,0x40);
    pSVar8 = (SServer *)MALTAHoover::GetInstance();
    iVar3 = MALTAHoover::getFBID(pSVar8,(char *)**(undefined4 **)(DAT_0024fba4 + 0x24fa10));
    if (iVar3 == 0) {
      L_PrintLog((char *)(DAT_0024fba8 + 0x24fa22),&stack0x00000044 + iVar1);
    }
    iVar3 = DAT_0024fbac;
    memset(&stack0x00000084 + iVar1,0,0x80);
    for (iVar7 = 0; iVar15 = HCOManager::getInstance(), iVar7 < *(int *)(iVar15 + 0x1c);
        iVar7 = iVar7 + 1) {
      iVar15 = HCOManager::getInstance();
      if (*(int *)(iVar7 * 4 + *(int *)(iVar15 + 0x20)) == 0) {
        iVar15 = HCOManager::getInstance();
        uVar5 = *(undefined4 *)(iVar15 + 0x24);
        pcVar11 = (char *)(DAT_0024fbb0 + 0x24fa52);
      }
      else {
        uVar5 = 0;
        pcVar11 = (char *)(iVar3 + 0x24fa36);
      }
      snprintf(&stack0x00000024 + iVar1,0x20,pcVar11,uVar5);
      strcat(&stack0x00000084 + iVar1,&stack0x00000024 + iVar1);
      iVar15 = HCOManager::getInstance();
      if (iVar7 < *(int *)(iVar15 + 0x1c) + -1) {
        strcat(&stack0x00000084 + iVar1,(char *)(DAT_0024fbb4 + 0x24fa7c));
      }
    }
    pHVar2 = (HCOManager *)HCOManager::getInstance();
    uVar5 = HCOManager::getHCORemainingTime(pHVar2);
    uVar9 = __divsi3(uVar5,1000);
    pcVar11 = &stack0x00000104 + iVar1;
    memset(pcVar11,0,0x80);
    memcpy(&stack0x00000184 + iVar1,
           (void *)(*(int *)(this + DAT_0024fbb8 + 8) + *(int *)(&stack0x00000008 + iVar1) * 0x5d8),
           0x5d8);
    iVar3 = HCOManager::getInstance();
    *puVar18 = *(undefined4 *)(&stack0x00000008 + iVar1);
    *(undefined1 **)(&stack0xfffffff0 + iVar1) = &stack0xffffffec + DAT_0024fbbc + iVar1;
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = *(undefined4 *)(iVar3 + 0x14);
    *(uint *)(&stack0xfffffff8 + iVar1) = uVar9 & (int)~uVar9 >> 0x1f;
    snprintf(pcVar11,0x80,(char *)(DAT_0024fbc0 + 0x24fad6),&stack0x00000044 + iVar1);
    pMVar10 = (MALTAHoover *)MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::GetInstance();
    MALTAHoover::init(pMVar10,(char *)(DAT_0024fbc4 + 0x24fb00),(char *)(DAT_0024fbc8 + 0x24fb02),
                      (char *)(DAT_0024fbcc + 0x24fb04));
    uVar5 = MALTAHoover::GetInstance();
    uVar6 = *(undefined4 *)(this + 0x680);
    *(undefined4 *)(&stack0x00000008 + iVar1) = uVar5;
    *(undefined4 *)(&stack0x00000004 + iVar1) = uVar6;
    uVar5 = getToxin(this);
    *(undefined4 *)(&stack0x0000000c + iVar1) = uVar5;
    uVar6 = *(undefined4 *)(this + DAT_0024fbd0);
    uVar16 = *(undefined4 *)(this + DAT_0024fbd4);
    uVar5 = calUserRankId(this,(uint)(byte)this[DAT_0024fbd8]);
    *(undefined4 *)(&stack0xfffffff4 + iVar1) = uVar5;
    pMVar10 = *(MALTAHoover **)(&stack0x00000008 + iVar1);
    *(undefined4 *)((int)&uStack_4 + iVar1) = *(undefined4 *)(DAT_0024fbdc + 0x24fb3a);
    uVar9 = *(uint *)(&stack0x00000004 + iVar1);
    uVar12 = *(uint *)(&stack0x0000000c + iVar1);
    *puVar19 = uVar6;
    *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar16;
    *(char **)(&stack0xfffffff8 + iVar1) = pcVar11;
    MALTAHoover::send(pMVar10,(char *)(DAT_0024fbe0 + 0x24fb3e),uVar9,uVar12,*puVar20,
                      *(uint *)(&stack0xfffffff0 + iVar1),*(int *)(&stack0xfffffff4 + iVar1),
                      *(char **)(&stack0xfffffff8 + iVar1),*(char **)((int)&uStack_4 + iVar1));
  }
  if (*(int *)(&stack0xffffffec + DAT_0024fb88 + iVar1) == **(int **)(&stack0x00000010 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


