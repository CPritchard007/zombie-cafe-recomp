/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0020bffc RaidRewardScreen::postRaidVictoryStory */

/* RaidRewardScreen::postRaidVictoryStory(void*) */

void RaidRewardScreen::postRaidVictoryStory(void *param_1)

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
  String aSStack_1b4 [8];
  String aSStack_1ac [8];
  String aSStack_1a4 [8];
  String aSStack_19c [8];
  String aSStack_194 [8];
  String aSStack_18c [8];
  String aSStack_184 [8];
  String aSStack_17c [8];
  String aSStack_174 [8];
  String aSStack_16c [8];
  String aSStack_164 [8];
  String aSStack_15c [8];
  String aSStack_154 [8];
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
  
  iVar8 = DAT_0020c3c4 + 0x20c00a;
  piVar9 = *(int **)(iVar8 + DAT_0020c3c8);
  local_1c = *piVar9;
  iVar2 = CapcomApp::getInstance();
  iVar1 = DAT_0020c3cc;
  this = *(ZombieCafe **)(iVar2 + 4);
  iVar2 = *(int *)((int)param_1 + 0x2c);
  if (param_1 == *(void **)(this + 8)) {
    uVar3 = CCServer::GetMyName(*(void **)(this + DAT_0020c3cc));
    String::String(aSStack_1ac,(char *)(DAT_0020c3d0 + 0x20c034));
    operator+(aSStack_1a4,uVar3,aSStack_1ac);
    String::String(aSStack_19c,(String *)(*(int *)(this + 0x6a0) + *(int *)(iVar2 + 0xb0) * 8));
    String::operator+(aSStack_194,aSStack_1a4,aSStack_19c);
    String::String(aSStack_18c,(char *)(DAT_0020c3d4 + 0x20c068));
    String::operator+(aSStack_184,aSStack_194,aSStack_18c);
    Recipe::getFullName((char)&stack0xffffffec + 0x98);
    String::operator+(aSStack_174,aSStack_184,aSStack_17c);
    String::String(aSStack_16c,(char *)(DAT_0020c3d8 + 0x20c0a4));
    String::operator+(aSStack_164,aSStack_174,aSStack_16c);
    CCServer::GetMyName(*(void **)(this + iVar1));
    String::operator+(aSStack_15c,(char *)aSStack_164);
    String::String(aSStack_154,(char *)(DAT_0020c3dc + 0x20c0c8));
    String::operator+(aSStack_1b4,aSStack_15c,aSStack_154);
    String::~String(aSStack_154);
    String::~String(aSStack_15c);
    String::~String(aSStack_164);
    String::~String(aSStack_16c);
    String::~String(aSStack_174);
    String::~String(aSStack_17c);
    String::~String(aSStack_184);
    String::~String(aSStack_18c);
    String::~String(aSStack_194);
    String::~String(aSStack_19c);
    String::~String(aSStack_1a4);
    String::~String(aSStack_1ac);
    if (*(char *)(iVar2 + 0x61) != '\0') {
      uVar3 = CCServer::GetMyName(*(void **)(this + iVar1));
      String::String(aSStack_14c,(char *)(DAT_0020c3e0 + 0x20c138));
      operator+(aSStack_144,uVar3,aSStack_14c);
      String::String(aSStack_13c,(String *)(*(int *)(this + 0x6a0) + *(int *)(iVar2 + 0xb0) * 8));
      String::operator+(aSStack_134,aSStack_144,aSStack_13c);
      String::String(aSStack_12c,(char *)(DAT_0020c3e4 + 0x20c16c));
      String::operator+(aSStack_124,aSStack_134,aSStack_12c);
      Recipe::getFullName((char)&stack0xffffffec + 0xf8);
      String::operator+(aSStack_114,aSStack_124,aSStack_11c);
      String::String(aSStack_10c,(char *)(DAT_0020c3e8 + 0x20c1a8));
      String::operator+(aSStack_104,aSStack_114,aSStack_10c);
      CCServer::GetMyName(*(void **)(this + DAT_0020c3cc));
      String::operator+(aSStack_fc,(char *)aSStack_104);
      String::String(aSStack_f4,(char *)(DAT_0020c3ec + 0x20c1ce));
      String::operator+(aSStack_ec,aSStack_fc,aSStack_f4);
      String::operator=(aSStack_1b4,aSStack_ec);
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
      String::~String(aSStack_14c);
    }
    StringUtil::getEncodingString(aSStack_e4,'\x01');
    __ptr = (char *)String::getBytes(aSStack_1b4,aSStack_e4,0,0,0);
    String::~String((String *)aSStack_e4);
    String::String(aSStack_d4,*(String **)(iVar8 + DAT_0020c3f0));
    String::operator+(aSStack_cc,*(undefined4 *)(iVar8 + DAT_0020c3f4),aSStack_d4);
    String::valueOf((int)aSStack_c4);
    String::operator+(aSStack_bc,aSStack_cc,aSStack_c4);
    String::String(aSStack_b4,*(String **)(iVar8 + DAT_0020c3f8));
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
    __ptr_01 = (char *)String::getBytes(*(String **)(iVar8 + DAT_0020c3fc),aSStack_a4,0,0,0);
    String::~String((String *)aSStack_a4);
    CCFacebook::PostStoryWithImage(*(void **)(this + DAT_0020c400),__ptr,__ptr_00,__ptr_01,0);
    uVar3 = CCServer::GetMyUserID(*(void **)(this + DAT_0020c3cc));
    uVar5 = *(undefined4 *)(this + 0x680);
    uVar6 = *(undefined4 *)(this + DAT_0020c404);
    uVar7 = *(undefined4 *)(this + DAT_0020c408);
    uVar4 = ZombieCafe::getToxin(this);
    snprintf(acStack_9c,0x80,(char *)(DAT_0020c40c + 0x20c33e),DAT_0020c410 + 0x20c344,uVar3,uVar5,
             uVar6,uVar7,uVar4);
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(this + DAT_0020c414),DAT_0020c418 + 0x20c35c,acStack_9c);
    Quest::runQuest(*(int *)(this + 0x40),6,(int *)0xffffffff);
    free(__ptr);
    free(__ptr_00);
    free(__ptr_01);
    String::~String(aSStack_dc);
    String::~String(aSStack_1b4);
  }
  if (local_1c == *piVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


