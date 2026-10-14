/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029edf4 LoadingGameState::layoutChanged */

/* LoadingGameState::layoutChanged() */

void __thiscall LoadingGameState::layoutChanged(LoadingGameState *this)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  String aSStack_90 [8];
  String aSStack_88 [8];
  char acStack_80 [100];
  int local_1c;
  
  piVar6 = *(int **)(DAT_0029eeb8 + 0x29ee00);
  local_1c = *piVar6;
  uVar2 = (**(code **)(**(int **)(this + 8) + 0x24))();
  if (*(int *)(this + 0xc) != 0) {
    if (this[0x14] == (LoadingGameState)0x0) {
      sprintf(acStack_80,(char *)(DAT_0029eec0 + 0x29ee34),uVar2);
    }
    else {
      sprintf(acStack_80,(char *)(DAT_0029eebc + 0x29ee26),100);
    }
  }
  String::String(aSStack_90,acStack_80);
  String::operator=((String *)(this + 0x18),aSStack_90);
  String::~String(aSStack_90);
  iVar3 = CapcomApp::getInstance();
  piVar7 = *(int **)(this + 0xc);
  iVar3 = *(int *)(iVar3 + 4);
  pcVar4 = *(code **)(*piVar7 + 4);
  String::String(aSStack_88,(String *)(this + 0x18));
  uVar2 = (*pcVar4)(piVar7,aSStack_88,0,0xffffffff);
  String::~String(aSStack_88);
  sVar1 = *(short *)(iVar3 + 0x12);
  iVar3 = __fixsfsi(uVar2);
  iVar5 = *piVar6;
  *(int *)(this + 0x20) = (sVar1 - iVar3) / 2;
  if (local_1c != iVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


