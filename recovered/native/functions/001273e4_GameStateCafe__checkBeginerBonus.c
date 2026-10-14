/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001273e4 GameStateCafe::checkBeginerBonus */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00127510) */
/* WARNING: Removing unreachable block (ram,0x00127510) */
/* GameStateCafe::checkBeginerBonus() */

void __thiscall GameStateCafe::checkBeginerBonus(GameStateCafe *this)

{
  int iVar1;
  MessageWithToxin *pMVar2;
  String *this_00;
  int iVar3;
  void *pvVar4;
  undefined4 uVar5;
  int iVar6;
  CapcomDate aCStack_94 [8];
  CapcomDate aCStack_8c [8];
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  CapcomDate aCStack_74 [8];
  CapcomDate aCStack_6c [8];
  CapcomDate aCStack_64 [8];
  String aSStack_5c [8];
  String aSStack_54 [8];
  String aSStack_4c [8];
  String aSStack_44 [8];
  String aSStack_3c [8];
  StringBuffer aSStack_34 [32];
  
  iVar1 = DAT_00127638;
  iVar3 = *(int *)(this + 0xc);
  if (6 < *(int *)(iVar3 + DAT_00127638)) {
    return;
  }
  if (*(char *)(*(int *)(this + 0xc4) + 0x14) != '\0') {
    return;
  }
  if (*(int *)(iVar3 + DAT_00127638) == 0) {
    *(undefined4 *)(iVar3 + DAT_00127638) = 1;
    pvVar4 = (void *)(*(int *)(this + 0xc) + DAT_0012763c);
    CapcomDate::now(aCStack_94);
    memcpy(pvVar4,aCStack_94,7);
    pvVar4 = (void *)(*(int *)(this + 0xc) + DAT_00127640);
    CapcomDate::now(aCStack_8c);
    memcpy(pvVar4,aCStack_8c,7);
    uVar5 = 0;
  }
  else {
    CapcomDate::now((CapcomDate *)&local_84);
    uVar5 = 0xff;
    iVar3 = CapcomDate::daysBetween
                      (CONCAT22(*(undefined2 *)(iVar3 + DAT_00127640 + 2),
                                *(undefined2 *)(iVar3 + DAT_00127640)),
                       *(undefined4 *)(iVar3 + DAT_00127640 + 4),local_84,local_80);
    if (0 < iVar3) {
      iVar3 = *(int *)(this + 0xc);
      CapcomDate::now((CapcomDate *)&local_7c);
      iVar6 = iVar3 + DAT_0012763c;
      iVar3 = CapcomDate::daysBetween
                        (CONCAT22(*(undefined2 *)(iVar6 + 2),*(undefined2 *)(iVar3 + DAT_0012763c)),
                         *(undefined4 *)(iVar6 + 4),local_7c,local_78);
      iVar6 = *(int *)(this + 0xc);
      if (*(int *)(iVar6 + iVar1) == 6) {
        *(undefined4 *)(iVar6 + iVar1) = 7;
        if (iVar3 == 6) {
          pvVar4 = (void *)(*(int *)(this + 0xc) + DAT_00127640);
          CapcomDate::now(aCStack_74);
          memcpy(pvVar4,aCStack_74,7);
          uVar5 = 3;
        }
        else {
          pvVar4 = (void *)(*(int *)(this + 0xc) + DAT_00127640);
          CapcomDate::now(aCStack_6c);
          memcpy(pvVar4,aCStack_6c,7);
          uVar5 = 2;
        }
      }
      else {
        *(int *)(iVar6 + iVar1) = *(int *)(iVar6 + iVar1) + 1;
        pvVar4 = (void *)(*(int *)(this + 0xc) + DAT_00127640);
        CapcomDate::now(aCStack_64);
        memcpy(pvVar4,aCStack_64,7);
        uVar5 = 1;
      }
    }
  }
  StringBuffer::StringBuffer(aSStack_34);
  String::valueOf((int)aSStack_5c);
  StringBuffer::append(aSStack_34,aSStack_5c);
  String::~String(aSStack_5c);
  switch(uVar5) {
  case 0:
    String::String(aSStack_54,(char *)(DAT_00127644 + 0x127520));
    pMVar2 = (MessageWithToxin *)operator_new(0x14);
    MessageWithToxin::MessageWithToxin(pMVar2,aSStack_54,0,1000);
    Vector<MessageWithToxin*>::addElement((Vector<MessageWithToxin*> *)(this + 0x178),pMVar2);
    this_00 = aSStack_54;
    break;
  case 1:
    String::String(aSStack_4c,(char *)(DAT_00127648 + 0x12754e));
    pMVar2 = (MessageWithToxin *)operator_new(0x14);
    MessageWithToxin::MessageWithToxin(pMVar2,aSStack_4c,0,1000);
    Vector<MessageWithToxin*>::addElement((Vector<MessageWithToxin*> *)(this + 0x178),pMVar2);
    this_00 = aSStack_4c;
    break;
  case 2:
    String::String(aSStack_44,(char *)(DAT_0012764c + 0x12757c));
    pMVar2 = (MessageWithToxin *)operator_new(0x14);
    MessageWithToxin::MessageWithToxin(pMVar2,aSStack_44,0,2000);
    Vector<MessageWithToxin*>::addElement((Vector<MessageWithToxin*> *)(this + 0x178),pMVar2);
    this_00 = aSStack_44;
    break;
  case 3:
    String::String(aSStack_3c,(char *)(DAT_00127650 + 0x1275aa));
    pMVar2 = (MessageWithToxin *)operator_new(0x14);
    MessageWithToxin::MessageWithToxin(pMVar2,aSStack_3c,3,0);
    Vector<MessageWithToxin*>::addElement((Vector<MessageWithToxin*> *)(this + 0x178),pMVar2);
    this_00 = aSStack_3c;
    break;
  default:
    goto switchD_00127510_default;
  }
  String::~String(this_00);
switchD_00127510_default:
  CapcomLinkedList<String>::~CapcomLinkedList((CapcomLinkedList<String> *)aSStack_34);
  return;
}


