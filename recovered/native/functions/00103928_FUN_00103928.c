/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00103928 FUN_00103928 */

ScreenElement * FUN_00103928(ScreenElement *param_1)

{
  int iVar1;
  
  *(int *)param_1 = *(int *)(DAT_001039b4 + 0x10393c) + 8;
  free(*(void **)(param_1 + 0x84));
  *(undefined4 *)(param_1 + 0x84) = 0;
  if (param_1[0x80] == (ScreenElement)0x0) {
    free(*(void **)(param_1 + 0x94));
    *(undefined4 *)(param_1 + 0x94) = 0;
  }
  iVar1 = *(int *)(DAT_001039b8 + 0x103968);
  if (*(int **)(param_1 + 0x74) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x74) + 4))();
  }
  if (*(int **)(param_1 + 0x70) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x70) + 4))();
  }
  if (*(int **)(param_1 + 0x78) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x78) + 4))();
  }
  if (*(int **)(param_1 + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x7c) + 4))();
  }
  *(int *)param_1 = iVar1 + 8;
  ScreenElement::~ScreenElement(param_1);
  return param_1;
}


