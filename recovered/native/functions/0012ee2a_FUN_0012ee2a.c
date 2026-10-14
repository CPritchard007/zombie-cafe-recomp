/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012ee2a FUN_0012ee2a */

void FUN_0012ee2a(void)

{
  CleanupTask *this;
  int iVar1;
  void *unaff_r5;
  CharacterInstance *this_00;
  int unaff_r7;
  
  CharacterInstance::stopTasks(*(CharacterInstance **)((int)unaff_r5 + 0x54));
  this = (CleanupTask *)operator_new(0x44);
  this_00 = *(CharacterInstance **)((int)unaff_r5 + 0x54);
  CleanupTask::CleanupTask
            (this,this_00,*(Cafe **)((int)unaff_r5 + 0x14),*(Furniture **)((int)unaff_r5 + 0x50));
  CharacterInstance::addTask(this_00,(Task *)this);
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


