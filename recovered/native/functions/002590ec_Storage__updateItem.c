/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002590ec Storage::updateItem */

/* Storage::updateItem(int) */

void __thiscall Storage::updateItem(Storage *this,int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  this[0xf0] = (Storage)0x1;
  setCurrentTab(this,(uchar)this[0xd0]);
  this[0x6c] = (Storage)0x1;
  piVar7 = (int *)(*(int *)(this + 0x7c) + param_1 * 4);
  *(undefined4 *)(this + 0x78) =
       *(undefined4 *)(*(int *)(this + (*(byte *)(*piVar7 + 0x45) + 0x25) * 4) + 0x60);
  sVar1 = *(short *)(*(int *)(this + 0x70) + 0x10);
  iVar6 = *(int *)(this + (*(byte *)(*piVar7 + 0x45) + 0x25) * 4);
  iVar4 = *(int *)(*(int *)(this + 0x90) + 0x10);
  iVar5 = *(int *)(iVar6 + 0x10);
  uVar2 = __floatsisf(*(int *)(iVar6 + 0xc) / 2 + *(int *)(iVar6 + 4));
  iVar6 = CapcomApp::getInstance();
  uVar3 = __mulsf3(*(undefined4 *)(iVar6 + 0x40),0x41800000);
  __addsf3(uVar2,uVar3);
  iVar6 = __fixsfsi();
  *(uint *)(this + 0x84) = (sVar1 - iVar4) - iVar5 / 2 & 0xffffU | iVar6 << 0x10;
  return;
}


