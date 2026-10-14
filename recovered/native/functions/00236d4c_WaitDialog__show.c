/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00236d4c WaitDialog::show */

/* WaitDialog::show(String, String, String, void (*)(void*), void (*)(void*), void*, bool, bool) */

void WaitDialog::show(int param_1,String *param_2,String *param_3,String *param_4,undefined4 param_5
                     ,undefined4 param_6,undefined4 param_7)

{
  QueueMessage *pQVar1;
  undefined4 *puVar2;
  String aSStack_28 [8];
  String aSStack_20 [8];
  String aSStack_18 [8];
  
  String::String(aSStack_28,param_2);
  String::String(aSStack_20,param_3);
  String::String(aSStack_18,param_4);
  pQVar1 = (QueueMessage *)operator_new(0x24);
  QueueMessage::QueueMessage(pQVar1,aSStack_28,aSStack_20,aSStack_18,param_5,param_6,param_7);
  puVar2 = (undefined4 *)operator_new(8);
  puVar2[1] = 0;
  *(undefined4 **)(*(int *)(param_1 + 0x7c) + 4) = puVar2;
  *(undefined4 **)(param_1 + 0x7c) = puVar2;
  *puVar2 = pQVar1;
  *(undefined4 *)(*(int *)(param_1 + 0x7c) + 4) = 0;
  *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  String::~String(aSStack_28);
  show();
  return;
}


