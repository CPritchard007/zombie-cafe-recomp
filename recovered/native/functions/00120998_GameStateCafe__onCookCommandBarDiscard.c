/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00120998 GameStateCafe::onCookCommandBarDiscard */

/* GameStateCafe::onCookCommandBarDiscard(GameStateCafe*, Stove*) */

void GameStateCafe::onCookCommandBarDiscard(GameStateCafe *param_1,Stove *param_2)

{
  CharacterInstance *this;
  CleanupTask *this_00;
  NoticeDialog *pNVar1;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  this = (CharacterInstance *)findStaffForCookEndTask(param_1,param_2,0xb);
  if (this == (CharacterInstance *)0x0) {
    pNVar1 = *(NoticeDialog **)(param_1 + 0xd0);
    Vector<String>::elementAt((int)aSStack_28);
    Vector<String>::elementAt((int)aSStack_20);
    NoticeDialog::show(pNVar1,aSStack_28,aSStack_20,0,0);
    String::~String(aSStack_20);
    String::~String(aSStack_28);
  }
  else if (param_2[0x83] == (Stove)0x0) {
    CharacterInstance::stopTasks(this);
    this_00 = (CleanupTask *)operator_new(0x44);
    CleanupTask::CleanupTask(this_00,this,*(Cafe **)(param_1 + 0x14),(Furniture *)param_2);
    CharacterInstance::addTask(this,(Task *)this_00);
    param_2[0x83] = (Stove)0x1;
    CookCommandBar::close(*(CookCommandBar **)(param_1 + 0xb4));
  }
  return;
}


