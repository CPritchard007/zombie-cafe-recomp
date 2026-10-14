/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001043f2 FurnitureDialog::setFurnitureData */

/* FurnitureDialog::setFurnitureData(FurnitureData*) */

void __thiscall FurnitureDialog::setFurnitureData(FurnitureDialog *this,FurnitureData *param_1)

{
  Furniture *this_00;
  FurnitureDialog *pFVar1;
  
  if (param_1 != (FurnitureData *)0x0) {
    pFVar1 = this + 0xa0;
    *(FurnitureData **)pFVar1 = param_1;
    this_00 = (Furniture *)operator_new(100);
    Furniture::Furniture(this_00,*(FurnitureData **)pFVar1);
    *(Furniture **)(this + 0xa4) = this_00;
    *(short *)(this + 0xb0) = (short)*(undefined4 *)(*(int *)pFVar1 + 0x24);
  }
  return;
}


