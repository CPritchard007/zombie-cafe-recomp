/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013f930 GameStateFriendCafe::onAttackEnded */

/* GameStateFriendCafe::onAttackEnded(GameStateFriendCafe*, AttackTask*) */

void GameStateFriendCafe::onAttackEnded(GameStateFriendCafe *param_1,AttackTask *param_2)

{
  short sVar1;
  StatusNote *pSVar2;
  int iVar3;
  FeastTask *this;
  TaskListener *pTVar4;
  MoveTask *this_00;
  Cafe *this_01;
  int iVar5;
  undefined4 uVar6;
  short *psVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  CharacterInstance *pCVar11;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  iVar8 = DAT_0013fbf4 + 0x13f940;
  if (param_1[0xc3] == (GameStateFriendCafe)0x0) {
    pCVar11 = *(CharacterInstance **)(param_2 + 0x24);
    if (param_2[5] == (AttackTask)0x0) {
      if (pCVar11 == (CharacterInstance *)0x0) {
        return;
      }
      if (*(char *)(*(int *)(pCVar11 + 0x8c) + 5) != '\x01') {
        return;
      }
      iVar8 = __aeabi_fcmple(*(undefined4 *)(*(int *)(pCVar11 + 0x8c) + 0x40),0);
      if (iVar8 != 0) {
        return;
      }
      CharacterInstance::stopTasks(pCVar11);
      iVar8 = CapcomMath::random(2);
      if (iVar8 == 0) {
        psVar7 = (short *)(*(int *)(param_1 + 0x34) + 0x9a);
      }
      else {
        psVar7 = (short *)(*(int *)(param_1 + 0x34) + 0x98);
      }
      sVar1 = *psVar7;
      this_00 = (MoveTask *)operator_new(0x48);
      pCVar11 = *(CharacterInstance **)(param_2 + 0x24);
      MoveTask::MoveTask(this_00,pCVar11,*(Cafe **)(param_1 + 0x34),(int)sVar1,'\t',false);
      CharacterInstance::addTask(pCVar11,(Task *)this_00);
      return;
    }
    if (*(CharacterInstance **)(param_1 + 0x1a0) == pCVar11) {
      CharacterCommandBar::close(*(CharacterCommandBar **)(param_1 + 0x1a4));
    }
    iVar3 = (**(code **)(**(int **)(param_2 + 0x20) + 0x20))();
    if (iVar3 != 2) {
      return;
    }
    pCVar11 = *(CharacterInstance **)(param_2 + 0x20);
    this = (FeastTask *)operator_new(0x40);
    FeastTask::FeastTask
              (this,pCVar11,*(CharacterInstance **)(param_2 + 0x24),*(Cafe **)(param_1 + 0x34));
    CharacterInstance::addTask(pCVar11,(Task *)this);
    Task::addStartedListener
              ((Task *)this,*(_func_void_void_ptr_Task_ptr **)(iVar8 + DAT_0013fc0c),param_1);
    pTVar4 = (TaskListener *)operator_new(0xc);
    *pTVar4 = (TaskListener)0x2;
    uVar6 = *(undefined4 *)(iVar8 + DAT_0013fc10);
    *(GameStateFriendCafe **)(pTVar4 + 8) = param_1;
    *(undefined4 *)(pTVar4 + 4) = uVar6;
    CapcomLinkedList<Task::TaskListener*>::add
              ((CapcomLinkedList<Task::TaskListener*> *)(this + 8),pTVar4);
  }
  else {
    if (param_2[5] == (AttackTask)0x0) {
      return;
    }
    iVar3 = (**(code **)(**(int **)(param_2 + 0x24) + 0x20))();
    if (iVar3 == 1) {
      iVar3 = **(int **)(iVar8 + DAT_0013fbf8);
      *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + iVar3;
      *(int *)(*(int *)(param_1 + 0xc) + DAT_0013fbfc) =
           *(int *)(*(int *)(param_1 + 0xc) + DAT_0013fbfc) + iVar3;
      iVar3 = ZombieCafe::checkCafeLevelMax(*(ZombieCafe **)(param_1 + 0xc));
      piVar9 = *(int **)(iVar8 + DAT_0013fc00);
      if (iVar3 == 0) {
        ZombieCafe::addXp(*(ZombieCafe **)(param_1 + 0xc),*piVar9);
      }
      *(int *)(*(int *)(*(int *)(param_2 + 0x20) + 0x8c) + 0x2c) =
           *(int *)(*(int *)(*(int *)(param_2 + 0x20) + 0x8c) + 0x2c) + *piVar9;
      this_01 = *(Cafe **)(param_1 + 0x34);
      uVar6 = *(undefined4 *)(param_2 + 0x20);
      String::String(aSStack_30,(char *)(DAT_0013fc04 + 0x13f9b4));
      String::valueOf((long)aSStack_28);
      String::operator+(aSStack_20,aSStack_30,aSStack_28);
      pSVar2 = (StatusNote *)operator_new(0x30);
      StatusNote::StatusNote
                (pSVar2,uVar6,0,aSStack_20,**(undefined4 **)(iVar8 + DAT_0013fc08),0xffffffff,0);
      Cafe::addStatusNote(this_01,pSVar2);
      String::~String(aSStack_20);
      String::~String(aSStack_28);
      String::~String(aSStack_30);
    }
    else if (iVar3 == 0) {
      iVar3 = ZombieCafe::checkCafeLevelMax(*(ZombieCafe **)(param_1 + 0xc));
      if (iVar3 == 0) {
        __mulsf3(*(undefined4 *)(param_1 + 0x108),0x3e800000);
        iVar3 = __fixsfsi();
        if (iVar3 < 1) {
          iVar3 = 1;
        }
        ZombieCafe::addXp(*(ZombieCafe **)(param_1 + 0xc),iVar3);
      }
      iVar10 = *(int *)(*(int *)(param_2 + 0x20) + 0x8c);
      iVar5 = *(int *)(iVar10 + 0x2c);
      __mulsf3(*(undefined4 *)(param_1 + 0x108),0x3e800000);
      iVar3 = __fixsfsi();
      if (iVar3 < 1) {
        iVar3 = 1;
      }
      *(int *)(iVar10 + 0x2c) = iVar5 + iVar3;
    }
    else if (iVar3 == 3) {
      iVar3 = ZombieCafe::checkCafeLevelMax(*(ZombieCafe **)(param_1 + 0xc));
      if (iVar3 == 0) {
        iVar3 = Vector<CharacterInstance*>::indexOf
                          ((Vector<CharacterInstance*> *)(param_1 + 300),
                           *(CharacterInstance **)(param_2 + 0x24));
        __mulsf3(*(undefined4 *)(iVar3 * 4 + *(int *)(param_1 + 0x114)),0x3e800000);
        iVar3 = __fixsfsi();
        if (iVar3 < 1) {
          iVar3 = 1;
        }
        ZombieCafe::addXp(*(ZombieCafe **)(param_1 + 0xc),iVar3);
      }
      *(int *)(*(int *)(*(int *)(param_2 + 0x20) + 0x8c) + 0x2c) =
           *(int *)(*(int *)(*(int *)(param_2 + 0x20) + 0x8c) + 0x2c) +
           **(int **)(iVar8 + DAT_0013fc00);
    }
    iVar3 = (**(code **)(**(int **)(param_2 + 0x20) + 0x20))();
    if (iVar3 != 2) {
      return;
    }
    pCVar11 = *(CharacterInstance **)(param_2 + 0x20);
    this = (FeastTask *)operator_new(0x40);
    FeastTask::FeastTask
              (this,pCVar11,*(CharacterInstance **)(param_2 + 0x24),*(Cafe **)(param_1 + 0x34));
    CharacterInstance::addTask(pCVar11,(Task *)this);
    Task::addStartedListener
              ((Task *)this,*(_func_void_void_ptr_Task_ptr **)(iVar8 + DAT_0013fc0c),param_1);
  }
  Task::addFinishedListener
            ((Task *)this,*(_func_void_void_ptr_Task_ptr **)(iVar8 + DAT_0013fc14),param_1);
  return;
}


