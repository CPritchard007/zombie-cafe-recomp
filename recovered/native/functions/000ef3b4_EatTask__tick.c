/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ef3b4 EatTask::tick */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000ef3f6) */
/* WARNING: Removing unreachable block (ram,0x000ef3f6) */
/* EatTask::tick(long) */

void EatTask::tick(long param_1)

{
  FindSeatTask *this;
  int *piVar1;
  TutorialSystem *this_00;
  int iVar2;
  undefined4 uVar3;
  Furniture *pFVar4;
  int iVar5;
  WaitTask *pWVar6;
  StatusNote *pSVar7;
  uchar uVar8;
  bool bVar9;
  long lVar10;
  undefined1 uVar11;
  code *pcVar12;
  int iVar13;
  int *piVar14;
  Cafe *this_01;
  code *local_24;
  String aSStack_20 [12];
  
  iVar13 = DAT_000ef720 + 0xef3c0;
  if (*(char *)(param_1 + 4) != '\0') {
    return;
  }
  (**(code **)(**(int **)(param_1 + 0x28) + 0x14))();
  if (*(char *)(*(int *)(param_1 + 0x28) + 4) == '\0') {
    if (*(char *)(param_1 + 0x2c) != '\x01') {
      return;
    }
    iVar5 = Cafe::getTableChairIsFacing(*(Cafe **)(param_1 + 0x24),*(Furniture **)(param_1 + 0x30));
    iVar2 = DAT_000ef804;
    pWVar6 = *(WaitTask **)(param_1 + 0x28);
    if (iVar5 == *(int *)(param_1 + 0x34)) {
      if (*(char *)(iVar5 + 0x2e) == '\0') {
        if (DAT_000ef800 < *(int *)(pWVar6 + 0x24)) {
          return;
        }
        if (*(char *)(param_1 + 0x38) != '\0') {
          return;
        }
        *(char *)(param_1 + 0x38) = '\x01';
        this_01 = *(Cafe **)(param_1 + 0x24);
        String::String(aSStack_20,(char *)(iVar2 + 0xef79a));
        pSVar7 = (StatusNote *)operator_new(0x30);
        StatusNote::StatusNote
                  (pSVar7,*(undefined4 *)(param_1 + 0x20),6,aSStack_20,
                   **(undefined4 **)(iVar13 + DAT_000ef808),0xffffffff,0);
        Cafe::addStatusNote(this_01,pSVar7);
        String::~String(aSStack_20);
        return;
      }
      if (pWVar6 != (WaitTask *)0x0) {
        (**(code **)(*(int *)pWVar6 + 4))();
      }
      pWVar6 = (WaitTask *)operator_new(0x2c);
      WaitTask::WaitTask(pWVar6,*(CharacterInstance **)(param_1 + 0x20),
                         **(long **)(iVar13 + DAT_000ef7fc),false);
      *(WaitTask **)(param_1 + 0x28) = pWVar6;
      Vector<CharacterInstance*>::removeElement
                ((Vector<CharacterInstance*> *)(*(int *)(param_1 + 0x24) + 0xa4),
                 *(CharacterInstance **)(param_1 + 0x20));
      Vector<CharacterInstance*>::removeElement
                ((Vector<CharacterInstance*> *)(*(int *)(param_1 + 0x24) + 0xb0),
                 *(CharacterInstance **)(param_1 + 0x20));
      uVar11 = 3;
      goto LAB_000ef77a;
    }
    pcVar12 = *(code **)(*(int *)pWVar6 + 0xc);
    goto LAB_000ef71a;
  }
  if (*(char *)(param_1 + 0x3a) != '\0') {
    *(undefined1 *)(param_1 + 5) = 0;
    Task::finish((Task *)param_1);
  }
  switch(*(char *)(param_1 + 0x2c)) {
  case '\0':
    if (*(char *)((int)*(int **)(param_1 + 0x28) + 5) != '\0') {
      (**(code **)(**(int **)(param_1 + 0x28) + 4))();
      *(undefined1 *)(param_1 + 0x2c) = 1;
      pWVar6 = (WaitTask *)operator_new(0x2c);
      lVar10 = DAT_000ef72c;
      if (*(char *)(param_1 + 0x39) == '\0') {
        lVar10 = **(long **)(iVar13 + DAT_000ef728);
      }
      WaitTask::WaitTask(pWVar6,*(CharacterInstance **)(param_1 + 0x20),lVar10,false);
      *(WaitTask **)(param_1 + 0x28) = pWVar6;
      iVar5 = *(int *)(param_1 + 0x24);
      uVar3 = *(undefined4 *)(param_1 + 0x20);
      iVar13 = *(int *)(iVar5 + 0xa4);
      iVar2 = *(int *)(iVar5 + 0xa8) + 2;
      if (iVar13 < iVar2) {
        iVar13 = iVar13 * 2;
        if (iVar13 < iVar2) {
          iVar13 = iVar2;
        }
        Vector<CharacterInstance*>::resize((Vector<CharacterInstance*> *)(iVar5 + 0xa4),iVar13,-1);
      }
      iVar13 = *(int *)(iVar5 + 0xa8) + 1;
      *(int *)(iVar5 + 0xa8) = iVar13;
      *(undefined4 *)(iVar13 * 4 + *(int *)(iVar5 + 0xac)) = uVar3;
      return;
    }
    break;
  case '\x01':
    Vector<CharacterInstance*>::removeElement
              ((Vector<CharacterInstance*> *)(*(int *)(param_1 + 0x24) + 0xa4),
               *(CharacterInstance **)(param_1 + 0x20));
    Vector<CharacterInstance*>::removeElement
              ((Vector<CharacterInstance*> *)(*(int *)(param_1 + 0x24) + 0xb0),
               *(CharacterInstance **)(param_1 + 0x20));
    *(undefined1 *)(*(int *)(param_1 + 0x30) + 0x2e) = 0;
    CafeObject::setVisible(*(CafeObject **)(param_1 + 0x30),true);
    if (*(char *)(param_1 + 0x39) != '\0') {
      *(undefined1 *)(param_1 + 0x2c) = 5;
      iVar13 = Cafe::getNextTile((int)*(short *)(*(int *)(param_1 + 0x20) + 0x2c),
                                 (uint)*(byte *)(*(int *)(param_1 + 0x30) + 0x34));
      pWVar6 = (WaitTask *)operator_new(0x48);
      MoveTask::MoveTask((MoveTask *)pWVar6,*(CharacterInstance **)(param_1 + 0x20),
                         *(Cafe **)(param_1 + 0x24),iVar13,'\0',false);
LAB_000ef6cc:
      *(WaitTask **)(param_1 + 0x28) = pWVar6;
      pcVar12 = *(code **)(*(int *)pWVar6 + 8);
LAB_000ef71a:
      (*pcVar12)(pWVar6);
      return;
    }
    iVar13 = Cafe::getFoodStackStockSize(*(Cafe **)(param_1 + 0x24));
    if (iVar13 == 0) {
      iVar13 = CapcomApp::getInstance();
      uVar8 = '\x17';
      this_00 = *(TutorialSystem **)(*(int *)(iVar13 + 4) + DAT_000ef724);
      bVar9 = true;
LAB_000ef6ee:
      TutorialSystem::triggerEvent(this_00,uVar8,bVar9);
    }
    break;
  case '\x02':
    piVar14 = *(int **)(iVar13 + DAT_000ef734);
    if (*(char *)(*(int *)(param_1 + 0x28) + 5) != '\0') {
      *(undefined1 *)(param_1 + 5) = 1;
      Task::finish((Task *)param_1);
      piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x20))();
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      piVar1 = *(int **)(param_1 + 0x34);
      pcVar12 = *(code **)(*piVar1 + 0x1c);
      pFVar4 = (Furniture *)operator_new(100);
      Furniture::Furniture
                (pFVar4,*(FurnitureData **)
                         (*piVar14 * 4 + *(int *)(*(int *)(param_1 + 0x24) + 0x94)));
      (*pcVar12)(piVar1,pFVar4);
      *(undefined1 *)(*(int *)(param_1 + 0x30) + 0x2e) = 0;
      CafeObject::setVisible(*(CafeObject **)(param_1 + 0x30),true);
      iVar13 = CapcomApp::getInstance();
      TutorialSystem::triggerEvent
                (*(TutorialSystem **)(*(int *)(iVar13 + 4) + DAT_000ef724),'\f',false);
      goto LAB_000ef60e;
    }
    *(undefined1 *)(param_1 + 5) = 0;
    Task::finish((Task *)param_1);
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x34) + 0x20))();
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    piVar1 = *(int **)(param_1 + 0x34);
    local_24 = *(code **)(*piVar1 + 0x1c);
    pFVar4 = (Furniture *)operator_new(100);
    Furniture::Furniture
              (pFVar4,*(FurnitureData **)(*piVar14 * 4 + *(int *)(*(int *)(param_1 + 0x24) + 0x94)))
    ;
    goto LAB_000ef658;
  case '\x03':
    piVar14 = *(int **)(param_1 + 0x28);
    piVar1 = *(int **)(param_1 + 0x34);
    if (*(char *)((int)piVar14 + 5) != '\0') {
      iVar2 = __aeabi_fcmpgt(*(undefined4 *)(piVar1[0xe] + 0x60),0);
      if (iVar2 != 0) {
        if (*(int *)(param_1 + 0x3c) < 1) {
          *(undefined4 *)(param_1 + 0x3c) = **(undefined4 **)(iVar13 + DAT_000ef730);
        }
        uVar3 = __floatsisf(*(undefined4 *)(param_1 + 0x3c));
        __mulsf3(uVar3,*(undefined4 *)(piVar1[0xe] + 0x60));
        uVar3 = __fixsfsi();
        *(undefined4 *)(param_1 + 0x3c) = uVar3;
      }
      (**(code **)(*piVar14 + 4))(piVar14);
      pWVar6 = (WaitTask *)operator_new(0x2c);
      WaitTask::WaitTask(pWVar6,*(CharacterInstance **)(param_1 + 0x20),*(long *)(param_1 + 0x3c),
                         false);
      *(WaitTask **)(param_1 + 0x28) = pWVar6;
      CharacterInstance::setCurrentAnimation
                (*(CharacterInstance **)(param_1 + 0x20),'\a',0xff,false);
      uVar11 = 2;
LAB_000ef77a:
      *(undefined1 *)(param_1 + 0x2c) = uVar11;
      return;
    }
    piVar1 = (int *)(**(code **)(*piVar1 + 0x20))(piVar1);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    piVar1 = *(int **)(param_1 + 0x34);
    local_24 = *(code **)(*piVar1 + 0x1c);
    pFVar4 = (Furniture *)operator_new(100);
    Furniture::Furniture
              (pFVar4,*(FurnitureData **)
                       (**(int **)(iVar13 + DAT_000ef734) * 4 +
                       *(int *)(*(int *)(param_1 + 0x24) + 0x94)));
