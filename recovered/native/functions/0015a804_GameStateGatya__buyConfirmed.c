/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015a804 GameStateGatya::buyConfirmed */

/* GameStateGatya::buyConfirmed(GameStateGatya*) */

void __thiscall GameStateGatya::buyConfirmed(GameStateGatya *this,GameStateGatya *param_1)

{
  ZombieCafe *pZVar1;
  int iVar2;
  undefined4 uVar3;
  Character *pCVar4;
  undefined4 uVar5;
  int iVar6;
  GameStateGatya GVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  float in_s0;
  int local_34;
  int local_30;
  String aSStack_28 [8];
  CharacterData aCStack_20 [12];
  
  pZVar1 = *(ZombieCafe **)(this + 0xc);
  if (this[0xe60] == (GameStateGatya)0x0) {
    in_s0 = (float)ZombieCafe::addCash(pZVar1,-*(int *)(this + DAT_0015ab54));
    iVar2 = *(int *)(this + 0xc);
  }
  else {
    if ((pZVar1[DAT_0015ab4c] == (ZombieCafe)0x0) && (this[DAT_0015ab50] == (GameStateGatya)0x1)) {
      pZVar1[DAT_0015ab4c] = (ZombieCafe)0x1;
      this[0xcc] = (GameStateGatya)0x1;
    }
    else if (*(int *)(this + DAT_0015ab94) == 2) {
      in_s0 = (float)ZombieCafe::addGatyaTicket(pZVar1,-1);
    }
    else {
      this[0xcc] = (GameStateGatya)0x0;
      in_s0 = (float)ZombieCafe::spendToxin(pZVar1,*(int *)(this + DAT_0015ab54));
    }
    iVar2 = *(int *)(this + 0xc);
  }
  ZombieCafe::playEffect(iVar2,in_s0);
  local_30 = 0;
  for (local_34 = 0; local_34 < *(int *)(this + DAT_0015ab84); local_34 = local_34 + 1) {
    if ((((local_30 < *(int *)(this + 0xe70)) && (-1 < *(int *)(this + 0xe34))) &&
        (this[0xcd] != (GameStateGatya)0x0)) && (this[DAT_0015ab50] == (GameStateGatya)0x3)) {
      *(undefined1 *)(*(int *)(this + 0xc) + DAT_0015ab58) = 1;
      uVar3 = lotterySpecial(this,(bool)this[0xe60]);
      *(undefined4 *)(this + DAT_0015ab5c) = uVar3;
      local_30 = local_30 + 1;
    }
    else {
      if (*(int *)(this + DAT_0015ab94) == 2) {
        GVar7 = (GameStateGatya)0x1;
      }
      else {
        GVar7 = this[0xe60];
      }
      uVar3 = lottery(this,(bool)GVar7);
      *(undefined4 *)(this + DAT_0015ab5c) = uVar3;
    }
    uVar10 = (uint)*(ushort *)(this + (*(int *)(this + DAT_0015ab5c) + 0x117) * 8 + 4);
    if (uVar10 == 0) {
      uVar10 = (uint)*(ushort *)(this + DAT_0015ab60);
    }
    Vector<int>::addElement(*(Vector<int> **)(this + 0xeb0),uVar10);
    String::String(aSStack_28,(char *)(DAT_0015ab64 + 0x15a902));
    pCVar4 = (Character *)operator_new(0x6c);
    Character::Character
              (pCVar4,*(undefined4 *)(uVar10 * 4 + *(int *)(*(int *)(this + 0xc) + DAT_0015ab68)),2,
               1,aSStack_28);
    String::~String(aSStack_28);
    uVar3 = __floatsisf((int)**(short **)(DAT_0015ab6c + 0x15a92e));
    uVar5 = Character::getMaxEnergy();
    iVar2 = __aeabi_fcmplt(uVar3,0);
    if (iVar2 == 0) {
      iVar2 = __aeabi_fcmpgt(uVar3,uVar5);
      if (iVar2 != 0) {
        uVar3 = uVar5;
      }
    }
    else {
      uVar3 = 0;
    }
    iVar2 = DAT_0015ab70;
    *(undefined4 *)(pCVar4 + 0x40) = uVar3;
    CharacterData::getRandomName(aCStack_20,*(bool *)(*(int *)pCVar4 + iVar2),uVar10);
    String::operator=((String *)(pCVar4 + 8),aCStack_20);
    String::~String((String *)aCStack_20);
    Platform::getAppTime();
    uVar3 = __fixdfsi();
    iVar2 = DAT_0015ab50;
    pCVar4[4] = (Character)0x1;
    *(undefined4 *)(pCVar4 + 0x10) = uVar3;
    pCVar4[5] = (Character)0x2;
    if ((this[iVar2] == (GameStateGatya)0x4) || (this[iVar2] == (GameStateGatya)0x0)) {
      uVar10 = 0;
    }
    else {
      uVar10 = 0;
      if ((*(char *)(*(int *)pCVar4 + 0xb40) == '\x04') &&
         (uVar10 = (uint)**(byte **)(DAT_0015ab74 + 0x15a9b0), uVar10 != 0)) {
        iVar6 = CapcomMath::random(0xf);
        uVar10 = iVar6 + 1;
      }
      *(uint *)(pCVar4 + 0x28) = uVar10;
    }
    Vector<int>::addElement(*(Vector<int> **)(this + DAT_0015ab78),uVar10);
    pZVar1 = *(ZombieCafe **)(this + 0xc);
    iVar6 = *(int *)((Vector<Character*> *)(pZVar1 + DAT_0015ab7c) + 4);
    if (iVar6 + 1 <
        (int)*(short *)((*(int *)(pZVar1 + 0x680) + -1) * 2 + **(int **)(DAT_0015ab80 + 0x15a9ec)))
    {
      iVar6 = iVar6 + 2;
      if (*(int *)(pZVar1 + DAT_0015ab7c) < iVar6) {
        iVar8 = *(int *)(pZVar1 + DAT_0015ab7c) * 2;
        if (iVar8 < iVar6) {
          iVar8 = iVar6;
        }
        Vector<Character*>::resize((Vector<Character*> *)(pZVar1 + DAT_0015ab7c),iVar8,-1);
      }
      iVar8 = *(int *)(pZVar1 + DAT_0015ab7c + 4);
      iVar6 = DAT_0015ab7c + 8;
      *(int *)(pZVar1 + DAT_0015ab7c + 4) = iVar8 + 1;
      *(Character **)((iVar8 + 1) * 4 + *(int *)(pZVar1 + iVar6)) = pCVar4;
    }
    else {
      ZombieCafe::putZombieInMeetlocker(pZVar1,pCVar4,(PullMenuElement *)0x0);
    }
    if ((byte)this[iVar2] - 1 < 4) {
      uVar3 = Character::getMaxEnergy();
      uVar5 = Character::getMaxEnergy();
      iVar2 = __aeabi_fcmplt(uVar3,0);
      if (iVar2 == 0) {
        iVar2 = __aeabi_fcmpgt(uVar3,uVar5);
        if (iVar2 != 0) {
          uVar3 = uVar5;
        }
      }
      else {
        uVar3 = 0;
      }
      *(undefined4 *)(pCVar4 + 0x40) = uVar3;
    }
  }
  save();
  iVar2 = DAT_0015ab50;
  if (this[0xe60] == (GameStateGatya)0x0) {
    iVar8 = *(int *)(this + DAT_0015ab54);
    iVar6 = 0;
  }
  else {
    iVar6 = *(int *)(this + DAT_0015ab54);
    iVar8 = 0;
  }
  if ((this[0xcc] == (GameStateGatya)0x0) || (this[DAT_0015ab50] != (GameStateGatya)0x1)) {
    uVar10 = (uint)(byte)this[DAT_0015ab50];
    if (uVar10 == 3) {
      iVar9 = 3;
      if (*(int *)(this + DAT_0015ab84) != 1) {
        iVar9 = 4;
      }
      sendMaltaLog(this,iVar9,iVar8,iVar6);
      GVar7 = this[iVar2];
    }
    else {
      if (uVar10 == 4) {
        sendMaltaLog(this,5,0,0);
        uVar10 = 5;
        goto LAB_0015aae0;
      }
      sendMaltaLog(this,uVar10,iVar8,iVar6);
      GVar7 = this[DAT_0015ab50];
    }
    uVar10 = (uint)(byte)GVar7;
  }
  else {
    sendMaltaLog(this,1,0,0);
    uVar10 = (uint)(byte)this[iVar2];
LAB_0015aae0:
    iVar8 = 0;
    iVar6 = 0;
  }
  sendGLog(uVar10,iVar8,iVar6);
  *(undefined4 *)(this + DAT_0015ab88) = 0x10000;
  *(undefined4 *)(this + DAT_0015ab8c) = 0;
  *(undefined4 *)(this + DAT_0015ab90) = 0;
  changeMessageWindow(this,false);
  return;
}


