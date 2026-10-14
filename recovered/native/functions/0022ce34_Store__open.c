/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022ce34 Store::open */

/* Store::open(unsigned char) */

void __thiscall Store::open(Store *this,uchar param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  
  unsetTab();
  setCurrentTab(this,param_1);
  if (this[0x80] != (Store)0x2) {
    setState(this,'\x01');
    if (*(int **)(this + 0x7c) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x7c) + 4))();
      *(undefined4 *)(this + 0x7c) = 0;
    }
    iVar3 = *(int *)(this + 0x10);
    uVar5 = *(uint *)(*(int *)(this + 0x68) + 0x10);
    uVar6 = ((int)uVar5 >> 0x11) << 0x10;
    piVar2 = (int *)operator_new(0x1c);
    iVar1 = DAT_0022cec8;
    piVar2[2] = uVar5 & 0xffff | uVar6;
    piVar4 = *(int **)(iVar1 + 0x22ce94);
    piVar2[3] = uVar6 | (short)uVar5 - iVar3 & 0xffffU;
    piVar2[5] = 0;
    iVar1 = DAT_0022cecc;
    piVar2[4] = *piVar4;
    iVar3 = DAT_0022ced0;
    piVar2[6] = **(int **)(iVar1 + 0x22cea2);
    *piVar2 = *(int *)(iVar3 + 0x22ceac) + 8;
    *(int **)(this + 0x7c) = piVar2;
    (**(code **)(*piVar2 + 0xc))();
    piVar2 = *(int **)(this + 0xb0);
    (**(code **)(*piVar2 + 0x14))(piVar2,0,piVar2[2]);
  }
  return;
}


