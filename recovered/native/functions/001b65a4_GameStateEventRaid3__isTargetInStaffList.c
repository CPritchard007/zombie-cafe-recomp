/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b65a4 GameStateEventRaid3::isTargetInStaffList */

/* GameStateEventRaid3::isTargetInStaffList(CharacterInstance*) */

bool __thiscall
GameStateEventRaid3::isTargetInStaffList(GameStateEventRaid3 *this,CharacterInstance *param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (-1 < *(int *)(this + 0x120)) {
    iVar1 = Vector<CharacterInstance*>::indexOf
                      ((Vector<CharacterInstance*> *)(this + 0x11c),param_1);
    bVar2 = iVar1 != -1;
  }
  return bVar2;
}


