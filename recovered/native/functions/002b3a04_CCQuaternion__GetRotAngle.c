/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b3a04 CCQuaternion::GetRotAngle */

/* CCQuaternion::GetRotAngle(ccQuaternion*) */

void CCQuaternion::GetRotAngle(ccQuaternion *param_1)

{
  undefined4 uVar1;
  undefined4 in_r3;
  undefined4 in_lr;
  
  __extendsfdf2(*(undefined4 *)(param_1 + 0xc));
  acos((double)CONCAT44(in_lr,in_r3));
  uVar1 = __truncdfsf2();
  uVar1 = __mulsf3(uVar1,DAT_002b3a24);
  __divsf3(uVar1,DAT_002b3a28);
  return;
}


