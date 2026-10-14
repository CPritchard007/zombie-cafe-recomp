/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e260e ConfirmDialog::show */

/* ConfirmDialog::show(String, String, String, void (*)(void*), void (*)(void*), void*, bool, bool)
    */

void __thiscall
ConfirmDialog::show(ConfirmDialog *this,String *param_2,String *param_3,String *param_4,
                   undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                   char param_9)

{
  int *piVar1;
  QueueMessage *pQVar2;
  undefined4 *puVar3;
  ConfirmDialog *pCVar4;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  piVar1 = *(int **)(this + 0x70);
  if (piVar1 != (int *)0x0) {
    if (param_9 != '\0') {
      param_9 = '\x01';
    }
    (**(code **)(*piVar1 + 0x20))(piVar1,param_9);
  }
  String::String(aSStack_30,param_2);
  String::String(aSStack_28,param_3);
  String::String(aSStack_20,param_4);
  pQVar2 = (QueueMessage *)operator_new(0x24);
  QueueMessage::QueueMessage(pQVar2,aSStack_30,aSStack_28,aSStack_20,param_5,param_6,param_7);
  puVar3 = (undefined4 *)operator_new(8);
  puVar3[1] = 0;
  pCVar4 = this + 0x88;
  *(undefined4 **)(*(int *)pCVar4 + 4) = puVar3;
  *(undefined4 **)pCVar4 = puVar3;
  *puVar3 = pQVar2;
  *(undefined4 *)(*(int *)pCVar4 + 4) = 0;
  *(int *)(this + 0x90) = *(int *)(this + 0x90) + 1;
  String::~String(aSStack_20);
  String::~String(aSStack_28);
  String::~String(aSStack_30);
  show(this);
  return;
}


