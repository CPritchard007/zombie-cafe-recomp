/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00208444 PullMenuElement::setButtonsVisible */

/* PullMenuElement::setButtonsVisible(bool) */

undefined8 __thiscall PullMenuElement::setButtonsVisible(PullMenuElement *this,bool param_1)

{
  int *piVar1;
  PullMenuElement PVar2;
  code *pcVar3;
  PullMenuElement *local_1c;
  
  local_1c = (PullMenuElement *)(uint)param_1;
  piVar1 = *(int **)(this + 0x78);
  if (local_1c == (PullMenuElement *)0x0) {
    this[0xe1] = *(PullMenuElement *)(piVar1 + 5);
    local_1c = this + 8;
    this[0xe8] = *(PullMenuElement *)(*(int *)(this + 0xa4) + 0x14);
    (**(code **)(*piVar1 + 0x20))();
    *(undefined4 *)(*(int *)(this + 0x78) + 0x8c) = 0xff000000;
    piVar1 = *(int **)(this + 0xa4);
    (**(code **)(*piVar1 + 0x20))(piVar1,0);
    piVar1 = *(int **)(this + 0x80);
    this[0xe3] = *(PullMenuElement *)(piVar1 + 5);
    this[0xea] = *(PullMenuElement *)(*(int *)(this + 0xb0) + 0x14);
    (**(code **)(*piVar1 + 0x20))(piVar1,0);
    *(undefined4 *)(*(int *)(this + 0x80) + 0x8c) = 0xff000000;
    (**(code **)(**(int **)(this + 0xb0) + 0x20))(*(int **)(this + 0xb0),0);
    piVar1 = *(int **)(this + 0x8c);
    this[0xe6] = *(PullMenuElement *)(piVar1 + 5);
    this[0xed] = *(PullMenuElement *)(*(int *)(this + 0xbc) + 0x14);
    (**(code **)(*piVar1 + 0x20))(piVar1,0);
    *(undefined4 *)(*(int *)(this + 0x8c) + 0x8c) = 0xff000000;
    (**(code **)(**(int **)(this + 0xbc) + 0x20))(*(int **)(this + 0xbc),0);
    piVar1 = *(int **)(this + 0x84);
    this[0xe4] = *(PullMenuElement *)(piVar1 + 5);
    this[0xeb] = *(PullMenuElement *)(*(int *)(this + 200) + 0x14);
    (**(code **)(*piVar1 + 0x20))(piVar1,0);
    *(undefined4 *)(*(int *)(this + 0x84) + 0x8c) = 0xff000000;
    piVar1 = *(int **)(this + 200);
    pcVar3 = *(code **)(*piVar1 + 0x20);
    PVar2 = (PullMenuElement)0x0;
  }
  else {
    (**(code **)(*piVar1 + 0x20))(piVar1,this[0xe1]);
    *(undefined4 *)(*(int *)(this + 0x78) + 0x8c) = 0xffffffff;
    (**(code **)(**(int **)(this + 0xa4) + 0x20))(*(int **)(this + 0xa4),this[0xe8]);
    (**(code **)(**(int **)(this + 0x80) + 0x20))(*(int **)(this + 0x80),this[0xe3]);
    *(undefined4 *)(*(int *)(this + 0x80) + 0x8c) = 0xffffffff;
    (**(code **)(**(int **)(this + 0xb0) + 0x20))(*(int **)(this + 0xb0),this[0xea]);
    piVar1 = *(int **)(this + 0x8c);
    (**(code **)(*piVar1 + 0x20))(piVar1,this[0xe6]);
    *(undefined4 *)(*(int *)(this + 0x8c) + 0x8c) = 0xffffffff;
    (**(code **)(**(int **)(this + 0xbc) + 0x20))(*(int **)(this + 0xbc),this[0xed]);
    (**(code **)(**(int **)(this + 0x84) + 0x20))(*(int **)(this + 0x84),this[0xe4]);
    *(undefined4 *)(*(int *)(this + 0x84) + 0x8c) = 0xffffffff;
    piVar1 = *(int **)(this + 200);
    PVar2 = this[0xeb];
    pcVar3 = *(code **)(*piVar1 + 0x20);
  }
  (*pcVar3)(piVar1,PVar2);
  return CONCAT44(local_1c,this);
}


