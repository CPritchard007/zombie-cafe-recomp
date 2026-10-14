/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001c7b4c GameStateZukan::setButtonText */

/* GameStateZukan::setButtonText() */

void __thiscall GameStateZukan::setButtonText(GameStateZukan *this)

{
  String *this_00;
  int *piVar1;
  code *pcVar2;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  this_00 = aSStack_20;
  if (this[0x7c] == (GameStateZukan)0x0) {
    piVar1 = *(int **)(this + 200);
    pcVar2 = *(code **)(*piVar1 + 0x44);
    Vector<String>::elementAt((int)aSStack_18);
    (*pcVar2)(piVar1,aSStack_18);
    this_00 = aSStack_18;
  }
  else {
    piVar1 = *(int **)(this + 200);
    pcVar2 = *(code **)(*piVar1 + 0x44);
    Vector<String>::elementAt((int)aSStack_20);
    (*pcVar2)(piVar1,aSStack_20);
  }
  String::~String(this_00);
  return;
}


