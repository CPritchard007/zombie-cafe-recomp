/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001609e8 GameStateLoading::uninit */

/* GameStateLoading::uninit() */

void __thiscall GameStateLoading::uninit(GameStateLoading *this)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  char acStack_114 [256];
  int local_14;
  
  piVar5 = *(int **)(DAT_00160ab0 + 0x1609f4);
  pcVar2 = (char *)(DAT_00160ab4 + 0x1609f8);
  local_14 = *piVar5;
  L_PrintLog(pcVar2,pcVar2);
  L_PrintLog(pcVar2,pcVar2);
  L_PrintLog((char *)(DAT_00160ab8 + 0x160a12),(char *)(DAT_00160ab8 + 0x160a12));
  iVar1 = CapcomApp::getInstance();
  *(undefined1 *)(*(int *)(iVar1 + 4) + DAT_00160abc) = 0;
  L_PrintLog(pcVar2,pcVar2);
  L_PrintLog(pcVar2,pcVar2);
  if (*(int *)(this + 0x28) != 0) {
    puVar3 = (undefined4 *)(DAT_00160ac8 + 0x160a46);
    L_PrintLog((char *)(DAT_00160ac0 + 0x160a42),(char *)(DAT_00160ac4 + 0x160a44));
    piVar4 = (int *)*puVar3;
    Vector<CImage*>::removeElement
              ((Vector<CImage*> *)*piVar4,*(CImage **)(*(int *)(this + 0x28) + 100));
    if (*(int **)(*(int *)(this + 0x28) + 100) != (int *)0x0) {
      (**(code **)(**(int **)(*(int *)(this + 0x28) + 100) + 4))();
    }
    if (*(int **)(this + 0x28) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x28) + 4))();
    }
    *(undefined4 *)(this + 0x28) = 0;
    sprintf(acStack_114,(char *)(DAT_00160acc + 0x160a7e),*(int *)(*piVar4 + 4) + 1);
    L_PrintLog((char *)(DAT_00160ad0 + 0x160a8a),acStack_114);
  }
  iVar1 = CapcomApp::getInstance();
  *(undefined1 *)(*(int *)(iVar1 + 4) + DAT_00160ad4) = 1;
  LoadingGameState::uninit((LoadingGameState *)this);
  if (local_14 != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


