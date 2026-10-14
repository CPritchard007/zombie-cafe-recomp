/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002189f0 RecipeSortDialog::setArrowPosition */

/* RecipeSortDialog::setArrowPosition(RECIPE_BOOK_SORTTYPE) */

void __thiscall RecipeSortDialog::setArrowPosition(RecipeSortDialog *this,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(*(int *)(this + 100) + DAT_00218b20) * *(int *)(*(int *)(this + 0x6c) + 0xc);
  uVar3 = iVar5 >> 0x1f;
  uVar3 = (iVar5 >> 0x12) + uVar3 ^ uVar3;
  if (param_2 == 1) {
    iVar5 = SmDev();
    if ((iVar5 == 4) || (iVar5 = SmDev(), iVar5 == 3)) {
      iVar5 = (int)(((uint)(*(int *)(*(int *)(this + 0x78) + 0xc) >> 0x1f) >> 0x1e) +
                   *(int *)(*(int *)(this + 0x78) + 0xc)) >> 2;
    }
    else {
      iVar5 = *(int *)(*(int *)(this + 0x78) + 0xc) / 2;
    }
    piVar1 = *(int **)(this + 0x6c);
    iVar5 = uVar3 + iVar5;
    iVar2 = *(int *)(this + 0x78);
    iVar4 = *piVar1;
  }
  else {
    if (param_2 == 2) {
      iVar5 = SmDev();
      if ((iVar5 == 4) || (iVar5 = SmDev(), iVar5 == 3)) {
        iVar5 = (int)(((uint)(*(int *)(*(int *)(this + 0x7c) + 0xc) >> 0x1f) >> 0x1e) +
                     *(int *)(*(int *)(this + 0x7c) + 0xc)) >> 2;
      }
      else {
        iVar5 = *(int *)(*(int *)(this + 0x7c) + 0xc) / 2;
      }
      piVar1 = *(int **)(this + 0x6c);
      iVar5 = uVar3 + iVar5;
      iVar4 = *piVar1;
    }
    else if (param_2 == 3) {
      iVar5 = SmDev();
      if ((iVar5 == 4) || (iVar5 = SmDev(), iVar5 == 3)) {
        iVar5 = (int)(((uint)(*(int *)(*(int *)(this + 0x80) + 0xc) >> 0x1f) >> 0x1e) +
                     *(int *)(*(int *)(this + 0x80) + 0xc)) >> 2;
      }
      else {
        iVar5 = *(int *)(*(int *)(this + 0x80) + 0xc) / 2;
      }
      piVar1 = *(int **)(this + 0x6c);
      iVar5 = uVar3 + iVar5;
      this = this + 4;
      iVar4 = *piVar1;
    }
    else {
      if (param_2 != 4) {
        iVar5 = SmDev();
        if ((iVar5 == 4) || (iVar5 = SmDev(), iVar5 == 3)) {
          iVar5 = (int)(((uint)(*(int *)(*(int *)(this + 0x74) + 0xc) >> 0x1f) >> 0x1e) +
                       *(int *)(*(int *)(this + 0x74) + 0xc)) >> 2;
        }
        else {
          iVar5 = *(int *)(*(int *)(this + 0x74) + 0xc) / 2;
        }
        piVar1 = *(int **)(this + 0x6c);
        iVar2 = *(int *)(this + 0x74);
        iVar5 = uVar3 + iVar5;
        iVar4 = *piVar1;
        goto LAB_00218ada;
      }
      iVar5 = SmDev();
      if ((iVar5 == 4) || (iVar5 = SmDev(), iVar5 == 3)) {
        iVar5 = (int)(((uint)(*(int *)(*(int *)(this + 0x84) + 0xc) >> 0x1f) >> 0x1e) +
                     *(int *)(*(int *)(this + 0x84) + 0xc)) >> 2;
      }
      else {
        iVar5 = *(int *)(*(int *)(this + 0x84) + 0xc) / 2;
      }
      piVar1 = *(int **)(this + 0x6c);
      iVar5 = uVar3 + iVar5;
      this = this + 8;
      iVar4 = *piVar1;
    }
    iVar2 = *(int *)(this + 0x7c);
  }
LAB_00218ada:
  (**(code **)(iVar4 + 0x14))(piVar1,iVar5,*(undefined4 *)(iVar2 + 8));
  return;
}


