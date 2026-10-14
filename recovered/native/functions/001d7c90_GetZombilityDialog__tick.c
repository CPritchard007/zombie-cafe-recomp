/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d7c90 GetZombilityDialog::tick */

/* GetZombilityDialog::tick(long) */

void GetZombilityDialog::tick(long param_1)

{
  int iVar1;
  ZombieCafe *this;
  float extraout_s0;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    (**(code **)(**(int **)(param_1 + 0x80) + 0x1c))();
    iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x80) + 0x90) + 0x1c))();
    if (iVar1 != 0) {
      CharacterInstance::setCurrentAnimation
                (*(CharacterInstance **)(param_1 + 0x80),*(uchar *)(param_1 + 0x84),'\x01',true);
    }
    this = *(ZombieCafe **)(param_1 + 0x60);
    iVar1 = ZombieCafe::unhandledPressOrLongEvent(this);
    if ((iVar1 != 0) &&
       (iVar1 = *(int *)(this + DAT_001d7d0c),
       iVar1 = ScreenElement::contains
                         (*(ScreenElement **)(param_1 + 0x7c),iVar1 >> 0x10,(int)(short)iVar1),
       iVar1 != 0)) {
      ZombieCafe::playEffect(*(int *)(param_1 + 0x60),extraout_s0);
      (**(code **)(**(int **)(param_1 + 0x68) + 0x20))(*(int **)(param_1 + 0x68),1);
      (**(code **)(*(int *)param_1 + 4))(param_1);
    }
    *(undefined1 *)(*(int *)(param_1 + 0x60) + DAT_001d7d10) = 1;
  }
  return;
}


