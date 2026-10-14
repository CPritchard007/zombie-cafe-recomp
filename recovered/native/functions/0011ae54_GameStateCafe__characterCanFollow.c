/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011ae54 GameStateCafe::characterCanFollow */

/* GameStateCafe::characterCanFollow(CharacterInstance*, int) */

undefined8 __thiscall
GameStateCafe::characterCanFollow(GameStateCafe *this,CharacterInstance *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  CFPathFinder *this_00;
  float extraout_s0;
  float fVar3;
  
  this_00 = *(CFPathFinder **)(*(int *)(this + 0x14) + 0x5c);
  iVar1 = CFPathFinder::isNodeEnabled(this_00,param_2);
  fVar3 = extraout_s0;
  if (iVar1 == 0) {
    fVar3 = (float)CFPathFinder::setNodeEnabled(this_00,param_2,true);
  }
  uVar2 = CFPathFinder::checkPathTween
                    (this_00,(int)*(short *)(param_1 + 0x2c),param_2,fVar3,0x3f800000);
  if (iVar1 == 0) {
    CFPathFinder::setNodeEnabled(this_00,param_2,false);
  }
  return CONCAT44(1,uVar2);
}


