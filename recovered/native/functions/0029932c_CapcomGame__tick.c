/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029932c CapcomGame::tick */

/* CapcomGame::tick(long) */

undefined8 CapcomGame::tick(long param_1)

{
  undefined4 uVar1;
  undefined4 in_r1;
  char *__src;
  GameState *this;
  int *piVar2;
  char acStack_21c [256];
  char acStack_11c [248];
  long lStack_24;
  undefined4 uStack_20;
  int local_1c;
  
  piVar2 = *(int **)(DAT_002993d8 + 0x299338);
  local_1c = *piVar2;
  if (*(int *)(param_1 + 8) == 0) {
    __src = (char *)(DAT_002993e0 + 0x299350);
  }
  else {
    __src = (char *)(DAT_002993dc + 0x29934a);
  }
  lStack_24 = param_1;
  uStack_20 = in_r1;
  strcpy(acStack_21c,__src);
  if (*(int **)(param_1 + 0xc) == (int *)0x0) {
    sprintf(acStack_11c,(char *)(DAT_002993e8 + 0x29937a),in_r1);
  }
  else {
    uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x20))();
    sprintf(acStack_11c,(char *)(DAT_002993e4 + 0x29936a),in_r1,uVar1);
  }
  this = *(GameState **)(param_1 + 8);
  if (*(int *)(param_1 + 0xc) == 0) {
    (*(code *)**(undefined4 **)this)(this,in_r1);
  }
  else {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 0xc);
    (**(code **)(*(int *)param_1 + 0x48))(param_1,this);
    GameState::releaseHandle(this);
    if (*(char *)((int)*(int **)(param_1 + 8) + 5) == '\0') {
      (**(code **)(**(int **)(param_1 + 8) + 8))();
    }
    (**(code **)(**(int **)(param_1 + 8) + 0x10))();
    (**(code **)**(undefined4 **)(param_1 + 8))(*(undefined4 **)(param_1 + 8),1);
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return CONCAT44(uStack_20,lStack_24);
}


