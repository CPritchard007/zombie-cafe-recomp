/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c7bc4 GameStateZukan::createCharacter */

/* GameStateZukan::createCharacter(int) */

Character * __thiscall GameStateZukan::createCharacter(GameStateZukan *this,int param_1)

{
  GameStateZukan GVar1;
  Character *pCVar2;
  undefined4 uVar3;
  String aSStack_20 [12];
  
  uVar3 = *(undefined4 *)(param_1 * 4 + *(int *)(this + 0xd4));
  GVar1 = this[0x7c];
  Vector<String>::elementAt((int)aSStack_20);
  pCVar2 = (Character *)operator_new(0x6c);
  Character::Character(pCVar2,uVar3,0,GVar1,aSStack_20);
  String::~String(aSStack_20);
  Platform::getAppTime();
  uVar3 = __fixdfsi();
  *(undefined4 *)(pCVar2 + 0x10) = uVar3;
  return pCVar2;
}


