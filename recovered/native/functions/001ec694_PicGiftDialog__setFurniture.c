/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ec694 PicGiftDialog::setFurniture */

/* PicGiftDialog::setFurniture(int) */

ulonglong __thiscall PicGiftDialog::setFurniture(PicGiftDialog *this,int param_1)

{
  ushort uVar1;
  int *piVar2;
  Furniture *this_00;
  int iVar3;
  ImageElement *this_01;
  code *pcVar4;
  CImage *pCVar5;
  PicGiftDialog *pPVar6;
  int iVar7;
  code *pcVar8;
  undefined8 uVar9;
  
  piVar2 = *(int **)(this + 0xc0);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
    *(undefined4 *)(this + 0xc0) = 0;
  }
  this_00 = (Furniture *)operator_new(100);
  Furniture::Furniture
            (this_00,*(FurnitureData **)(param_1 * 4 + *(int *)(*(int *)(this + 0x6c) + 0x94)));
  *(Furniture **)(this + 0xc0) = this_00;
  pcVar4 = *(code **)(*(int *)this_00 + 0xc);
  iVar7 = DAT_001ec7a8 + 0x1ec6d4;
  iVar3 = SmDev();
  uVar1 = *(ushort *)(iVar7 + iVar3 * 4 + 0x3c);
  iVar3 = SmDev();
  (*pcVar4)(this_00,*(uint *)(iVar7 + iVar3 * 4 + 0x54) & 0xffff | (uint)uVar1 << 0x10);
  CafeObject::setVisible(*(CafeObject **)(this + 0xc0),false);
  if (*(int *)(this + 0x98) != 0) {
    (**(code **)(*(int *)this + 0x34))(this);
    piVar2 = *(int **)(this + 0x98);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(undefined4 *)(this + 0x98) = 0;
  }
  pcVar8 = *(code **)(*(int *)this + 0x2c);
  piVar2 = *(int **)(*(int *)(this + 0xc0) + 0x38);
  pCVar5 = *(CImage **)
            (*(short *)((int)piVar2 + (*(byte *)(*(int *)(this + 0xc0) + 0x34) + 0x1c) * 2 + 4) * 4
            + *piVar2);
  this_01 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(this_01,pCVar5,'\x12',false);
  pPVar6 = this + 0x98;
  *(ImageElement **)pPVar6 = this_01;
  uVar9 = (*pcVar8)(this,this_01);
  ImageElement::setScale(*(ImageElement **)pPVar6,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  iVar3 = *(int *)(this + 0x78);
  (**(code **)(**(int **)pPVar6 + 0x14))
            (*(int **)pPVar6,*(int *)(iVar3 + 0xc) / 2 + *(int *)(iVar3 + 4),
             *(int *)(iVar3 + 0x10) / 2 + *(int *)(iVar3 + 8));
  return (ulonglong)CONCAT24(uVar1,pcVar4);
}