LAB_000ef658:
    (*local_24)(piVar1,pFVar4);
    *(undefined1 *)(*(int *)(param_1 + 0x30) + 0x2e) = 0;
    CafeObject::setVisible(*(CafeObject **)(param_1 + 0x30),true);
LAB_000ef60e:
    Vector<Furniture*>::addElement
              ((Vector<Furniture*> *)(*(int *)(param_1 + 0x24) + 0xbc),
               *(Furniture **)(param_1 + 0x34));
    return;
  default:
    goto switchD_000ef3f6_caseD_4;
  case '\x05':
    if (*(int **)(param_1 + 0x28) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x28) + 4))();
    }
    this = (FindSeatTask *)operator_new(0x38);
    FindSeatTask::FindSeatTask
              (this,*(CharacterInstance **)(param_1 + 0x20),*(Cafe **)(param_1 + 0x24));
    *(FindSeatTask **)(param_1 + 0x28) = this;
    (**(code **)(*(int *)this + 8))(this);
    piVar1 = *(int **)(param_1 + 0x28);
    iVar13 = piVar1[0xc];
    *(int *)(param_1 + 0x30) = iVar13;
    if (iVar13 != 0) {
      *(int *)(param_1 + 0x34) = piVar1[0xd];
      uVar11 = 0;
      goto LAB_000ef77a;
    }
    if (*(char *)(param_1 + 0x39) != '\0') {
      (**(code **)(*piVar1 + 4))();
      pWVar6 = (WaitTask *)operator_new(0x2c);
      WaitTask::WaitTask(pWVar6,*(CharacterInstance **)(param_1 + 0x20),1,false);
      goto LAB_000ef6cc;
    }
    iVar13 = Cafe::isInside(*(Cafe **)(param_1 + 0x24),
                            (int)*(short *)(*(int *)(param_1 + 0x20) + 0x2c));
    if (iVar13 != 0) {
      iVar13 = CapcomApp::getInstance();
      uVar8 = ';';
      this_00 = *(TutorialSystem **)(*(int *)(iVar13 + 4) + DAT_000ef724);
      bVar9 = false;
      goto LAB_000ef6ee;
    }
  }
  *(undefined1 *)(param_1 + 5) = 0;
  Task::finish((Task *)param_1);
switchD_000ef3f6_caseD_4:
  return;
}


