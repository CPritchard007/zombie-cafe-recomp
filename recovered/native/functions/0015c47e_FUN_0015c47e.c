/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015c47e FUN_0015c47e */

void FUN_0015c47e(void)

{
  int *piVar1;
  int iVar2;
  int unaff_r4;
  GameStateGatya *unaff_r5;
  int unaff_r7;
  int in_stack_00000018;
  
  do {
    piVar1 = *(int **)(in_stack_00000018 + 0x214);
    if ((piVar1 != (int *)0x0) &&
       (iVar2 = (**(code **)(*piVar1 + 0x10))
                          (piVar1,*(undefined4 *)(*(int *)(unaff_r5 + 0xc) + unaff_r4)), iVar2 != 0)
       ) {
      GameStateGatya::selectCharacter(unaff_r5,unaff_r7);
    }
    unaff_r7 = unaff_r7 + 1;
    in_stack_00000018 = in_stack_00000018 + 4;
  } while (unaff_r7 != 0xaa);
  FUN_0015c58a();
  return;
}


