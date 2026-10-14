/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012ec62 FUN_0012ec62 */

void FUN_0012ec62(void)

{
  int unaff_r5;
  CharacterInstance *unaff_r6;
  
  if (*(char *)(*(int *)(unaff_r6 + 0x8c) + 0x44) == '\x05') {
    if (*(StatusNote **)(unaff_r6 + 0x30) != (StatusNote *)0x0) {
      Cafe::removeStatusNote(*(Cafe **)(unaff_r5 + 0x14),*(StatusNote **)(unaff_r6 + 0x30));
      if (*(int **)(unaff_r6 + 0x30) != (int *)0x0) {
        (**(code **)(**(int **)(unaff_r6 + 0x30) + 4))();
        *(undefined4 *)(unaff_r6 + 0x30) = 0;
      }
    }
    CharacterInstance::stopTasks(unaff_r6);
    TutorialSystem::triggerEvent
              (*(TutorialSystem **)(*(int *)(unaff_r5 + 0xc) + DAT_0012ef14),'=',true);
  }
  *(undefined1 *)(*(int *)(unaff_r5 + 0xc) + DAT_0012ef24) = 1;
  FUN_0012f41e();
  return;
}


