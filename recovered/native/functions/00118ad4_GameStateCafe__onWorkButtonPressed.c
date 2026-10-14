/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00118ad4 GameStateCafe::onWorkButtonPressed */

/* GameStateCafe::onWorkButtonPressed(GameStateCafe*, ScreenElement*) */

undefined8 GameStateCafe::onWorkButtonPressed(GameStateCafe *param_1,ScreenElement *param_2)

{
  long lVar1;
  int iVar2;
  MoveTask *this;
  CharacterInstance *this_00;
  undefined4 uVar3;
  undefined4 uVar4;
  
  CharacterInstance::stopTasks(*(CharacterInstance **)(param_1 + 0x54));
  lVar1 = Cafe::diamondToStaggeredCoords
                    (**(int **)(DAT_00118b5c + 0x118ae4) + -1,
                     **(int **)(DAT_00118b60 + 0x118aee) + 1 + **(int **)(DAT_00118b64 + 0x118af8));
  iVar2 = Cafe::staggeredCoordsToIndex(lVar1);
  this = (MoveTask *)operator_new(0x48);
  this_00 = *(CharacterInstance **)(param_1 + 0x54);
  uVar3 = 0;
  uVar4 = 0;
  MoveTask::MoveTask(this,this_00,*(Cafe **)(param_1 + 0x14),iVar2,'\0',false);
  CharacterInstance::addTask(this_00,(Task *)this);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x54) + 0x8c) + 0x44) = 1;
  CharacterCommandBar::removeButton(*(int *)(param_1 + 0xac));
  CharacterCommandBar::addRestButton
            (*(CharacterCommandBar **)(param_1 + 0xac),
             *(_func_void_void_ptr_ScreenElement_ptr **)(DAT_00118b68 + 0x118b4a),param_1);
  return CONCAT44(uVar4,uVar3);
}


