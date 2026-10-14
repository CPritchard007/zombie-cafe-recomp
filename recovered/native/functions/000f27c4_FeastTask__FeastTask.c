/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f27c4 FeastTask::FeastTask */

/* FeastTask::FeastTask(CharacterInstance*, CharacterInstance*, Cafe*) */

undefined8 __thiscall
FeastTask::FeastTask
          (FeastTask *this,CharacterInstance *param_1,CharacterInstance *param_2,Cafe *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  
  puVar5 = *(undefined4 **)(DAT_000f284c + 0xf27d6);
  *(int *)this = *(int *)(DAT_000f2848 + 0xf27d2) + 8;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  this[4] = (FeastTask)0x0;
  this[5] = (FeastTask)0x0;
  iVar1 = DAT_000f2850;
  *(FeastTask **)(this + 0x10) = this + 8;
  piVar4 = *(int **)(iVar1 + 0xf27f0);
  *(CharacterInstance **)(this + 0x20) = param_1;
  *(CharacterInstance **)(this + 0x24) = param_2;
  iVar2 = *piVar4 + 1;
  *piVar4 = iVar2;
  iVar1 = DAT_000f2854;
  *(int *)(this + 0x1c) = iVar2;
  *(int *)this = *(int *)(iVar1 + 0xf2804) + 8;
  uVar6 = *puVar5;
  uVar3 = Character::getSpeedMultiplier(*(Character **)(param_1 + 0x8c));
  uVar6 = __floatsisf(uVar6);
  __divsf3(uVar6,uVar3);
  uVar3 = __fixsfsi();
  uVar6 = *puVar5;
  *(undefined4 *)(this + 0x28) = uVar3;
  *(undefined4 *)(this + 0x2c) = uVar6;
  *(Cafe **)(this + 0x34) = param_3;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  this[0x3c] = (FeastTask)0x0;
  return CONCAT44(this,this);
}


