/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ecfa8 DishToCounterTask::completeObjective */

/* DishToCounterTask::completeObjective() */

void __thiscall DishToCounterTask::completeObjective(DishToCounterTask *this)

{
  int iVar1;
  
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(iVar1 + 4);
  if (*(ushort **)(this + 0x40) != (ushort *)0x0) {
    ObjectiveSystem::cookFood
              (*(ObjectiveSystem **)(iVar1 + DAT_000ecfd4),(uint)**(ushort **)(this + 0x40));
    Quest::runQuest(*(int *)(iVar1 + 0x40),0x18,(int *)(uint)**(ushort **)(this + 0x40));
  }
  return;
}


