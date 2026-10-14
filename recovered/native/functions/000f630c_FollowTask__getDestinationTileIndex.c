/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f630c FollowTask::getDestinationTileIndex */

/* FollowTask::getDestinationTileIndex() */

undefined4 __thiscall FollowTask::getDestinationTileIndex(FollowTask *this)

{
  undefined4 uVar1;
  
  if (*(PathTween **)(this + 0x30) == (PathTween *)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = PathTween::getTargetNodeIndex(*(PathTween **)(this + 0x30));
  }
  return uVar1;
}


