/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015a1e4 GameStateGatya::tickStepResultList */

/* GameStateGatya::tickStepResultList(long) */

undefined8 __thiscall GameStateGatya::tickStepResultList(GameStateGatya *this,long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  ZombieCafe *this_00;
  int iVar6;
  GameStateGatya *pGVar7;
  float fVar8;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  GameStateGatya *local_20;
  
  iVar6 = DAT_0015a304;
  local_20 = this;
  if (*(int *)(this + DAT_0015a304) != 0x1000) {
    if (*(int *)(this + DAT_0015a304) == 0x10000) {
      uninitResultListScreen(this);
      this[DAT_0015a324] = (GameStateGatya)0x0;
      *(undefined4 *)(this + iVar6) = 0;
      goto LAB_0015a302;
    }
    initResultListScreen(this);
    fVar8 = (float)(**(code **)(*(int *)this + 0x10))(this);
    fVar8 = (float)ZombieCafe::stopMusic(fVar8);
    local_20 = (GameStateGatya *)0x1;
    ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(this + 0xc),0,0xc,fVar8,false);
    *(undefined4 *)(this + iVar6) = 0x1000;
  }
  if ((*(char *)(*(int *)(this + DAT_0015a308) + 0x14) == '\0') &&
     (*(char *)(*(int *)(this + DAT_0015a30c) + 0x14) == '\0')) {
    this_00 = *(ZombieCafe **)(this + 0xc);
    iVar2 = ZombieCafe::touchUpEvent(this_00);
    iVar1 = DAT_0015a328;
    iVar3 = DAT_0015a320;
    if ((iVar2 == 0) ||
       ((int)**(short **)(DAT_0015a310 + 0x15a24c) < *(int *)(this_00 + DAT_0015a314))) {
      if ((this_00[DAT_0015a328] == (ZombieCafe)0x0) && (*(int *)(this_00 + 0x4b8) != 0)) {
        if ((int)**(short **)(DAT_0015a31c + 0x15a2c4) < *(int *)(this_00 + DAT_0015a314)) {
          uVar5 = __floatsisf((*(int *)(this_00 + DAT_0015a318) >> 0x10) -
                              (*(int *)(this_00 + 0x4b8) >> 0x10));
          *(undefined4 *)(this + iVar3) = uVar5;
          this_00[iVar1] = (ZombieCafe)0x1;
        }
        else {
          *(undefined4 *)(this + DAT_0015a320) = 0;
        }
      }
    }
    else {
      iVar3 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x208),*(long *)(this_00 + DAT_0015a318),
                         extraout_s0,extraout_s1);
      if (iVar3 == 0) {
        iVar6 = 0;
        pGVar7 = this;
        do {
          piVar4 = *(int **)(pGVar7 + 0x214);
          if ((piVar4 != (int *)0x0) &&
             (iVar3 = (**(code **)(*piVar4 + 0x10))
                                (piVar4,*(undefined4 *)(*(int *)(this + 0xc) + DAT_0015a318)),
             iVar3 != 0)) {
            selectCharacter(this,iVar6);
          }
          iVar6 = iVar6 + 1;
          pGVar7 = pGVar7 + 4;
        } while (iVar6 != 0xaa);
      }
      else {
        ZombieCafe::playEffect(*(int *)(this + 0xc),extraout_s0_00);
        *(undefined4 *)(this + iVar6) = 0x10000;
      }
    }
  }
LAB_0015a302:
  return CONCAT44(param_1,local_20);
}


