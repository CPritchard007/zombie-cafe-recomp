/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ef0c0 Furniture::Furniture */

/* Furniture::Furniture(FurnitureData*) */

undefined8 __thiscall Furniture::Furniture(Furniture *this,FurnitureData *param_1)

{
  undefined4 uVar1;
  int iVar2;
  Furniture *pFStack_20;
  FurnitureData *pFStack_1c;
  
  *(Furniture **)(this + 0x10) = this + 8;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined2 *)(this + 0x24) = 0;
  this[0x2e] = (Furniture)0x0;
  iVar2 = DAT_000ef150;
  *(FurnitureData **)(this + 0x38) = param_1;
  iVar2 = *(int *)(iVar2 + 0xef0e0);
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined2 *)(this + 0x2c) = 0;
  *(int *)this = iVar2 + 8;
  *(undefined4 *)(this + 0x28) = 0;
  this[0x1c] = (Furniture)0x1;
  this[0x34] = (Furniture)0x0;
  pFStack_20 = this;
  pFStack_1c = param_1;
  uVar1 = CImage::getSize(*(CImage **)(*(short *)(param_1 + 0x3c) * 4 + *(int *)param_1));
  *(undefined4 *)(this + 0x20) = uVar1;
  *(undefined4 *)(this + 0x3c) = 0;
  this[0x40] = (Furniture)0x0;
  this[0x41] = (Furniture)0x0;
  *(undefined2 *)(this + 0x42) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  this[0x46] = (Furniture)0x0;
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined2 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x50) = 0;
  this[0x54] = (Furniture)0x1;
  CapcomDate::from1970Offset((CapcomDate *)&pFStack_20,0);
  memcpy(this + 0x56,(CapcomDate *)&pFStack_20,7);
  *(undefined4 *)(this + 0x60) = DAT_000ef154;
  return CONCAT44(pFStack_20,this);
}


