/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012ee46 FUN_0012ee46 */

void FUN_0012ee46(void)

{
  int iVar1;
  CharacterInstance *pCVar2;
  DishToCounterTask *this;
  CookTask *this_00;
  void *unaff_r5;
  int unaff_r7;
  
  iVar1 = Stove::isDoneCooking(*(Stove **)((int)unaff_r5 + 0x50));
  pCVar2 = *(CharacterInstance **)((int)unaff_r5 + 0x54);
  if (iVar1 == 0) {
    iVar1 = CharacterInstance::getTaskTarget(pCVar2);
    if (iVar1 == *(int *)((int)unaff_r5 + 0x50)) {
      FUN_0012ff0e();
    }
    CharacterInstance::stopTasks(*(CharacterInstance **)((int)unaff_r5 + 0x54));
    this_00 = (CookTask *)operator_new(0x34);
    pCVar2 = *(CharacterInstance **)((int)unaff_r5 + 0x54);
    CookTask::CookTask(this_00,pCVar2,*(Stove **)((int)unaff_r5 + 0x50),
                       *(Cafe **)((int)unaff_r5 + 0x14));
    CharacterInstance::addTask(pCVar2,(Task *)this_00);
    iVar1 = TutorialSystem::isTutorialCompleted
                      (*(TutorialSystem **)(*(int *)((int)unaff_r5 + 0xc) + DAT_0012ef14),'\x03');
    if (iVar1 == 0) {
      Task::addFinishedListener
                ((Task *)this_00,*(_func_void_void_ptr_Task_ptr **)(unaff_r7 + DAT_0012ef2c),
                 unaff_r5);
    }
    *(undefined1 *)(*(int *)(*(int *)((int)unaff_r5 + 0x54) + 0x8c) + 0x44) = 2;
  }
  else {
    iVar1 = *(int *)((int)unaff_r5 + 0x50);
    if (((*(int *)(iVar1 + 100) != 0) && (*(char *)(iVar1 + 0x2e) != '\0')) &&
       (*(short *)(iVar1 + 0x84) == 1)) {
      pCVar2 = (CharacterInstance *)FUN_0012feec();
    }
    CharacterInstance::stopTasks(pCVar2);
    this = (DishToCounterTask *)operator_new(0x48);
    pCVar2 = *(CharacterInstance **)((int)unaff_r5 + 0x54);
    DishToCounterTask::DishToCounterTask
              (this,pCVar2,*(Cafe **)((int)unaff_r5 + 0x14),*(Stove **)((int)unaff_r5 + 0x50));
    CharacterInstance::addTask(pCVar2,(Task *)this);
  }
  iVar1 = (**(code **)(**(int **)((int)unaff_r5 + 0x54) + 0x20))();
  if (iVar1 != 2) {
    FUN_0012f316();
    return;
  }
  CharacterCommandBar::removeButton(*(int *)((int)unaff_r5 + 0xac));
  CharacterCommandBar::addRestButton
            (*(CharacterCommandBar **)((int)unaff_r5 + 0xac),
             *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012f290),unaff_r5);
  FUN_0012f316();
  return;
}


