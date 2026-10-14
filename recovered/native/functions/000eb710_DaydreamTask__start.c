/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000eb710 DaydreamTask::start */

/* DaydreamTask::start() */

void __thiscall DaydreamTask::start(DaydreamTask *this)

{
  int iVar1;
  StatusNote *pSVar2;
  int iVar3;
  Cafe *this_00;
  float extraout_s0;
  float extraout_s0_00;
  float fVar4;
  String aSStack_18 [8];
  
  if (*(char *)(**(int **)(*(int *)(this + 0x20) + 0x8c) + DAT_000eb7d8) == '\0') {
    iVar1 = CapcomApp::getInstance();
    iVar1 = *(int *)(iVar1 + 4);
    fVar4 = extraout_s0_00;
  }
  else {
    iVar1 = CapcomApp::getInstance();
    iVar1 = *(int *)(iVar1 + 4);
    fVar4 = extraout_s0;
  }
  ZombieCafe::playEffect(iVar1,fVar4);
  *(undefined1 *)(*(int *)(*(int *)(this + 0x20) + 0x8c) + 0x44) = 5;
  WaitTask::start((WaitTask *)this);
  CharacterInstance::setCurrentAnimation(*(CharacterInstance **)(this + 0x20),'\x12',0xff,false);
  this_00 = *(Cafe **)(this + 0x34);
  String::String(aSStack_18,(char *)(DAT_000eb7dc + 0xeb766));
  pSVar2 = (StatusNote *)operator_new(0x30);
  StatusNote::StatusNote
            (pSVar2,*(undefined4 *)(this + 0x20),7,aSStack_18,
             **(undefined4 **)(DAT_000eb7e0 + 0xeb778),0xffffffff,0);
  Cafe::addStatusNote(this_00,pSVar2);
  String::~String(aSStack_18);
  iVar3 = CapcomApp::getInstance();
  iVar1 = DAT_000eb7e4;
  iVar3 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(iVar3 + 4) + DAT_000eb7e4),'.');
  if (iVar3 != 0) {
    iVar3 = CapcomApp::getInstance();
    TutorialSystem::triggerEvent(*(TutorialSystem **)(*(int *)(iVar3 + 4) + iVar1),'\x16',false);
  }
  return;
}


