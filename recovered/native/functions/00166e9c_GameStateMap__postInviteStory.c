/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00166e9c GameStateMap::postInviteStory */

/* GameStateMap::postInviteStory(void*) */

void GameStateMap::postInviteStory(void *param_1)

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
  
  iVar7 = DAT_001670ec + 0x166eaa;
  piVar8 = *(int **)(iVar7 + DAT_001670f0);
  local_1c = *piVar8;
  iVar1 = CapcomApp::getInstance();
  this = *(ZombieCafe **)(iVar1 + 4);
  if (param_1 == *(void **)(this + 8)) {
    Vector<String>::elementAt((int)aSStack_e4);
    String::String(aSStack_dc,(char *)(DAT_001670f8 + 0x166eda));
    String::operator+(aSStack_d4,aSStack_e4,aSStack_dc);
    Vector<String>::elementAt((int)aSStack_cc);
    String::operator+(aSStack_c4,aSStack_d4,aSStack_cc);
    CCServer::GetMyFirstName(*(void **)(this + DAT_00167100));
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
    StringUtil::getEncodingString(aSStack_ac,'\0');
    __ptr_00 = (char *)String::getBytes(*(String **)(iVar7 + DAT_00167108),aSStack_ac,0,0,0);
    String::~String((String *)aSStack_ac);
    StringUtil::getEncodingString(aSStack_a4,'\0');
    __ptr_01 = (char *)String::getBytes(*(String **)(iVar7 + DAT_0016710c),aSStack_a4,0,0,0);
    String::~String((String *)aSStack_a4);
    CCFacebook::PostStoryWithImage(*(void **)(this + DAT_00167110),__ptr,__ptr_01,__ptr_00,0);
    uVar2 = CCServer::GetMyUserID(*(void **)(this + DAT_00167100));
    uVar4 = *(undefined4 *)(this + 0x680);
    uVar5 = *(undefined4 *)(this + DAT_00167114);
    uVar6 = *(undefined4 *)(this + DAT_00167118);
    uVar3 = ZombieCafe::getToxin(this);
    snprintf(acStack_9c,0x80,(char *)(DAT_0016711c + 0x166fe0),DAT_00167120 + 0x166fe6,uVar2,uVar4,
             uVar5,uVar6,uVar3,0,0);
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(this + DAT_00167124),DAT_00167128 + 0x167004,acStack_9c);
    ObjectiveSystem::inviteFriend(*(ObjectiveSystem **)(this + DAT_0016712c));
    Quest::runQuest(*(int *)(this + 0x40),0x12,(int *)0xffffffff);
    if (this[DAT_00167130] == (ZombieCafe)0x0) {
      this[DAT_00167130] = (ZombieCafe)0x1;
      (**(code **)(**(int **)((int)param_1 + 0x84) + 0x20))();
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


