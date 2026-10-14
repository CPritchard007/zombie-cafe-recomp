/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f72b6 NoticeDialog::show */

/* NoticeDialog::show(String, String, void (*)(void*), void*) */

void __thiscall
NoticeDialog::show(NoticeDialog *this,String *param_2,String *param_3,undefined4 param_4,
                  undefined4 param_5)

{
  QueueMessage *pQVar1;
  undefined4 *puVar2;
  String aSStack_20 [8];
  String aSStack_18 [8];
  
  String::String(aSStack_20,param_2);
  String::String(aSStack_18,param_3);
  pQVar1 = (QueueMessage *)operator_new(0x18);
  QueueMessage::QueueMessage(pQVar1,aSStack_20,aSStack_18,param_4,param_5);
  puVar2 = (undefined4 *)operator_new(8);
  puVar2[1] = 0;
  *(undefined4 **)(*(int *)(this + 0x7c) + 4) = puVar2;
  *(undefined4 **)(this + 0x7c) = puVar2;
  *puVar2 = pQVar1;
  *(undefined4 *)(*(int *)(this + 0x7c) + 4) = 0;
  *(int *)(this + 0x84) = *(int *)(this + 0x84) + 1;
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  show();
  setVisibleOkButton(SUB41(this,0));
  return;
}


