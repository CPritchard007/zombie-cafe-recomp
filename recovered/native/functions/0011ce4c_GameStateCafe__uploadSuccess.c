/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011ce4c GameStateCafe::uploadSuccess */

/* GameStateCafe::uploadSuccess(void*, unsigned int) */

void GameStateCafe::uploadSuccess(void *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  ZombieCafe *this;
  undefined4 uVar3;
  String *this_00;
  undefined4 uVar4;
  undefined4 uVar5;
  void *pvVar6;
  int *piVar7;
  undefined4 uVar8;
  NoticeDialog *pNVar9;
  String aSStack_bc [8];
  String aSStack_b4 [8];
  String aSStack_ac [8];
  String aSStack_a4 [8];
  char acStack_9c [128];
  int local_1c;
  
  piVar7 = *(int **)(DAT_0011cf84 + 0x11ce58);
  local_1c = *piVar7;
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(iVar1 + 4);
  pvVar6 = *(void **)(iVar1 + 8);
  if (pvVar6 == param_1) {
    uVar2 = CCServer::GetMyUserID(*(void **)(iVar1 + DAT_0011cf88));
    this = *(ZombieCafe **)((int)pvVar6 + 0xc);
    uVar8 = *(undefined4 *)(this + 0x680);
    uVar4 = *(undefined4 *)(this + DAT_0011cf8c);
    uVar5 = *(undefined4 *)(this + DAT_0011cf90);
    uVar3 = ZombieCafe::getToxin(this);
    snprintf(acStack_9c,0x80,(char *)(DAT_0011cf94 + 0x11ce9e),DAT_0011cf98 + 0x11cea0,uVar2,uVar8,
             uVar4,uVar5,uVar3);
    CCMarketing_RecordAnalyticsEvent
              (*(undefined4 *)(*(int *)((int)pvVar6 + 0xc) + DAT_0011cf9c),DAT_0011cfa0 + 0x11cebc,
               acStack_9c);
    Quest::runQuest(*(int *)(iVar1 + 0x40),6,(int *)0xffffffff);
    pNVar9 = *(NoticeDialog **)((int)pvVar6 + 0xd0);
    if (param_2 == 0) {
      Vector<String>::elementAt((int)aSStack_ac);
      Vector<String>::elementAt((int)aSStack_a4);
      NoticeDialog::show(pNVar9,aSStack_ac,aSStack_a4,0,0);
      String::~String(aSStack_a4);
      this_00 = aSStack_ac;
    }
    else {
      Vector<String>::elementAt((int)aSStack_bc);
      Vector<String>::elementAt((int)aSStack_b4);
      NoticeDialog::show(pNVar9,aSStack_bc,aSStack_b4,0,0);
      String::~String(aSStack_b4);
      this_00 = aSStack_bc;
    }
    String::~String(this_00);
  }
  if (local_1c == *piVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


