/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00258570 Storage::close */

/* Storage::close() */

void __thiscall Storage::close(Storage *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if ((this[0x8c] != (Storage)0x3) && (this[0x8c] != (Storage)0x0)) {
    setState(this,'\x03');
    if (*(int *)(this + 0x88) != 0) {
      L_PrintLog((char *)(DAT_00258610 + 0x25859a),(char *)(DAT_00258614 + 0x25859c));
      piVar2 = *(int **)(this + 0x88);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
    }
    iVar3 = *(int *)(this + 0x10);
    uVar4 = *(uint *)(*(int *)(this + 0x70) + 0x10);
    uVar5 = ((int)uVar4 >> 0x11) << 0x10;
    piVar2 = (int *)operator_new(0x1c);
    iVar1 = DAT_00258618;
    piVar2[2] = (short)uVar4 - iVar3 & 0xffffU | uVar5;
    piVar2[3] = uVar5 | uVar4 & 0xffff;
    iVar3 = DAT_0025861c;
    piVar2[4] = **(int **)(iVar1 + 0x2585d6);
    iVar1 = DAT_00258620;
    piVar2[6] = **(int **)(iVar3 + 0x2585e0);
    *piVar2 = *(int *)(iVar1 + 0x2585ea) + 8;
    piVar2[5] = 0;
    *(int **)(this + 0x88) = piVar2;
    (**(code **)(*piVar2 + 0xc))();
    TutorialSystem::triggerEvent
              (*(TutorialSystem **)(*(int *)(this + 0x70) + DAT_00258624),'-',true);
  }
  return;
}


