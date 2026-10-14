/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00157eb6 FUN_00157eb6 */

void FUN_00157eb6(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int unaff_r5;
  GatyaEftImageElement *this;
  float fVar4;
  int in_stack_00000020;
  
  this = *(GatyaEftImageElement **)(param_1 + 0x1d4);
  uVar1 = __floatsisf(in_stack_00000020);
  fVar4 = (float)__divsf3(uVar1,DAT_00157f84);
  iVar2 = GatyaEftImageElement::PlayEffectKeyAnimation(this,fVar4);
  if (iVar2 == 0) {
    iVar2 = 0;
    *(int *)(unaff_r5 + DAT_00157fa0) = *(int *)(unaff_r5 + DAT_00157fa0) + 1;
    if (*(int *)(unaff_r5 + 0x1d8) != 0) {
      for (; iVar2 < *(int *)(*(int *)(unaff_r5 + 0x1d8) + 4) + 1; iVar2 = iVar2 + 1) {
        GatyaEftCharacterInstance::TickAnimation
                  (*(GatyaEftCharacterInstance **)
                    (*(int *)(*(int *)(unaff_r5 + 0x1d8) + 8) + iVar2 * 4),in_stack_00000020);
        piVar3 = *(int **)(*(int *)(*(int *)(unaff_r5 + 0x1d8) + 8) + iVar2 * 4);
        (**(code **)(*piVar3 + 0x1c))(piVar3,in_stack_00000020);
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
  FUN_00157ee6();
  return;
}


