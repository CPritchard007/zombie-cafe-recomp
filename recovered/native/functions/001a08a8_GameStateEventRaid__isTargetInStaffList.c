/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a08a8 GameStateEventRaid::isTargetInStaffList */

/* GameStateEventRaid::isTargetInStaffList(CharacterInstance*) */

bool __thiscall
GameStateEventRaid::isTargetInStaffList(GameStateEventRaid *this,CharacterInstance *param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (-1 < *(int *)(this + 0xf4)) {
    iVar1 = Vector<CharacterInstance*>::indexOf((Vector<CharacterInstance*> *)(this + 0xf0),param_1)
    ;
    bVar2 = iVar1 != -1;
  }
  return bVar2;
}


