/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001607cc GameStateLoading::layout */

/* GameStateLoading::layout() */

void __thiscall GameStateLoading::layout(GameStateLoading *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char acStack_11c [256];
  int local_1c;
  
  piVar2 = *(int **)(DAT_00160864 + 0x1607d8);
  local_1c = *piVar2;
  iVar1 = CapcomApp::getInstance();
  iVar3 = *(int *)(iVar1 + 4);
  iVar1 = *(int *)(iVar3 + 0x14);
  (**(code **)(**(int **)(this + 0x28) + 0x14))
            (*(int **)(this + 0x28),iVar1 >> 0x10,(int)(short)iVar1);
  iVar4 = *(int *)(this + 0x28);
  iVar1 = CapcomApp::getInstance();
  *(undefined4 *)(iVar4 + 0x68) = *(undefined4 *)(iVar1 + 0x40);
  iVar5 = *(int *)(this + 0x28);
  iVar4 = CapcomApp::getInstance();
  iVar1 = DAT_00160868;
  *(undefined4 *)(iVar5 + 0x6c) = *(undefined4 *)(iVar4 + 0x44);
  iVar4 = DAT_0016086c;
  iVar3 = *(int *)(iVar3 + 0x14);
  sprintf(acStack_11c,(char *)(iVar1 + 0x160810),iVar3 >> 0x10,(int)(short)iVar3);
  L_PrintLog((char *)(DAT_00160870 + 0x160824),acStack_11c);
  iVar1 = *(int *)(this + 0x28);
  uVar6 = __extendsfdf2(*(undefined4 *)(iVar1 + 0x68));
  uVar7 = __extendsfdf2(*(undefined4 *)(iVar1 + 0x6c));
  sprintf(acStack_11c,(char *)(iVar4 + 0x160822),(int)uVar6,(int)((ulonglong)uVar6 >> 0x20),
          (int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  L_PrintLog((char *)(DAT_00160874 + 0x160850),acStack_11c);
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


