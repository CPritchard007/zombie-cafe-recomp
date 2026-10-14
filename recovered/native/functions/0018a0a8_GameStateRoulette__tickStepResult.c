/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018a0a8 GameStateRoulette::tickStepResult */

/* GameStateRoulette::tickStepResult(long) */

void GameStateRoulette::tickStepResult(long param_1)

{
  ushort uVar1;
  String *this;
  NoticeDialog *pNVar2;
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [8];
  String aSStack_18 [8];
  
  uVar1 = *(ushort *)(param_1 + (*(int *)(param_1 + 0xa00) + 0x1ce) * 4 + 4);
  String::String(aSStack_60);
  String::String(aSStack_58);
  if (*(char *)(param_1 + DAT_0018a20c) == '\0') {
    String::String(aSStack_38,
                   (String *)
                   (*(int *)((uint)uVar1 * 4 + *(int *)(*(int *)(param_1 + 0xc) + DAT_0018a214)) +
                   DAT_0018a218));
    String::operator=(aSStack_60,aSStack_38);
    String::~String(aSStack_38);
    String::String(aSStack_30,(char *)(DAT_0018a21c + 0x18a146));
    String::operator+(aSStack_28,aSStack_60,aSStack_30);
    String::operator=(aSStack_58,aSStack_28);
    String::~String(aSStack_28);
    this = aSStack_30;
  }
  else {
    String::String(aSStack_50,
                   (String *)
                   (*(int *)(*(int *)((*(int *)(param_1 + 0xa00) + 0x288) * 4 + param_1) + 0x38) +
                   0x2c));
    String::operator=(aSStack_60,aSStack_50);
    String::~String(aSStack_50);
    String::String(aSStack_48,(char *)(DAT_0018a210 + 0x18a0fe));
    String::operator+(aSStack_40,aSStack_60,aSStack_48);
    String::operator=(aSStack_58,aSStack_40);
    String::~String(aSStack_40);
    this = aSStack_48;
  }
  String::~String(this);
  pNVar2 = *(NoticeDialog **)(param_1 + DAT_0018a220);
  String::String(aSStack_18,aSStack_58);
  Vector<String>::elementAt((int)aSStack_20);
  NoticeDialog::show(pNVar2,aSStack_18,aSStack_20,0,0);
  String::~String(aSStack_20);
  String::~String(aSStack_18);
  *(undefined1 *)(param_1 + DAT_0018a228) = 6;
  String::~String(aSStack_58);
  String::~String(aSStack_60);
  return;
}


