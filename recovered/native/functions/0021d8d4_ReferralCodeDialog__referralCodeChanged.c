/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0021d8d4 ReferralCodeDialog::referralCodeChanged */

/* ReferralCodeDialog::referralCodeChanged(ReferralCodeDialog*, String) */

undefined8 ReferralCodeDialog::referralCodeChanged(int param_1,String *param_2)

{
  int iStack_10;
  String *pSStack_c;
  
  iStack_10 = param_1;
  pSStack_c = param_2;
  if (0 < *(short *)(param_2 + 6)) {
    String::String((String *)&iStack_10,param_2);
    String::operator=((String *)(param_1 + 0x88),(String *)&iStack_10);
    String::~String((String *)&iStack_10);
  }
  return CONCAT44(pSStack_c,iStack_10);
}


