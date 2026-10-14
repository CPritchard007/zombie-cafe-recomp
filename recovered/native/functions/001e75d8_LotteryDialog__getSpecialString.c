/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e75d8 LotteryDialog::getSpecialString */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x001e75ea) */
/* WARNING: Removing unreachable block (ram,0x001e75ea) */
/* LotteryDialog::getSpecialString(int) */

int LotteryDialog::getSpecialString(int param_1)

{
  String *this;
  undefined4 in_r2;
  String aSStack_68 [8];
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [8];
  String aSStack_18 [12];
  
  this = aSStack_68;
  String::String((String *)param_1);
  switch(in_r2) {
  case 0:
    String::String(aSStack_68,(char *)(DAT_001e7758 + 0x1e7600));
    String::operator=((String *)param_1,aSStack_68);
    break;
  case 1:
    String::String(aSStack_60,(char *)(DAT_001e775c + 0x1e7616));
    String::operator=((String *)param_1,aSStack_60);
    this = aSStack_60;
    break;
  case 2:
    String::String(aSStack_58,(char *)(DAT_001e7760 + 0x1e762c));
    String::operator=((String *)param_1,aSStack_58);
    this = aSStack_58;
    break;
  case 3:
    String::String(aSStack_50,(char *)(DAT_001e7764 + 0x1e7642));
    String::operator=((String *)param_1,aSStack_50);
    this = aSStack_50;
    break;
  case 4:
    String::String(aSStack_48,(char *)(DAT_001e7768 + 0x1e7658));
    String::operator=((String *)param_1,aSStack_48);
    this = aSStack_48;
    break;
  case 5:
    String::String(aSStack_40,(char *)(DAT_001e776c + 0x1e766e));
    String::operator=((String *)param_1,aSStack_40);
    this = aSStack_40;
    break;
  case 6:
    String::String(aSStack_38,(char *)(DAT_001e7770 + 0x1e7684));
    String::operator=((String *)param_1,aSStack_38);
    this = aSStack_38;
    break;
  case 7:
    String::String(aSStack_30,(char *)(DAT_001e7774 + 0x1e769a));
    String::operator=((String *)param_1,aSStack_30);
    this = aSStack_30;
    break;
  case 8:
    String::String(aSStack_28,(char *)(DAT_001e7778 + 0x1e76b0));
    String::operator=((String *)param_1,aSStack_28);
    this = aSStack_28;
    break;
  case 9:
    String::String(aSStack_20,(char *)(DAT_001e777c + 0x1e76c6));
    String::operator=((String *)param_1,aSStack_20);
    this = aSStack_20;
    break;
  default:
    String::String(aSStack_18,(char *)(DAT_001e7780 + 0x1e76dc));
    String::operator=((String *)param_1,aSStack_18);
    this = aSStack_18;
  }
  String::~String(this);
  return param_1;
}


