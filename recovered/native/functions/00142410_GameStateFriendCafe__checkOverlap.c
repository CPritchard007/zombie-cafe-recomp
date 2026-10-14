/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00142410 GameStateFriendCafe::checkOverlap */

/* GameStateFriendCafe::checkOverlap(CharacterInstance*) */

void __thiscall
GameStateFriendCafe::checkOverlap(GameStateFriendCafe *this,CharacterInstance *param_1)

{
  undefined1 uVar1;
  int iVar2;
  MoveTask *this_00;
  uchar uVar3;
  int iVar4;
  CFPathFinder *this_01;
  int iVar5;
  
  if ((this[0x106] == (GameStateFriendCafe)0x0) ||
     (iVar2 = (**(code **)(*(int *)param_1 + 0x20))(param_1), iVar2 != 1)) {
    uVar3 = '\0';
  }
  else {
    uVar3 = '\t';
  }
  iVar2 = __aeabi_fcmple(*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x40),0);
  if ((iVar2 == 0) && (iVar2 = CharacterInstance::isMoving(param_1), iVar2 == 0)) {
    for (iVar2 = 0; iVar4 = (int)*(short *)(param_1 + 0x2c), iVar2 < *(int *)(this + 0xd0) + 1;
        iVar2 = iVar2 + 1) {
      if (*(int *)(iVar2 * 4 + *(int *)(this + 0xd4)) == iVar4) {
        iVar2 = 0;
        do {
          this_01 = *(CFPathFinder **)(*(int *)(this + 0x34) + 0x5c);
          iVar4 = Cafe::getNextTile((int)*(short *)(param_1 + 0x2c),iVar2);
          iVar4 = CFPathFinder::isNodeEnabled(this_01,iVar4);
          if (iVar4 != 0) {
            iVar4 = Cafe::getNextTile((int)*(short *)(param_1 + 0x2c),iVar2);
            iVar5 = 0;
            while( true ) {
              if (*(int *)(this + 0xd0) < iVar5) {
                iVar2 = Cafe::getNextTile((int)*(short *)(param_1 + 0x2c),iVar2);
                if (iVar2 == -1) {
                  return;
                }
                iVar4 = Cafe::isInside(*(Cafe **)(this + 0x34),iVar2);
                if (iVar4 == 0) {
                  return;
                }
                uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x8c) + 0x44);
                CharacterInstance::stopTasks(param_1);
                this_00 = (MoveTask *)operator_new(0x48);
                MoveTask::MoveTask(this_00,param_1,*(Cafe **)(this + 0x34),iVar2,uVar3,false);
                CharacterInstance::addTask(param_1,(Task *)this_00);
                *(undefined1 *)(*(int *)(param_1 + 0x8c) + 0x44) = uVar1;
                return;
              }
              if (*(int *)(iVar5 * 4 + *(int *)(this + 0xd4)) == iVar4) break;
              iVar5 = iVar5 + 1;
            }
          }
          iVar2 = iVar2 + 1;
          if (iVar2 == 4) {
            return;
          }
        } while( true );
      }
    }
    for (iVar2 = 0; iVar2 <= *(int *)(this + 0xd0); iVar2 = iVar2 + 1) {
      if (*(int *)(iVar2 * 4 + *(int *)(this + 0xd4)) == iVar4) {
        if (iVar2 != -1) {
          return;
        }
        break;
      }
    }
    Vector<int>::addElement((Vector<int> *)(this + 0xcc),iVar4);
  }
  return;
}


