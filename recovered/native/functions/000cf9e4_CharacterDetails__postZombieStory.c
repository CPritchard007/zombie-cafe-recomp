/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cf9e4 CharacterDetails::postZombieStory */

/* CharacterDetails::postZombieStory(void*) */

void CharacterDetails::postZombieStory(void *param_1)

{
  int iVar1;
  char *pcVar2;
  char *__ptr;
  char *__ptr_00;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ZombieCafe *this;
  int iVar8;
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
  String aSStack_e4 [8];
  String aSStack_dc [8];
  StringUtil aSStack_d4 [8];
  String aSStack_cc [8];
  String aSStack_c4 [8];
  String aSStack_bc [8];
  String aSStack_b4 [8];
  StringUtil aSStack_ac [8];
  StringUtil aSStack_a4 [8];
  char acStack_9c [128];
  int local_1c;
  
  iVar8 = DAT_000cfd7c + 0xcf9f0;
  local_1c = **(int **)(iVar8 + DAT_000cfd80);
  L_PrintLog((char *)(DAT_000cfd84 + 0xcf9fe),(char *)(DAT_000cfd88 + 0xcf9fc));
  iVar1 = CapcomApp::getInstance();
  this = *(ZombieCafe **)(iVar1 + 4);
  Vector<String>::elementAt((int)aSStack_15c);
  String::operator+(aSStack_154,(int)param_1 + 8,aSStack_15c);
  String::valueOf((int)aSStack_14c);
  String::operator+(aSStack_144,aSStack_154,aSStack_14c);
  Vector<String>::elementAt((int)aSStack_13c);
  String::operator+(aSStack_134,aSStack_144,aSStack_13c);
  String::valueOf((int)aSStack_12c);
  String::operator+(aSStack_124,aSStack_134,aSStack_12c);
  Vector<String>::elementAt((int)aSStack_11c);
  String::operator+(aSStack_114,aSStack_124,aSStack_11c);
  iVar1 = DAT_000cfd98;
  CCServer::GetMyFirstName(*(void **)(this + DAT_000cfd98));
  String::operator+(aSStack_10c,(char *)aSStack_114);
  Vector<String>::elementAt((int)aSStack_104);
  String::operator+(aSStack_fc,aSStack_10c,aSStack_104);
  Vector<String>::elementAt((int)aSStack_f4);
  String::operator+(aSStack_ec,aSStack_fc,aSStack_f4);
  CCServer::GetMyFirstName(*(void **)(this + iVar1));
  String::operator+(aSStack_e4,(char *)aSStack_ec);
  Vector<String>::elementAt((int)aSStack_dc);
  String::operator+(aSStack_164,aSStack_e4,aSStack_dc);
  String::~String(aSStack_dc);
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
  String::~String(aSStack_134);
  String::~String(aSStack_13c);
  String::~String(aSStack_144);
  String::~String(aSStack_14c);
  String::~String(aSStack_154);
  String::~String(aSStack_15c);
  L_PrintLog((char *)(DAT_000cfda8 + 0xcfb52),(char *)(DAT_000cfdac + 0xcfb54));
  pcVar2 = (char *)String::getBytes(aSStack_164);
  L_PrintLog((char *)(DAT_000cfdb0 + 0xcfb66),pcVar2);
  free(pcVar2);
  L_PrintLog((char *)(DAT_000cfdb4 + 0xcfb76),(char *)(DAT_000cfdb8 + 0xcfb78));
  StringUtil::getEncodingString(aSStack_d4,'\x01');
  pcVar2 = (char *)String::getBytes(aSStack_164,aSStack_d4,0,0,0);
  String::~String((String *)aSStack_d4);
  String::String(aSStack_c4,(char *)(DAT_000cfdbc + 0xcfba0));
  String::operator+(aSStack_bc,*(undefined4 *)(iVar8 + DAT_000cfdc0),aSStack_c4);
  String::String(aSStack_b4,*(String **)(iVar8 + DAT_000cfdc4));
  String::operator+(aSStack_cc,aSStack_bc,aSStack_b4);
  String::~String(aSStack_b4);
  String::~String(aSStack_bc);
  String::~String(aSStack_c4);
  L_PrintLog((char *)(DAT_000cfdc8 + 0xcfbdc),(char *)(DAT_000cfdcc + 0xcfbde));
  StringUtil::getEncodingString(aSStack_ac,'\0');
  __ptr = (char *)String::getBytes(aSStack_cc,aSStack_ac,0,0,0);
  String::~String((String *)aSStack_ac);
  L_PrintLog((char *)(DAT_000cfdd0 + 0xcfc06),(char *)(DAT_000cfdd4 + 0xcfc08));
  StringUtil::getEncodingString(aSStack_a4,'\0');
  __ptr_00 = (char *)String::getBytes(*(String **)(iVar8 + DAT_000cfdd8),aSStack_a4,0,0,0);
  String::~String((String *)aSStack_a4);
  CCFacebook::PostStoryWithImage(*(void **)(this + DAT_000cfddc),pcVar2,__ptr,__ptr_00,0);
  uVar3 = CCServer::GetMyUserID(*(void **)(this + DAT_000cfd98));
  uVar5 = *(undefined4 *)(this + 0x680);
  uVar6 = *(undefined4 *)(this + DAT_000cfde0);
  uVar7 = *(undefined4 *)(this + DAT_000cfde4);
  uVar4 = ZombieCafe::getToxin(this);
  snprintf(acStack_9c,0x80,(char *)(DAT_000cfde8 + 0xcfc70),DAT_000cfdec + 0xcfc76,uVar3,uVar5,uVar6
           ,uVar7,uVar4);
  CCMarketing_RecordAnalyticsEvent
            (*(undefined4 *)(this + DAT_000cfdf0),DAT_000cfdf4 + 0xcfc8e,acStack_9c);
  Quest::runQuest(*(int *)(this + 0x40),6,(int *)0xffffffff);
  free(pcVar2);
  free(__ptr);
  free(__ptr_00);
  String::~String(aSStack_cc);
  String::~String(aSStack_164);
  if (local_1c == **(int **)(iVar8 + DAT_000cfd80)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


