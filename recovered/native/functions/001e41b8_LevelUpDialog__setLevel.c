/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e41b8 LevelUpDialog::setLevel */

/* LevelUpDialog::setLevel(int, int, int) */

void __thiscall LevelUpDialog::setLevel(LevelUpDialog *this,int param_1,int param_2,int param_3)

{
  short sVar1;
  uchar uVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  CImage *pCVar7;
  undefined4 uVar8;
  ImageElement *this_00;
  int iVar9;
  code *pcVar10;
  int iVar11;
  int *piVar12;
  undefined4 uVar13;
  float extraout_s0;
  float extraout_s1;
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  *(int *)(this + 0x68) = param_1;
  *(int *)(this + 0x60) = param_2;
  *(int *)(this + 100) = param_3;
  piVar12 = *(int **)(this + 0x8c);
  pcVar10 = *(code **)(*piVar12 + 0x44);
  String::String(aSStack_38,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(this + 0xa8) + 0x4b0) + 8) +
                 **(int **)(DAT_001e43ec + 0x1e41ea) * 8));
  String::valueOf((int)aSStack_30);
  String::operator+(aSStack_28,aSStack_38,aSStack_30);
  (*pcVar10)(piVar12,aSStack_28);
  String::~String(aSStack_28);
  String::~String(aSStack_30);
  String::~String(aSStack_38);
  piVar12 = *(int **)(this + 0x98);
  pcVar10 = *(code **)(*piVar12 + 0x44);
  Recipe::getFullName((char)&stack0xffffffec + 0xf4);
  (*pcVar10)(piVar12,aSStack_20);
  String::~String(aSStack_20);
  (**(code **)(*(int *)this + 0x34))(this,*(undefined4 *)(this + 0x7c));
  if (*(int **)(*(int *)(this + 0x7c) + 100) != (int *)0x0) {
    (**(code **)(**(int **)(*(int *)(this + 0x7c) + 100) + 4))();
  }
  if (*(int **)(this + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x7c) + 4))();
  }
  uVar4 = __floatsisf(((*(int *)(*(int *)(this + 0x98) + 8) - *(int *)(*(int *)(this + 0x98) + 0x10)
                       ) - *(int *)(*(int *)(this + 0x94) + 8)) -
                      *(int *)(*(int *)(this + 0x94) + 0x10));
  iVar5 = SmDev();
  uVar6 = __floatsisf(*(undefined4 *)(iVar5 * 4 + *(int *)(DAT_001e43f0 + 0x1e42a8)));
  iVar5 = __aeabi_fcmplt(uVar4,uVar6);
  if (iVar5 != 0) {
    uVar6 = uVar4;
  }
  pCVar7 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(this + 0xa8) + DAT_001e43f4),
                      (int)*(short *)(*(int *)(*(int *)(this + 0xa8) + 0x4e8) + param_2 * 0x1c +
                                     0x14),true);
  uVar13 = *(undefined4 *)(pCVar7 + 0x2c);
  pcVar10 = *(code **)(*(int *)this + 0x2c);
  iVar9 = *(int *)(*(int *)(this + 0x98) + 8);
  iVar11 = *(int *)(*(int *)(this + 0x98) + 0x10);
  sVar1 = *(short *)(*(int *)(this + 0x70) + 4);
  uVar4 = __floatsisf((int)*(short *)(pCVar7 + 0x20));
  uVar4 = __mulsf3(uVar4,uVar13);
  uVar8 = __floatsisf((int)*(short *)(pCVar7 + 0x2a));
  uVar4 = __addsf3(uVar4,uVar8);
  uVar8 = __floatsisf((int)*(short *)(pCVar7 + 0x26));
  __addsf3(uVar4,uVar8);
  __fixsfsi();
  uVar4 = __floatsisf();
  uVar2 = __divsf3(uVar6,uVar4);
  uVar4 = __floatsisf((int)*(short *)(pCVar7 + 0x22));
  uVar4 = __mulsf3(uVar4,uVar13);
  uVar8 = __floatsisf((int)*(short *)(pCVar7 + 0x24));
  uVar4 = __addsf3(uVar4,uVar8);
  uVar8 = __floatsisf((int)*(short *)(pCVar7 + 0x28));
  __addsf3(uVar4,uVar8);
  __fixsfsi();
  uVar4 = __floatsisf();
  bVar3 = (bool)__divsf3(uVar6,uVar4);
  this_00 = (ImageElement *)operator_new(0x98);
  iVar5 = __fixsfsi(uVar6);
  ImageElement::ImageElement
            (this_00,pCVar7,iVar9 - iVar11 & 0xffffU | (int)sVar1 << 0x10,iVar5,iVar5,extraout_s0,
             extraout_s1,uVar2,bVar3);
  *(ImageElement **)(this + 0x7c) = this_00;
  (*pcVar10)(this,this_00);
  return;
}


