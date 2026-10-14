/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00140b0c GameStateFriendCafe::deserializeGame */

/* GameStateFriendCafe::deserializeGame(InputStream*) */

undefined4 __thiscall
GameStateFriendCafe::deserializeGame(GameStateFriendCafe *this,InputStream *param_1)

{
  DataInputStream *this_00;
  ZombieCafe *this_01;
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  Vector<Character*> *this_02;
  
  this_00 = (DataInputStream *)operator_new(8);
  DataInputStream::DataInputStream(this_00,param_1);
  this_01 = (ZombieCafe *)
            ZombieCafe::makeForUserData
                      (*(ZombieCafe **)(this + 0xc),(InputStream *)this_00,false,0x17,0x38);
  if ((this_01 == (ZombieCafe *)0x0) || (0x7c < **(int **)(DAT_00140c84 + 0x140b3c))) {
    if (this_00 == (DataInputStream *)0x0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      (**(code **)(*(int *)this_00 + 4))(this_00);
    }
  }
  else {
    *(undefined4 *)(this + 0x204) = *(undefined4 *)(this_01 + 0x880);
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(this_01 + 0x688);
    uVar4 = ZombieCafe::getToxin(this_01);
    *(undefined4 *)(this + 0x1ec) = uVar4;
    *(undefined4 *)(this + 0x1f0) = *(undefined4 *)(this_01 + DAT_00140c88);
    *(undefined4 *)(this + 0x14) = *(undefined4 *)(this_01 + 0x680);
    *(undefined4 *)(this + 500) = *(undefined4 *)(this_01 + DAT_00140c8c);
    this[DAT_00140c90] = SUB41(*(undefined4 *)(this_01 + 0x690),0);
    *(undefined4 *)(this + 0x1fc) = *(undefined4 *)(this_01 + DAT_00140c94);
    *(undefined4 *)(this + 0x200) = *(undefined4 *)(this_01 + 0x6a8);
    *(undefined4 *)(this + 0xbc) = *(undefined4 *)(this_01 + 0x590);
    *(undefined4 *)(this_01 + 0x590) = 0;
    iVar3 = *(int *)(this_01 + DAT_00140c98);
    if (*(int *)(this + 0x24) < iVar3) {
      iVar1 = *(int *)(this + 0x24) * 2;
      if (iVar1 < iVar3) {
        iVar1 = iVar3;
      }
      Vector<Character*>::resize((Vector<Character*> *)(this + 0x24),iVar1,-1);
    }
    this_02 = (Vector<Character*> *)(this_01 + DAT_00140c98);
    while (-1 < *(int *)(this_02 + 4)) {
      iVar3 = **(int **)(this_02 + 8);
      **(int **)(this_02 + 8) = 0;
      Vector<Character*>::move(this_02,1,-1);
      *(int *)(this_02 + 4) = *(int *)(this_02 + 4) + -1;
      if (iVar3 == 0) break;
      iVar1 = *(int *)(this + 0x28) + 2;
      if (*(int *)(this + 0x24) < iVar1) {
        iVar2 = *(int *)(this + 0x24) * 2;
        if (iVar2 < iVar1) {
          iVar2 = iVar1;
        }
        Vector<Character*>::resize((Vector<Character*> *)(this + 0x24),iVar2,-1);
      }
      iVar1 = *(int *)(this + 0x28);
      *(int *)(this + 0x28) = iVar1 + 1;
      *(int *)((iVar1 + 1) * 4 + *(int *)(this + 0x2c)) = iVar3;
    }
    operator_delete(*(void **)(this + 0x20c));
    *(undefined4 *)(this + 0x208) = *(undefined4 *)(this_01 + 0x18);
    *(undefined4 *)(this + 0x20c) = *(undefined4 *)(this_01 + 0x1c);
    *(undefined4 *)(this_01 + 0x1c) = 0;
    this[0xc2] = *(GameStateFriendCafe *)(this_01 + 0x950);
    uVar4 = 1;
    (**(code **)(*(int *)this_01 + 4))(this_01);
    if (this_00 != (DataInputStream *)0x0) {
      (**(code **)(*(int *)this_00 + 4))(this_00);
    }
  }
  return uVar4;
}


