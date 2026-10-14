/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a60e6 TextMenuItem::addBreak */

/* TextMenuItem::addBreak(int) */

void __thiscall TextMenuItem::addBreak(TextMenuItem *this,int param_1)

{
  int *piVar1;
  void *__s;
  int iVar2;
  int iVar3;
  Vector<int> *this_00;
  
  if (*(int *)(this + 0x74) == 0) {
    piVar1 = (int *)operator_new(0xc);
    *piVar1 = 10;
    __s = operator_new__(0x28);
    piVar1[2] = (int)__s;
    memset(__s,0,*piVar1 << 2);
    piVar1[1] = -1;
    *(int **)(this + 0x74) = piVar1;
  }
  this_00 = *(Vector<int> **)(this + 0x74);
  iVar3 = *(int *)(this_00 + 4) + 2;
  if (*(int *)this_00 < iVar3) {
    iVar2 = *(int *)this_00 * 2;
    if (iVar2 < iVar3) {
      iVar2 = iVar3;
    }
    Vector<int>::resize(this_00,iVar2,-1);
  }
  iVar3 = *(int *)(this_00 + 4);
  *(int *)(this_00 + 4) = iVar3 + 1;
  *(int *)((iVar3 + 1) * 4 + *(int *)(this_00 + 8)) = param_1;
  return;
}


