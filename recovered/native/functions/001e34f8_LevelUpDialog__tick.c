/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e34f8 LevelUpDialog::tick */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x001e3560) */
/* WARNING: Removing unreachable block (ram,0x001e3560) */
/* LevelUpDialog::tick(long) */

undefined8 __thiscall LevelUpDialog::tick(LevelUpDialog *this,long param_1)

{
  int iVar1;
  TutorialSystem *this_00;
  uchar uVar2;
  bool bVar3;
  int iVar4;
  LevelUpDialog *pLVar5;
  ZombieCafe *this_01;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  float extraout_s1_00;
  LevelUpDialog *local_20;
  
  local_20 = this;
  if (this[0x14] == (LevelUpDialog)0x0) goto LAB_001e35d0;
  pLVar5 = this + 0xa8;
  ScreenElement::tick((long)this);
  this_01 = *(ZombieCafe **)pLVar5;
  iVar1 = ZombieCafe::unhandledPressOrLongEvent(this_01);
  iVar4 = DAT_001e35d4;
  if (iVar1 != 0) {
    iVar1 = *(int *)(this_01 + DAT_001e35d4);
    local_20 = (LevelUpDialog *)0x3f800000;
    iVar1 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0xa0),iVar1 >> 0x10,(int)(short)iVar1,extraout_s0,
                       extraout_s1);
    if (iVar1 == 0) {
      iVar4 = *(int *)(*(int *)pLVar5 + iVar4);
      local_20 = (LevelUpDialog *)0x3f800000;
      iVar4 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0xa4),iVar4 >> 0x10,(int)(short)iVar4,
                         extraout_s0_00,extraout_s1_00);
      if (iVar4 != 0) {
        ZombieCafe::postStory
                  (*(ZombieCafe **)pLVar5,*(_func_void_void_ptr **)(DAT_001e35e0 + 0x1e35c0),
                   *(void **)(*(ZombieCafe **)pLVar5 + 8));
      }
      goto LAB_001e35c6;
    }
    ZombieCafe::playEffect(*(int *)pLVar5,extraout_s0_00);
    (**(code **)(*(int *)this + 0x20))(this,0);
    *(undefined1 *)(*(int *)pLVar5 + DAT_001e35d8) = 1;
    iVar4 = DAT_001e35dc;
    if (5 < *(int *)(this + 0x68) - 2U) goto LAB_001e35c6;
    iVar1 = *(int *)pLVar5;
    switch(*(int *)(this + 0x68)) {
    case 2:
      this_00 = *(TutorialSystem **)(iVar1 + DAT_001e35dc);
      uVar2 = 'O';
      bVar3 = true;
      goto LAB_001e3580;
    case 3:
      GameStateCafe::makeBeginerZombie(*(GameStateCafe **)(iVar1 + 8));
      uVar2 = '\\';
      this_00 = *(TutorialSystem **)(*(int *)pLVar5 + iVar4);
      break;
    case 4:
      this_00 = *(TutorialSystem **)(iVar1 + DAT_001e35dc);
      uVar2 = 'P';
      break;
    case 5:
      this_00 = *(TutorialSystem **)(iVar1 + DAT_001e35dc);
      uVar2 = 'Q';
      break;
    case 6:
      this_00 = *(TutorialSystem **)(iVar1 + DAT_001e35dc);
      uVar2 = 'R';
      break;
    case 7:
      this_00 = *(TutorialSystem **)(iVar1 + DAT_001e35dc);
      uVar2 = 'T';
    }
    bVar3 = false;
LAB_001e3580:
    TutorialSystem::triggerEvent(this_00,uVar2,bVar3);
  }
LAB_001e35c6:
  *(undefined1 *)(*(int *)(this + 0xa8) + DAT_001e35d8) = 1;
LAB_001e35d0:
  return CONCAT44(param_1,local_20);
}


