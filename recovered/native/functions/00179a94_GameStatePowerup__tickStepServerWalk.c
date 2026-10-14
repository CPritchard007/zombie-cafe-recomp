/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00179a94 GameStatePowerup::tickStepServerWalk */

/* GameStatePowerup::tickStepServerWalk(long) */

undefined8 __thiscall GameStatePowerup::tickStepServerWalk(GameStatePowerup *this,long param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  GameStatePowerup GVar5;
  ZombieCafe *this_00;
  undefined4 uVar6;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  uint local_1c;
  
  this_00 = *(ZombieCafe **)(this + 0xc);
  iVar1 = ZombieCafe::touchUpEvent(this_00);
  if (((iVar1 == 0) ||
      ((int)**(short **)(DAT_00179b74 + 0x179aac) < *(int *)(this_00 + DAT_00179b78))) ||
     (iVar1 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0xfc),*(long *)(this_00 + DAT_00179b7c),
                         extraout_s0,extraout_s1), iVar1 == 0)) {
    iVar1 = DAT_00179b80;
    updateRecipeMosaic(this,param_1);
    local_1c = *(uint *)(*(int *)(this + iVar1) + 4);
    uVar2 = __floatsisf((int)local_1c >> 0x10);
    iVar3 = SmDev();
    uVar6 = *(undefined4 *)(this + 0x530);
    uVar4 = __mulsf3(uVar6,*(undefined4 *)(DAT_00179b84 + iVar3 * 4 + 0x179b2c));
    iVar3 = __aeabi_fcmplt(uVar2,uVar4);
    if (iVar3 != 0) {
      uVar4 = __addsf3(uVar6,uVar6);
      __addsf3(uVar2,uVar4);
      iVar3 = __fixsfsi();
      (**(code **)(**(int **)(this + iVar1) + 0xc))
                (*(int **)(this + iVar1),iVar3 << 0x10 | local_1c & 0xffff);
      goto LAB_00179b72;
    }
    CharacterInstance::setCurrentAnimation(*(CharacterInstance **)(this + iVar1),'\x05','\0',true);
    uVar2 = __floatsisf((int)**(short **)(DAT_00179b88 + 0x179b5e));
    *(undefined4 *)(this + 0x4b8) = uVar2;
    GVar5 = (GameStatePowerup)0x6;
  }
  else {
    ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_00);
    endPowerup(this);
    GVar5 = (GameStatePowerup)0xa;
    local_1c = param_1;
  }
  this[DAT_00179b8c] = GVar5;
LAB_00179b72:
  return CONCAT44(local_1c,this);
}


