/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cf798 CharacterDetails::equipButtonPressProc */

/* CharacterDetails::equipButtonPressProc(int) */

void __thiscall CharacterDetails::equipButtonPressProc(CharacterDetails *this,int param_1)

{
  int iVar1;
  CharacterDetails *pCVar2;
  int iVar3;
  GameStateCafe *pGVar4;
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  if ((this[0x68] == (CharacterDetails)0x0) && (param_1 < 5)) {
    pCVar2 = this + 0x88;
    pGVar4 = *(GameStateCafe **)(*(int *)(this + 0x78) + 8);
    iVar1 = Character::isCharacterEquip(*(Character **)pCVar2,param_1);
    if (iVar1 == 0) {
      if (pGVar4 != (GameStateCafe *)0x0) {
        GameStateCafe::OpenStorageEquip((int)pGVar4);
      }
    }
    else {
      iVar3 = (param_1 + 0x16) * 4;
      iVar1 = DAT_000cf850 + 0xcf7d0;
      String::String(aSStack_38,(String *)(iVar1 + (uint)*(byte *)(*(int *)pCVar2 + iVar3) * 0x24));
      String::String(aSStack_30,
                     (String *)(iVar1 + (uint)*(byte *)(*(int *)pCVar2 + iVar3) * 0x24 + 8));
      String::String(aSStack_28,aSStack_38);
      String::String(aSStack_20,aSStack_30);
      GameStateCafe::showEquipInfoDialog(pGVar4,aSStack_28,aSStack_20);
      String::~String(aSStack_20);
      String::~String(aSStack_28);
      String::~String(aSStack_30);
      String::~String(aSStack_38);
    }
  }
  return;
}


