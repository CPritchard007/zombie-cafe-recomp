/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011f878 GameStateCafe::exitEditModes */

/* GameStateCafe::exitEditModes() */

void GameStateCafe::exitEditModes(void)

{
  int in_r0;
  int *piVar1;
  int iVar2;
  CapcomLinkedList<short> *pCVar3;
  
  *(undefined1 *)(in_r0 + DAT_0011f8ec) = 0;
  iVar2 = *(int *)(in_r0 + 0x84);
  *(undefined1 *)(iVar2 + 100) = 0;
  *(undefined4 *)(iVar2 + 0xd0) = 0;
  (**(code **)(**(int **)(in_r0 + 0x84) + 0x20))(*(int **)(in_r0 + 0x84),1);
  iVar2 = *(int *)(in_r0 + 0xbc);
  *(undefined1 *)(iVar2 + 100) = 0;
  *(undefined4 *)(iVar2 + 0xe4) = 0;
  piVar1 = *(int **)(in_r0 + 0xbc);
  (**(code **)(*piVar1 + 0x20))(piVar1,1);
  pCVar3 = *(CapcomLinkedList<short> **)(in_r0 + 0x158);
  if (pCVar3 != (CapcomLinkedList<short> *)0x0) {
    CapcomLinkedList<short>::~CapcomLinkedList(pCVar3);
    operator_delete(pCVar3);
    *(undefined4 *)(in_r0 + 0x158) = 0;
  }
  pCVar3 = *(CapcomLinkedList<short> **)(in_r0 + 0x15c);
  if (pCVar3 != (CapcomLinkedList<short> *)0x0) {
    CapcomLinkedList<short>::~CapcomLinkedList(pCVar3);
    operator_delete(pCVar3);
    *(undefined4 *)(in_r0 + 0x15c) = 0;
  }
  return;
}


