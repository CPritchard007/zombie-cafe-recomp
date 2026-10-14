/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cefb4 CharacterDetails::nameChanged */

/* CharacterDetails::nameChanged(CharacterDetails*, String) */

void CharacterDetails::nameChanged(int param_1,String *param_2)

{
  String *this;
  int iVar1;
  int *piVar2;
  code *pcVar3;
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  this = aSStack_20;
  if (*(short *)(param_2 + 6) < 1) {
    piVar2 = *(int **)(param_1 + 0x94);
    pcVar3 = *(code **)(*piVar2 + 0x44);
    String::String(aSStack_18,(String *)(*(int *)(param_1 + 0x88) + 8));
    (*pcVar3)(piVar2,aSStack_18);
    this = aSStack_18;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x88);
    String::String(aSStack_20,param_2);
    String::operator=((String *)(iVar1 + 8),aSStack_20);
  }
  String::~String(this);
  return;
}


