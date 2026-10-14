/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00299858 CapcomGraphics::activateOffset */

/* CapcomGraphics::activateOffset() */

void __thiscall CapcomGraphics::activateOffset(CapcomGraphics *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar4 = *(int *)(this + 8);
  piVar5 = *(int **)(DAT_00299898 + 0x299864);
  iVar3 = *piVar5;
  if ((iVar4 != iVar3) || (*(int *)(this + 0xc) != piVar5[1])) {
    uVar1 = __floatsisf(*(int *)(this + 0xc) - piVar5[1]);
    uVar2 = __floatsisf(iVar4 - iVar3);
    glTranslatef(uVar1,uVar2,0);
    iVar3 = *(int *)(this + 0xc);
    *piVar5 = *(int *)(this + 8);
    piVar5[1] = iVar3;
  }
  return;
}


