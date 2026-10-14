/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012ee94 FUN_0012ee94 */

void FUN_0012ee94(void)

{
  CharacterInstance *pCVar1;
  int iVar2;
  CookTask *this;
  void *unaff_r5;
  int unaff_r7;
  
  CharacterCommandBar::removeButton(*(int *)((int)unaff_r5 + 0xac));
  CharacterCommandBar::addRestButton
            (*(CharacterCommandBar **)((int)unaff_r5 + 0xac),
             *(_func_void_void_ptr_ScreenElement_ptr **)(unaff_r7 + DAT_0012ef28),unaff_r5);
  pCVar1 = (CharacterInstance *)FUN_0012ff08();
  iVar2 = CharacterInstance::getTaskTarget(pCVar1);
  if (iVar2 == *(int *)((int)unaff_r5 + 0x50)) {
    FUN_0012ff0e();
  }
  CharacterInstance::stopTasks(*(CharacterInstance **)((int)unaff_r5 + 0x54));
  this = (CookTask *)operator_new(0x34);
  pCVar1 = *(CharacterInstance **)((int)unaff_r5 + 0x54);
  CookTask::CookTask(this,pCVar1,*(Stove **)((int)unaff_r5 + 0x50),*(Cafe **)((int)unaff_r5 + 0x14))
  ;
  CharacterInstance::addTask(pCVar1,(Task *)this);
  iVar2 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)((int)unaff_r5 + 0xc) + DAT_0012ef14),'\x03');
  if (iVar2 == 0) {
    Task::addFinishedListener
              ((Task *)this,*(_func_void_void_ptr_Task_ptr **)(unaff_r7 + DAT_0012ef2c),unaff_r5);
  }
  *(undefined1 *)(*(int *)(*(int *)((int)unaff_r5 + 0x54) + 0x8c) + 0x44) = 2;
  iVar2 = (**(code **)(**(int **)((int)unaff_r5 + 0x54) + 0x20))();
  if (iVar2 != 2) {
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


