/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e9dbc CookTask::prepareForSave */

/* CookTask::prepareForSave() */

void __thiscall CookTask::prepareForSave(CookTask *this)

{
  int iVar1;
  
  if (((*(FollowTask **)(this + 0x2c) != (FollowTask *)0x0) &&
      (*(int *)(*(int *)(this + 0x28) + 0x7c) == 0)) &&
     (iVar1 = FollowTask::getDestinationTileIndex(*(FollowTask **)(this + 0x2c)), iVar1 != -1)) {
    CafeObject::setTileIndex(*(CafeObject **)(this + 0x20),(short)iVar1,*(Cafe **)(this + 0x24));
    CharacterInstance::turnToward
              (*(CharacterInstance **)(this + 0x20),*(long *)(*(int *)(this + 0x28) + 4));
    Stove::use(*(Stove **)(this + 0x28),*(CharacterInstance **)(this + 0x20),0);
  }
  if (this[4] == (CookTask)0x0) {
    FUN_000e9d8e(this);
  }
  return;
}


