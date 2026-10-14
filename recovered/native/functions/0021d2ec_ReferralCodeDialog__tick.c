/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0021d2ec ReferralCodeDialog::tick */

/* ReferralCodeDialog::tick(long) */

void ReferralCodeDialog::tick(long param_1)

{
  int iVar1;
  int iVar2;
  void *__ptr;
  int iVar3;
  ZombieCafe *this;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s1;
  float extraout_s1_00;
  StringUtil aSStack_20 [12];
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    ScreenElement::tick(param_1);
    this = *(ZombieCafe **)(param_1 + 0x60);
    iVar1 = ZombieCafe::unhandledPressOrLongEvent(this);
    iVar3 = DAT_0021d3b0;
    if (iVar1 != 0) {
      iVar1 = *(int *)(this + DAT_0021d3b0);
      iVar1 = ScreenElement::contains
                        (*(ScreenElement **)(param_1 + 0x6c),iVar1 >> 0x10,(int)(short)iVar1);
      if (iVar1 == 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x60) + iVar3);
        iVar2 = ZCImageButton::contains
                          (*(ZCImageButton **)(param_1 + 0x78),iVar1 >> 0x10,(int)(short)iVar1,
                           extraout_s0,extraout_s1);
        iVar1 = DAT_0021d3b4;
        if (iVar2 == 0) {
          iVar3 = *(int *)(*(int *)(param_1 + 0x60) + iVar3);
          iVar3 = ZCImageButton::contains
                            (*(ZCImageButton **)(param_1 + 0x74),iVar3 >> 0x10,(int)(short)iVar3,
                             extraout_s0_00,extraout_s1_00);
          if (iVar3 != 0) {
            StringUtil::getEncodingString(aSStack_20,'\x01');
            __ptr = (void *)String::getBytes((String *)(param_1 + 0x88),aSStack_20,0,0,0);
            String::~String((String *)aSStack_20);
            free(__ptr);
            *(undefined1 *)(*(int *)(param_1 + 0x60) + DAT_0021d3b4) = 1;
          }
        }
        else {
          *(undefined1 *)(param_1 + 0x14) = 0;
          *(undefined1 *)(*(int *)(param_1 + 0x60) + iVar1) = 1;
          (**(code **)(param_1 + 0x90))(*(undefined4 *)(param_1 + 0x94));
        }
      }
    }
  }
  return;
}


