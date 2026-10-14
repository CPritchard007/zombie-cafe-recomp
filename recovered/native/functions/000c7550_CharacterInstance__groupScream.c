/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c7550 CharacterInstance::groupScream */

/* CharacterInstance::groupScream(int, int) */

void CharacterInstance::groupScream(int param_1,int param_2)

{
  int iVar1;
  float extraout_s0;
  float fVar2;
  
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(iVar1 + 4);
  if ((param_2 == 0) || (param_1 == 0)) {
    if (param_1 < 2) {
      if (param_2 < 2) {
        if (param_1 == 0) {
          if (param_2 == 0) {
            return;
          }
          fVar2 = (float)CapcomMath::random(8);
        }
        else {
          fVar2 = (float)CapcomMath::random(7);
        }
      }
      else {
        fVar2 = (float)CapcomMath::random(3);
      }
    }
    else {
      fVar2 = (float)CapcomMath::random(3);
    }
  }
  else {
    CapcomMath::random(5);
    fVar2 = extraout_s0;
  }
  ZombieCafe::playEffect(iVar1,fVar2);
  return;
}


