/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00205018 PlantCommandBar::close */

/* PlantCommandBar::close() */

void __thiscall PlantCommandBar::close(PlantCommandBar *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (this[0xc4] != (PlantCommandBar)0x0) {
    setState(this,'\x03');
    if (*(int **)(this + 0xc0) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0xc0) + 4))();
    }
    iVar3 = *(int *)(this + 0x10);
    uVar4 = *(uint *)(*(int *)(this + 0x74) + 0x10);
    uVar5 = (((int)uVar4 >> 0x10) - ((int)uVar4 >> 0x1f) >> 1) << 0x10;
    piVar2 = (int *)operator_new(0x1c);
    iVar1 = DAT_00205098;
    piVar2[2] = (short)uVar4 - iVar3 & 0xffffU | uVar5;
    piVar2[3] = uVar5 | uVar4 & 0xffff;
    iVar3 = DAT_0020509c;
    piVar2[4] = **(int **)(iVar1 + 0x205070);
    iVar1 = DAT_002050a0;
    piVar2[6] = **(int **)(iVar3 + 0x20507a);
    *piVar2 = *(int *)(iVar1 + 0x205084) + 8;
    piVar2[5] = 0;
    *(int **)(this + 0xc0) = piVar2;
    (**(code **)(*piVar2 + 0xc))();
  }
  return;
}


