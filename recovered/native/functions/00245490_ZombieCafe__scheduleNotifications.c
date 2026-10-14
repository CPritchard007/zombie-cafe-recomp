/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00245490 ZombieCafe::scheduleNotifications */

/* ZombieCafe::scheduleNotifications() */

void __thiscall ZombieCafe::scheduleNotifications(ZombieCafe *this)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int extraout_r1;
  uint uVar7;
  char *pcVar8;
  int iVar9;
  String *pSVar10;
  char *pcVar11;
  undefined4 in_stack_ffffff00;
  undefined4 in_stack_ffffff04;
  StringUtil aSStack_d8 [8];
  undefined4 local_d0;
  undefined4 local_cc;
  String aSStack_c8 [8];
  String aSStack_c0 [8];
  String aSStack_b8 [8];
  String aSStack_b0 [8];
  String aSStack_a8 [8];
  String aSStack_a0 [8];
  String aSStack_98 [8];
  String aSStack_90 [8];
  String aSStack_88 [8];
  String aSStack_80 [8];
  String aSStack_78 [8];
  String aSStack_70 [8];
  String aSStack_68 [8];
  String aSStack_60 [8];
  undefined4 local_58;
  undefined4 local_54;
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  undefined4 local_28;
  undefined4 local_24;
  undefined1 auStack_20 [12];
  
  pcVar8 = (char *)(DAT_0024569c + 0x24549c);
  pcVar11 = (char *)(DAT_002456a0 + 0x24549e);
  L_PrintLog(pcVar8,pcVar11);
  iVar6 = DAT_002456ac;
  L_PrintLog((char *)(DAT_002456a4 + 0x2454b0),(char *)(DAT_002456a8 + 0x2454b2));
  L_PrintLog(pcVar8,pcVar11);
  pvVar1 = (void *)CCLocalNotifications::Init();
  CCLocalNotifications::DeleteAllNotes(pvVar1);
  if (this[DAT_002456b0] != (ZombieCafe)0x0) {
    StringUtil::getEncodingString(aSStack_d8,'\x01');
    CapcomDate::now((CapcomDate *)&local_d0);
    iVar9 = 0;
    if (this[DAT_002456b4] != (ZombieCafe)0x0) {
      for (; iVar9 < *(int *)(this + DAT_002456c8 + 4) + 1; iVar9 = iVar9 + 1) {
        memcpy(&local_58,(void *)(*(int *)(this + DAT_002456c8 + 8) + iVar9 * 8),8);
        Vector<String>::elementAt((int)aSStack_50);
        iVar3 = CapcomDate::secondsBetween(local_d0,local_cc,local_58,local_54);
        if ((0 < iVar3) && (iVar3 = isNotificationTimeSuitable(this,local_58,local_54), iVar3 != 0))
        {
          String::String(aSStack_c8,(String *)aSStack_d8);
          uVar4 = String::getBytes(aSStack_50,aSStack_c8,0,0,0);
          String::~String(aSStack_c8);
          Vector<String>::elementAt((int)aSStack_c0);
          String::String(aSStack_b8,(String *)aSStack_d8);
          String::getBytes(aSStack_c0,aSStack_b8,0,0,0);
          String::~String(aSStack_b8);
          String::~String(aSStack_c0);
          L_PrintLog((char *)(DAT_002456c0 + 0x24557e),(char *)(DAT_002456c4 + 0x245580));
          uVar5 = CapcomDate::secondsBetween(local_d0,local_cc,local_58,local_54);
          javaSendNotification(1,uVar4,0,uVar5);
        }
        String::~String(aSStack_50);
      }
    }
    if (this[DAT_002456cc] != (ZombieCafe)0x0) {
      pSVar10 = (String *)(this + DAT_002456d0);
      String::String(aSStack_b0,pSVar10);
      uVar2 = operator!=(aSStack_b0,0);
      if (uVar2 != 0) {
        iVar9 = CapcomDate::secondsBetween
                          (local_d0,local_cc,*(undefined4 *)(this + DAT_002456d4),
                           *(undefined4 *)(this + DAT_002456d4 + 4));
        uVar2 = (uint)((iVar9 >> 0x1f) - iVar9) >> 0x1f;
      }
      String::~String(aSStack_b0);
      iVar9 = DAT_002456d4;
      if (uVar2 != 0) {
        iVar3 = CapcomDate::secondsBetween
                          (local_d0,local_cc,*(undefined4 *)(this + DAT_002456d4),
                           *(undefined4 *)(this + DAT_002456d4 + 4));
        if ((0 < iVar3) &&
           (iVar3 = isNotificationTimeSuitable
                              (this,*(undefined4 *)(this + iVar9),*(undefined4 *)(this + iVar9 + 4))
           , iVar3 != 0)) {
          String::String(aSStack_a8,(String *)aSStack_d8);
          uVar4 = String::getBytes(pSVar10,aSStack_a8,0,0,0);
          String::~String(aSStack_a8);
          Vector<String>::elementAt((int)aSStack_a0);
          String::String(aSStack_98,(String *)aSStack_d8);
          String::getBytes(aSStack_a0,aSStack_98,0,0,0);
          String::~String(aSStack_98);
          String::~String(aSStack_a0);
          L_PrintLog((char *)(DAT_002456d8 + 0x24566e),(char *)(DAT_002456dc + 0x245670));
          uVar5 = CapcomDate::secondsBetween
                            (local_d0,local_cc,*(undefined4 *)(this + iVar9),
                             *(undefined4 *)(this + iVar9 + 4));
          javaSendNotification(2,uVar4,1,uVar5);
        }
      }
    }
    iVar9 = 0;
    if (this[DAT_002456e0] != (ZombieCafe)0x0) {
      for (; iVar9 < *(int *)(this + DAT_00245a7c + 4) + 1; iVar9 = iVar9 + 1) {
        memcpy(&local_58,(void *)(*(int *)(this + DAT_00245a7c + 8) + iVar9 * 8),8);
        Vector<String>::elementAt((int)aSStack_50);
        iVar3 = CapcomDate::secondsBetween(local_d0,local_cc,local_58,local_54);
        if (((0 < iVar3) &&
            (iVar3 = CapcomDate::secondsBetween(local_d0,local_cc,local_58,local_54), 0 < iVar3)) &&
           (iVar3 = isNotificationTimeSuitable(this,local_58,local_54), iVar3 != 0)) {
          String::String(aSStack_90,(String *)aSStack_d8);
          uVar4 = String::getBytes(aSStack_50,aSStack_90,0,0,0);
          String::~String(aSStack_90);
          Vector<String>::elementAt((int)aSStack_88);
          String::String(aSStack_80,(String *)aSStack_d8);
          String::getBytes(aSStack_88,aSStack_80,0,0,0);
          String::~String(aSStack_80);
          String::~String(aSStack_88);
          L_PrintLog((char *)(DAT_00245a74 + 0x245788),(char *)(DAT_00245a78 + 0x24578a));
          uVar5 = CapcomDate::secondsBetween(local_d0,local_cc,local_58,local_54);
          javaSendNotification(4,uVar4,2,uVar5);
        }
        String::~String(aSStack_50);
      }
    }
    if (this[DAT_00245a80] != (ZombieCafe)0x0) {
      __aeabi_idivmod(*(undefined4 *)(this + 0x680),
                      **(undefined1 **)(iVar6 + 0x2454cc + DAT_00245a84));
      uVar2 = *(uint *)(extraout_r1 * 4 + *(int *)(this + DAT_00245a88));
      uVar7 = **(uint **)(iVar6 + 0x2454cc + DAT_00245a8c);
      if (uVar2 != -uVar7 && (int)(uVar2 + uVar7) < 0 == SBORROW4(uVar2,-uVar7)) {
        Vector<String>::elementAt((int)aSStack_78);
        String::String(aSStack_70,(String *)aSStack_d8);
        uVar4 = String::getBytes(aSStack_78,aSStack_70,0,0,0);
        String::~String(aSStack_70);
        String::~String(aSStack_78);
        Vector<String>::elementAt((int)aSStack_68);
        String::String(aSStack_60,(String *)aSStack_d8);
        String::getBytes(aSStack_68,aSStack_60,0,0,0);
        String::~String(aSStack_60);
        String::~String(aSStack_68);
        local_58 = local_d0;
        local_54 = local_cc;
        __aeabi_ldivmod(uVar2 + uVar7,
                        ((int)uVar2 >> 0x1f) + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar2,uVar7),
                        DAT_00245a68,DAT_00245a6c);
        CapcomDate::addSeconds((int)&local_58);
        getSuitableNotificationTime(aSStack_50,this,local_58,local_54,0);
        iVar6 = CapcomDate::to1970Offset();
        if (iVar6 != 0) {
          L_PrintLog((char *)(DAT_00245a94 + 0x2458a0),(char *)(DAT_00245a98 + 0x2458a2));
          javaSendNotification(3,uVar4,3,uVar2 + uVar7);
        }
      }
    }
    Vector<String>::elementAt((int)aSStack_48);
    String::String(aSStack_40,(String *)aSStack_d8);
    uVar4 = String::getBytes(aSStack_48,aSStack_40,0,0,0);
    String::~String(aSStack_40);
    String::~String(aSStack_48);
    Vector<String>::elementAt((int)aSStack_38);
    String::String(aSStack_30,(String *)aSStack_d8);
    String::getBytes(aSStack_38,aSStack_30,0,0,0);
    String::~String(aSStack_30);
    String::~String(aSStack_38);
    local_28 = local_d0;
    local_24 = local_cc;
    CapcomDate::addSeconds((int)&local_28);
    iVar6 = CapcomDate::dayInWeek();
    CapcomDate::addDays((CapcomDate *)&local_28,7 - iVar6);
    CapcomDate::secondInDay((CapcomDate *)&local_28);
    CapcomDate::addSeconds((int)&local_28);
    CapcomDate::addSeconds((int)&local_28);
    in_stack_ffffff00 = 0;
    getSuitableNotificationTime(auStack_20,this,local_28,local_24);
    L_PrintLog((char *)(DAT_00245aa8 + 0x245960),(char *)(DAT_00245aac + 0x245962));
    javaSendNotification(5,uVar4,4,DAT_00245ab0);
    String::~String((String *)aSStack_d8);
  }
  CCLocalNotifications::Free(pvVar1);
  L_PrintLog((char *)(DAT_00245ab4 + 0x245984),(char *)(DAT_00245ab8 + 0x245986));
  if (*(int *)(this + DAT_00245abc) == 1) {
    this[DAT_00245ac0] = (ZombieCafe)0x1;
  }
  Platform::getAppTime();
  pcVar8 = (char *)__fixdfsi();
  iVar6 = DAT_00245ac8;
  *(char **)(DAT_00245ac4 + 0x2459b6) = pcVar8;
  CCOptions::SetUInt64
            (*(CCOptions **)(this + 0xa00),(void *)(iVar6 + 0x2459b0),pcVar8,
             CONCAT44(in_stack_ffffff04,in_stack_ffffff00));
  return;
}


