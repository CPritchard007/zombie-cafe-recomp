/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019a728 GameStateEarlyBird::createCharacterInstanceAll */

/* GameStateEarlyBird::createCharacterInstanceAll() */

void __thiscall GameStateEarlyBird::createCharacterInstanceAll(GameStateEarlyBird *this)

{
  Character *pCVar1;
  CharacterInstance *this_00;
  undefined4 uVar2;
  char *pcVar3;
  GameStateEarlyBird *pGVar4;
  float fVar5;
  int local_30;
  GameStateEarlyBird *local_28;
  String aSStack_20 [12];
  
  pcVar3 = (char *)(DAT_0019a7d4 + 0x19a73c);
  pGVar4 = this;
  local_28 = this;
  for (local_30 = 0; local_30 < *(int *)(this + 0x350); local_30 = local_30 + 1) {
    if (*(ushort *)(pGVar4 + 0x1a4) != DAT_0019a7d8) {
      uVar2 = *(undefined4 *)
               ((uint)*(ushort *)(pGVar4 + 0x1a4) * 4 +
               *(int *)(*(int *)(this + 0xc) + DAT_0019a7dc));
      String::String(aSStack_20,pcVar3);
      pCVar1 = (Character *)operator_new(0x6c);
      Character::Character(pCVar1,uVar2,2,1,aSStack_20);
      String::~String(aSStack_20);
      fVar5 = (float)SmDev();
      this_00 = (CharacterInstance *)createCharacterInstance((Character *)this,fVar5);
      *(CharacterInstance **)(local_28 + 0x104) = this_00;
      CharacterInstance::setCurrentAnimation(this_00,'\x1c','\x01',true);
    }
    pGVar4 = pGVar4 + 2;
    local_28 = local_28 + 4;
  }
  return;
}


