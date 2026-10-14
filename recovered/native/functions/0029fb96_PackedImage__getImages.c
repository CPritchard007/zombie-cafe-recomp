/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029fb96 PackedImage::getImages */

/* PackedImage::getImages(bool) const */

undefined8 __thiscall PackedImage::getImages(PackedImage *this,bool param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar1 = (undefined4 *)operator_new__((int)*(short *)(this + 0x38) << 2);
  puVar3 = puVar1;
  for (iVar4 = 0; iVar4 < *(short *)(this + 0x38); iVar4 = iVar4 + 1) {
    uVar2 = getImage(this,iVar4,param_1);
    *puVar3 = uVar2;
    puVar3 = puVar3 + 1;
  }
  return CONCAT44(this,puVar1);
}


