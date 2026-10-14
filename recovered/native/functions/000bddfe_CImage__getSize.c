/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bddfe CImage::getSize */

/* CImage::getSize() const */

uint __thiscall CImage::getSize(CImage *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = *(undefined4 *)(this + 0x2c);
  uVar1 = __floatsisf((int)*(short *)(this + 0x22));
  uVar1 = __mulsf3(uVar1,uVar5);
  uVar2 = __floatsisf((int)*(short *)(this + 0x24));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __floatsisf((int)*(short *)(this + 0x28));
  __addsf3(uVar1,uVar2);
  uVar3 = __fixsfsi();
  uVar1 = __floatsisf((int)*(short *)(this + 0x20));
  uVar1 = __mulsf3(uVar1,uVar5);
  uVar2 = __floatsisf((int)*(short *)(this + 0x2a));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __floatsisf((int)*(short *)(this + 0x26));
  __addsf3(uVar1,uVar2);
  iVar4 = __fixsfsi();
  return iVar4 << 0x10 | uVar3 & 0xffff;
}


