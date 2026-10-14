/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00126dd4 GameStateCafe::onXpGiftReceived */

/* GameStateCafe::onXpGiftReceived(GameStateCafe*, String, int) */

undefined8 __thiscall
GameStateCafe::onXpGiftReceived
          (GameStateCafe *this,String *param_1,undefined4 param_3,undefined4 param_4)

{
  MessageWithToxin *pMVar1;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  uStack_18 = param_3;
  uStack_14 = param_4;
  String::String((String *)&uStack_18,param_1);
  pMVar1 = (MessageWithToxin *)operator_new(0x14);
  MessageWithToxin::MessageWithToxin(pMVar1,&uStack_18,0,0);
  Vector<MessageWithToxin*>::addElement((Vector<MessageWithToxin*> *)(this + 0x178),pMVar1);
  String::~String((String *)&uStack_18);
  return CONCAT44(param_1,param_3);
}


