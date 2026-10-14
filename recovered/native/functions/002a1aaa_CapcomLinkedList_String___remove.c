/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a1aaa CapcomLinkedList<String>::remove */

/* CapcomLinkedList<String>::remove(int) */

int CapcomLinkedList<String>::remove(int param_1)

{
  int in_r1;
  int in_r2;
  int iVar1;
  undefined4 uVar2;
  String *this;
  int iVar3;
  String aSStack_20 [12];
  
  if ((in_r2 < 0) || (*(int *)(in_r1 + 0x14) <= in_r2)) {
    String::String((String *)param_1,0);
  }
  else {
    iVar3 = 0;
    if ((in_r2 < 0 == SCARRY4(in_r2 + -1,1)) && (in_r2 + -1 < *(int *)(in_r1 + 0x14))) {
      iVar3 = in_r1;
      for (iVar1 = 0; iVar1 != in_r2; iVar1 = iVar1 + 1) {
        iVar3 = *(int *)(iVar3 + 8);
      }
    }
    String::String(aSStack_20,*(String **)(iVar3 + 8));
    if (*(int *)(in_r1 + 0x10) == *(int *)(iVar3 + 8)) {
      *(int *)(in_r1 + 0x10) = iVar3;
    }
    if (*(int *)(in_r1 + 0xc) == *(int *)(iVar3 + 8)) {
      *(int *)(in_r1 + 0xc) = iVar3;
    }
    this = *(String **)(iVar3 + 8);
    uVar2 = *(undefined4 *)(this + 8);
    String::~String(this);
    operator_delete(this);
    *(undefined4 *)(iVar3 + 8) = uVar2;
    *(int *)(in_r1 + 0x14) = *(int *)(in_r1 + 0x14) + -1;
    String::String((String *)param_1,aSStack_20);
    String::~String(aSStack_20);
  }
  return param_1;
}


