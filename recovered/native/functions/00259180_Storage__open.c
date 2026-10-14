/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00259180 Storage::open */

/* Storage::open(unsigned char, unsigned char) */

void __thiscall Storage::open(Storage *this,uchar param_1,uchar param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int *piVar8;
  Storage *pSVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  
  this[0x65] = (Storage)param_2;
  iVar10 = DAT_002593a4;
  unsetTab();
  setCurrentTab(this,param_1);
  iVar10 = iVar10 + 0x2591a2;
  iVar4 = *(int *)(iVar10 + DAT_002593a8);
  pSVar9 = this + 0x98;
  piVar1 = *(int **)pSVar9;
  iVar5 = *(int *)(iVar10 + DAT_002593ac);
  if (this[0x65] == (Storage)0x1) {
    (**(code **)(*piVar1 + 0x20))(piVar1,0);
    (**(code **)(**(int **)(this + 0x9c) + 0x20))(*(int **)(this + 0x9c),0);
    (**(code **)(**(int **)(this + 0xa0) + 0x20))(*(int **)(this + 0xa0),0);
    (**(code **)(**(int **)(this + 0xa4) + 0x20))(*(int **)(this + 0xa4),0);
    (**(code **)(**(int **)(this + 0xa8) + 0x20))(*(int **)(this + 0xa8),0);
    (**(code **)(**(int **)(this + 0xac) + 0x20))(*(int **)(this + 0xac),0);
    uVar2 = __floatsisf(*(int *)(*(int *)pSVar9 + 0xc) >> 3);
    iVar3 = SmDev();
    __addsf3(uVar2,*(undefined4 *)(iVar4 + iVar3 * 4));
    iVar4 = __fixsfsi();
    uVar2 = __floatsisf(*(int *)(this + 0x10) - *(int *)(*(int *)(this + 0x90) + 0x10));
    iVar3 = SmDev();
    piVar1 = *(int **)(this + 0xb0);
    __addsf3(uVar2,*(undefined4 *)(iVar5 + iVar3 * 4));
    uVar2 = __fixsfsi();
    pcVar6 = *(code **)(*piVar1 + 0x14);
  }
  else {
    (**(code **)(*piVar1 + 0x20))(piVar1,1);
    (**(code **)(**(int **)(this + 0x9c) + 0x20))(*(int **)(this + 0x9c),1);
    (**(code **)(**(int **)(this + 0xa0) + 0x20))(*(int **)(this + 0xa0),1);
    (**(code **)(**(int **)(this + 0xa4) + 0x20))(*(int **)(this + 0xa4),1);
    (**(code **)(**(int **)(this + 0xa8) + 0x20))(*(int **)(this + 0xa8),1);
    piVar1 = *(int **)(this + 0xac);
    (**(code **)(*piVar1 + 0x20))(piVar1,1);
    piVar1 = *(int **)(this + 0xb0);
    (**(code **)(*piVar1 + 0x20))(piVar1,1);
    uVar2 = __floatsisf(*(int *)(*(int *)pSVar9 + 0xc) >> 3);
    iVar3 = SmDev();
    __addsf3(uVar2,*(undefined4 *)(iVar4 + iVar3 * 4));
    iVar4 = __fixsfsi();
    uVar2 = __floatsisf(*(int *)(this + 0x10) - *(int *)(*(int *)(this + 0x90) + 0x10));
    iVar3 = SmDev();
    piVar1 = *(int **)(this + 0xb0);
    iVar7 = *(int *)(this + 0xac);
    iVar11 = *piVar1;
    iVar4 = *(int *)(iVar7 + 4) + *(int *)(iVar7 + 0xc) + iVar4;
    __addsf3(uVar2,*(undefined4 *)(iVar5 + iVar3 * 4));
    uVar2 = __fixsfsi();
    pcVar6 = *(code **)(iVar11 + 0x14);
  }
  (*pcVar6)(piVar1,iVar4,uVar2);
  if (this[0x8c] != (Storage)0x2) {
    setState(this,'\x01');
    if (*(int **)(this + 0x88) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x88) + 4))();
    }
    iVar5 = *(int *)(this + 0x10);
    uVar12 = *(uint *)(*(int *)(this + 0x70) + 0x10);
    uVar13 = ((int)uVar12 >> 0x11) << 0x10;
    piVar1 = (int *)operator_new(0x1c);
    iVar4 = *(int *)(iVar10 + DAT_002593b4);
    iVar3 = **(int **)(iVar10 + DAT_002593b0);
    piVar8 = *(int **)(iVar10 + DAT_002593b8);
    piVar1[2] = uVar12 & 0xffff | uVar13;
    iVar10 = *piVar8;
    piVar1[4] = iVar3;
    *piVar1 = iVar4 + 8;
    piVar1[6] = iVar10;
    piVar1[3] = uVar13 | (short)uVar12 - iVar5 & 0xffffU;
    piVar1[5] = 0;
    *(int **)(this + 0x88) = piVar1;
    (**(code **)(*piVar1 + 0xc))();
    piVar1 = *(int **)(this + 0xc4);
    (**(code **)(*piVar1 + 0x14))(piVar1,0,piVar1[2]);
  }
  return;
}


