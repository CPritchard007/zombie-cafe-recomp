/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f95e0 FrequentFryerDialog::getRewardName */

/* FrequentFryerDialog::getRewardName(int) */

int FrequentFryerDialog::getRewardName(int param_1)

{
  String *this;
  int in_r2;
  int local_50 [2];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  if (9 < in_r2 - 1U) {
LAB_000f96a6:
    String::String((String *)param_1,0);
    return param_1;
  }
  getItemData((int)local_50);
  if (local_50[0] == 0) {
    String::String(aSStack_48,(char *)(DAT_000f96ec + 0xf9608));
    String::valueOf((int)aSStack_40);
    String::operator+((String *)param_1,aSStack_48,aSStack_40);
    String::~String(aSStack_40);
    this = aSStack_48;
  }
  else {
    if (local_50[0] == 1) {
LAB_000f9662:
      Vector<String>::elementAt(param_1);
      return param_1;
    }
    if (local_50[0] == 2) {
      String::valueOf((int)aSStack_38);
      Vector<String>::elementAt((int)aSStack_30);
      String::operator+((String *)param_1,aSStack_38,aSStack_30);
      String::~String(aSStack_30);
      this = aSStack_38;
    }
    else {
      if (local_50[0] == 3) goto LAB_000f9662;
      if (local_50[0] != 4) goto LAB_000f96a6;
      String::valueOf((int)aSStack_28);
      String::String(aSStack_20,(char *)(DAT_000f96f8 + 0xf968c));
      String::operator+((String *)param_1,aSStack_28,aSStack_20);
      String::~String(aSStack_20);
      this = aSStack_28;
    }
  }
  String::~String(this);
  return param_1;
}


