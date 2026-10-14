/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bb948 CImage::getHeight */

/* CImage::getHeight() const */

void __thiscall CImage::getHeight(CImage *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = __floatsisf((int)*(short *)(this + 0x22));
  uVar1 = __mulsf3(uVar1,*(undefined4 *)(this + 0x2c));
  uVar2 = __floatsisf((int)*(short *)(this + 0x24));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __floatsisf((int)*(short *)(this + 0x28));
  __addsf3(uVar1,uVar2);
  __fixsfsi();
  return;
}


