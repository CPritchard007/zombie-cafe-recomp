/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00131ea4 GameStateChooseChef::createCharacter */

/* GameStateChooseChef::createCharacter(int) */

Character * GameStateChooseChef::createCharacter(int param_1)

{
  Character *pCVar1;
  undefined4 uVar2;
  int in_r1;
  int iVar3;
  int iVar4;
  String aSStack_18 [8];
  
  iVar4 = *(int *)(in_r1 * 4 + *(int *)(param_1 + 0xac));
  iVar3 = *(int *)(iVar4 + 0x560);
  Vector<String>::elementAt((int)aSStack_18);
  pCVar1 = (Character *)operator_new(0x6c);
  Character::Character(pCVar1,iVar4,0,iVar3 == 0,aSStack_18);
  String::~String(aSStack_18);
  Platform::getAppTime();
  uVar2 = __fixdfsi();
  *(undefined4 *)(pCVar1 + 0x10) = uVar2;
  return pCVar1;
}


