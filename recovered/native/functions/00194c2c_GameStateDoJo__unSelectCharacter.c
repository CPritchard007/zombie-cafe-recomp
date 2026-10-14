/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00194c2c GameStateDoJo::unSelectCharacter */

/* GameStateDoJo::unSelectCharacter(bool) */

void GameStateDoJo::unSelectCharacter(bool param_1)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  char acStack_11c [256];
  int local_1c;
  
  uVar1 = (uint)param_1;
  iVar4 = DAT_00194f1c + 0x194c38;
  piVar2 = *(int **)(iVar4 + DAT_00194f20);
  local_1c = *piVar2;
  *(undefined4 *)(uVar1 + 0x2c) = 0;
  *(undefined4 *)(uVar1 + 0x28) = 0xffffffff;
  if (*(int *)(uVar1 + 100) != 0) {
    L_PrintLog((char *)(DAT_00194f24 + 0x194c58),(char *)(DAT_00194f28 + 0x194c5a));
    piVar3 = *(int **)(iVar4 + DAT_00194f2c);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar3,*(TrueTypeTextElement **)(uVar1 + 100));
    (**(code **)(**(int **)(uVar1 + 0x14) + 0x34))
              (*(int **)(uVar1 + 0x14),*(undefined4 *)(uVar1 + 100));
    if (*(int **)(uVar1 + 100) != (int *)0x0) {
      (**(code **)(**(int **)(uVar1 + 100) + 4))();
    }
    *(undefined4 *)(uVar1 + 100) = 0;
    sprintf(acStack_11c,(char *)(DAT_00194f30 + 0x194c8e),*(int *)(*piVar3 + 4) + 1);
    L_PrintLog((char *)(DAT_00194f34 + 0x194c9a),acStack_11c);
  }
  if (*(int *)(uVar1 + 0x68) != 0) {
    L_PrintLog((char *)(DAT_00194f38 + 0x194caa),(char *)(DAT_00194f3c + 0x194cac));
    piVar3 = *(int **)(iVar4 + DAT_00194f2c);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar3,*(TrueTypeTextElement **)(uVar1 + 0x68));
    (**(code **)(**(int **)(uVar1 + 0x14) + 0x34))
              (*(int **)(uVar1 + 0x14),*(undefined4 *)(uVar1 + 0x68));
    if (*(int **)(uVar1 + 0x68) != (int *)0x0) {
      (**(code **)(**(int **)(uVar1 + 0x68) + 4))();
    }
    *(undefined4 *)(uVar1 + 0x68) = 0;
    sprintf(acStack_11c,(char *)(DAT_00194f40 + 0x194ce0),*(int *)(*piVar3 + 4) + 1);
    L_PrintLog((char *)(DAT_00194f44 + 0x194cec),acStack_11c);
  }
  if (*(int *)(uVar1 + 0x70) != 0) {
    L_PrintLog((char *)(DAT_00194f48 + 0x194cfc),(char *)(DAT_00194f4c + 0x194cfe));
    piVar3 = *(int **)(iVar4 + DAT_00194f2c);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar3,*(TrueTypeTextElement **)(uVar1 + 0x70));
    (**(code **)(**(int **)(uVar1 + 0x14) + 0x34))
              (*(int **)(uVar1 + 0x14),*(undefined4 *)(uVar1 + 0x70));
    if (*(int **)(uVar1 + 0x70) != (int *)0x0) {
      (**(code **)(**(int **)(uVar1 + 0x70) + 4))();
    }
    *(undefined4 *)(uVar1 + 0x70) = 0;
    sprintf(acStack_11c,(char *)(DAT_00194f50 + 0x194d32),*(int *)(*piVar3 + 4) + 1);
    L_PrintLog((char *)(DAT_00194f54 + 0x194d3e),acStack_11c);
  }
  if (*(int *)(uVar1 + 0x74) != 0) {
    L_PrintLog((char *)(DAT_00194f58 + 0x194d4e),(char *)(DAT_00194f5c + 0x194d50));
    piVar3 = *(int **)(iVar4 + DAT_00194f2c);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar3,*(TrueTypeTextElement **)(uVar1 + 0x74));
    (**(code **)(**(int **)(uVar1 + 0x14) + 0x34))
              (*(int **)(uVar1 + 0x14),*(undefined4 *)(uVar1 + 0x74));
    if (*(int **)(uVar1 + 0x74) != (int *)0x0) {
      (**(code **)(**(int **)(uVar1 + 0x74) + 4))();
    }
    *(undefined4 *)(uVar1 + 0x74) = 0;
    sprintf(acStack_11c,(char *)(DAT_00194f60 + 0x194d84),*(int *)(*piVar3 + 4) + 1);
    L_PrintLog((char *)(DAT_00194f64 + 0x194d90),acStack_11c);
  }
  if (*(int *)(uVar1 + 0x78) != 0) {
    L_PrintLog((char *)(DAT_00194f68 + 0x194da0),(char *)(DAT_00194f6c + 0x194da2));
    piVar3 = *(int **)(iVar4 + DAT_00194f2c);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar3,*(TrueTypeTextElement **)(uVar1 + 0x78));
    (**(code **)(**(int **)(uVar1 + 0x14) + 0x34))
              (*(int **)(uVar1 + 0x14),*(undefined4 *)(uVar1 + 0x78));
    if (*(int **)(uVar1 + 0x78) != (int *)0x0) {
      (**(code **)(**(int **)(uVar1 + 0x78) + 4))();
    }
    *(undefined4 *)(uVar1 + 0x78) = 0;
    sprintf(acStack_11c,(char *)(DAT_00194f70 + 0x194dd6),*(int *)(*piVar3 + 4) + 1);
    L_PrintLog((char *)(DAT_00194f74 + 0x194de2),acStack_11c);
  }
  if (*(int *)(uVar1 + 0x7c) != 0) {
    L_PrintLog((char *)(DAT_00194f78 + 0x194df2),(char *)(DAT_00194f7c + 0x194df4));
    piVar3 = *(int **)(iVar4 + DAT_00194f2c);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar3,*(TrueTypeTextElement **)(uVar1 + 0x7c));
    (**(code **)(**(int **)(uVar1 + 0x14) + 0x34))
              (*(int **)(uVar1 + 0x14),*(undefined4 *)(uVar1 + 0x7c));
    if (*(int **)(uVar1 + 0x7c) != (int *)0x0) {
      (**(code **)(**(int **)(uVar1 + 0x7c) + 4))();
    }
    *(undefined4 *)(uVar1 + 0x7c) = 0;
    sprintf(acStack_11c,(char *)(DAT_00194f80 + 0x194e28),*(int *)(*piVar3 + 4) + 1);
    L_PrintLog((char *)(DAT_00194f84 + 0x194e34),acStack_11c);
  }
  if (*(int *)(uVar1 + 0x80) != 0) {
    L_PrintLog((char *)(DAT_00194f88 + 0x194e46),(char *)(DAT_00194f8c + 0x194e48));
    piVar3 = *(int **)(iVar4 + DAT_00194f2c);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar3,*(TrueTypeTextElement **)(uVar1 + 0x80));
    (**(code **)(**(int **)(uVar1 + 0x14) + 0x34))
              (*(int **)(uVar1 + 0x14),*(undefined4 *)(uVar1 + 0x80));
    if (*(int **)(uVar1 + 0x80) != (int *)0x0) {
      (**(code **)(**(int **)(uVar1 + 0x80) + 4))();
    }
    *(undefined4 *)(uVar1 + 0x80) = 0;
    sprintf(acStack_11c,(char *)(DAT_00194f90 + 0x194e7e),*(int *)(*piVar3 + 4) + 1);
    L_PrintLog((char *)(DAT_00194f94 + 0x194e8a),acStack_11c);
  }
  if (*(int *)(uVar1 + 0x84) != 0) {
    L_PrintLog((char *)(DAT_00194f98 + 0x194e9e),(char *)(DAT_00194f9c + 0x194ea0));
    piVar3 = *(int **)(iVar4 + DAT_00194f2c);
    Vector<TrueTypeTextElement*>::removeElement
              ((Vector<TrueTypeTextElement*> *)*piVar3,*(TrueTypeTextElement **)(uVar1 + 0x84));
    (**(code **)(**(int **)(uVar1 + 0x14) + 0x34))
              (*(int **)(uVar1 + 0x14),*(undefined4 *)(uVar1 + 0x84));
    if (*(int **)(uVar1 + 0x84) != (int *)0x0) {
      (**(code **)(**(int **)(uVar1 + 0x84) + 4))();
    }
    *(undefined4 *)(uVar1 + 0x84) = 0;
    sprintf(acStack_11c,(char *)(DAT_00194fa0 + 0x194ed8),*(int *)(*piVar3 + 4) + 1);
    L_PrintLog((char *)(DAT_00194fa4 + 0x194ee4),acStack_11c);
  }
  if (*(int *)(uVar1 + 0x88) != 0) {
    (**(code **)(**(int **)(uVar1 + 0x14) + 0x34))();
    piVar3 = *(int **)(uVar1 + 0x88);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    *(undefined4 *)(uVar1 + 0x88) = 0;
  }
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


