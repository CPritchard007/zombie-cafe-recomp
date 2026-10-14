/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00126ea0 GameStateCafe::referralCountSuccessCb */

/* GameStateCafe::referralCountSuccessCb(void*, unsigned int) */

undefined8 GameStateCafe::referralCountSuccessCb(void *param_1,uint param_2)

{
  int iVar1;
  MessageWithToxin *pMVar2;
  void *pvStack_18;
  uint uStack_14;
  
  pvStack_18 = param_1;
  uStack_14 = param_2;
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(iVar1 + 4);
  if ((param_1 == *(void **)(iVar1 + 8)) && (**(uint **)(DAT_00126f18 + 0x126eb8) <= param_2)) {
    Vector<String>::elementAt((int)&pvStack_18);
    pMVar2 = (MessageWithToxin *)operator_new(0x14);
    MessageWithToxin::MessageWithToxin
              (pMVar2,(String *)&pvStack_18,**(undefined4 **)(DAT_00126f20 + 0x126ee2));
    Vector<MessageWithToxin*>::addElement
              ((Vector<MessageWithToxin*> *)((int)param_1 + 0x178),pMVar2);
    String::~String((String *)&pvStack_18);
    *(undefined1 *)(iVar1 + DAT_00126f24) = 1;
  }
  return CONCAT44(uStack_14,pvStack_18);
}


