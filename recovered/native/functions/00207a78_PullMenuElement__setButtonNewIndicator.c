/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00207a78 PullMenuElement::setButtonNewIndicator */

/* PullMenuElement::setButtonNewIndicator(int, bool) */

void __thiscall
PullMenuElement::setButtonNewIndicator(PullMenuElement *this,int param_1,bool param_2)

{
  int *piVar1;
  int iVar2;
  PullMenuElement *pPVar3;
  code *pcVar4;
  
  if (param_1 == 0) {
    piVar1 = *(int **)(this + 0x98);
    pcVar4 = *(code **)(*piVar1 + 0x20);
    if (!param_2) goto LAB_00207aee;
    iVar2 = *(int *)(this + 0x74);
  }
  else if (param_1 == 1) {
    piVar1 = *(int **)(this + 0xa4);
    pcVar4 = *(code **)(*piVar1 + 0x20);
    if (!param_2) goto LAB_00207aee;
    iVar2 = *(int *)(this + 0x78);
  }
  else {
    if (param_1 == 3) {
      piVar1 = *(int **)(this + 0xb0);
      pPVar3 = this + 4;
      pcVar4 = *(code **)(*piVar1 + 0x20);
      if (!param_2) goto LAB_00207aee;
    }
    else {
      if (param_1 == 6) {
        piVar1 = *(int **)(this + 0xbc);
        pcVar4 = *(code **)(*piVar1 + 0x20);
        if (!param_2) goto LAB_00207aee;
        iVar2 = *(int *)(this + 0x8c);
        goto LAB_00207aec;
      }
      if (param_1 != 4) {
        return;
      }
      piVar1 = *(int **)(this + 200);
      pcVar4 = *(code **)(*piVar1 + 0x20);
      if (!param_2) goto LAB_00207aee;
      pPVar3 = this + 8;
    }
    iVar2 = *(int *)(pPVar3 + 0x7c);
  }
LAB_00207aec:
  param_2 = *(bool *)(iVar2 + 0x14);
LAB_00207aee:
  (*pcVar4)(piVar1,param_2);
  return;
}


