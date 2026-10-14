/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f5504 MoveTask::setAnimation */

/* MoveTask::setAnimation(unsigned char) */

void __thiscall MoveTask::setAnimation(MoveTask *this,uchar param_1)

{
  undefined4 uVar1;
  
  this[0x35] = (MoveTask)param_1;
  uVar1 = DAT_001f5524;
  if ((param_1 != '\t') && (this[0x3d] == (MoveTask)0x0)) {
    uVar1 = 0x3f800000;
  }
  *(undefined4 *)(this + 0x38) = uVar1;
  return;
}


