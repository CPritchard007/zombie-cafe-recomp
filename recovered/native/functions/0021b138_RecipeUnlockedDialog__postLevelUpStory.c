/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0021b138 RecipeUnlockedDialog::postLevelUpStory */

/* RecipeUnlockedDialog::postLevelUpStory(void*) */

void RecipeUnlockedDialog::postLevelUpStory(void *param_1)

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
  
  iVar8 = DAT_0021b4ac + 0x21b146;
  piVar9 = *(int **)(iVar8 + DAT_0021b4b0);
  local_1c = *piVar9;
  iVar2 = CapcomApp::getInstance();
  iVar1 = DAT_0021b4b4;
  this = *(ZombieCafe **)(iVar2 + 4);
  if (param_1 == *(void **)(this + 8)) {
    uVar3 = CCServer::GetMyName(*(void **)(this + DAT_0021b4b4));
    Vector<String>::elementAt((int)aSStack_134);
    operator+(aSStack_12c,uVar3,aSStack_134);
    Recipe::getFullName((char)&stack0xffffffec + 0xf0);
    String::operator+(aSStack_11c,aSStack_12c,aSStack_124);
    Vector<String>::elementAt((int)aSStack_114);
    String::operator+(aSStack_10c,aSStack_11c,aSStack_114);
    Vector<String>::elementAt((int)aSStack_104);
    String::operator+(aSStack_fc,aSStack_10c,aSStack_104);
    CCServer::GetMyFirstName(*(void **)(this + iVar1));
    String::operator+(aSStack_f4,(char *)aSStack_fc);
    Vector<String>::elementAt((int)aSStack_ec);
    String::operator+(aSStack_13c,aSStack_f4,aSStack_ec);
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
    StringUtil::getEncodingString(aSStack_e4,'\x01');
    __ptr = (char *)String::getBytes(aSStack_13c,aSStack_e4,0,0,0);
    String::~String((String *)aSStack_e4);
    String::String(aSStack_d4,*(String **)(iVar8 + DAT_0021b4c8));
    String::operator+(aSStack_cc,*(undefined4 *)(iVar8 + DAT_0021b4cc),aSStack_d4);
    String::valueOf((int)aSStack_c4);
    String::operator+(aSStack_bc,aSStack_cc,aSStack_c4);
    String::String(aSStack_b4,*(String **)(iVar8 + DAT_0021b4d0));
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
    __ptr_01 = (char *)String::getBytes(*(String **)(iVar8 + DAT_0021b4d4),aSStack_a4,0,0,0);
    String::~String((String *)aSStack_a4);
    CCFacebook::PostStoryWithImage(*(void **)(this + DAT_0021b4d8),__ptr,__ptr_00,__ptr_01,0);
    uVar3 = CCServer::GetMyUserID(*(void **)(this + DAT_0021b4b4));
    uVar5 = *(undefined4 *)(this + 0x680);
    uVar6 = *(undefined4 *)(this + DAT_0021b4dc);
    uVar7 = *(undefined4 *)(this + DAT_0021b4e0);
    uVar4 = ZombieCafe::getToxin(this);
    snprintf(acStack_9c,0x80,(char *)(DAT_0021b4e4 + 0x21b352),DAT_0021b4e8 + 0x21b358,uVar3,uVar5,
             uVar6,uVar7,uVar4);
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(this + DAT_0021b4ec),DAT_0021b4f0 + 0x21b370,acStack_9c);
    free(__ptr);
    free(__ptr_00);
    free(__ptr_01);
    String::~String(aSStack_dc);
    String::~String(aSStack_13c);
  }
  if (local_1c == *piVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


