/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cb9b0 CharacterCommandBar::open */

/* CharacterCommandBar::open() */

void __thiscall CharacterCommandBar::open(CharacterCommandBar *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  
  if (this[0xb8] != (CharacterCommandBar)0x2) {
    setState(this,'\x01');
    if (*(int **)(this + 0xb4) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xb4) + 4))();
    }
    uVar5 = *(uint *)(*(int *)(this + 0x60) + 0x10);
    iVar3 = *(int *)(this + 0x10);
    uVar6 = (((int)uVar5 >> 0x10) - ((int)uVar5 >> 0x1f) >> 1) << 0x10;
    piVar2 = (int *)operator_new(0x1c);
    iVar1 = DAT_000cba30;
    piVar2[2] = uVar5 & 0xffff | uVar6;
    piVar4 = *(int **)(iVar1 + 0xcba06);
    piVar2[3] = uVar6 | (short)uVar5 - iVar3 & 0xffffU;
    iVar1 = DAT_000cba34;
    piVar2[4] = *piVar4;
    iVar3 = DAT_000cba38;
    piVar2[6] = **(int **)(iVar1 + 0xcba12);
    *piVar2 = *(int *)(iVar3 + 0xcba1c) + 8;
    piVar2[5] = 0;
    *(int **)(this + 0xb4) = piVar2;
    (**(code **)(*piVar2 + 0xc))();
  }
  return;
}


