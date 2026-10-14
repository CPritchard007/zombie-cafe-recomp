/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012ed1a FUN_0012ed1a */

void FUN_0012ed1a(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  CleanupTask *this;
  void *unaff_r5;
  CharacterInstance *this_00;
  int unaff_r7;
  
  *(undefined1 *)(*(int *)((int)unaff_r5 + 0xc) + DAT_0012ef24) = 1;
  if (*(int *)(*(int *)((int)unaff_r5 + 0x50) + 0x7c) != 0) {
    FUN_0012ff0e();
  }
  piVar1 = *(int **)((int)unaff_r5 + 0x54);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)FUN_0012ff0e();
  }
  if ((piVar1 != *(int **)((int)unaff_r5 + 0x18)) &&
     (iVar2 = (**(code **)(*piVar1 + 0x20))(), iVar2 != 2)) {
    FUN_0012ff0e();
  }
  if (0 < *(int *)(*(int *)(*(int *)((int)unaff_r5 + 0x54) + 0x8c) + 0x50)) {
    FUN_0012ff0e();
  }
  iVar2 = DAT_0012ef14;
  iVar3 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)((int)unaff_r5 + 0xc) + DAT_0012ef14),'\x05');
  if (iVar3 == 0) {
    FUN_0012fec2();
  }
  iVar2 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)((int)unaff_r5 + 0xc) + iVar2),'!');
  if (iVar2 == 0) {
    FUN_0012f316();
    return;
  }
  FUN_0012fec2();
  CharacterInstance::stopTasks(*(CharacterInstance **)((int)unaff_r5 + 0x54));
  this = (CleanupTask *)operator_new(0x44);
  this_00 = *(CharacterInstance **)((int)unaff_r5 + 0x54);
  CleanupTask::CleanupTask
            (this,this_00,*(Cafe **)((int)unaff_r5 + 0x14),*(Furniture **)((int)unaff_r5 + 0x50));
  CharacterInstance::addTask(this_00,(Task *)this);
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


