/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00157eda FUN_00157eda */

void FUN_00157eda(GameStateGatya *param_1)

{
  int *piVar1;
  int unaff_r4;
  int iVar2;
  int unaff_r5;
  int in_stack_00000020;
  
  GameStateGatya::uninitEffectScreen(param_1);
  *(undefined1 *)(unaff_r5 + DAT_00157f9c) = 2;
  *(undefined4 *)(unaff_r5 + unaff_r4) = 0;
  iVar2 = 0;
  *(int *)(unaff_r5 + DAT_00157fa0) = *(int *)(unaff_r5 + DAT_00157fa0) + 1;
  if (*(int *)(unaff_r5 + 0x1d8) != 0) {
    for (; iVar2 < *(int *)(*(int *)(unaff_r5 + 0x1d8) + 4) + 1; iVar2 = iVar2 + 1) {
      GatyaEftCharacterInstance::TickAnimation
                (*(GatyaEftCharacterInstance **)
                  (*(int *)(*(int *)(unaff_r5 + 0x1d8) + 8) + iVar2 * 4),in_stack_00000020);
      piVar1 = *(int **)(*(int *)(*(int *)(unaff_r5 + 0x1d8) + 8) + iVar2 * 4);
      (**(code **)(*piVar1 + 0x1c))(piVar1,in_stack_00000020);
    }
  }
  iVar2 = 0;
  if (*(int *)(unaff_r5 + 0x1dc) != 0) {
    for (; iVar2 < *(int *)(*(int *)(unaff_r5 + 0x1dc) + 4) + 1; iVar2 = iVar2 + 1) {
      GatyaEftCharacterInstance::TickAnimation
                (*(GatyaEftCharacterInstance **)
                  (iVar2 * 4 + *(int *)(*(int *)(unaff_r5 + 0x1dc) + 8)),in_stack_00000020);
    }
  }
  if (*(ImageElement **)(unaff_r5 + 0x1b0) != (ImageElement *)0x0) {
    ImageElement::updateColor(*(ImageElement **)(unaff_r5 + 0x1b0));
  }
  if (*(ImageElement **)(unaff_r5 + 0x1d4) != (ImageElement *)0x0) {
    ImageElement::updateColor(*(ImageElement **)(unaff_r5 + 0x1d4));
  }
  iVar2 = 0;
  if (*(int *)(unaff_r5 + 0x1d0) != 0) {
    for (; iVar2 < *(int *)(*(int *)(unaff_r5 + 0x1d0) + 4) + 1; iVar2 = iVar2 + 1) {
      GatyaEftFallImageElement::TickFall
                (*(GatyaEftFallImageElement **)
                  (iVar2 * 4 + *(int *)(*(int *)(unaff_r5 + 0x1d0) + 8)),in_stack_00000020);
    }
  }
  return;
}


