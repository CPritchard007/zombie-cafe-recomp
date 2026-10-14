/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bb90c CImage::getWidth */

/* CImage::getWidth() const */

void __thiscall CImage::getWidth(CImage *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = __floatsisf((int)*(short *)(this + 0x20));
  uVar1 = __mulsf3(uVar1,*(undefined4 *)(this + 0x2c));
  uVar2 = __floatsisf((int)*(short *)(this + 0x2a));
  uVar1 = __addsf3(uVar1,uVar2);
  uVar2 = __floatsisf((int)*(short *)(this + 0x26));
  __addsf3(uVar1,uVar2);
  __fixsfsi();
  return;
}


