/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00105774 EquipInfoDialog::show */

/* EquipInfoDialog::show(String, String, String, void (*)(void*), void*) */

void __thiscall
EquipInfoDialog::show
          (EquipInfoDialog *this,String *param_2,String *param_3,String *param_4,undefined4 param_5,
          undefined4 param_6)

{
  QueueMessage *pQVar1;
  undefined4 *puVar2;
  String aSStack_28 [8];
  String aSStack_20 [8];
  String aSStack_18 [8];
  
  String::String(aSStack_28,param_2);
  String::String(aSStack_20,param_3);
  String::String(aSStack_18,param_4);
  pQVar1 = (QueueMessage *)operator_new(0x20);
  QueueMessage::QueueMessage(pQVar1,aSStack_28,aSStack_20,aSStack_18,param_5,param_6);
  puVar2 = (undefined4 *)operator_new(8);
  puVar2[1] = 0;
  *(undefined4 **)(*(int *)(this + 0x90) + 4) = puVar2;
  *(undefined4 **)(this + 0x90) = puVar2;
  *puVar2 = pQVar1;
  *(undefined4 *)(*(int *)(this + 0x90) + 4) = 0;
  *(int *)(this + 0x98) = *(int *)(this + 0x98) + 1;
  String::~String(aSStack_18);
  String::~String(aSStack_20);
  String::~String(aSStack_28);
  show(this);
  return;
}


