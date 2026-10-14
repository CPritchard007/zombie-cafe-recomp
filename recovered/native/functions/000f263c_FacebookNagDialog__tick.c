/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f263c FacebookNagDialog::tick */

/* FacebookNagDialog::tick(long) */

undefined8 __thiscall FacebookNagDialog::tick(FacebookNagDialog *this,long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ZombieCafe *this_00;
  float extraout_s0;
  undefined4 extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  undefined4 extraout_s1_00;
  undefined8 uVar4;
  float extraout_s1_01;
  FacebookNagDialog *local_20;
  
  local_20 = this;
  if (this[0x14] == (FacebookNagDialog)0x0) goto LAB_000f26e8;
  this_00 = *(ZombieCafe **)(this + 0x60);
  iVar1 = ZombieCafe::unhandledPressOrLongEvent(this_00);
  iVar3 = DAT_000f26ec;
  if (iVar1 == 0) goto LAB_000f26e8;
  iVar1 = *(int *)(this_00 + DAT_000f26ec);
  iVar2 = ZCImageButton::contains
                    (*(ZCImageButton **)(this + 100),iVar1 >> 0x10,(int)(short)iVar1,extraout_s0,
                     extraout_s1);
  iVar1 = DAT_000f26f4;
  uVar4 = CONCAT44(extraout_s1_00,extraout_s0_00);
  if (iVar2 != 0) {
    *(undefined1 *)(*(int *)(this + 0x60) + DAT_000f26f0) = 0;
    iVar2 = DAT_000f26f8;
    CCFacebook::SetHandler
              (*(void **)(*(int *)(this + 0x60) + DAT_000f26f8),
               *(_func_void_ccFacebookMessageType_void_ptr **)(iVar1 + 0xf2682),this);
    CCFacebook::Login(*(void **)(*(int *)(this + 0x60) + iVar2));
    uVar4 = showNag(this);
    this[0x14] = (FacebookNagDialog)0x0;
  }
  iVar3 = ZCImageButton::contains
                    (*(ZCImageButton **)(this + 0x68),
                     *(int *)(*(int *)(this + 0x60) + iVar3) >> 0x10,
                     (int)(short)*(int *)(*(int *)(this + 0x60) + iVar3),(float)uVar4,
                     (float)((ulonglong)uVar4 >> 0x20));
  if (iVar3 == 0) {
    iVar3 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0x6c),
                       *(int *)(*(int *)(this + 0x60) + DAT_000f26ec) >> 0x10,
                       (int)(short)*(int *)(*(int *)(this + 0x60) + DAT_000f26ec),extraout_s0_01,
                       extraout_s1_01);
    if (iVar3 != 0) goto LAB_000f26d0;
  }
  else {
LAB_000f26d0:
    *(undefined1 *)(*(int *)(this + 0x60) + DAT_000f26f0) = 0;
    showNag(this);
    this[0x14] = (FacebookNagDialog)0x0;
  }
  local_20 = (FacebookNagDialog *)0x3f800000;
  *(undefined1 *)(*(int *)(this + 0x60) + DAT_000f26fc) = 1;
LAB_000f26e8:
  return CONCAT44(param_1,local_20);
}


