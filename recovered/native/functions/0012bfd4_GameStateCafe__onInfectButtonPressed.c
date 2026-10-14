/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0012bfd4 GameStateCafe::onInfectButtonPressed */

/* GameStateCafe::onInfectButtonPressed(GameStateCafe*, ScreenElement*) */

void GameStateCafe::onInfectButtonPressed(GameStateCafe *param_1,ScreenElement *param_2)

{
  int iVar1;
  String *this;
  TutorialSystem *this_00;
  InfectTask *this_01;
  uchar uVar2;
  CharacterInstance *this_02;
  bool bVar3;
  int iVar4;
  int iVar5;
  NoticeDialog *pNVar6;
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar1 = DAT_0012c178;
  iVar4 = *(int *)(param_1 + 0xc);
  iVar5 = DAT_0012c158 + 0x12bfee;
  if (*(int *)(iVar4 + DAT_0012c154 + 4) + 1 <
      (int)*(short *)((*(int *)(iVar4 + 0x680) + -1) * 2 + **(int **)(iVar5 + DAT_0012c15c))) {
    if ((*(char *)(**(int **)(*(int *)(param_1 + 0x54) + 0x8c) + DAT_0012c168) != '\0') ||
       (*(int *)(**(int **)(*(int *)(param_1 + 0x54) + 0x8c) + 0xb20) <=
        *(int *)(iVar4 + DAT_0012c16c))) {
      if ((**(char **)(iVar5 + DAT_0012c174) == '\0') ||
         (iVar4 = TutorialSystem::isTutorialCompleted
                            (*(TutorialSystem **)(iVar4 + DAT_0012c178),'\v'), iVar4 == 0)) {
        CharacterInstance::stopTasks(*(CharacterInstance **)(param_1 + 0x18));
        this_01 = (InfectTask *)operator_new(0x30);
        this_02 = *(CharacterInstance **)(param_1 + 0x18);
        InfectTask::InfectTask(this_01,this_02,*(CharacterInstance **)(param_1 + 0x54));
        CharacterInstance::addTask(this_02,(Task *)this_01);
        Task::addFinishedListener
                  ((Task *)this_01,*(_func_void_void_ptr_Task_ptr **)(iVar5 + DAT_0012c17c),param_1)
        ;
        uVar2 = '\x0e';
        bVar3 = false;
        this_00 = *(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar1);
      }
      else {
        onInfectTaskComplete(param_1,(InfectTask *)0x0);
        uVar2 = 'M';
        bVar3 = true;
        this_00 = *(TutorialSystem **)(*(int *)(param_1 + 0xc) + iVar1);
      }
      TutorialSystem::triggerEvent(this_00,uVar2,bVar3);
      CRAMHoover::beginTrackEvent(*(char **)(*(int *)(param_1 + 0xc) + 0x840));
      ZombieCafe::addMixPanelHeader(*(ZombieCafe **)(param_1 + 0xc));
      CRAMHoover::endTrackEvent();
      return;
    }
    pNVar6 = *(NoticeDialog **)(param_1 + 0xd0);
    Vector<String>::elementAt((int)aSStack_28);
    Vector<String>::elementAt((int)aSStack_20);
    NoticeDialog::show(pNVar6,aSStack_28,aSStack_20,0,param_1);
    String::~String(aSStack_20);
    this = aSStack_28;
  }
  else {
    pNVar6 = *(NoticeDialog **)(param_1 + 0xd0);
    Vector<String>::elementAt((int)aSStack_38);
    Vector<String>::elementAt((int)aSStack_30);
    NoticeDialog::show(pNVar6,aSStack_38,aSStack_30,0,param_1);
    String::~String(aSStack_30);
    this = aSStack_38;
  }
  String::~String(this);
  return;
}


