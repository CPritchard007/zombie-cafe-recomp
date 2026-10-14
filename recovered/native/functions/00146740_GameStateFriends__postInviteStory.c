/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00146740 GameStateFriends::postInviteStory */

/* GameStateFriends::postInviteStory(void*) */

void GameStateFriends::postInviteStory(void *param_1)

{
  int iVar1;
  char *__ptr;
  char *__ptr_00;
  char *__ptr_01;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ZombieCafe *this;
  int iVar7;
  int *piVar8;
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
  
  iVar7 = DAT_00146994 + 0x14674c;
  piVar8 = *(int **)(iVar7 + DAT_00146998);
  local_1c = *piVar8;
  iVar1 = CapcomApp::getInstance();
  this = *(ZombieCafe **)(iVar1 + 4);
  if (param_1 == *(void **)(this + 8)) {
    Vector<String>::elementAt((int)aSStack_e4);
    String::String(aSStack_dc,(char *)(DAT_001469a0 + 0x14677c));
    String::operator+(aSStack_d4,aSStack_e4,aSStack_dc);
    Vector<String>::elementAt((int)aSStack_cc);
    String::operator+(aSStack_c4,aSStack_d4,aSStack_cc);
    CCServer::GetMyFirstName(*(void **)(this + DAT_001469a8));
    String::operator+(aSStack_bc,(char *)aSStack_c4);
    Vector<String>::elementAt((int)aSStack_b4);
    String::operator+(aSStack_ec,aSStack_bc,aSStack_b4);
    String::~String(aSStack_b4);
    String::~String(aSStack_bc);
    String::~String(aSStack_c4);
    String::~String(aSStack_cc);
    String::~String(aSStack_d4);
    String::~String(aSStack_dc);
    String::~String(aSStack_e4);
    __ptr = (char *)String::getBytes(aSStack_ec);
    L_PrintLog((char *)(DAT_001469b0 + 0x146804),__ptr);
    StringUtil::getEncodingString(aSStack_ac,'\0');
    __ptr_00 = (char *)String::getBytes(*(String **)(iVar7 + DAT_001469b4),aSStack_ac,0,0,0);
    String::~String((String *)aSStack_ac);
    StringUtil::getEncodingString(aSStack_a4,'\0');
    __ptr_01 = (char *)String::getBytes(*(String **)(iVar7 + DAT_001469b8),aSStack_a4,0,0,0);
    String::~String((String *)aSStack_a4);
    CCFacebook::PostStoryWithImage(*(void **)(this + DAT_001469bc),__ptr,__ptr_01,__ptr_00,0);
    uVar2 = CCServer::GetMyUserID(*(void **)(this + DAT_001469a8));
    uVar4 = *(undefined4 *)(this + 0x680);
    uVar5 = *(undefined4 *)(this + DAT_001469c0);
    uVar6 = *(undefined4 *)(this + DAT_001469c4);
    uVar3 = ZombieCafe::getToxin(this);
    snprintf(acStack_9c,0x80,(char *)(DAT_001469c8 + 0x14688c),DAT_001469cc + 0x146892,uVar2,uVar4,
             uVar5,uVar6,uVar3,0,0);
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(this + DAT_001469d0),DAT_001469d4 + 0x1468b0,acStack_9c);
    ObjectiveSystem::inviteFriend(*(ObjectiveSystem **)(this + DAT_001469d8));
    Quest::runQuest(*(int *)(this + 0x40),0x12,(int *)0xffffffff);
    if (this[DAT_001469dc] == (ZombieCafe)0x0) {
      this[DAT_001469dc] = (ZombieCafe)0x1;
      (**(code **)(**(int **)((int)param_1 + 0x4c) + 0x20))();
      ZombieCafe::addToxin(this,1,false);
    }
    free(__ptr_01);
    free(__ptr_00);
    free(__ptr);
    String::~String(aSStack_ec);
  }
  if (local_1c == *piVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


