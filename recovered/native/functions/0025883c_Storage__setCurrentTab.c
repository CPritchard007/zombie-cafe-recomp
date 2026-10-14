/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025883c Storage::setCurrentTab */

/* Storage::setCurrentTab(unsigned char) */

void __thiscall Storage::setCurrentTab(Storage *this,uchar param_1)

{
  int *piVar1;
  void *pvVar2;
  String *this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  code *pcVar9;
  int iVar10;
  Storage *pSVar11;
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  uVar5 = (uint)param_1;
  if (((byte)this[0xd0] != uVar5) || (this[0xf0] != (Storage)0x0)) {
    unsetTab();
    this[100] = (Storage)0x0;
    *(undefined4 *)(this + 0xd8) = 0;
    *(undefined1 *)(*(int *)(this + (uVar5 + 0x26) * 4) + 0x87) = 1;
    uVar7 = DAT_00258b04;
    this[0xd0] = (Storage)param_1;
    *(undefined4 *)(this + 0xec) = uVar7;
    piVar1 = *(int **)(this + 0xc4);
    (**(code **)(*piVar1 + 0x14))(piVar1,0,piVar1[2]);
    pvVar2 = operator_new(0x28);
    iVar10 = DAT_00258b08;
    *(undefined4 *)((int)pvVar2 + 8) = 0;
    *(undefined4 *)((int)pvVar2 + 4) = 0;
    uVar7 = *(undefined4 *)(iVar10 + 0x2588a0);
    *(undefined1 *)((int)pvVar2 + 0x18) = 0;
    *(void **)((int)pvVar2 + 0xc) = pvVar2;
    *(undefined4 *)((int)pvVar2 + 0x1c) = uVar7;
    *(undefined4 *)((int)pvVar2 + 0x14) = 0;
    *(undefined4 *)((int)pvVar2 + 0x10) = 0;
    *(void **)(this + 0xe0) = pvVar2;
    if (uVar5 == 6) {
      piVar1 = *(int **)(this + 0xbc);
      pcVar9 = *(code **)(*piVar1 + 0x44);
      String::String(aSStack_60,(char *)(DAT_00258b0c + 0x2588c2));
      (*pcVar9)(piVar1,aSStack_60);
      this_00 = aSStack_60;
    }
    else {
      piVar1 = *(int **)(this + 0xbc);
      pcVar9 = *(code **)(*piVar1 + 0x44);
      String::String(aSStack_58,
                     (String *)
                     (*(int *)(*(int *)(*(int *)(this + 0x70) + 0x4b0) + 8) +
                     **(int **)(DAT_00258b10 + 0x2588e6) * 8));
      (*pcVar9)(piVar1,aSStack_58);
      this_00 = aSStack_58;
    }
    String::~String(this_00);
    for (iVar10 = 0; iVar10 < *(int *)(*(int *)(*(int *)(this + 0x70) + 0x7e8) + 0x100) + 1;
        iVar10 = iVar10 + 1) {
      if ((uint)*(byte *)(*(int *)(*(int *)(iVar10 * 4 +
                                           *(int *)(*(int *)(*(int *)(this + 0x70) + 0x7e8) + 0x104)
                                           ) * 4 + *(int *)(this + 0x7c)) + 0x45) ==
          (byte)this[0xd0] + 1) {
        CapcomOrderableList<FurnitureData*>::addOrdered(*(FurnitureData **)(this + 0xe0));
      }
    }
    pSVar11 = this + 0xbc;
    piVar1 = *(int **)pSVar11;
    if (*(int *)(*(int *)(this + 0xe0) + 0x14) == 0) {
      (**(code **)(*piVar1 + 0x20))(piVar1,1);
      iVar10 = *(int *)(*(int *)(this + 0x90) + 0x10) >> 1;
      (**(code **)(**(int **)pSVar11 + 0x14))
                (*(int **)pSVar11,iVar10 + *(int *)(this + 0xd4),*(int *)(this + 0x10) - iVar10);
      piVar1 = *(int **)pSVar11;
      pcVar9 = *(code **)(*piVar1 + 0x18);
      iVar10 = SmDev();
      (*pcVar9)(piVar1,*(undefined4 *)(DAT_00258b14 + iVar10 * 4 + 0x2589a2),0);
    }
    else {
      (**(code **)(*piVar1 + 0x20))(piVar1,0);
    }
    iVar10 = *(int *)(this + 0xe0);
    if (*(int *)(iVar10 + 0x14) != 0) {
      *(undefined4 *)(iVar10 + 0x10) = *(undefined4 *)(iVar10 + 8);
    }
    iVar10 = CapcomApp::getInstance();
    uVar7 = *(undefined4 *)(iVar10 + 0x44);
    iVar10 = CapcomApp::getInstance();
    uVar3 = *(undefined4 *)(iVar10 + 0x50);
    iVar8 = *(int *)(this + 0x90);
    iVar10 = *(int *)(iVar8 + 4);
    iVar6 = *(int *)(iVar8 + 8);
    iVar8 = *(int *)(iVar8 + 0x10);
    piVar1 = *(int **)(this + 0xc0);
    pcVar9 = *(code **)(*piVar1 + 0x44);
    String::String(aSStack_50,(char *)(DAT_00258b18 + 0x2589ce));
    String::valueOf((int)aSStack_48);
    String::operator+(aSStack_40,aSStack_50,aSStack_48);
    String::String(aSStack_38,(char *)(DAT_00258b1c + 0x258a04));
    String::operator+(aSStack_30,aSStack_40,aSStack_38);
    String::String(aSStack_28,(char *)(DAT_00258b20 + 0x258a18));
    String::operator+(aSStack_20,aSStack_30,aSStack_28);
    (*pcVar9)(piVar1,aSStack_20);
    String::~String(aSStack_20);
    String::~String(aSStack_28);
    String::~String(aSStack_30);
    String::~String(aSStack_38);
    String::~String(aSStack_40);
    String::~String(aSStack_48);
    String::~String(aSStack_50);
    pSVar11 = this + 0xc0;
    piVar1 = *(int **)pSVar11;
    uVar4 = __floatsisf(iVar6 - iVar8);
    uVar7 = __mulsf3(uVar7,uVar3);
    uVar7 = __mulsf3(uVar7,DAT_00258b24);
    __addsf3(uVar4,uVar7);
    uVar7 = __fixsfsi();
    (**(code **)(*piVar1 + 0x14))(piVar1,iVar10 + 0x10,uVar7);
    (**(code **)(**(int **)pSVar11 + 0x20))(*(int **)pSVar11,1);
    piVar1 = *(int **)pSVar11;
    pcVar9 = *(code **)(*piVar1 + 0x18);
    iVar10 = SmDev();
    (*pcVar9)(piVar1,*(undefined4 *)(&UNK_00258ac6 + DAT_00258b28 + iVar10 * 4),0);
  }
  return;
}


