/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029eec4 LoadingGameState::tick */

/* LoadingGameState::tick(long) */

void __thiscall LoadingGameState::tick(LoadingGameState *this,long param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  char acStack_80 [100];
  int local_1c;
  
  piVar4 = *(int **)(DAT_0029ef78 + 0x29eed0);
  local_1c = *piVar4;
  if (this[0x24] == (LoadingGameState)0x0) {
    iVar3 = *(int *)(this + 0x10);
    *(int *)(this + 0x10) = iVar3 - param_1;
    if (iVar3 - param_1 < 0) {
      *(undefined4 *)(this + 0x10) = 0;
    }
    iVar3 = (**(code **)(**(int **)(this + 8) + 8))();
    if (*(int *)(this + 0xc) != 0) {
      iVar1 = (**(code **)(**(int **)(this + 8) + 0x20))();
      uVar2 = (**(code **)(**(int **)(this + 8) + 0x24))();
      if (this[0x14] == (LoadingGameState)0x0) {
        sprintf(acStack_80,(char *)(DAT_0029ef80 + 0x29ef3a),iVar1);
      }
      else {
        uVar2 = __divsi3(iVar1 * 100,uVar2);
        sprintf(acStack_80,(char *)(DAT_0029ef7c + 0x29ef2a),uVar2);
      }
      String::operator=((String *)(this + 0x18),acStack_80);
    }
    if (iVar3 != 0) {
      *(undefined1 *)(*(int *)(this + 8) + 5) = 1;
      iVar3 = CapcomApp::getInstance();
      CapcomGame::setNextState(*(CapcomGame **)(iVar3 + 4),*(GameState **)(this + 8));
      GameState::releaseHandle(*(GameState **)(this + 8));
      *(undefined4 *)(this + 8) = 0;
    }
  }
  else {
    this[0x24] = (LoadingGameState)0x0;
  }
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


