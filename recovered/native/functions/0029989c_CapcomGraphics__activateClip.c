/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029989c CapcomGraphics::activateClip */

/* CapcomGraphics::activateClip() */

void __thiscall CapcomGraphics::activateClip(CapcomGraphics *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  undefined4 local_58 [5];
  undefined4 local_44;
  
  piVar8 = *(int **)(DAT_002999c0 + 0x2998a8);
  if (*(int *)(this + 0x10) == 0) {
    if (((*piVar8 != 0) || (piVar8[1] != 0)) || ((piVar8[2] != 0 || (piVar8[3] != 0)))) {
      glDisable(DAT_002999c4);
      *piVar8 = 0;
      piVar8[1] = 0;
      piVar8[2] = 0;
      piVar8[3] = 0;
    }
  }
  else {
    if ((((*piVar8 != 0) || (piVar8[1] != 0)) || (piVar8[2] != 0)) || (piVar8[3] != 0)) {
      glEnable(DAT_002999c4);
    }
    glGetFloatv(DAT_002999c8,local_58);
    piVar10 = *(int **)(this + 0x10);
    uVar1 = __floatsisf(piVar10[2]);
    uVar1 = __mulsf3(uVar1,local_58[0]);
    uVar2 = __floatsisf(piVar10[3]);
    uVar2 = __mulsf3(uVar2,local_44);
    iVar3 = *(int *)(this + 0xc);
    uVar4 = __floatsisf(*piVar10 - iVar3);
    uVar4 = __mulsf3(uVar4,local_58[0]);
    uVar5 = __floatsisf(iVar3);
    uVar4 = __addsf3(uVar4,uVar5);
    uVar5 = getScreenSize();
    uVar4 = __fixsfsi(uVar4);
    uVar5 = __floatsisf(uVar5);
    iVar3 = *(int *)(this + 8);
    uVar6 = __floatsisf(*(int *)(*(int *)(this + 0x10) + 4) - iVar3);
    uVar6 = __mulsf3(uVar6,local_44);
    uVar7 = __floatsisf(iVar3);
    uVar6 = __addsf3(uVar6,uVar7);
    uVar5 = __subsf3(uVar5,uVar6);
    __subsf3(uVar5,uVar2);
    uVar5 = __fixsfsi();
    uVar1 = __fixsfsi(uVar1);
    uVar2 = __fixsfsi(uVar2);
    glScissor(uVar4,uVar5,uVar1,uVar2);
    piVar10 = *(int **)(this + 0x10);
    iVar3 = piVar10[1];
    iVar9 = piVar10[2];
    *piVar8 = *piVar10;
    piVar8[1] = iVar3;
    piVar8[2] = iVar9;
    piVar8[3] = piVar10[3];
  }
  return;
}


