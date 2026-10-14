/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017819c GameStatePowerup::updateRecipeMosaic */

/* GameStatePowerup::updateRecipeMosaic(long) */

void __thiscall GameStatePowerup::updateRecipeMosaic(GameStatePowerup *this,long param_1)

{
  uchar uVar1;
  undefined4 uVar2;
  int iVar3;
  CImage *pCVar4;
  int iVar5;
  CharacterInstance *this_00;
  float extraout_s0;
  
  uVar2 = __floatsisf(param_1);
  uVar2 = __subsf3(*(undefined4 *)(this + 0x4c0),uVar2);
  *(undefined4 *)(this + 0x4c0) = uVar2;
  iVar3 = __aeabi_fcmple(uVar2,0);
  iVar5 = DAT_00178240;
  if (iVar3 != 0) {
    *(undefined4 *)(this + 0x4c0) = DAT_0017823c;
    iVar3 = *(int *)(this + iVar5);
    *(int *)(this + iVar5) = iVar3 + 1;
    if (0x8d < iVar3 + 1) {
      *(undefined4 *)(this + iVar5) = 0x8b;
    }
    CharacterInstance::stopReplacementInAnimation(*(CharacterInstance **)(this + DAT_00178244),0);
    if (*(int **)(this + 0x498) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x498) + 4))();
    }
    pCVar4 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0xc) + DAT_00178248),
                        *(int *)(this + iVar5),false);
    iVar5 = DAT_00178244;
    *(CImage **)(this + 0x498) = pCVar4;
    this_00 = *(CharacterInstance **)(this + iVar5);
    uVar2 = **(undefined4 **)(DAT_0017824c + 0x17820a);
    iVar5 = SmDev();
    uVar1 = __mulsf3(uVar2,*(undefined4 *)(DAT_00178250 + iVar5 * 4 + 0x17828a));
    CharacterInstance::replaceInAnimation(this_00,0,pCVar4,extraout_s0,uVar1,false,false,0);
  }
  return;
}


