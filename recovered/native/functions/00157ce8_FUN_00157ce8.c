/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00157ce8 FUN_00157ce8 */

void FUN_00157ce8(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  Vector<GatyaEftImageElement*> *pVVar5;
  GameStateGatya *unaff_r5;
  int iVar6;
  float fVar7;
  long in_stack_00000020;
  
  uVar1 = __floatsisf(in_stack_00000020);
  fVar7 = (float)__divsf3(uVar1,DAT_00157f84);
  fVar7 = (float)GameStateGatya::PlayEffectKeyAnimation_Back(unaff_r5,in_stack_00000020,fVar7);
  iVar2 = GameStateGatya::PlayEffectKeyAnimation_Birth(unaff_r5,fVar7);
  iVar3 = GameStateGatya::CheckTickWait((int)unaff_r5);
  if (iVar3 == 0) {
    FUN_00157ee8();
    return;
  }
  if (iVar2 != 0) {
    iVar2 = 0;
    if (*(int *)(unaff_r5 + 0x1e0) != 0) {
      for (; iVar3 = *(int *)(unaff_r5 + 0x1e0), iVar2 < *(int *)(iVar3 + 4) + 1; iVar2 = iVar2 + 1)
      {
        iVar6 = iVar2 * 4;
        (**(code **)(**(int **)(unaff_r5 + 0x1c) + 0x34))
                  (*(int **)(unaff_r5 + 0x1c),*(undefined4 *)(*(int *)(iVar3 + 8) + iVar6));
        piVar4 = *(int **)(*(int *)(*(int *)(*(int *)(unaff_r5 + 0x1e0) + 8) + iVar6) + 100);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 4))();
        }
        piVar4 = *(int **)(*(int *)(*(int *)(unaff_r5 + 0x1e0) + 8) + iVar6);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 4))();
        }
      }
      *(undefined4 *)(iVar3 + 4) = 0xffffffff;
    }
    pVVar5 = *(Vector<GatyaEftImageElement*> **)(unaff_r5 + 0x1e0);
    if (pVVar5 != (Vector<GatyaEftImageElement*> *)0x0) {
      Vector<GatyaEftImageElement*>::~Vector(pVVar5);
      operator_delete(pVVar5);
      *(undefined4 *)(unaff_r5 + 0x1e0) = 0;
    }
    iVar2 = 0;
    if (*(int *)(unaff_r5 + 0x1e4) != 0) {
      for (; iVar3 = *(int *)(unaff_r5 + 0x1e4), iVar2 < *(int *)(iVar3 + 4) + 1; iVar2 = iVar2 + 1)
      {
        iVar6 = iVar2 * 4;
        (**(code **)(**(int **)(unaff_r5 + 0x18) + 0x34))
                  (*(int **)(unaff_r5 + 0x18),*(undefined4 *)(*(int *)(iVar3 + 8) + iVar6));
        piVar4 = *(int **)(*(int *)(*(int *)(*(int *)(unaff_r5 + 0x1e4) + 8) + iVar6) + 100);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 4))();
        }
        piVar4 = *(int **)(*(int *)(*(int *)(unaff_r5 + 0x1e4) + 8) + iVar6);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 4))();
        }
      }
      *(undefined4 *)(iVar3 + 4) = 0xffffffff;
    }
    pVVar5 = *(Vector<GatyaEftImageElement*> **)(unaff_r5 + 0x1e4);
    if (pVVar5 != (Vector<GatyaEftImageElement*> *)0x0) {
      Vector<GatyaEftImageElement*>::~Vector(pVVar5);
      operator_delete(pVVar5);
      *(undefined4 *)(unaff_r5 + 0x1e4) = 0;
    }
    *(undefined4 *)(unaff_r5 + DAT_00157c00) = 0x11000;
    FUN_00157ee8();
    return;
  }
  FUN_00157ee8();
  return;
}


