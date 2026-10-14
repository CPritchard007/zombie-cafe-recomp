/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b3a2c CCQuaternion::SetFromAxisAngle */

/* CCQuaternion::SetFromAxisAngle(ccQuaternion*, ccVec3 const*, float) */

undefined8 __thiscall
CCQuaternion::SetFromAxisAngle
          (CCQuaternion *this,ccQuaternion *param_1,ccVec3 *param_2,float param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 in_r3;
  double __x;
  undefined4 uVar4;
  
  __mulsf3(param_3,param_2,0x3f000000,param_2,in_r3,this,param_1);
  __x = (double)__extendsfdf2();
  sin(__x);
  uVar1 = __truncdfsf2();
  uVar2 = SUB84(__x,0);
  cos(__x);
  uVar4 = extraout_r1;
  uVar3 = __mulsf3(*(undefined4 *)param_1,uVar1);
  *(undefined4 *)this = uVar3;
  uVar3 = __mulsf3(*(undefined4 *)(param_1 + 4),uVar1);
  *(undefined4 *)(this + 4) = uVar3;
  uVar1 = __mulsf3(*(undefined4 *)(param_1 + 8),uVar1);
  *(undefined4 *)(this + 8) = uVar1;
  uVar1 = __truncdfsf2(uVar2,uVar4);
  *(undefined4 *)(this + 0xc) = uVar1;
  return CONCAT44(uVar4,uVar2);
}


