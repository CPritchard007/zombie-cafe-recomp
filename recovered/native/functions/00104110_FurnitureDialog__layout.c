/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00104110 FurnitureDialog::layout */

/* FurnitureDialog::layout() */

void __thiscall FurnitureDialog::layout(FurnitureDialog *this)

{
  ImageElement *this_00;
  int iVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  float extraout_s0;
  float extraout_s1;
  undefined4 uVar5;
  undefined4 uVar6;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  piVar3 = *(int **)(this + 0x84);
  pcVar4 = *(code **)(*piVar3 + 0x44);
  String::String(aSStack_30,(String *)(*(int *)(this + 0xa0) + 0x2c));
  (*pcVar4)(piVar3,aSStack_30);
  String::~String(aSStack_30);
  iVar1 = *(int *)(this + 0x90);
  (**(code **)(**(int **)(this + 0x84) + 0x14))
            (*(int **)(this + 0x84),*(undefined4 *)(iVar1 + 4),
             *(int *)(iVar1 + 0x10) + *(int *)(iVar1 + 8) + 10);
  (**(code **)(**(int **)(this + 0x84) + 0x18))
            (*(int **)(this + 0x84),*(undefined4 *)(*(int *)(this + 0x74) + 0xc),0x32);
  iVar1 = *(int *)(this + 0x90);
  (**(code **)(**(int **)(this + 0x80) + 0x14))
            (*(int **)(this + 0x80),*(undefined4 *)(iVar1 + 0xc),*(int *)(iVar1 + 8) + 10);
  String::String(aSStack_28,(char *)(DAT_00104250 + 0x10417a));
  iVar2 = *(int *)(this + 0xa0);
  iVar1 = SmDev();
  MultiByteString::insertStringNextLine
            (aSStack_28,(String *)(iVar2 + 100),*(int *)(iVar1 * 4 + DAT_00104254 + 0x104190));
  piVar3 = *(int **)(this + 0x80);
  pcVar4 = *(code **)(*piVar3 + 0x44);
  String::String(aSStack_20,aSStack_28);
  (*pcVar4)(piVar3,aSStack_20);
  String::~String(aSStack_20);
  piVar3 = *(int **)(this + 0x80);
  (**(code **)(*piVar3 + 0x18))
            (piVar3,*(int *)(*(int *)(this + 0x74) + 0xc) - piVar3[1],
             *(undefined4 *)(*(int *)(this + 0x90) + 0x10));
  piVar3 = *(int **)(*(int *)(this + 0xa4) + 0x38);
  *(undefined4 *)(this + 0xa8) =
       *(undefined4 *)
        (*(short *)((int)piVar3 + (*(byte *)(*(int *)(this + 0xa4) + 0x34) + 0x1c) * 2 + 4) * 4 +
        *piVar3);
  this_00 = (ImageElement *)operator_new(0x98);
  uVar5 = 9;
  uVar6 = 1;
  ImageElement::ImageElement(this_00,*(CImage **)(this + 0xa8),extraout_s0,extraout_s1,'\0',false);
  *(ImageElement **)(this + 0x94) = this_00;
  (**(code **)(*(int *)this_00 + 0x14))
            (this_00,*(undefined4 *)(*(int *)(this + 0x90) + 4),
             *(undefined4 *)(*(int *)(this + 0x90) + 8),*(code **)(*(int *)this_00 + 0x14),uVar5,
             uVar6);
  String::~String(aSStack_28);
  return;
}


