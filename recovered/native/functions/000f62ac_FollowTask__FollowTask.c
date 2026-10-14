/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f62ac FollowTask::FollowTask */

/* FollowTask::FollowTask(CharacterInstance*, CafeObject*, Cafe*, unsigned char, bool) */

undefined8 __thiscall
FollowTask::FollowTask
          (FollowTask *this,CharacterInstance *param_1,CafeObject *param_2,Cafe *param_3,
          uchar param_4,bool param_5)

{
  int iVar1;
  _func_void_void_ptr_CafeObject_ptr *p_Var2;
  uint uVar3;
  
  uVar3 = (uint)param_4;
  MoveTask::MoveTask((MoveTask *)this,param_1,param_3,(int)*(short *)(param_2 + 0x2c),param_4,
                     param_5);
  iVar1 = DAT_000f6304;
  *(CafeObject **)(this + 0x48) = param_2;
  p_Var2 = *(_func_void_void_ptr_CafeObject_ptr **)(DAT_000f6308 + 0xf62d8);
  *(int *)this = *(int *)(iVar1 + 0xf62d4) + 8;
  *(undefined4 *)(this + 0x2c) = 1;
  *(int *)(this + 0x28) = (int)*(short *)(param_2 + 0x2c);
  this[0x4c] = (FollowTask)0x0;
  CafeObject::addRemoveListener(param_2,p_Var2,this);
  return CONCAT44(uVar3,this);
}


