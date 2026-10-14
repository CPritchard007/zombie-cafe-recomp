/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010ed84 GameStateAmpouleRaid::isTargetInStaffList */

/* GameStateAmpouleRaid::isTargetInStaffList(CharacterInstance*) */

bool __thiscall
GameStateAmpouleRaid::isTargetInStaffList(GameStateAmpouleRaid *this,CharacterInstance *param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (-1 < *(int *)(this + 0xf8)) {
    iVar1 = Vector<CharacterInstance*>::indexOf((Vector<CharacterInstance*> *)(this + 0xf4),param_1)
    ;
    bVar2 = iVar1 != -1;
  }
  return bVar2;
}


