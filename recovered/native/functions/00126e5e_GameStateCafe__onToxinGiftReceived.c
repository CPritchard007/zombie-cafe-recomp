/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00126e5e GameStateCafe::onToxinGiftReceived */

/* GameStateCafe::onToxinGiftReceived(GameStateCafe*, String, int) */

undefined8 GameStateCafe::onToxinGiftReceived(int param_1,String *param_2,undefined4 param_3)

{
  MessageWithToxin *pMVar1;
  int iStack_18;
  String *pSStack_14;
  
  iStack_18 = param_1;
  pSStack_14 = param_2;
  String::String((String *)&iStack_18,param_2);
  pMVar1 = (MessageWithToxin *)operator_new(0x14);
  MessageWithToxin::MessageWithToxin(pMVar1,(String *)&iStack_18,param_3);
  Vector<MessageWithToxin*>::addElement((Vector<MessageWithToxin*> *)(param_1 + 0x178),pMVar1);
  String::~String((String *)&iStack_18);
  return CONCAT44(pSStack_14,iStack_18);
}


