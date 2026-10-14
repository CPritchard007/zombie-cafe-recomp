/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a21ac StringUtil::appendTime */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002a21fa) */
/* WARNING: Removing unreachable block (ram,0x002a21fa) */
/* StringUtil::appendTime(StringBuffer&, int, int, unsigned long const&, unsigned char const&) */

void StringUtil::appendTime
               (StringBuffer *param_1,int param_2,int param_3,ulong *param_4,uchar *param_5)

{
  String *this;
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [8];
  String aSStack_18 [8];
  
  if ((*param_4 == 0) && (param_2 != 0)) {
    return;
  }
  if (param_3 < param_2) {
    String::String(aSStack_50,(char *)(DAT_002a22e4 + 0x2a21ce));
    StringBuffer::append(param_1,aSStack_50);
    String::~String(aSStack_50);
  }
  String::valueOf((ulong)aSStack_48);
  StringBuffer::append(param_1,aSStack_48);
  String::~String(aSStack_48);
  switch(param_3) {
  case 0:
    String::String(aSStack_40,(char *)(DAT_002a22e8 + 0x2a220c));
    StringBuffer::append(param_1,aSStack_40);
    this = aSStack_40;
    break;
  case 1:
    String::String(aSStack_38,(char *)(DAT_002a22ec + 0x2a2222));
    StringBuffer::append(param_1,aSStack_38);
    this = aSStack_38;
    break;
  case 2:
    String::String(aSStack_30,(char *)(DAT_002a22f0 + 0x2a2238));
    StringBuffer::append(param_1,aSStack_30);
    this = aSStack_30;
    break;
  case 3:
    String::String(aSStack_28,(char *)(DAT_002a22f4 + 0x2a224e));
    StringBuffer::append(param_1,aSStack_28);
    this = aSStack_28;
    break;
  case 4:
    String::String(aSStack_20,(char *)(DAT_002a22f8 + 0x2a2264));
    StringBuffer::append(param_1,aSStack_20);
    this = aSStack_20;
    break;
  default:
    goto switchD_002a21fa_default;
  }
  String::~String(this);
switchD_002a21fa_default:
  if ((*param_5 < 2) && (*param_4 != 1)) {
    String::String(aSStack_18,(char *)(DAT_002a22fc + 0x2a228a));
    StringBuffer::append(param_1,aSStack_18);
    String::~String(aSStack_18);
  }
  return;
}


