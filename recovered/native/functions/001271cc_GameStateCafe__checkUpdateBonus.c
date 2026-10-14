/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001271cc GameStateCafe::checkUpdateBonus */

/* GameStateCafe::checkUpdateBonus() */

void __thiscall GameStateCafe::checkUpdateBonus(GameStateCafe *this)

{
  undefined4 uVar1;
  int iVar2;
  MessageWithToxin *pMVar3;
  String *this_00;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  String aSStack_ac [8];
  String aSStack_a4 [8];
  char acStack_9c [128];
  int local_1c;
  
  piVar6 = *(int **)(DAT_001273a0 + 0x1271d8);
  local_1c = *piVar6;
  pcVar5 = (char *)(DAT_001273a8 + 0x1271e2);
  snprintf(acStack_9c,0x80,(char *)(DAT_001273a4 + 0x1271e4));
  L_PrintLog(pcVar5,acStack_9c);
  snprintf(acStack_9c,0x80,(char *)(DAT_001273b0 + 0x127202),
           *(undefined4 *)(*(int *)(this + 0xc) + DAT_001273ac));
  L_PrintLog(pcVar5,acStack_9c);
  uVar1 = getUpdateBonusClass::getUpdateBonusFlag
                    (*(getUpdateBonusClass **)(*(int *)(this + 0xc) + 0x718));
  snprintf(acStack_9c,0x80,(char *)(DAT_001273b4 + 0x127224),uVar1);
  L_PrintLog(pcVar5,acStack_9c);
  uVar1 = getUpdateBonusClass::getUpdateBonusType
                    (*(getUpdateBonusClass **)(*(int *)(this + 0xc) + 0x718));
  snprintf(acStack_9c,0x80,(char *)(DAT_001273b8 + 0x127242),uVar1);
  L_PrintLog(pcVar5,acStack_9c);
  uVar1 = getUpdateBonusClass::getUpdateBonusValue
                    (*(getUpdateBonusClass **)(*(int *)(this + 0xc) + 0x718));
  snprintf(acStack_9c,0x80,(char *)(DAT_001273bc + 0x127260),uVar1);
  L_PrintLog(pcVar5,acStack_9c);
  uVar1 = getUpdateBonusClass::getGotFlag(*(getUpdateBonusClass **)(*(int *)(this + 0xc) + 0x718));
  snprintf(acStack_9c,0x80,(char *)(DAT_001273c0 + 0x12727e),uVar1);
  L_PrintLog(pcVar5,acStack_9c);
  iVar4 = *(int *)(this + 0xc);
  if ((*(char *)(iVar4 + 0x710) == '\0') && (*(int *)(iVar4 + DAT_001273ac) < 0x7c)) {
    L_PrintLog(pcVar5,(char *)(DAT_001273c4 + 0x1272ae));
    iVar4 = getUpdateBonusClass::getGotFlag(*(getUpdateBonusClass **)(*(int *)(this + 0xc) + 0x718))
    ;
    if ((iVar4 == 0) &&
       (iVar4 = getUpdateBonusClass::getUpdateBonusFlag
                          (*(getUpdateBonusClass **)(*(int *)(this + 0xc) + 0x718)), iVar4 != 0)) {
      iVar2 = getUpdateBonusClass::getUpdateBonusType
                        (*(getUpdateBonusClass **)(*(int *)(this + 0xc) + 0x718));
      iVar4 = getUpdateBonusClass::getUpdateBonusValue
                        (*(getUpdateBonusClass **)(*(int *)(this + 0xc) + 0x718));
      *(undefined4 *)(*(int *)(this + 0xc) + DAT_001273ac) = 0x7c;
    }
    else {
      iVar4 = 0;
      iVar2 = DAT_001273e0;
    }
    L_PrintLog((char *)(DAT_001273c8 + 0x1272ec),(char *)(DAT_001273cc + 0x1272ee));
    if (iVar2 == 2) {
      if (DAT_001273d0 < iVar4) {
        iVar4 = DAT_001273d4;
      }
      String::String(aSStack_ac,(char *)(DAT_001273d8 + 0x12730a));
      pMVar3 = (MessageWithToxin *)operator_new(0x14);
      MessageWithToxin::MessageWithToxin(pMVar3,aSStack_ac,0,iVar4);
      Vector<MessageWithToxin*>::addElement((Vector<MessageWithToxin*> *)(this + 0x178),pMVar3);
      this_00 = aSStack_ac;
    }
    else {
      if (iVar2 != 3) goto LAB_0012738c;
      if (0x31 < iVar4) {
        iVar4 = 0x32;
      }
      String::String(aSStack_a4,(char *)(DAT_001273dc + 0x12733c));
      pMVar3 = (MessageWithToxin *)operator_new(0x14);
      MessageWithToxin::MessageWithToxin(pMVar3,aSStack_a4,iVar4,0);
      Vector<MessageWithToxin*>::addElement((Vector<MessageWithToxin*> *)(this + 0x178),pMVar3);
      this_00 = aSStack_a4;
    }
    String::~String(this_00);
  }
  else {
    *(undefined4 *)(iVar4 + DAT_001273ac) = 0x7c;
  }
LAB_0012738c:
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


