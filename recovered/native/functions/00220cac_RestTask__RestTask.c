/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00220cac RestTask::RestTask */

/* RestTask::RestTask(CharacterInstance*, Cafe*) */

RestTask * __thiscall RestTask::RestTask(RestTask *this,CharacterInstance *param_1,Cafe *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  iVar2 = DAT_00220d0c;
  *(CharacterInstance **)(this + 0x20) = param_1;
  iVar2 = *(int *)(iVar2 + 0x220cb8);
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(int *)this = iVar2 + 8;
  *(RestTask **)(this + 0x10) = this + 8;
  iVar2 = DAT_00220d10;
  *(undefined4 *)(this + 0x14) = 0;
  this[4] = (RestTask)0x0;
  piVar3 = *(int **)(iVar2 + 0x220cd0);
  this[5] = (RestTask)0x0;
  *(Cafe **)(this + 0x28) = param_2;
  iVar1 = *piVar3;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  iVar1 = iVar1 + 1;
  *piVar3 = iVar1;
  iVar2 = DAT_00220d14;
  *(int *)(this + 0x1c) = iVar1;
  *(int *)this = *(int *)(iVar2 + 0x220ce8) + 8;
  this[0x38] = (RestTask)0x0;
  iVar2 = CapcomApp::getInstance();
  uVar4 = *(undefined4 *)(iVar2 + 4);
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x3c) = uVar4;
  return this;
}


