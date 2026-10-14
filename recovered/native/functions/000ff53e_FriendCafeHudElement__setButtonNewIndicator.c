/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ff53e FriendCafeHudElement::setButtonNewIndicator */

/* FriendCafeHudElement::setButtonNewIndicator(int, bool) */

void __thiscall
FriendCafeHudElement::setButtonNewIndicator(FriendCafeHudElement *this,int param_1,bool param_2)

{
  code *pcVar1;
  int *piVar2;
  
  if (param_1 == 10) {
    piVar2 = *(int **)(this + 0xc0);
    pcVar1 = *(code **)(*piVar2 + 0x20);
    if (param_2) {
      param_2 = *(bool *)(*(int *)(this + 0xa4) + 0x14);
    }
  }
  else {
    piVar2 = *(int **)(*(int *)(this + 0x94) + param_1 * 0xc + 8);
    pcVar1 = *(code **)(*piVar2 + 0x20);
    if (param_2) {
      param_2 = *(bool *)(*(int *)(param_1 * 4 + *(int *)(this + 0x84)) + 0x14);
    }
  }
  (*pcVar1)(piVar2,param_2);
  return;
}


