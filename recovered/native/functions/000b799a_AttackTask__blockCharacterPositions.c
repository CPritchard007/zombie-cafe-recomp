/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b799a AttackTask::blockCharacterPositions */

/* AttackTask::blockCharacterPositions() */

undefined8 AttackTask::blockCharacterPositions(void)

{
  undefined1 uVar1;
  int in_r0;
  int iVar2;
  CapcomOrderableList<CafeObject*> *this;
  int iVar3;
  int in_r1;
  undefined4 *puVar4;
  Cafe *this_00;
  CFPathFinder *local_20;
  int local_1c;
  
  iVar2 = CapcomApp::getInstance();
  this_00 = *(Cafe **)(*(int *)(iVar2 + 4) + 0x7e8);
  this = (CapcomOrderableList<CafeObject*> *)Cafe::createDistanceSortedObjectList(this_00,'\x03',0);
  iVar2 = 0;
  local_1c = in_r1;
  do {
    local_20 = *(CFPathFinder **)(this_00 + 0x5c);
    iVar3 = Cafe::getNextTile((int)*(short *)(*(int *)(in_r0 + 0x24) + 0x2c),iVar2);
    uVar1 = CFPathFinder::isNodeEnabled(local_20,iVar3);
    *(undefined1 *)(in_r0 + iVar2 + 0x3c) = uVar1;
    *(undefined4 *)(this + 0x10) = *(undefined4 *)(this + 8);
    while (puVar4 = *(undefined4 **)(this + 0x10), puVar4 != (undefined4 *)0x0) {
      local_20 = (CFPathFinder *)*puVar4;
      *(undefined4 *)(this + 0x10) = puVar4[2];
      if (local_20 == (CFPathFinder *)0x0) break;
      local_1c = Cafe::getNextTile((int)*(short *)(*(int *)(in_r0 + 0x24) + 0x2c),iVar2);
      if ((local_1c == *(short *)(local_20 + 0x2c)) &&
         (iVar3 = __aeabi_fcmple(*(undefined4 *)(*(int *)(local_20 + 0x8c) + 0x40),0), iVar3 == 0))
      {
        CFPathFinder::setNodeEnabled(*(CFPathFinder **)(this_00 + 0x5c),local_1c,false);
      }
    }
    iVar2 = iVar2 + 1;
    if (iVar2 == 4) {
      CapcomOrderableList<CafeObject*>::removeAll(this);
      operator_delete(this);
      return CONCAT44(local_1c,local_20);
    }
  } while( true );
}


