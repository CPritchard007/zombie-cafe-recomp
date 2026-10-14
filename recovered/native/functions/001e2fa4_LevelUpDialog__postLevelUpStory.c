/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e2fa4 LevelUpDialog::postLevelUpStory */

/* LevelUpDialog::postLevelUpStory(void*) */

void LevelUpDialog::postLevelUpStory(void *param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *__ptr;
  char *__ptr_00;
  char *__ptr_01;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ZombieCafe *this;
  int iVar7;
  int *piVar8;
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
  String aSStack_e4 [8];
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
  
  iVar7 = DAT_001e331c + 0x1e2fb0;
  piVar8 = *(int **)(iVar7 + DAT_001e3320);
  local_1c = *piVar8;
  L_PrintLog((char *)(DAT_001e3324 + 0x1e2fbc),(char *)(DAT_001e3328 + 0x1e2fbe));
  iVar1 = CapcomApp::getInstance();
  this = *(ZombieCafe **)(iVar1 + 4);
  if (param_1 == *(void **)(this + 8)) {
    uVar2 = CCServer::GetMyName(*(void **)(this + DAT_001e332c));
    String::String(aSStack_12c,
                   (String *)
                   (*(int *)(*(int *)(this + 0x4b0) + 8) + **(int **)(iVar7 + DAT_001e3330) * 8));
    operator+(aSStack_124,uVar2,aSStack_12c);
    Recipe::getFullName((char)&stack0xffffffec + 0xf8);
    String::operator+(aSStack_114,aSStack_124,aSStack_11c);
    String::String(aSStack_10c,(char *)(DAT_001e3334 + 0x1e3032));
    String::operator+(aSStack_104,aSStack_114,aSStack_10c);
    String::String(aSStack_fc,
                   (String *)
                   (*(int *)(*(int *)(this + 0x4b0) + 8) + **(int **)(iVar7 + DAT_001e3338) * 8));
    String::operator+(aSStack_f4,aSStack_104,aSStack_fc);
    CCServer::GetMyFirstName(*(void **)(this + DAT_001e332c));
    String::operator+(aSStack_ec,(char *)aSStack_f4);
    String::String(aSStack_e4,
                   (String *)
                   (*(int *)(*(int *)(this + 0x4b0) + 8) + **(int **)(iVar7 + DAT_001e333c) * 8));
    String::operator+(aSStack_134,aSStack_ec,aSStack_e4);
    String::~String(aSStack_e4);
    String::~String(aSStack_ec);
    String::~String(aSStack_f4);
    String::~String(aSStack_fc);
    String::~String(aSStack_104);
    String::~String(aSStack_10c);
    String::~String(aSStack_114);
    String::~String(aSStack_11c);
    String::~String(aSStack_124);
    String::~String(aSStack_12c);
    __ptr = (char *)String::getBytes(aSStack_134);
    String::String(aSStack_d4,*(String **)(iVar7 + DAT_001e3340));
    String::operator+(aSStack_cc,*(undefined4 *)(iVar7 + DAT_001e3344),aSStack_d4);
    String::valueOf((int)aSStack_c4);
    String::operator+(aSStack_bc,aSStack_cc,aSStack_c4);
    String::String(aSStack_b4,*(String **)(iVar7 + DAT_001e3348));
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
    __ptr_01 = (char *)String::getBytes(*(String **)(iVar7 + DAT_001e334c),aSStack_a4,0,0,0);
    String::~String((String *)aSStack_a4);
    CCFacebook::PostStoryWithImage(*(void **)(this + DAT_001e3350),__ptr,__ptr_00,__ptr_01,0);
    uVar2 = CCServer::GetMyUserID(*(void **)(this + DAT_001e332c));
    uVar4 = *(undefined4 *)(this + 0x680);
    uVar5 = *(undefined4 *)(this + DAT_001e3354);
    uVar6 = *(undefined4 *)(this + DAT_001e3358);
    uVar3 = ZombieCafe::getToxin(this);
    snprintf(acStack_9c,0x80,(char *)(DAT_001e335c + 0x1e31be),DAT_001e3360 + 0x1e31c4,uVar2,uVar4,
             uVar5,uVar6,uVar3);
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(this + DAT_001e3364),DAT_001e3368 + 0x1e31dc,acStack_9c);
    Quest::runQuest(*(int *)(this + 0x40),6,(int *)0xffffffff);
    free(__ptr);
    free(__ptr_00);
    free(__ptr_01);
    String::~String(aSStack_dc);
    String::~String(aSStack_134);
  }
  if (local_1c == *piVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


