/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000d9e04 CharacterPortrait::setCharacter */

/* CharacterPortrait::setCharacter(Character*, bool, bool, bool, bool) */

void __thiscall
CharacterPortrait::setCharacter
          (CharacterPortrait *this,Character *param_1,bool param_2,bool param_3,bool param_4,
          bool param_5)

{
  char cVar1;
  undefined2 uVar2;
  CharacterInstance *pCVar3;
  int iVar4;
  String *pSVar5;
  Character *this_00;
  CImage *pCVar6;
  ImageElement *this_01;
  CharacterPortrait CVar7;
  undefined1 uVar8;
  bool bVar9;
  undefined4 uVar10;
  code *pcVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  float fVar17;
  int local_c0;
  int local_b4;
  int local_b0;
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
  
  iVar14 = DAT_000da0cc + 0xd9e1e;
  if (*(int **)(this + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x6c) + 4))();
  }
  this[0x9c] = (CharacterPortrait)param_3;
  pCVar3 = (CharacterInstance *)operator_new(0xdc);
  CharacterInstance::CharacterInstance(pCVar3,param_1,(CFPathFinder *)0x0);
  *(CharacterInstance **)(this + 0x6c) = pCVar3;
  uVar8 = *(undefined1 *)(*(int *)(pCVar3 + 0x8c) + 0x4c);
  this[0x9d] = (CharacterPortrait)0x0;
  if (param_4) {
    if (param_1[0x36] == (Character)0x0) {
      CVar7 = (CharacterPortrait)0x1;
      param_4 = false;
    }
    else {
      L_PrintLog((char *)(DAT_000da0d0 + 0xd9e70),(char *)(DAT_000da0d4 + 0xd9e72));
      this[0x9d] = (CharacterPortrait)0x1;
      CVar7 = *(CharacterPortrait *)(DAT_000da0d8 + (uint)(byte)param_1[0x36] * 0x24 + 0xd9eb7);
      this[0x9e] = CVar7;
      pCVar3 = *(CharacterInstance **)(this + 0x6c);
      param_4 = false;
    }
  }
  else {
    CVar7 = (CharacterPortrait)0x1;
  }
  CharacterInstance::setCurrentAnimation(pCVar3,(uchar)CVar7,'\x01',param_4);
  *(undefined1 *)(*(int *)(*(int *)(this + 0x6c) + 0x8c) + 0x4c) = uVar8;
  pCVar3 = *(CharacterInstance **)(this + 0x6c);
  fVar17 = (float)SmDev();
  CharacterInstance::setScale(pCVar3,fVar17);
  piVar12 = *(int **)(this + 0x6c);
  uVar10 = *(undefined4 *)(piVar12[0x23] + 0x48);
  pcVar11 = *(code **)(*piVar12 + 0xc);
  iVar4 = SmDev();
  uVar2 = *(undefined2 *)(*(int *)(iVar14 + DAT_000da0e0) + iVar4 * 4);
  iVar4 = SmDev();
  (*pcVar11)(piVar12,CONCAT22(uVar2,*(undefined2 *)(*(int *)(iVar14 + DAT_000da0e4) + iVar4 * 4)));
  *(undefined4 *)(*(int *)(*(int *)(this + 0x6c) + 0x8c) + 0x48) = uVar10;
  piVar12 = *(int **)(*(int *)(this + 0x6c) + 0x8c);
  bVar15 = *(char *)((int)piVar12 + 5) == '\0';
  if (bVar15) {
    local_b4 = *(int *)(*(int *)(this + 0x90) + DAT_000da0e8);
    local_c0 = *(int *)(*(int *)(this + 0x90) + 0x680);
    local_b0 = *(int *)(local_c0 * 4 + **(int **)(iVar14 + DAT_000da0ec));
  }
  else {
    local_b4 = piVar12[0xb];
    local_c0 = piVar12[10];
    local_b0 = *(int *)(DAT_000da0f0 + local_c0 * 4 + 0xd9f64);
  }
  piVar13 = *(int **)(this + 0x7c);
  if (local_b4 < local_b0) {
    if (local_c0 < *(int *)(DAT_000da0f8 + (uint)*(byte *)(*piVar12 + 0xb40) * 4 + 0xd9fde)) {
      pcVar11 = *(code **)(*piVar13 + 0x44);
      String::valueOf((int)aSStack_68);
      String::String(aSStack_60,(char *)(DAT_000da10c + 0xda02e));
      String::operator+(aSStack_58,aSStack_68,aSStack_60);
      String::valueOf((long)aSStack_50);
      String::operator+(aSStack_48,aSStack_58,aSStack_50);
      String::String(aSStack_40,(char *)(DAT_000da110 + 0xda054));
      String::operator+(aSStack_38,aSStack_48,aSStack_40);
      (*pcVar11)(piVar13,aSStack_38);
      String::~String(aSStack_38);
      String::~String(aSStack_40);
      String::~String(aSStack_48);
      String::~String(aSStack_50);
      String::~String(aSStack_58);
      String::~String(aSStack_60);
      pSVar5 = aSStack_68;
    }
    else {
      pcVar11 = *(code **)(*piVar13 + 0x44);
      String::String(aSStack_a0,(char *)(DAT_000da0fc + 0xd9fac));
      String::String(aSStack_98,(char *)(DAT_000da100 + 0xd9fb8));
      String::operator+(aSStack_90,aSStack_a0,aSStack_98);
      String::String(aSStack_88,(char *)(DAT_000da104 + 0xd9fcc));
      String::operator+(aSStack_80,aSStack_90,aSStack_88);
      String::String(aSStack_78,(char *)(DAT_000da108 + 0xd9fe0));
      String::operator+(aSStack_70,aSStack_80,aSStack_78);
      (*pcVar11)(piVar13,aSStack_70);
      String::~String(aSStack_70);
      String::~String(aSStack_78);
      String::~String(aSStack_80);
      String::~String(aSStack_88);
      String::~String(aSStack_90);
      String::~String(aSStack_98);
      pSVar5 = aSStack_a0;
    }
  }
  else {
    pcVar11 = *(code **)(*piVar13 + 0x44);
    String::String(aSStack_a8,
                   (String *)
                   (*(int *)(*(int *)(*(int *)(this + 0x90) + 0x4b0) + 8) +
                   **(int **)(iVar14 + DAT_000da0f4) * 8));
    (*pcVar11)(piVar13,aSStack_a8);
    pSVar5 = aSStack_a8;
  }
  String::~String(pSVar5);
  piVar12 = *(int **)(this + 0x84);
  pcVar11 = *(code **)(*piVar12 + 0x44);
  if (local_c0 <
      *(int *)((int)&DAT_000da0e8 +
              DAT_000da114 + (uint)*(byte *)(**(int **)(*(int *)(this + 0x6c) + 0x8c) + 0xb40) * 4))
  {
    String::valueOf((int)aSStack_28);
    (*pcVar11)(piVar12,aSStack_28);
    pSVar5 = aSStack_28;
  }
  else {
    String::String(aSStack_30,(char *)(DAT_000da118 + 0xda0c0));
    (*pcVar11)(piVar12,aSStack_30);
    pSVar5 = aSStack_30;
  }
  String::~String(pSVar5);
  piVar12 = *(int **)(this + 0x8c);
  pcVar11 = *(code **)(*piVar12 + 0x44);
  String::String(aSStack_20,(char *)(DAT_000da45c + 0xda140));
  (*pcVar11)(piVar12,aSStack_20);
  String::~String(aSStack_20);
  (**(code **)(**(int **)(this + 0x88) + 0x20))(*(int **)(this + 0x88),0);
  (**(code **)(**(int **)(this + 0x8c) + 0x20))(*(int **)(this + 0x8c),0);
  ProgressBar::setMaximumValue(*(ProgressBar **)(this + 0x70),local_b0);
  ProgressBar::setValue(*(ProgressBar **)(this + 0x70),local_b4,true);
  *(int *)(this + 0x78) = local_c0;
  *(int *)(this + 0x74) = local_b4;
  cVar1 = *(char *)(*(int *)(*(int *)(this + 0x6c) + 0x8c) + 5);
  if (!param_5) {
    if (*(int *)(this + 0x68) != 0) {
      (**(code **)(*(int *)this + 0x34))(this);
      if (*(int **)(*(int *)(this + 0x68) + 100) != (int *)0x0) {
        (**(code **)(**(int **)(*(int *)(this + 0x68) + 100) + 4))();
      }
      if (*(int **)(this + 0x68) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x68) + 4))();
      }
      *(undefined4 *)(this + 0x68) = 0;
    }
    if (((*(int *)(this + 0x6c) != 0) &&
        (this_00 = *(Character **)(*(int *)(this + 0x6c) + 0x8c), 0 < *(int *)(this_00 + 0x30))) &&
       (iVar4 = Character::getSameZombiePowerupIconIdx(this_00), iVar4 != -1)) {
      pcVar11 = *(code **)(*(int *)this + 0x2c);
      pCVar6 = (CImage *)
               PackedImage::getImage
                         (*(PackedImage **)(*(int *)(this + 0x90) + DAT_000da460),iVar4,false);
      this_01 = (ImageElement *)operator_new(0x98);
      ImageElement::ImageElement(this_01,pCVar6,'\x14',true);
      *(ImageElement **)(this + 0x68) = this_01;
      (*pcVar11)(this,this_01);
      (**(code **)(**(int **)(this + 0x68) + 0x14))
                (*(int **)(this + 0x68),*(undefined4 *)(*(int *)(this + 0x80) + 4),
                 *(undefined4 *)(*(int *)(this + 0x80) + 8));
    }
  }
  piVar12 = *(int **)(this + 0x70);
  if (this[0x9c] == (CharacterPortrait)0x0) {
    bVar16 = cVar1 == '\x01';
    uVar8 = 0;
    if (!bVar16) {
      uVar8 = param_2;
    }
    (**(code **)(*piVar12 + 0x20))(piVar12,uVar8);
    bVar9 = false;
    if ((!bVar16) && ((param_2 || (bVar9 = false, !bVar15)))) {
      bVar9 = !param_5;
    }
    (**(code **)(**(int **)(this + 0x80) + 0x20))(*(int **)(this + 0x80),bVar9);
    bVar9 = false;
    if ((!bVar16) && ((param_2 || (bVar9 = false, !bVar15)))) {
      bVar9 = !param_5;
    }
    (**(code **)(**(int **)(this + 0x84) + 0x20))(*(int **)(this + 0x84),bVar9);
    uVar8 = 0;
    if (!bVar16) {
      uVar8 = param_2;
    }
    (**(code **)(**(int **)(this + 0x7c) + 0x20))(*(int **)(this + 0x7c),uVar8);
    uVar8 = 0;
    if ((!bVar16) && (uVar8 = 0, !bVar15)) {
      uVar8 = param_2;
    }
    (**(code **)(**(int **)(this + 0x88) + 0x20))(*(int **)(this + 0x88),uVar8);
    uVar8 = 0;
    if ((!bVar16) && (uVar8 = 0, !bVar15)) {
      uVar8 = param_2;
    }
    (**(code **)(**(int **)(this + 0x8c) + 0x20))(*(int **)(this + 0x8c),uVar8);
    if ((bVar16) || ((!param_2 && (bVar15)))) {
      piVar12 = *(int **)(this + 0x6c);
      pcVar11 = *(code **)(*piVar12 + 0xc);
      iVar4 = SmDev();
      uVar2 = *(undefined2 *)(*(int *)(iVar14 + DAT_000da464) + iVar4 * 4);
      iVar4 = SmDev();
      (*pcVar11)(piVar12,CONCAT22(uVar2,*(undefined2 *)(*(int *)(iVar14 + DAT_000da468) + iVar4 * 4)
                                 ));
    }
    else if (param_5) {
      pcVar11 = *(code **)(**(int **)(this + 0x6c) + 0xc);
      iVar4 = SmDev();
      (*pcVar11)(*(int *)(this + 0x6c),
                 CONCAT22(*(undefined2 *)(*(int *)(iVar14 + DAT_000da46c) + iVar4 * 4),
                          *(undefined2 *)(*(int *)(this + 0x6c) + 4)));
    }
    piVar12 = *(int **)(this + 0x68);
    if (piVar12 == (int *)0x0) goto LAB_000da3be;
    uVar10 = 1;
    pcVar11 = *(code **)(*piVar12 + 0x20);
  }
  else {
    (**(code **)(*piVar12 + 0x20))(piVar12,0);
    (**(code **)(**(int **)(this + 0x80) + 0x20))(*(int **)(this + 0x80),0);
    (**(code **)(**(int **)(this + 0x84) + 0x20))(*(int **)(this + 0x84),0);
    (**(code **)(**(int **)(this + 0x7c) + 0x20))(*(int **)(this + 0x7c),0);
    (**(code **)(**(int **)(this + 0x88) + 0x20))(*(int **)(this + 0x88),0);
    (**(code **)(**(int **)(this + 0x8c) + 0x20))(*(int **)(this + 0x8c),0);
    piVar12 = *(int **)(this + 0x6c);
    pcVar11 = *(code **)(*piVar12 + 0xc);
    iVar4 = SmDev();
    uVar2 = *(undefined2 *)(*(int *)(iVar14 + DAT_000da464) + iVar4 * 4);
    iVar4 = SmDev();
    (*pcVar11)(piVar12,CONCAT22(uVar2,*(undefined2 *)(*(int *)(iVar14 + DAT_000da468) + iVar4 * 4)))
    ;
    piVar12 = *(int **)(this + 0x68);
    if (piVar12 == (int *)0x0) goto LAB_000da3be;
    uVar10 = 0;
    pcVar11 = *(code **)(*piVar12 + 0x20);
  }
  (*pcVar11)(piVar12,uVar10);
LAB_000da3be:
  L_PrintLog((char *)(DAT_000da470 + 0xda3c6),(char *)(DAT_000da474 + 0xda3c8));
  return;
}


