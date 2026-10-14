/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bb7bc BonePile::BonePile */

/* BonePile::BonePile() */

BonePile * __thiscall BonePile::BonePile(BonePile *this)

{
  int iVar1;
  undefined4 uVar2;
  
  *(BonePile **)(this + 0x10) = this + 8;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined2 *)(this + 0x24) = 0;
  this[0x2e] = (BonePile)0x0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined2 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  this[0x1c] = (BonePile)0x1;
  *(int *)this = *(int *)(DAT_000bb814 + 0xbb7e4) + 8;
  iVar1 = CapcomApp::getInstance();
  uVar2 = PackedImage::getImage(*(PackedImage **)(*(int *)(iVar1 + 4) + DAT_000bb818),0x34,false);
  iVar1 = DAT_000bb81c;
  *(undefined4 *)(this + 0x38) = uVar2;
  *(undefined4 *)(this + 0x34) = **(undefined4 **)(iVar1 + 0xbb802);
  return this;
}


