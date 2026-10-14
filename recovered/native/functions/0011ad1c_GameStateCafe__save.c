/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011ad1c GameStateCafe::save */

/* GameStateCafe::save(bool) */

undefined8 GameStateCafe::save(bool param_1)

{
  GameStateCafe *this;
  int iVar1;
  OutputStream *pOVar2;
  int in_r1;
  GameStateCafe *pGStack_18;
  int iStack_14;
  
  this = (GameStateCafe *)(uint)param_1;
  pGStack_18 = this;
  iStack_14 = in_r1;
  iVar1 = TutorialSystem::isTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(this + 0xc) + DAT_0011adac),'\x16');
  if ((iVar1 != 0) || (in_r1 != 0)) {
    *(undefined4 *)(this + 0x1bc) = **(undefined4 **)(DAT_0011adb0 + 0x11ad3c);
    ZombieCafe::save();
    String::String((String *)&pGStack_18,(char *)(DAT_0011adb4 + 0x11ad52));
    pOVar2 = (OutputStream *)operator_new(0x14);
    SaveDataOutputStream::SaveDataOutputStream((SaveDataOutputStream *)pOVar2,(String *)&pGStack_18)
    ;
    String::~String((String *)&pGStack_18);
    Cafe::serialize(*(Cafe **)(this + 0x14),pOVar2);
    (**(code **)(*(int *)pOVar2 + 8))(pOVar2);
    (**(code **)(*(int *)pOVar2 + 4))(pOVar2);
    iVar1 = CCServer::IsPostingGameState(*(void **)(*(int *)(this + 0xc) + DAT_0011adb8));
    if (iVar1 == 0) {
      saveServerData(this);
    }
  }
  return CONCAT44(iStack_14,pGStack_18);
}


