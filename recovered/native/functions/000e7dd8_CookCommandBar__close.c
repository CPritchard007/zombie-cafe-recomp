/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e7dd8 CookCommandBar::close */

/* CookCommandBar::close() */

void __thiscall CookCommandBar::close(CookCommandBar *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (this[0xb0] != (CookCommandBar)0x0) {
    setState(this,'\x03');
    if (*(int **)(this + 0xac) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xac) + 4))();
    }
    iVar3 = *(int *)(this + 0x10);
    uVar4 = *(uint *)(*(int *)(this + 0x74) + 0x10);
    uVar5 = (((int)uVar4 >> 0x10) - ((int)uVar4 >> 0x1f) >> 1) << 0x10;
    piVar2 = (int *)operator_new(0x1c);
    iVar1 = DAT_000e7e58;
    piVar2[2] = (short)uVar4 - iVar3 & 0xffffU | uVar5;
    piVar2[3] = uVar5 | uVar4 & 0xffff;
    iVar3 = DAT_000e7e5c;
    piVar2[4] = **(int **)(iVar1 + 0xe7e30);
    iVar1 = DAT_000e7e60;
    piVar2[6] = **(int **)(iVar3 + 0xe7e3a);
    *piVar2 = *(int *)(iVar1 + 0xe7e44) + 8;
    piVar2[5] = 0;
    *(int **)(this + 0xac) = piVar2;
    (**(code **)(*piVar2 + 0xc))();
  }
  return;
}


