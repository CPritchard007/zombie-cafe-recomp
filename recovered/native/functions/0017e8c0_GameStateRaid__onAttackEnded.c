/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017e8c0 GameStateRaid::onAttackEnded */

/* GameStateRaid::onAttackEnded(GameStateRaid*, AttackTask*) */

void GameStateRaid::onAttackEnded(GameStateRaid *param_1,AttackTask *param_2)

{
  int iVar1;
  int iVar2;
  StatusNote *pSVar3;
  String *this;
  FeastTask *this_00;
  undefined1 *puVar4;
  undefined4 *puVar5;
  CharacterInstance *this_01;
  Cafe *pCVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int local_6c;
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar9 = DAT_0017ec38 + 0x17e8cc;
  if (param_2[5] == (AttackTask)0x0) {
    return;
  }
  iVar1 = (**(code **)(**(int **)(param_2 + 0x24) + 0x20))();
  if (iVar1 == 1) {
    iVar1 = **(int **)(iVar9 + DAT_0017ec3c);
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + iVar1;
    *(int *)(*(int *)(param_1 + 0xc) + DAT_0017ec40) =
         *(int *)(*(int *)(param_1 + 0xc) + DAT_0017ec40) + iVar1;
    iVar1 = ZombieCafe::checkCafeLevelMax(*(ZombieCafe **)(param_1 + 0xc));
    piVar8 = *(int **)(iVar9 + DAT_0017ec44);
    if (iVar1 == 0) {
      ZombieCafe::addXp(*(ZombieCafe **)(param_1 + 0xc),*piVar8);
    }
    *(int *)(*(int *)(*(int *)(param_2 + 0x20) + 0x8c) + 0x2c) =
         *(int *)(*(int *)(*(int *)(param_2 + 0x20) + 0x8c) + 0x2c) + *piVar8;
    pCVar6 = *(Cafe **)(param_1 + 0x78);
    uVar7 = *(undefined4 *)(param_2 + 0x20);
    String::String(aSStack_60,(char *)(DAT_0017ec48 + 0x17e938));
    String::valueOf((long)aSStack_58);
    String::operator+(aSStack_50,aSStack_60,aSStack_58);
    pSVar3 = (StatusNote *)operator_new(0x30);
    StatusNote::StatusNote
              (pSVar3,uVar7,0,aSStack_50,**(undefined4 **)(iVar9 + DAT_0017ec4c),0xffffffff,0);
    Cafe::addStatusNote(pCVar6,pSVar3);
    String::~String(aSStack_50);
    String::~String(aSStack_58);
    this = aSStack_60;
  }
  else {
    if (iVar1 == 0) {
      if (param_1[0x15] == (GameStateRaid)0x0) {
        if (param_1[0x16] == (GameStateRaid)0x0) {
          iVar1 = (*(int *)(param_1 + 0x54) + -1) * 4;
          __mulsf3(*(undefined4 *)(**(int **)(iVar9 + DAT_0017ec50) + iVar1),DAT_0017ec54);
          local_6c = __fixsfsi();
          iVar1 = *(int *)(**(int **)(iVar9 + DAT_0017ec58) + iVar1);
        }
        else {
          iVar1 = 1;
          local_6c = 5;
        }
      }
      else {
        iVar1 = 1;
        local_6c = 5;
      }
      iVar2 = TutorialSystem::isTutorialCompleted
                        (*(TutorialSystem **)(*(int *)(param_1 + 0xc) + DAT_0017ec5c),';');
      if ((iVar2 == 0) || (iVar2 = CapcomMath::random(100), iVar2 < local_6c)) {
        *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + iVar1;
        iVar1 = CapcomApp::getInstance();
        TutorialSystem::triggerEvent
                  (*(TutorialSystem **)(*(int *)(iVar1 + 4) + DAT_0017ec5c),'8',true);
        pCVar6 = *(Cafe **)(param_1 + 0x78);
        uVar7 = *(undefined4 *)(param_2 + 0x20);
        String::String(aSStack_48,(char *)(DAT_0017ec60 + 0x17ea0c));
        String::valueOf((int)aSStack_40);
        String::operator+(aSStack_38,aSStack_48,aSStack_40);
        pSVar3 = (StatusNote *)operator_new(0x30);
        StatusNote::StatusNote
                  (pSVar3,uVar7,2,aSStack_38,**(undefined4 **)(iVar9 + DAT_0017ec4c),0xffffffff,0);
        Cafe::addStatusNote(pCVar6,pSVar3);
        String::~String(aSStack_38);
        String::~String(aSStack_40);
        String::~String(aSStack_48);
      }
      piVar8 = (int *)(**(int **)(iVar9 + DAT_0017ec64) + (*(int *)(param_1 + 0x54) + -1) * 4);
      *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + *piVar8;
      *(int *)(*(int *)(param_1 + 0xc) + DAT_0017ec40) =
           *(int *)(*(int *)(param_1 + 0xc) + DAT_0017ec40) + *piVar8;
      iVar1 = ZombieCafe::checkCafeLevelMax(*(ZombieCafe **)(param_1 + 0xc));
      piVar8 = *(int **)(iVar9 + DAT_0017ec68);
      if (iVar1 == 0) {
        ZombieCafe::addXp(*(ZombieCafe **)(param_1 + 0xc),
                          *(int *)((*(int *)(param_1 + 0x54) + -1) * 4 + *piVar8));
      }
      *(int *)(*(int *)(*(int *)(param_2 + 0x20) + 0x8c) + 0x2c) =
           *(int *)(*(int *)(*(int *)(param_2 + 0x20) + 0x8c) + 0x2c) +
           *(int *)((*(int *)(param_1 + 0x54) + -1) * 4 + *piVar8);
      goto LAB_0017eb62;
    }
    if (iVar1 != 3) goto LAB_0017eb62;
    iVar1 = **(int **)(iVar9 + DAT_0017ec3c);
    *(int *)(param_1 + 0x11c) = *(int *)(param_1 + 0x11c) + iVar1;
    *(int *)(*(int *)(param_1 + 0xc) + DAT_0017ec40) =
         *(int *)(*(int *)(param_1 + 0xc) + DAT_0017ec40) + iVar1;
    iVar1 = ZombieCafe::checkCafeLevelMax(*(ZombieCafe **)(param_1 + 0xc));
    piVar8 = *(int **)(iVar9 + DAT_0017ec44);
    if (iVar1 == 0) {
      ZombieCafe::addXp(*(ZombieCafe **)(param_1 + 0xc),*piVar8);
    }
    *(int *)(*(int *)(*(int *)(param_2 + 0x20) + 0x8c) + 0x2c) =
         *(int *)(*(int *)(*(int *)(param_2 + 0x20) + 0x8c) + 0x2c) + *piVar8;
    pCVar6 = *(Cafe **)(param_1 + 0x78);
    uVar7 = *(undefined4 *)(param_2 + 0x20);
    String::String(aSStack_30,(char *)(DAT_0017ec6c + 0x17eb0c));
    String::valueOf((long)aSStack_28);
    String::operator+(aSStack_20,aSStack_30,aSStack_28);
    pSVar3 = (StatusNote *)operator_new(0x30);
    StatusNote::StatusNote
              (pSVar3,uVar7,0,aSStack_20,**(undefined4 **)(iVar9 + DAT_0017ec4c),0xffffffff,0);
    Cafe::addStatusNote(pCVar6,pSVar3);
    String::~String(aSStack_20);
    String::~String(aSStack_28);
    this = aSStack_30;
  }
  String::~String(this);
LAB_0017eb62:
  iVar1 = (**(code **)(**(int **)(param_2 + 0x20) + 0x20))();
  if (iVar1 == 2) {
    this_01 = *(CharacterInstance **)(param_2 + 0x20);
    this_00 = (FeastTask *)operator_new(0x40);
    FeastTask::FeastTask
              (this_00,this_01,*(CharacterInstance **)(param_2 + 0x24),*(Cafe **)(param_1 + 0x78));
    CharacterInstance::addTask(this_01,(Task *)this_00);
    puVar4 = (undefined1 *)operator_new(0xc);
    *puVar4 = 0;
    uVar7 = *(undefined4 *)(iVar9 + DAT_0017ec70);
    *(GameStateRaid **)(puVar4 + 8) = param_1;
    *(undefined4 *)(puVar4 + 4) = uVar7;
    puVar5 = (undefined4 *)operator_new(8);
    puVar5[1] = 0;
    *(undefined4 **)(*(int *)(this_00 + 0x10) + 4) = puVar5;
    *(undefined4 **)(this_00 + 0x10) = puVar5;
    *puVar5 = puVar4;
    *(undefined4 *)(*(int *)(this_00 + 0x10) + 4) = 0;
    *(int *)(this_00 + 0x18) = *(int *)(this_00 + 0x18) + 1;
    Task::addFinishedListener
              ((Task *)this_00,*(_func_void_void_ptr_Task_ptr **)(iVar9 + DAT_0017ec74),param_1);
  }
  return;
}


