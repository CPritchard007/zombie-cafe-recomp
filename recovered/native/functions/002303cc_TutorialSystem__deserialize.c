/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002303cc TutorialSystem::deserialize */

/* TutorialSystem::deserialize(DataInputStream*) */

void __thiscall TutorialSystem::deserialize(TutorialSystem *this,DataInputStream *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  TutorialSystem *local_134;
  char acStack_11c [256];
  int local_1c;
  
  piVar4 = *(int **)(DAT_002304b4 + 0x2303d8);
  local_1c = *piVar4;
  iVar1 = CapcomApp::getInstance();
  iVar5 = DAT_002304b8;
  iVar2 = *(int *)(iVar1 + 4);
  iVar1 = 0;
  do {
    iVar3 = iVar1 + 0x14;
    this[iVar1 + 0x10] = (TutorialSystem)0x0;
    iVar1 = iVar3;
  } while (iVar3 != iVar5);
  iVar5 = 0x47;
  if (0x2a < **(int **)(DAT_002304bc + 0x230400)) {
    iVar5 = DataInputStream::readShort(param_1);
  }
  memset(acStack_11c,0,0x100);
  sprintf(acStack_11c,(char *)(DAT_002304c0 + 0x230426),iVar5);
  L_PrintLog((char *)(DAT_002304c4 + 0x230432),acStack_11c);
  local_134 = this;
  for (iVar1 = 0; iVar1 < iVar5; iVar1 = iVar1 + 1) {
    iVar3 = DataInputStream::readByte(param_1);
    local_134[0x10] = (TutorialSystem)(iVar3 != 0);
    memset(acStack_11c,0,0x100);
    sprintf(acStack_11c,(char *)(DAT_002304c8 + 0x230464),iVar1,(uint)(iVar3 != 0));
    L_PrintLog((char *)(DAT_002304cc + 0x230472),acStack_11c);
    local_134 = local_134 + 0x14;
  }
  if (8 < *(int *)(iVar2 + 0x680)) {
    setTutorialCompleted(this,'\"');
    setTutorialCompleted(this,'P');
    setTutorialCompleted(this,'O');
  }
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


