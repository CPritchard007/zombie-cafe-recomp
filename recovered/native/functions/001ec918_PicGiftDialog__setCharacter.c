/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ec918 PicGiftDialog::setCharacter */

/* PicGiftDialog::setCharacter(int, int, int, bool) */

void __thiscall
PicGiftDialog::setCharacter(PicGiftDialog *this,int param_1,int param_2,int param_3,bool param_4)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  CharacterInstance *pCVar4;
  undefined4 uVar5;
  uint uVar6;
  CImage *pCVar7;
  ImageElement *this_00;
  undefined4 uVar8;
  undefined4 uVar9;
  Character *pCVar10;
  int iVar11;
  PackedImage *this_01;
  PicGiftDialog *pPVar12;
  code *pcVar13;
  float fVar14;
  int local_30;
  String aSStack_20 [12];
  
  pCVar10 = *(Character **)(this + 0xb8);
  if (pCVar10 != (Character *)0x0) {
    Character::~Character(pCVar10);
    operator_delete(pCVar10);
    *(undefined4 *)(this + 0xb8) = 0;
  }
  piVar2 = *(int **)(this + 0xbc);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
    *(undefined4 *)(this + 0xbc) = 0;
  }
  local_30 = param_3;
  if (param_1 != 0) {
    iVar3 = CapcomApp::getInstance();
    uVar8 = *(undefined4 *)(param_1 * 4 + *(int *)(*(int *)(iVar3 + 4) + DAT_001ecb60));
    String::String(aSStack_20,(char *)(DAT_001ecb64 + 0x1ec97a));
    pCVar10 = (Character *)operator_new(0x6c);
    Character::Character(pCVar10,uVar8,1,param_4,aSStack_20);
    *(Character **)(this + 0xb8) = pCVar10;
    String::~String(aSStack_20);
    piVar2 = *(int **)(this + 0xb8);
    iVar3 = *(int *)(DAT_001ecb68 + (uint)*(byte *)(*piVar2 + 0xb40) * 4 + 0x1ec9b2);
    if (iVar3 < param_2) {
      param_2 = iVar3;
    }
    piVar2[10] = param_2;
    local_30 = 4;
    if (param_3 < 4) {
      local_30 = param_3;
    }
    *(int *)(*(int *)(this + 0xb8) + 0x30) = local_30;
    pCVar4 = (CharacterInstance *)operator_new(0xdc);
    CharacterInstance::CharacterInstance(pCVar4,*(Character **)(this + 0xb8),(CFPathFinder *)0x0);
    *(CharacterInstance **)(this + 0xbc) = pCVar4;
  }
  pPVar12 = this + 0xbc;
  uVar1 = *(undefined1 *)(*(int *)(*(CharacterInstance **)pPVar12 + 0x8c) + 0x4c);
  CharacterInstance::setCurrentAnimation(*(CharacterInstance **)pPVar12,'\x01','\x01',false);
  *(undefined1 *)(*(int *)(*(int *)pPVar12 + 0x8c) + 0x4c) = uVar1;
  pCVar4 = *(CharacterInstance **)pPVar12;
  fVar14 = (float)SmDev();
  CharacterInstance::setScale(pCVar4,fVar14);
  piVar2 = *(int **)pPVar12;
  iVar11 = *(int *)(this + 0x78);
  iVar3 = *piVar2;
  uVar9 = *(undefined4 *)(piVar2[0x23] + 0x48);
  uVar8 = __floatsisf(*(int *)(iVar11 + 8) + *(int *)(iVar11 + 0x10));
  uVar5 = __mulsf3(*(undefined4 *)(this + 0xa4),DAT_001ecb70);
  __subsf3(uVar8,uVar5);
  uVar6 = __fixsfsi();
  (**(code **)(iVar3 + 0xc))
            (piVar2,(*(int *)(iVar11 + 0xc) / 2 + *(int *)(iVar11 + 4)) * 0x10000 | uVar6 & 0xffff);
  *(undefined4 *)(*(int *)(*(int *)pPVar12 + 0x8c) + 0x48) = uVar9;
  if (0 < local_30) {
    if (*(int *)(this + 0x9c) != 0) {
      (**(code **)(*(int *)this + 0x34))(this);
      piVar2 = *(int **)(this + 0x9c);
      if (piVar2 != (int *)0x0) {
        (**(code **)(*piVar2 + 4))();
      }
      *(undefined4 *)(this + 0x9c) = 0;
    }
    pcVar13 = *(code **)(*(int *)this + 0x2c);
    this_01 = *(PackedImage **)(*(int *)(this + 0x60) + DAT_001ecb74);
    iVar3 = Character::getSameZombiePowerupIconIdx(*(Character **)(this + 0xb8));
    pCVar7 = (CImage *)PackedImage::getImage(this_01,iVar3,false);
    this_00 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(this_00,pCVar7,'!',true);
    *(ImageElement **)(this + 0x9c) = this_00;
    (*pcVar13)(this,this_00);
    piVar2 = *(int **)(this + 0x9c);
    iVar3 = *(int *)(this + 0x78);
    iVar11 = *piVar2;
    uVar8 = __floatsisf(*(int *)(iVar3 + 4) + *(int *)(iVar3 + 0xc));
    uVar5 = __mulsf3(*(undefined4 *)(this + 0xa0),DAT_001ecb78);
    __subsf3(uVar8,uVar5);
    uVar8 = __fixsfsi();
    uVar5 = __floatsisf(*(int *)(iVar3 + 8) + piVar2[4]);
    uVar9 = __mulsf3(*(undefined4 *)(this + 0xa4),DAT_001ecb7c);
    __addsf3(uVar5,uVar9);
    uVar5 = __fixsfsi();
    (**(code **)(iVar11 + 0x14))(piVar2,uVar8,uVar5);
  }
  return;
}


