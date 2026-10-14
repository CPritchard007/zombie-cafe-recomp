/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b78a0 AttackTask::AttackTask */

/* AttackTask::AttackTask(CharacterInstance*, CharacterInstance*, Cafe*) */

undefined8 __thiscall
AttackTask::AttackTask
          (AttackTask *this,CharacterInstance *param_1,CharacterInstance *param_2,Cafe *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = DAT_000b7924 + 0xb78ac;
  *(int *)this = *(int *)(iVar4 + DAT_000b7928) + 8;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  this[4] = (AttackTask)0x0;
  this[5] = (AttackTask)0x0;
  iVar1 = DAT_000b792c;
  *(CharacterInstance **)(this + 0x20) = param_1;
  *(AttackTask **)(this + 0x10) = this + 8;
  iVar3 = **(int **)(iVar4 + iVar1) + 1;
  **(int **)(iVar4 + iVar1) = iVar3;
  *(int *)(this + 0x1c) = iVar3;
  iVar3 = *(int *)(iVar4 + DAT_000b7930);
  *(Cafe **)(this + 0x38) = param_3;
  iVar1 = DAT_000b7934;
  *(int *)this = iVar3 + 8;
  *(CharacterInstance **)(this + 0x24) = param_2;
  uVar5 = **(undefined4 **)(iVar4 + iVar1);
  uVar2 = Character::getSpeedMultiplier_atk(*(Character **)(param_1 + 0x8c));
  uVar5 = __floatsisf(uVar5);
  __divsf3(uVar5,uVar2);
  uVar2 = __fixsfsi();
  *(undefined4 *)(this + 0x30) = uVar2;
  *(undefined4 *)(this + 0x2c) = 0;
  this[0x28] = (AttackTask)0x0;
  this[0x29] = (AttackTask)0x0;
  CafeObject::addRemoveListener
            ((CafeObject *)param_2,*(_func_void_void_ptr_CafeObject_ptr **)(iVar4 + DAT_000b7938),
             this);
  return CONCAT44(this,this);
}


