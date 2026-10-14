/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a354c ImageButton::setScale */

/* ImageButton::setScale(float, float) */

void __thiscall ImageButton::setScale(ImageButton *this,float param_1,float param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r1;
  undefined4 in_r2;
  CImage *this_00;
  
  if (this[0x88] == (ImageButton)0x0) {
    *(undefined4 *)(this + 0x6c) = in_r1;
    *(undefined4 *)(this + 0x70) = in_r2;
  }
  else {
    iVar1 = CapcomApp::getInstance();
    uVar2 = __mulsf3(in_r1,*(undefined4 *)(iVar1 + 0x40));
    *(undefined4 *)(this + 0x6c) = uVar2;
    iVar1 = CapcomApp::getInstance();
    uVar2 = __mulsf3(in_r2,*(undefined4 *)(iVar1 + 0x44));
    *(undefined4 *)(this + 0x70) = uVar2;
  }
  this_00 = *(CImage **)(this + 0x60);
  CImage::getWidth(this_00);
  uVar2 = __floatsisf();
  __mulsf3(uVar2,*(undefined4 *)(this + 0x6c));
  uVar2 = __fixsfsi();
  *(undefined4 *)(this + 0xc) = uVar2;
  CImage::getHeight(this_00);
  uVar2 = __floatsisf();
  __mulsf3(uVar2,*(undefined4 *)(this + 0x70));
  uVar2 = __fixsfsi();
  *(undefined4 *)(this + 0x10) = uVar2;
  return;
}


