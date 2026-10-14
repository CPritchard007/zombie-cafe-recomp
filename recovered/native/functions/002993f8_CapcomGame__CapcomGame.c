/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002993f8 CapcomGame::CapcomGame */

/* CapcomGame::CapcomGame() */

void __thiscall CapcomGame::CapcomGame(CapcomGame *this)

{
  undefined4 uVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  char acStack_11c [256];
  int local_1c;
  
  piVar5 = *(int **)(DAT_00299484 + 0x299404);
  local_1c = *piVar5;
  pcVar3 = (char *)(DAT_00299488 + 0x29940c);
  *(int *)this = *(int *)(DAT_0029948c + 0x299412) + 8;
  L_PrintLog((char *)(DAT_00299490 + 0x29941c),pcVar3);
  uVar1 = CapcomApp::getInstance();
  *(undefined4 *)(this + 4) = uVar1;
  piVar2 = (int *)operator_new(8);
  *piVar2 = *(int *)(DAT_00299494 + 0x299430) + 8;
  *(undefined1 *)(piVar2 + 1) = 0;
  *(undefined1 *)((int)piVar2 + 5) = 0;
  *(int **)(this + 8) = piVar2;
  *(char *)(piVar2 + 1) = (char)piVar2[1] + '\x01';
  *(undefined4 *)(this + 0xc) = 0;
  iVar6 = *(int *)(*(int *)(this + 4) + 0x70) >> 0x10;
  iVar4 = (int)(short)*(int *)(*(int *)(this + 4) + 0x70);
  sizeChanged(this,iVar6,iVar4);
  sprintf(acStack_11c,(char *)(DAT_00299498 + 0x299462),iVar6,iVar4);
  L_PrintLog((char *)(DAT_0029949c + 0x29946e),acStack_11c);
  if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


