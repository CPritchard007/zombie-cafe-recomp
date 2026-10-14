/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e9e0c LotteryFeaturedDialog::setCharacter */

/* LotteryFeaturedDialog::setCharacter(int) */

void __thiscall LotteryFeaturedDialog::setCharacter(LotteryFeaturedDialog *this,int param_1)

{
  undefined1 uVar1;
  int *piVar2;
  int iVar3;
  CharacterInstance *pCVar4;
  Character *pCVar5;
  LotteryFeaturedDialog *pLVar6;
  int iVar7;
  undefined4 uVar8;
  code *pcVar9;
  float fVar10;
  String aSStack_20 [12];
  
  pCVar5 = *(Character **)(this + 0x9c);
  if (pCVar5 != (Character *)0x0) {
    Character::~Character(pCVar5);
    operator_delete(pCVar5);
    *(undefined4 *)(this + 0x9c) = 0;
  }
  piVar2 = *(int **)(this + 0xa0);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))();
    *(undefined4 *)(this + 0xa0) = 0;
  }
  if (param_1 != 0) {
    iVar3 = CapcomApp::getInstance();
    uVar8 = *(undefined4 *)(param_1 * 4 + *(int *)(*(int *)(iVar3 + 4) + DAT_001e9f30));
    String::String(aSStack_20,(char *)(DAT_001e9f34 + 0x1e9e5a));
    pCVar5 = (Character *)operator_new(0x6c);
    Character::Character(pCVar5,uVar8,1,1,aSStack_20);
    *(Character **)(this + 0x9c) = pCVar5;
    String::~String(aSStack_20);
    pCVar4 = (CharacterInstance *)operator_new(0xdc);
    CharacterInstance::CharacterInstance(pCVar4,*(Character **)(this + 0x9c),(CFPathFinder *)0x0);
    *(CharacterInstance **)(this + 0xa0) = pCVar4;
  }
  pLVar6 = this + 0xa0;
  uVar1 = *(undefined1 *)(*(int *)(*(CharacterInstance **)pLVar6 + 0x8c) + 0x4c);
  CharacterInstance::setCurrentAnimation(*(CharacterInstance **)pLVar6,'\x01','\x01',false);
  *(undefined1 *)(*(int *)(*(int *)pLVar6 + 0x8c) + 0x4c) = uVar1;
  pCVar4 = *(CharacterInstance **)pLVar6;
  fVar10 = (float)SmDev();
  CharacterInstance::setScale(pCVar4,fVar10);
  piVar2 = *(int **)pLVar6;
  uVar8 = *(undefined4 *)(piVar2[0x23] + 0x48);
  pcVar9 = *(code **)(*piVar2 + 0xc);
  iVar3 = SmDev();
  iVar7 = *(int *)(DAT_001e9f3c + iVar3 * 4 + 0x1e9f54);
  iVar3 = SmDev();
  (*pcVar9)(piVar2,(uint)*(ushort *)(iVar3 * 4 + DAT_001e9f40 + 0x1e9efc) | iVar7 << 0x10);
  *(undefined4 *)(*(int *)(*(int *)pLVar6 + 0x8c) + 0x48) = uVar8;
  return;
}


