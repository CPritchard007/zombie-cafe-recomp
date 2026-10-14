/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001aaad4 GameStateEventRaid2::isTargetInStaffList */

/* GameStateEventRaid2::isTargetInStaffList(CharacterInstance*) */

bool __thiscall
GameStateEventRaid2::isTargetInStaffList(GameStateEventRaid2 *this,CharacterInstance *param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (-1 < *(int *)(this + 0x114)) {
    iVar1 = Vector<CharacterInstance*>::indexOf
                      ((Vector<CharacterInstance*> *)(this + 0x110),param_1);
    bVar2 = iVar1 != -1;
  }
  return bVar2;
}


