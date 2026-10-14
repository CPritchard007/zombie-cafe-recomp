/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00129b30 GameStateCafe::L_PurchaseDBCheck */

/* GameStateCafe::L_PurchaseDBCheck() */

void __thiscall GameStateCafe::L_PurchaseDBCheck(GameStateCafe *this)

{
  undefined4 uVar1;
  char *__s1;
  int iVar2;
  MessageWithToxin *pMVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  String aSStack_20 [12];
  
  PrintDBState();
  iVar5 = 0;
  L_PrintLog((char *)(DAT_00129e24 + 0x129b44),(char *)(DAT_00129e28 + 0x129b46));
  uVar4 = 0;
  sqlite3_open(DAT_00129e2c + 0x129b52,&local_2c);
  sqlite3_prepare(local_2c,DAT_00129e30 + 0x129b5e,0xffffffff,&local_28,0);
  while (iVar2 = sqlite3_step(local_28), iVar2 == 100) {
    uVar1 = sqlite3_column_text(local_28,0);
    __s1 = (char *)sqlite3_column_text(local_28,1);
    sqlite3_column_text(local_28,2);
    sqlite3_prepare(local_2c,DAT_00129e34 + 0x129b8e,0xffffffff,&local_24,0);
    sqlite3_bind_text(local_24,1,uVar1,0xffffffff,0);
    iVar2 = sqlite3_step(local_24);
    if (iVar2 == 0x65) {
      L_PrintLog((char *)(DAT_00129e38 + 0x129bbc),(char *)(DAT_00129e3c + 0x129bbe));
      iVar2 = strcmp(__s1,(char *)(DAT_00129e40 + 0x129bc8));
      if (iVar2 == 0) {
        iVar5 = iVar5 + 0x32;
        uVar4 = 0;
      }
      else {
        iVar2 = strcmp(__s1,(char *)(DAT_00129e44 + 0x129bdc));
        if (iVar2 == 0) {
          iVar5 = iVar5 + 0x7d;
          uVar4 = 1;
        }
        else {
          iVar2 = strcmp(__s1,(char *)(DAT_00129e48 + 0x129bf0));
          if (iVar2 == 0) {
            iVar5 = iVar5 + 0x15e;
            uVar4 = 2;
          }
          else {
            iVar2 = strcmp(__s1,(char *)(DAT_00129e4c + 0x129c06));
            if (iVar2 == 0) {
              iVar5 = iVar5 + 800;
              uVar4 = 3;
            }
            else {
              iVar2 = strcmp(__s1,(char *)(DAT_00129e50 + 0x129c1e));
              if (iVar2 == 0) {
                iVar5 = iVar5 + 2000;
                uVar4 = 4;
              }
              else {
                iVar2 = strcmp(__s1,(char *)(DAT_00129e54 + 0x129c36));
                if (iVar2 == 0) {
                  GiveBoughtHCOforPurchaseDBCheck(this,5);
                  uVar4 = 5;
                }
                else {
                  iVar2 = strcmp(__s1,(char *)(DAT_00129e58 + 0x129c50));
                  if (iVar2 == 0) {
                    GiveBoughtHCOforPurchaseDBCheck(this,6);
                    uVar4 = 6;
                  }
                  else {
                    iVar2 = strcmp(__s1,(char *)(DAT_00129e5c + 0x129c6a));
                    if (iVar2 == 0) {
                      GiveBoughtHCOforPurchaseDBCheck(this,7);
                      uVar4 = 7;
                    }
                    else {
                      iVar2 = strcmp(__s1,(char *)(DAT_00129e60 + 0x129c84));
                      if (iVar2 == 0) {
                        GiveBoughtHCOforPurchaseDBCheck(this,8);
                        uVar4 = 8;
                      }
                      else {
                        iVar2 = strcmp(__s1,(char *)(DAT_00129e64 + 0x129c9e));
                        if (iVar2 == 0) {
                          GiveBoughtHCOforPurchaseDBCheck(this,9);
                          uVar4 = 9;
                        }
                        else {
                          iVar2 = strcmp(__s1,(char *)(DAT_00129e68 + 0x129cb8));
                          if (iVar2 == 0) {
                            GiveBoughtHCOforPurchaseDBCheck(this,10);
                            uVar4 = 10;
                          }
                          else {
                            iVar2 = strcmp(__s1,(char *)(DAT_00129e6c + 0x129cd2));
                            if (iVar2 == 0) {
                              GiveBoughtHCOforPurchaseDBCheck(this,0xb);
                              uVar4 = 0xb;
                            }
                            else {
                              iVar2 = strcmp(__s1,(char *)(DAT_00129e70 + 0x129cec));
                              if (iVar2 == 0) {
                                GiveBoughtHCOforPurchaseDBCheck(this,0xc);
                                uVar4 = 0xc;
                              }
                              else {
                                iVar2 = strcmp(__s1,(char *)(DAT_00129e74 + 0x129d06));
                                if (iVar2 == 0) {
                                  GiveBoughtHCOforPurchaseDBCheck(this,0xd);
                                  uVar4 = 0xd;
                                }
                                else {
                                  iVar2 = strcmp(__s1,(char *)(DAT_00129e78 + 0x129d20));
                                  if (iVar2 == 0) {
                                    GiveBoughtHCOforPurchaseDBCheck(this,0xe);
                                    uVar4 = 0xe;
                                  }
                                  else {
                                    iVar2 = strcmp(__s1,(char *)(DAT_00129e7c + 0x129d3a));
                                    if (iVar2 == 0) {
                                      GiveBoughtHCOforPurchaseDBCheck(this,0xf);
                                      uVar4 = 0xf;
                                    }
                                    else {
                                      iVar2 = strcmp(__s1,(char *)(DAT_00129e80 + 0x129d54));
                                      if (iVar2 == 0) {
                                        GiveBoughtHCOforPurchaseDBCheck(this,0x10);
                                        uVar4 = 0x10;
                                      }
                                      else {
                                        iVar2 = strcmp(__s1,(char *)(DAT_00129e84 + 0x129d6e));
                                        if (iVar2 == 0) {
                                          GiveBoughtHCOforPurchaseDBCheck(this,0x11);
                                          uVar4 = 0x11;
                                        }
                                        else {
                                          iVar2 = strcmp(__s1,(char *)(DAT_00129e88 + 0x129d88));
                                          if (iVar2 == 0) {
                                            GiveBoughtHCOforPurchaseDBCheck(this,0x12);
                                            uVar4 = 0x12;
                                          }
                                          else {
                                            iVar2 = strcmp(__s1,(char *)(DAT_00129e8c + 0x129da2));
                                            if (iVar2 == 0) {
                                              GiveBoughtHCOforPurchaseDBCheck(this,0x13);
                                              uVar4 = 0x13;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    sqlite3_finalize(local_24);
  }
  if (iVar5 != 0) {
    String::String(aSStack_20,(char *)(DAT_00129e90 + 0x129dd0));
    pMVar3 = (MessageWithToxin *)operator_new(0x14);
    MessageWithToxin::MessageWithToxin(pMVar3,aSStack_20,uVar4,0);
    Vector<MessageWithToxin*>::addElement((Vector<MessageWithToxin*> *)(this + 0x178),pMVar3);
    String::~String(aSStack_20);
  }
  sqlite3_finalize(local_28);
  sqlite3_close(local_2c);
  L_PrintLog((char *)(DAT_00129e94 + 0x129e0a),(char *)(DAT_00129e98 + 0x129e0c));
  return;
}


