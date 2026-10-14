/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00181038 GameStateRaid::GameStateRaid */

/* GameStateRaid::GameStateRaid(int, int, bool, bool) */

void __thiscall
GameStateRaid::GameStateRaid(GameStateRaid *this,int param_1,int param_2,bool param_3,bool param_4)

{
  int iVar1;
  void *pvVar2;
  undefined4 extraout_r1;
  uint uVar3;
  int *piVar4;
  int iVar5;
  char acStack_11c [256];
  int local_1c;
  
  iVar5 = DAT_001812d0 + 0x18104e;
  piVar4 = *(int **)(iVar5 + DAT_001812d4);
  local_1c = *piVar4;
  ZombieCafeGameState::ZombieCafeGameState((ZombieCafeGameState *)this);
  *(int *)this = *(int *)(iVar5 + DAT_001812d8) + 8;
  Vector<CharacterInstance*>::Vector((Vector<CharacterInstance*> *)(this + 0xac));
  Vector<CharacterInstance*>::Vector((Vector<CharacterInstance*> *)(this + 0xb8));
  Vector<CharacterInstance*>::Vector((Vector<CharacterInstance*> *)(this + 0xc4));
  Vector<int>::Vector((Vector<int> *)(this + 0xd4));
  *(undefined4 *)(this + 0xe0) = 10;
  pvVar2 = operator_new__(0x28);
  *(void **)(this + 0xe8) = pvVar2;
  memset(pvVar2,0,*(int *)(this + 0xe0) << 2);
  *(undefined4 *)(this + 0xe4) = 0xffffffff;
  Vector<int>::Vector((Vector<int> *)(this + 0xec));
  Vector<CharacterInstance*>::Vector((Vector<CharacterInstance*> *)(this + 0xfc));
  Vector<int>::Vector((Vector<int> *)(this + 0x108));
  *(undefined4 *)(this + 0x120) = 10;
  pvVar2 = operator_new__(0x28);
  *(void **)(this + 0x128) = pvVar2;
  memset(pvVar2,0,*(int *)(this + 0x120) << 2);
  *(undefined4 *)(this + 0x124) = 0xffffffff;
  sprintf(acStack_11c,(char *)(DAT_001812dc + 0x18110e),param_1,param_2);
  L_PrintLog((char *)(DAT_001812e0 + 0x18111a),acStack_11c);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  this[0x38] = (GameStateRaid)0x0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  this[100] = (GameStateRaid)0x0;
  this[0x65] = (GameStateRaid)0x0;
  this[0x66] = (GameStateRaid)0x0;
  *(undefined4 *)(this + 0x68) = 0;
  this[0x6c] = (GameStateRaid)0x0;
  *(undefined4 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x74) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(undefined4 *)(this + 0x7c) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  *(undefined4 *)(this + 0x9c) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  this[0xa0] = (GameStateRaid)0x0;
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 300) = 0;
  this[0x130] = (GameStateRaid)0x0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  this[0x15c] = (GameStateRaid)0x0;
  this[DAT_001812e4] = (GameStateRaid)0x0;
  this[0x15e] = (GameStateRaid)0x0;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  iVar1 = DAT_001812e8;
  *(int *)(this + 0x48) = param_1;
  __aeabi_idivmod(param_1,**(undefined1 **)(iVar5 + iVar1));
  iVar1 = DAT_001812ec;
  *(undefined4 *)(this + 0x4c) = extraout_r1;
  *(int *)(this + 0x50) = param_2;
  uVar3 = param_1;
  if ((int)(uint)**(byte **)(iVar5 + iVar1) < param_1) {
    uVar3 = (uint)**(byte **)(iVar5 + iVar1);
  }
  *(uint *)(this + 0x54) = uVar3;
  this[0x15] = (GameStateRaid)0x0;
  this[0x16] = (GameStateRaid)0x0;
  if (param_3) {
    this[0x15] = (GameStateRaid)0x1;
    if (3 < param_1 - 1U) {
      *(undefined4 *)(this + 0x48) = 1;
      *(undefined4 *)(this + 0x54) = 1;
    }
  }
  else if (param_4) {
    this[0x16] = (GameStateRaid)0x1;
  }
  iVar1 = DAT_001812f0;
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = **(undefined4 **)(iVar5 + iVar1);
  iVar1 = DAT_001812f4;
  *(undefined4 *)(this + 300) = 0;
  this[0x11] = (GameStateRaid)0x0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  sprintf(acStack_11c,(char *)(iVar1 + 0x181242),param_1,*(undefined4 *)(this + 0x54));
  L_PrintLog((char *)(DAT_001812f8 + 0x181252),acStack_11c);
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}


