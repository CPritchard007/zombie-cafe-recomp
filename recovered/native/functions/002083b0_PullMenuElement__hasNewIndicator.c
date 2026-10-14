/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002083b0 PullMenuElement::hasNewIndicator */

/* PullMenuElement::hasNewIndicator(int) */

undefined1 __thiscall PullMenuElement::hasNewIndicator(PullMenuElement *this,int param_1)

{
  PullMenuElement *pPVar1;
  int iVar2;
  
  if (param_1 == 0) {
    if (*(char *)(*(int *)(this + 0x98) + 0x14) == '\0') {
      return 0;
    }
    iVar2 = *(int *)(this + 0x74);
  }
  else if (param_1 == 1) {
    if (*(char *)(*(int *)(this + 0xa4) + 0x14) == '\0') {
      return 0;
    }
    iVar2 = *(int *)(this + 0x78);
  }
  else {
    if (param_1 == 3) {
      pPVar1 = this + 4;
      if (*(char *)(*(int *)(this + 0xb0) + 0x14) == '\0') {
        return 0;
      }
    }
    else {
      if (param_1 == 6) {
        if (*(char *)(*(int *)(this + 0xbc) + 0x14) == '\0') {
          return 0;
        }
        iVar2 = *(int *)(this + 0x8c);
        goto LAB_00208418;
      }
      if (param_1 != 4) {
        return 0;
      }
      if (*(char *)(*(int *)(this + 200) + 0x14) == '\0') {
        return 0;
      }
      pPVar1 = this + 8;
    }
    iVar2 = *(int *)(pPVar1 + 0x7c);
  }
LAB_00208418:
  return *(undefined1 *)(iVar2 + 0x14);
}


