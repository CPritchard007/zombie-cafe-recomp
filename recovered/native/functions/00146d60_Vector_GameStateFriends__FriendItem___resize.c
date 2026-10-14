/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00146d60 Vector<GameStateFriends::FriendItem>::resize */

/* Vector<GameStateFriends::FriendItem>::resize(int, int) */

void __thiscall
Vector<GameStateFriends::FriendItem>::resize
          (Vector<GameStateFriends::FriendItem> *this,int param_1,int param_2)

{
  undefined4 *__s;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_2c;
  int local_28;
  int local_20;
  int local_1c;
  
  if (param_1 < 1) {
    *(undefined4 *)(this + 4) = 0xffffffff;
    param_1 = 1;
  }
  local_2c = param_2;
  if (*(int *)(this + 4) < param_2) {
    local_2c = -1;
  }
  __s = (undefined4 *)operator_new__(param_1 * 0x18);
  iVar1 = 0;
  puVar2 = __s;
  do {
    iVar1 = iVar1 + 1;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2 = puVar2 + 6;
  } while (iVar1 != param_1);
  memset(__s,0,param_1 * 0x18);
  local_20 = *(int *)(this + 4) + 1;
  if (local_2c == -1) {
    if (param_1 < local_20) {
      *(int *)(this + 4) = param_1 + -1;
      local_20 = param_1;
    }
    local_28 = 0;
    for (local_1c = 0; local_1c < local_20; local_1c = local_1c + 1) {
      puVar3 = (undefined4 *)(*(int *)(this + 8) + local_28);
      puVar2 = (undefined4 *)(local_28 + (int)__s);
      uVar4 = puVar3[1];
      uVar5 = puVar3[2];
      *puVar2 = *puVar3;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      uVar4 = puVar3[4];
      uVar5 = puVar3[5];
      puVar2[3] = puVar3[3];
      puVar2[4] = uVar4;
      puVar2[5] = uVar5;
      local_28 = local_28 + 0x18;
    }
  }
  else {
    if (param_1 < local_20) {
      *(int *)(this + 4) = param_1 + -1;
      local_20 = param_1;
    }
    local_28 = 0;
    for (iVar1 = 0; iVar1 < local_2c; iVar1 = iVar1 + 1) {
      puVar2 = (undefined4 *)((int)__s + local_28);
      puVar3 = (undefined4 *)(*(int *)(this + 8) + local_28);
      uVar4 = puVar3[1];
      uVar5 = puVar3[2];
      *puVar2 = *puVar3;
      puVar2[1] = uVar4;
      puVar2[2] = uVar5;
      uVar4 = puVar3[4];
      uVar5 = puVar3[5];
      puVar2[3] = puVar3[3];
      puVar2[4] = uVar4;
      puVar2[5] = uVar5;
      local_28 = local_28 + 0x18;
    }
    local_28 = local_2c * 0x18;
    for (local_1c = 0; local_1c < local_20 - local_2c; local_1c = local_1c + 1) {
      puVar2 = (undefined4 *)(*(int *)(this + 8) + local_28);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      *(undefined4 *)((int)__s + local_28 + 0x18) = *puVar2;
      *(undefined4 *)((int)__s + local_28 + 0x1c) = uVar4;
      *(undefined4 *)((int)__s + local_28 + 0x20) = uVar5;
      uVar4 = puVar2[4];
      uVar5 = puVar2[5];
      *(undefined4 *)((int)__s + local_28 + 0x24) = puVar2[3];
      *(undefined4 *)((int)__s + local_28 + 0x28) = uVar4;
      *(undefined4 *)((int)__s + local_28 + 0x2c) = uVar5;
      local_28 = local_28 + 0x18;
    }
  }
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  *(undefined4 **)(this + 8) = __s;
  *(int *)this = param_1;
  return;
}


