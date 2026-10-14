/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c90bc CharacterInstance::die */

/* CharacterInstance::die(CharacterInstance*) */

void CharacterInstance::die(CharacterInstance *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x8c);
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  clearTasks();
  setCurrentAnimation(param_1,'\x06',*(uchar *)(*(int *)(param_1 + 0x8c) + 0x4c),false);
  param_1[0x84] = (CharacterInstance)0x0;
  iVar1 = CapcomApp::getInstance();
  *(int *)(*(int *)(iVar1 + 4) + DAT_000c90f8) = *(int *)(*(int *)(iVar1 + 4) + DAT_000c90f8) + 1;
  return;
}


