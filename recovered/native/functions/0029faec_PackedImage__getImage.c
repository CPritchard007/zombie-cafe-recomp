/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029faec PackedImage::getImage */

/* PackedImage::getImage(int, bool) const */

undefined8 __thiscall PackedImage::getImage(PackedImage *this,int param_1,bool param_2)

{
  int iVar1;
  int iVar2;
  CImage *this_00;
  
  iVar1 = *(int *)(this + 0x34) + param_1 * 0x18;
  iVar2 = (int)*(short *)(iVar1 + 0xe);
  this_00 = (CImage *)
            (**(code **)(*(int *)this + 0xc))
                      (this,(int)*(short *)(iVar1 + 8),(int)*(short *)(iVar1 + 10),
                       (int)*(short *)(iVar1 + 0xc),iVar2,param_1,param_2);
  if (param_2) {
    iVar1 = *(int *)(this + 0x34) + param_1 * 0x18;
    iVar2 = (int)*(short *)(iVar1 + 0x16);
    CImage::setPadding(this_00,*(short *)(iVar1 + 0x10),*(short *)(iVar1 + 0x12),
                       *(short *)(iVar1 + 0x14),*(short *)(iVar1 + 0x16));
  }
  return CONCAT44(iVar2,this_00);
}


