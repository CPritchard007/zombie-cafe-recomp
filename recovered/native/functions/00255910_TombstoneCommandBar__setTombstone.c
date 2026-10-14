/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00255910 TombstoneCommandBar::setTombstone */

/* TombstoneCommandBar::setTombstone(Furniture*) */

void __thiscall TombstoneCommandBar::setTombstone(TombstoneCommandBar *this,Furniture *param_1)

{
  ImageElement *this_00;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  TombstoneCommandBar *pTVar4;
  String *pSVar5;
  undefined4 uVar6;
  code *pcVar7;
  int *piVar8;
  int iVar9;
  CImage *pCVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  String aSStack_118 [8];
  String aSStack_110 [8];
  String aSStack_108 [8];
  String aSStack_100 [8];
  String aSStack_f8 [8];
  String aSStack_f0 [8];
  String aSStack_e8 [8];
  String aSStack_e0 [8];
  String aSStack_d8 [8];
  String aSStack_d0 [8];
  String aSStack_c8 [8];
  String aSStack_c0 [8];
  String aSStack_b8 [8];
  String aSStack_b0 [8];
  String aSStack_a8 [8];
  String aSStack_a0 [8];
  String aSStack_98 [8];
  String aSStack_90 [8];
  String aSStack_88 [8];
  String aSStack_80 [8];
  String aSStack_78 [8];
  String aSStack_70 [8];
  String aSStack_68 [8];
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  *(Furniture **)(this + 0x78) = param_1;
  iVar11 = DAT_00255be8 + 0x255920;
  if (*(int *)(this + 0x80) != 0) {
    (**(code **)(*(int *)this + 0x34))();
  }
  pcVar7 = *(code **)(*(int *)this + 0x2c);
  pCVar10 = *(CImage **)
             ((short)(*(int **)(*(int *)(this + 0x78) + 0x38))[0xf] * 4 +
             **(int **)(*(int *)(this + 0x78) + 0x38));
  this_00 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(this_00,pCVar10,'\t',false);
  *(ImageElement **)(this + 0x80) = this_00;
  (*pcVar7)(this,this_00);
  piVar12 = *(int **)(this + 0x80);
  pcVar7 = *(code **)(*piVar12 + 0x14);
  iVar1 = SmDev();
  uVar2 = __fixsfsi(*(undefined4 *)(iVar1 * 4 + *(int *)(iVar11 + DAT_00255bec)));
  piVar8 = *(int **)(iVar11 + DAT_00255bf0);
  iVar9 = *piVar8;
  iVar1 = SmDev();
  uVar3 = __floatsisf(*(undefined4 *)(iVar1 * 4 + iVar9));
  iVar1 = SmDev();
  __addsf3(uVar3,*(undefined4 *)(iVar1 * 4 + *(int *)(iVar11 + DAT_00255bf4)));
  uVar3 = __fixsfsi();
  (*pcVar7)(piVar12,uVar2,uVar3);
  iVar1 = *(int *)(this + 0x80);
  uVar2 = __floatsisf(*(undefined4 *)(*(int *)(this + 100) + 0x10));
  uVar3 = __floatsisf(*(undefined4 *)(iVar1 + 0x10));
  uVar2 = __divsf3(uVar2,uVar3);
  *(undefined4 *)(iVar1 + 0x6c) = uVar2;
  *(undefined4 *)(iVar1 + 0x68) = uVar2;
  piVar12 = *(int **)(this + 0x80);
  iVar9 = piVar12[0x19];
  iVar1 = *piVar12;
  uVar6 = *(undefined4 *)(iVar9 + 0x2c);
  uVar2 = __floatsisf((int)*(short *)(iVar9 + 0x20));
  uVar2 = __mulsf3(uVar2,uVar6);
  uVar3 = __floatsisf((int)*(short *)(iVar9 + 0x2a));
  uVar2 = __addsf3(uVar2,uVar3);
  uVar3 = __floatsisf((int)*(short *)(iVar9 + 0x26));
  __addsf3(uVar2,uVar3);
  __fixsfsi();
  uVar2 = __floatsisf();
  __mulsf3(uVar2,piVar12[0x1a]);
  uVar2 = __fixsfsi();
  uVar3 = __floatsisf((int)*(short *)(iVar9 + 0x22));
  uVar3 = __mulsf3(uVar3,uVar6);
  uVar6 = __floatsisf((int)*(short *)(iVar9 + 0x24));
  uVar3 = __addsf3(uVar3,uVar6);
  uVar6 = __floatsisf((int)*(short *)(iVar9 + 0x28));
  __addsf3(uVar3,uVar6);
  __fixsfsi();
  uVar3 = __floatsisf();
  __mulsf3(uVar3,piVar12[0x1b]);
  uVar3 = __fixsfsi();
  (**(code **)(iVar1 + 0x18))(piVar12,uVar2,uVar3);
  iVar1 = ScreenElement::localToParentCoords
                    (*(ScreenElement **)(this + 0x80),
                     *(int *)(*(ScreenElement **)(this + 0x80) + 0xc),0);
  iVar13 = *piVar8;
  iVar9 = SmDev();
  iVar9 = (iVar1 >> 0x10) + (*(int *)(iVar9 * 4 + iVar13) >> 1);
  piVar12 = *(int **)(this + 0x84);
  pcVar7 = *(code **)(*piVar12 + 0x14);
  iVar13 = *piVar8;
  iVar1 = SmDev();
  uVar2 = __floatsisf(*(undefined4 *)(iVar1 * 4 + iVar13));
  iVar1 = SmDev();
  iVar14 = *(int *)(iVar11 + DAT_00255bf8);
  uVar2 = __addsf3(uVar2,*(undefined4 *)(iVar1 * 4 + iVar14));
  iVar1 = SmDev();
  iVar13 = *(int *)(iVar11 + DAT_00255bfc);
  __addsf3(uVar2,*(undefined4 *)(iVar1 * 4 + iVar13));
  uVar2 = __fixsfsi();
  (*pcVar7)(piVar12,iVar9,uVar2);
  pTVar4 = this + 0x88;
  iVar1 = *(int *)(*(int *)(*(int *)(this + 0x78) + 0x38) + 0x24);
  if (iVar1 == 0x1e4) {
    piVar12 = *(int **)pTVar4;
    pcVar7 = *(code **)(*piVar12 + 0x44);
    Vector<String>::elementAt((int)aSStack_118);
    (*pcVar7)(piVar12,aSStack_118);
    String::~String(aSStack_118);
    piVar12 = *(int **)(this + 0x88);
    iVar1 = *piVar8;
    pcVar7 = *(code **)(*piVar12 + 0x14);
    iVar11 = SmDev();
    uVar2 = __floatsisf(*(undefined4 *)(iVar11 * 4 + iVar1));
    iVar11 = SmDev();
    uVar2 = __addsf3(uVar2,*(undefined4 *)(iVar14 + iVar11 * 4));
    iVar11 = SmDev();
    __addsf3(uVar2,*(undefined4 *)(iVar13 + iVar11 * 4));
    uVar2 = __fixsfsi();
    (*pcVar7)(piVar12,iVar9,uVar2);
    piVar12 = *(int **)(this + 0x88);
    (**(code **)(*piVar12 + 0x18))
              (piVar12,(*(int *)(*(int *)(this + 100) + 4) - *(int *)(*(int *)(this + 100) + 0xc)) -
                       piVar12[1],0);
    piVar12 = *(int **)(this + 0x84);
    pcVar7 = *(code **)(*piVar12 + 0x44);
    String::valueOf((int)aSStack_110);
    String::operator+(aSStack_108,(char *)aSStack_110);
    String::valueOf((long)aSStack_100);
    String::operator+(aSStack_f8,aSStack_108,aSStack_100);
    (*pcVar7)(piVar12,aSStack_f8);
    String::~String(aSStack_f8);
    String::~String(aSStack_100);
    String::~String(aSStack_108);
    pSVar5 = aSStack_110;
LAB_00255cf8:
    String::~String(pSVar5);
    piVar12 = *(int **)(this + 0x84);
    iVar11 = ScreenElement::localToParentCoords
                       (*(ScreenElement **)(this + 0x88),0,
                        *(int *)(*(ScreenElement **)(this + 0x88) + 0x10));
    (**(code **)(*piVar12 + 0x14))(piVar12,iVar11 >> 0x10,(int)(short)iVar11);
  }
  else {
    if (iVar1 == 0x240) {
      piVar12 = *(int **)pTVar4;
      pcVar7 = *(code **)(*piVar12 + 0x44);
      Vector<String>::elementAt((int)aSStack_f0);
      (*pcVar7)(piVar12,aSStack_f0);
      String::~String(aSStack_f0);
      piVar12 = *(int **)(this + 0x88);
      pcVar7 = *(code **)(*piVar12 + 0x14);
      iVar1 = *piVar8;
      iVar11 = SmDev();
      uVar2 = __floatsisf(*(undefined4 *)(iVar11 * 4 + iVar1));
      iVar11 = SmDev();
      uVar2 = __addsf3(uVar2,*(undefined4 *)(iVar14 + iVar11 * 4));
      iVar11 = SmDev();
      __addsf3(uVar2,*(undefined4 *)(iVar13 + iVar11 * 4));
      uVar2 = __fixsfsi();
      (*pcVar7)(piVar12,iVar9,uVar2);
      piVar12 = *(int **)(this + 0x88);
      (**(code **)(*piVar12 + 0x18))
                (piVar12,(*(int *)(*(int *)(this + 100) + 4) - *(int *)(*(int *)(this + 100) + 0xc))
                         - piVar12[1],0);
      piVar12 = *(int **)(this + 0x84);
      pcVar7 = *(code **)(*piVar12 + 0x44);
      String::valueOf((int)aSStack_e8);
      String::operator+(aSStack_e0,(char *)aSStack_e8);
      String::valueOf((long)aSStack_d8);
      String::operator+(aSStack_d0,aSStack_e0,aSStack_d8);
      (*pcVar7)(piVar12,aSStack_d0);
      String::~String(aSStack_d0);
      String::~String(aSStack_d8);
      String::~String(aSStack_e0);
      pSVar5 = aSStack_e8;
      goto LAB_00255cf8;
    }
    piVar12 = *(int **)(iVar11 + DAT_00255fb8);
    piVar8 = *(int **)pTVar4;
    if (iVar1 == *piVar12) {
      pcVar7 = *(code **)(*piVar8 + 0x44);
      Vector<String>::elementAt((int)aSStack_c8);
      (*pcVar7)(piVar8,aSStack_c8);
      pSVar5 = aSStack_c8;
    }
    else {
      pcVar7 = *(code **)(*piVar8 + 0x44);
      Vector<String>::elementAt((int)aSStack_c0);
      (*pcVar7)(piVar8,aSStack_c0);
      pSVar5 = aSStack_c0;
    }
    String::~String(pSVar5);
    piVar8 = *(int **)(this + 0x88);
    iVar1 = ScreenElement::localToParentCoords
                      (*(ScreenElement **)(this + 0x84),0,
                       *(int *)(*(ScreenElement **)(this + 0x84) + 0x10));
    (**(code **)(*piVar8 + 0x14))(piVar8,iVar1 >> 0x10,(int)(short)iVar1);
    piVar8 = *(int **)(this + 0x88);
    (**(code **)(*piVar8 + 0x18))
              (piVar8,(*(int *)(*(int *)(this + 100) + 4) - *(int *)(*(int *)(this + 100) + 0xc)) -
                      piVar8[1],0);
    if (*(int *)(*(int *)(*(int *)(this + 0x78) + 0x38) + 0x24) == **(int **)(iVar11 + DAT_00255fc4)
       ) {
      piVar8 = *(int **)(this + 0x84);
      pcVar7 = *(code **)(*piVar8 + 0x44);
      String::valueOf((int)aSStack_b8);
      String::operator+(aSStack_b0,(char *)aSStack_b8);
      String::valueOf((long)aSStack_a8);
      String::operator+(aSStack_a0,aSStack_b0,aSStack_a8);
      (*pcVar7)(piVar8,aSStack_a0);
      String::~String(aSStack_a0);
      String::~String(aSStack_a8);
      String::~String(aSStack_b0);
      String::~String(aSStack_b8);
    }
    if (*(int *)(*(int *)(*(int *)(this + 0x78) + 0x38) + 0x24) == **(int **)(iVar11 + DAT_00255fd4)
       ) {
      piVar8 = *(int **)(this + 0x84);
      pcVar7 = *(code **)(*piVar8 + 0x44);
      String::valueOf((int)aSStack_98);
      String::operator+(aSStack_90,(char *)aSStack_98);
      String::valueOf((long)aSStack_88);
      String::operator+(aSStack_80,aSStack_90,aSStack_88);
      (*pcVar7)(piVar8,aSStack_80);
      String::~String(aSStack_80);
      String::~String(aSStack_88);
      String::~String(aSStack_90);
      String::~String(aSStack_98);
    }
    if (*(int *)(*(int *)(*(int *)(this + 0x78) + 0x38) + 0x24) == **(int **)(iVar11 + DAT_00255fe4)
       ) {
      piVar8 = *(int **)(this + 0x84);
      pcVar7 = *(code **)(*piVar8 + 0x44);
      String::valueOf((int)aSStack_78);
      String::operator+(aSStack_70,(char *)aSStack_78);
      String::valueOf((long)aSStack_68);
      String::operator+(aSStack_60,aSStack_70,aSStack_68);
      (*pcVar7)(piVar8,aSStack_60);
      String::~String(aSStack_60);
      String::~String(aSStack_68);
      String::~String(aSStack_70);
      String::~String(aSStack_78);
    }
    if (*(int *)(*(int *)(*(int *)(this + 0x78) + 0x38) + 0x24) == **(int **)(iVar11 + DAT_00255ff0)
       ) {
      piVar8 = *(int **)(this + 0x84);
      pcVar7 = *(code **)(*piVar8 + 0x44);
      String::valueOf((int)aSStack_58);
      String::operator+(aSStack_50,(char *)aSStack_58);
      String::valueOf((long)aSStack_48);
      String::operator+(aSStack_40,aSStack_50,aSStack_48);
      (*pcVar7)(piVar8,aSStack_40);
      String::~String(aSStack_40);
      String::~String(aSStack_48);
      String::~String(aSStack_50);
      String::~String(aSStack_58);
    }
    if (*(int *)(*(int *)(*(int *)(this + 0x78) + 0x38) + 0x24) != *piVar12) {
      piVar12 = *(int **)(this + 100);
      uVar2 = 1;
      pcVar7 = *(code **)(*piVar12 + 0x20);
      goto LAB_0025600c;
    }
    piVar12 = *(int **)(this + 0x84);
    pcVar7 = *(code **)(*piVar12 + 0x44);
    String::valueOf((int)aSStack_38);
    String::operator+(aSStack_30,(char *)aSStack_38);
    String::valueOf((long)aSStack_28);
    String::operator+(aSStack_20,aSStack_30,aSStack_28);
    (*pcVar7)(piVar12,aSStack_20);
    String::~String(aSStack_20);
    String::~String(aSStack_28);
    String::~String(aSStack_30);
    String::~String(aSStack_38);
  }
  piVar12 = *(int **)(this + 100);
  uVar2 = 0;
  pcVar7 = *(code **)(*piVar12 + 0x20);
LAB_0025600c:
  (*pcVar7)(piVar12,uVar2);
  (**(code **)(*(int *)this + 8))(this,1);
  return;
}


