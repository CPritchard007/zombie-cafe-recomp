/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ff4a8 FriendCafeHudElement::setButtonAvailability */

/* FriendCafeHudElement::setButtonAvailability(int, bool) */

void __thiscall
FriendCafeHudElement::setButtonAvailability(FriendCafeHudElement *this,int param_1,bool param_2)

{
  int *piVar1;
  FriendCafeHudElement *pFVar2;
  
  if (param_1 == 10) {
    pFVar2 = this + 0xa4;
  }
  else if (param_1 == 0xb) {
    pFVar2 = this + 0xd0;
    (**(code **)(**(int **)(this + 0xa8) + 0x20))(*(int **)(this + 0xa8),param_2);
  }
  else if (param_1 == 0xc) {
    pFVar2 = this + 0xd4;
    (**(code **)(**(int **)(this + 0xac) + 0x20))(*(int **)(this + 0xac),param_2);
  }
  else if (param_1 == 0xe) {
    pFVar2 = this + 0xd8;
    (**(code **)(**(int **)(this + 0xb0) + 0x20))(*(int **)(this + 0xb0),param_2);
  }
  else {
    if (param_1 != 0xd) {
      piVar1 = *(int **)(param_1 * 4 + *(int *)(this + 0x84));
      (**(code **)(*piVar1 + 0x20))(piVar1,param_2);
      if (param_1 == 3) {
        (**(code **)(**(int **)(this + 0xec) + 0x20))(*(int **)(this + 0xec),param_2);
      }
      layout(this);
      return;
    }
    pFVar2 = this + 0xb4;
    (**(code **)(**(int **)(this + 0xdc) + 0x20))(*(int **)(this + 0xdc),param_2);
  }
  (**(code **)(**(int **)pFVar2 + 0x20))(*(int **)pFVar2,param_2);
  return;
}


