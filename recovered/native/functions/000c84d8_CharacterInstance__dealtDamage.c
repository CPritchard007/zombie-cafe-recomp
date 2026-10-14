/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c84d8 CharacterInstance::dealtDamage */

/* CharacterInstance::dealtDamage(CharacterInstance*, int) */

void CharacterInstance::dealtDamage(CharacterInstance *param_1,int param_2)

{
  CapcomApp *pCVar1;
  int iVar2;
  float fVar3;
  
  pCVar1 = (CapcomApp *)CapcomApp::getInstance();
  iVar2 = CapcomApp::getUptime(pCVar1);
  if (**(int **)(DAT_000c851c + 0xc84ec) < iVar2 - *(int *)(param_1 + 0x54)) {
    *(int *)(param_1 + 0x54) = iVar2;
    iVar2 = isSoundEffectHit();
    if (iVar2 != 0) {
      iVar2 = CapcomApp::getInstance();
      iVar2 = *(int *)(iVar2 + 4);
      fVar3 = (float)CapcomMath::random(7);
      ZombieCafe::playEffect(iVar2,fVar3);
    }
  }
  return;
}


