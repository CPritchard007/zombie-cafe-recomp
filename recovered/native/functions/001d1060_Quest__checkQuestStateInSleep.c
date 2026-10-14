/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d1060 Quest::checkQuestStateInSleep */

/* Quest::checkQuestStateInSleep(int) */

void __thiscall Quest::checkQuestStateInSleep(Quest *this,int param_1)

{
  int iVar1;
  ZombieCafe *this_00;
  Data *pDVar2;
  int iVar3;
  String *this_01;
  undefined8 uVar4;
  undefined8 uVar5;
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar1 = CapcomApp::getInstance();
  this_00 = *(ZombieCafe **)(iVar1 + 4);
  iVar1 = *(int *)(param_1 * 4 + *(int *)(this + 0xc));
  pDVar2 = (Data *)QuestData::getData(param_1);
  if (((pDVar2[0x48] != (Data)0x0) && (0 < *(int *)(iVar1 + 0x10))) && (pDVar2[0x48] == (Data)0x1))
  {
    uVar4 = Platform::getAppTime();
    uVar4 = __subdf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),*(undefined4 *)(iVar1 + 8),
                     *(undefined4 *)(iVar1 + 0xc));
    uVar4 = __muldf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_001d11c0,DAT_001d11c4);
    uVar5 = __floatsidf(*(undefined4 *)(pDVar2 + 0x4c));
    iVar3 = __aeabi_dcmplt((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)uVar5,
                           (int)((ulonglong)uVar5 >> 0x20));
    if (iVar3 != 0) {
      return;
    }
  }
  if ((byte)pDVar2[4] == 0xff) {
    return;
  }
  if (*(int *)(this_00 + 0x680) < (int)(uint)(byte)pDVar2[4]) {
    return;
  }
  this_01 = (String *)(pDVar2 + 8);
  String::String(aSStack_40,(char *)(DAT_001d11c8 + 0x1d10de));
  iVar3 = String::compareTo(this_01,aSStack_40);
  String::~String(aSStack_40);
  if (iVar3 != 0) {
    String::String(aSStack_38,(char *)(DAT_001d11cc + 0x1d10fe));
    iVar3 = String::compareTo(this_01,aSStack_38);
    String::~String(aSStack_38);
    if (iVar3 == 0) {
      String::String(aSStack_30,(char *)(DAT_001d11d0 + 0x1d111c));
      iVar3 = String::compareTo((String *)(pDVar2 + 0x14),aSStack_30);
      String::~String(aSStack_30);
      if (iVar3 != 0) {
        return;
      }
      iVar3 = checkPremise(this,pDVar2);
      if (iVar3 == 0) {
        return;
      }
    }
    else {
      String::String(aSStack_28,(char *)(DAT_001d11d4 + 0x1d114a));
      iVar3 = String::compareTo(this_01,aSStack_28);
      String::~String(aSStack_28);
      if (iVar3 != 0) {
        String::String(aSStack_20,(char *)(DAT_001d11d8 + 0x1d117a));
        String::compareTo(this_01,aSStack_20);
        String::~String(aSStack_20);
        return;
      }
      iVar3 = ZombieCafe::getToxin(this_00);
      if (iVar3 < *(int *)(pDVar2 + 0x10)) {
        return;
      }
    }
  }
  *(undefined1 *)(iVar1 + 4) = 1;
  return;
}


