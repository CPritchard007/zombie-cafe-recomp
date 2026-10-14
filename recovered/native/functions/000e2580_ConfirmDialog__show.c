/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e2580 ConfirmDialog::show */

/* ConfirmDialog::show() */

void __thiscall ConfirmDialog::show(ConfirmDialog *this)

{
  code *pcVar1;
  int *piVar2;
  String *pSVar3;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  pSVar3 = (String *)0x0;
  if (0 < *(int *)(this + 0x90)) {
    pSVar3 = (String *)**(undefined4 **)(this + 0x84);
  }
  piVar2 = *(int **)(this + 0x74);
  pcVar1 = *(code **)(*piVar2 + 0x44);
  String::String(aSStack_30,pSVar3);
  (*pcVar1)(piVar2,aSStack_30);
  String::~String(aSStack_30);
  piVar2 = *(int **)(this + 0x78);
  pcVar1 = *(code **)(*piVar2 + 0x44);
  String::String(aSStack_28,pSVar3 + 8);
  (*pcVar1)(piVar2,aSStack_28);
  String::~String(aSStack_28);
  piVar2 = *(int **)(this + 0x7c);
  pcVar1 = *(code **)(*piVar2 + 0x44);
  String::String(aSStack_20,pSVar3 + 0x10);
  (*pcVar1)(piVar2,aSStack_20);
  String::~String(aSStack_20);
  this[0x14] = (ConfirmDialog)0x1;
  return;
}


