/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00194110 GameStateDoJo::changeMessageWindow */

/* GameStateDoJo::changeMessageWindow(int, bool) */

undefined8 GameStateDoJo::changeMessageWindow(int param_1,bool param_2)

{
  String *this;
  undefined4 uVar1;
  int in_r2;
  int *piVar2;
  code *pcVar3;
  int iStack_20;
  uint uStack_1c;
  String aSStack_18 [8];
  
  uStack_1c = (uint)param_2;
  this = (String *)&iStack_20;
  iStack_20 = param_1;
  if (in_r2 == 0) {
    (**(code **)(**(int **)(param_1 + 0xa8) + 0x20))(*(int **)(param_1 + 0xa8),0);
    piVar2 = *(int **)(param_1 + 200);
    pcVar3 = *(code **)(*piVar2 + 0x20);
    uVar1 = 0;
  }
  else {
    piVar2 = *(int **)(param_1 + 200);
    if (uStack_1c == 0) {
      pcVar3 = *(code **)(*piVar2 + 0x44);
      Vector<String>::elementAt((int)this);
      (*pcVar3)(piVar2,this);
    }
    else {
      pcVar3 = *(code **)(*piVar2 + 0x44);
      Vector<String>::elementAt((int)aSStack_18);
      (*pcVar3)(piVar2,aSStack_18);
      this = aSStack_18;
    }
    String::~String(this);
    (**(code **)(**(int **)(param_1 + 0xa8) + 0x20))(*(int **)(param_1 + 0xa8),1);
    piVar2 = *(int **)(param_1 + 200);
    uVar1 = 1;
    pcVar3 = *(code **)(*piVar2 + 0x20);
  }
  (*pcVar3)(piVar2,uVar1);
  return CONCAT44(uStack_1c,iStack_20);
}


