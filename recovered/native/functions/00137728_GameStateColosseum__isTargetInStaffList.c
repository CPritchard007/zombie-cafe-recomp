/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00137728 GameStateColosseum::isTargetInStaffList */

/* GameStateColosseum::isTargetInStaffList(CharacterInstance*) */

bool __thiscall
GameStateColosseum::isTargetInStaffList(GameStateColosseum *this,CharacterInstance *param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (-1 < *(int *)(this + 0x10c)) {
    iVar1 = Vector<CharacterInstance*>::indexOf
                      ((Vector<CharacterInstance*> *)(this + 0x108),param_1);
    bVar2 = iVar1 != -1;
  }
  return bVar2;
}


