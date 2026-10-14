/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0020bc08 RaidRewardScreen::postFriendCafeRaidVictoryStory */

/* RaidRewardScreen::postFriendCafeRaidVictoryStory(void*) */

void RaidRewardScreen::postFriendCafeRaidVictoryStory(void *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *__ptr;
  char *__ptr_00;
  char *__ptr_01;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ZombieCafe *this;
  int iVar8;
  int *piVar9;
  String aSStack_14c [8];
  String aSStack_144 [8];
  String aSStack_13c [8];
  String aSStack_134 [8];
  String aSStack_12c [8];
  String aSStack_124 [8];
  String aSStack_11c [8];
  String aSStack_114 [8];
  String aSStack_10c [8];
  String aSStack_104 [8];
  String aSStack_fc [8];
  String aSStack_f4 [8];
  String aSStack_ec [8];
  StringUtil aSStack_e4 [8];
  String aSStack_dc [8];
  String aSStack_d4 [8];
  String aSStack_cc [8];
  String aSStack_c4 [8];
  String aSStack_bc [8];
  String aSStack_b4 [8];
  StringUtil aSStack_ac [8];
  StringUtil aSStack_a4 [8];
  char acStack_9c [128];
  int local_1c;
  
  iVar8 = DAT_0020bfa0 + 0x20bc14;
  piVar9 = *(int **)(iVar8 + DAT_0020bfa4);
  local_1c = *piVar9;
  iVar2 = CapcomApp::getInstance();
  iVar1 = DAT_0020bfa8;
  this = *(ZombieCafe **)(iVar2 + 4);
  if (param_1 == *(void **)(this + 8)) {
    uVar3 = CCServer::GetMyName(*(void **)(this + DAT_0020bfa8));
    String::String(aSStack_144,(char *)(DAT_0020bfac + 0x20bc40));
    operator+(aSStack_13c,uVar3,aSStack_144);
    String::String(aSStack_134,(String *)((int)param_1 + 0x18));
    String::operator+(aSStack_12c,aSStack_13c,aSStack_134);
    String::String(aSStack_124,(char *)(DAT_0020bfb0 + 0x20bc68));
    String::operator+(aSStack_11c,aSStack_12c,aSStack_124);
    Recipe::getFullName((uchar)&stack0xffffffec);
    String::operator+(aSStack_10c,aSStack_11c,aSStack_114);
    String::String(aSStack_104,(char *)(DAT_0020bfb4 + 0x20bca4));
    String::operator+(aSStack_fc,aSStack_10c,aSStack_104);
    CCServer::GetMyName(*(void **)(this + iVar1));
    String::operator+(aSStack_f4,(char *)aSStack_fc);
    String::String(aSStack_ec,(char *)(DAT_0020bfb8 + 0x20bcc8));
    String::operator+(aSStack_14c,aSStack_f4,aSStack_ec);
    String::~String(aSStack_ec);
    String::~String(aSStack_f4);
    String::~String(aSStack_fc);
    String::~String(aSStack_104);
    String::~String(aSStack_10c);
    String::~String(aSStack_114);
    String::~String(aSStack_11c);
    String::~String(aSStack_124);
    String::~String(aSStack_12c);
    String::~String(aSStack_134);
    String::~String(aSStack_13c);
    String::~String(aSStack_144);
    StringUtil::getEncodingString(aSStack_e4,'\x01');
    __ptr = (char *)String::getBytes(aSStack_14c,aSStack_e4,0,0,0);
    String::~String((String *)aSStack_e4);
    String::String(aSStack_d4,*(String **)(iVar8 + DAT_0020bfbc));
    String::operator+(aSStack_cc,*(undefined4 *)(iVar8 + DAT_0020bfc0),aSStack_d4);
    String::valueOf((int)aSStack_c4);
    String::operator+(aSStack_bc,aSStack_cc,aSStack_c4);
    String::String(aSStack_b4,*(String **)(iVar8 + DAT_0020bfc4));
    String::operator+(aSStack_dc,aSStack_bc,aSStack_b4);
    String::~String(aSStack_b4);
    String::~String(aSStack_bc);
    String::~String(aSStack_c4);
    String::~String(aSStack_cc);
    String::~String(aSStack_d4);
    StringUtil::getEncodingString(aSStack_ac,'\0');
    __ptr_00 = (char *)String::getBytes(aSStack_dc,aSStack_ac,0,0,0);
    String::~String((String *)aSStack_ac);
    StringUtil::getEncodingString(aSStack_a4,'\0');
    __ptr_01 = (char *)String::getBytes(*(String **)(iVar8 + DAT_0020bfc8),aSStack_a4,0,0,0);
    String::~String((String *)aSStack_a4);
    CCFacebook::PostStoryWithImage(*(void **)(this + DAT_0020bfcc),__ptr,__ptr_00,__ptr_01,0);
    uVar3 = CCServer::GetMyUserID(*(void **)(this + DAT_0020bfa8));
    uVar5 = *(undefined4 *)(this + 0x680);
    uVar6 = *(undefined4 *)(this + DAT_0020bfd0);
    uVar7 = *(undefined4 *)(this + DAT_0020bfd4);
    uVar4 = ZombieCafe::getToxin(this);
    snprintf(acStack_9c,0x80,(char *)(DAT_0020bfd8 + 0x20be28),DAT_0020bfdc + 0x20be2e,uVar3,uVar5,
             uVar6,uVar7,uVar4);
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(this + DAT_0020bfe0),DAT_0020bfe4 + 0x20be46,acStack_9c);
    Quest::runQuest(*(int *)(this + 0x40),6,(int *)0xffffffff);
    free(__ptr);
    free(__ptr_00);
    free(__ptr_01);
    String::~String(aSStack_dc);
    String::~String(aSStack_14c);
  }
  if (local_1c == *piVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


