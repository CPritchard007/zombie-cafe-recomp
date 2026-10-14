/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00104368 FurnitureDialog::show */

/* FurnitureDialog::show(String, String, void (*)(void*), void*, bool) */

void FurnitureDialog::show
               (int param_1,String *param_2,String *param_3,undefined4 param_4,undefined4 param_5)

{
  QueueMessage *pQVar1;
  undefined4 *puVar2;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  String::String(aSStack_28,param_2);
  String::String(aSStack_20,param_3);
  pQVar1 = (QueueMessage *)operator_new(0x18);
  QueueMessage::QueueMessage(pQVar1,aSStack_28,aSStack_20,param_4,param_5);
  puVar2 = (undefined4 *)operator_new(8);
  puVar2[1] = 0;
  *(undefined4 **)(*(int *)(param_1 + 0xbc) + 4) = puVar2;
  *(undefined4 **)(param_1 + 0xbc) = puVar2;
  *puVar2 = pQVar1;
  *(undefined4 *)(*(int *)(param_1 + 0xbc) + 4) = 0;
  *(int *)(param_1 + 0xc4) = *(int *)(param_1 + 0xc4) + 1;
  String::~String(aSStack_20);
  String::~String(aSStack_28);
  show(SUB41(param_1,0));
  return;
}


