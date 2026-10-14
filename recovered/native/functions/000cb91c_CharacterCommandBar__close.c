/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cb91c CharacterCommandBar::close */

/* CharacterCommandBar::close() */

void __thiscall CharacterCommandBar::close(CharacterCommandBar *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (this[0xb8] != (CharacterCommandBar)0x0) {
    setState(this,'\x03');
    if (*(int **)(this + 0xb4) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xb4) + 4))();
    }
    iVar3 = *(int *)(this + 0x10);
    uVar4 = *(uint *)(*(int *)(this + 0x60) + 0x10);
    uVar5 = (((int)uVar4 >> 0x10) - ((int)uVar4 >> 0x1f) >> 1) << 0x10;
    piVar2 = (int *)operator_new(0x1c);
    iVar1 = DAT_000cb99c;
    piVar2[2] = (short)uVar4 - iVar3 & 0xffffU | uVar5;
    piVar2[3] = uVar5 | uVar4 & 0xffff;
    iVar3 = DAT_000cb9a0;
    piVar2[4] = **(int **)(iVar1 + 0xcb974);
    iVar1 = DAT_000cb9a4;
    piVar2[6] = **(int **)(iVar3 + 0xcb97e);
    *piVar2 = *(int *)(iVar1 + 0xcb988) + 8;
    piVar2[5] = 0;
    *(int **)(this + 0xb4) = piVar2;
    (**(code **)(*piVar2 + 0xc))();
  }
  return;
}


