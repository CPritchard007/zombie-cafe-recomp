/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002557c4 TombstoneCommandBar::close */

/* TombstoneCommandBar::close() */

void __thiscall TombstoneCommandBar::close(TombstoneCommandBar *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (this[0x9c] != (TombstoneCommandBar)0x0) {
    setState(this,'\x03');
    if (*(int **)(this + 0x98) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x98) + 4))();
    }
    iVar3 = *(int *)(this + 0x10);
    uVar4 = *(uint *)(*(int *)(this + 0x68) + 0x10);
    uVar5 = (((int)uVar4 >> 0x10) - ((int)uVar4 >> 0x1f) >> 1) << 0x10;
    piVar2 = (int *)operator_new(0x1c);
    iVar1 = DAT_00255844;
    piVar2[2] = (short)uVar4 - iVar3 & 0xffffU | uVar5;
    piVar2[3] = uVar5 | uVar4 & 0xffff;
    iVar3 = DAT_00255848;
    piVar2[4] = **(int **)(iVar1 + 0x25581c);
    iVar1 = DAT_0025584c;
    piVar2[6] = **(int **)(iVar3 + 0x255826);
    *piVar2 = *(int *)(iVar1 + 0x255830) + 8;
    piVar2[5] = 0;
    *(int **)(this + 0x98) = piVar2;
    (**(code **)(*piVar2 + 0xc))();
  }
  return;
}


