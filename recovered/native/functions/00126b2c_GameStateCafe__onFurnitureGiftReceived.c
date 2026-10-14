/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00126b2c GameStateCafe::onFurnitureGiftReceived */

/* GameStateCafe::onFurnitureGiftReceived(GameStateCafe*, String, int, int) */

void GameStateCafe::onFurnitureGiftReceived
               (GameStateCafe *param_1,String *param_2,int param_3,int param_4)

{
  char cVar1;
  MessageWithToxin *pMVar2;
  String *this;
  int iVar3;
  int iVar4;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  if (param_3 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
  if (*(int *)(*(int *)(param_1 + 0x14) + 0x90) <= param_3) {
    if (param_3 != DAT_00126cf0) {
      return;
    }
    if (*(int *)(*(ZombieCafe **)(param_1 + 0xc) + 0x7e8) == 0) {
      return;
    }
    if (0x62 < param_4 - 1U) {
      return;
    }
    ZombieCafe::addGatyaTicket(*(ZombieCafe **)(param_1 + 0xc),param_4);
    String::String(aSStack_28,param_2);
    pMVar2 = (MessageWithToxin *)operator_new(0x14);
    MessageWithToxin::MessageWithToxin(pMVar2,aSStack_28,0);
    Vector<MessageWithToxin*>::addElement((Vector<MessageWithToxin*> *)(param_1 + 0x178),pMVar2);
    this = aSStack_28;
    goto LAB_00126cc2;
  }
  iVar4 = *(int *)(param_1 + 0xc);
  if (*(int *)(iVar4 + 0x7e8) != 0) {
    cVar1 = *(char *)(*(int *)(param_3 * 4 + *(int *)(*(int *)(iVar4 + 0x7e8) + 0x94)) + 0x44);
    if (cVar1 == '\x10') {
      for (; 0 < param_4; param_4 = param_4 + -1) {
        ZombieCafe::addAmpouleToStorage(*(ZombieCafe **)(param_1 + 0xc),param_3);
      }
    }
    else {
      if (cVar1 == '\a') {
        return;
      }
      if (cVar1 == '\x05') {
        return;
      }
      if (param_3 == DAT_00126cf4) {
        if (*(char *)(iVar4 + DAT_00126cf8) == '\0') {
LAB_00126c0c:
          param_4 = 1;
          iVar3 = param_4;
        }
        else {
          param_4 = 0;
          iVar3 = param_4;
        }
      }
      else {
        iVar3 = DAT_00126cfc;
        if ((param_3 == 0x13e) || (iVar3 = DAT_00126d00, param_3 == 0x1ca)) {
          if (*(char *)(iVar4 + iVar3) == '\0') goto LAB_00126c0c;
          param_4 = 0;
          iVar3 = param_4;
        }
        else {
          iVar3 = DAT_00126d04;
          if ((((param_3 == 0x11e) || (iVar3 = DAT_00126d0c, param_3 == DAT_00126d08)) ||
              (iVar3 = DAT_00126d14, param_3 == DAT_00126d10)) ||
             (iVar3 = DAT_00126d18, param_3 == 0x1cc)) {
            if (*(char *)(iVar4 + iVar3) != '\0') {
LAB_00126c40:
              param_4 = 0;
              iVar3 = param_4;
              goto LAB_00126c8c;
            }
          }
          else if (param_3 == 0x1e4) {
            if (*(char *)(iVar4 + 0x9f0) != '\0') goto LAB_00126c40;
            *(undefined1 *)(iVar4 + DAT_00126d1c) = 0;
          }
          else {
            iVar3 = 0;
            if ((param_3 != 0x240) ||
               (param_4 = 0, iVar3 = param_4, *(char *)(iVar4 + DAT_00126d20) != '\0'))
            goto LAB_00126c8c;
            *(undefined1 *)(iVar4 + DAT_00126d24) = 0;
          }
          param_4 = 1;
          iVar3 = param_4;
        }
      }
LAB_00126c8c:
      for (; 0 < param_4; param_4 = param_4 + -1) {
        Vector<int>::addElement
                  ((Vector<int> *)(*(int *)(*(int *)(param_1 + 0xc) + 0x7e8) + 0xfc),param_3);
      }
      if (iVar3 != 0) {
        resetTombstone(param_1,param_3);
      }
    }
  }
  String::String(aSStack_20,param_2);
  pMVar2 = (MessageWithToxin *)operator_new(0x14);
  MessageWithToxin::MessageWithToxin(pMVar2,aSStack_20,0);
  Vector<MessageWithToxin*>::addElement((Vector<MessageWithToxin*> *)(param_1 + 0x178),pMVar2);
  this = aSStack_20;
LAB_00126cc2:
  String::~String(this);
  return;
}


