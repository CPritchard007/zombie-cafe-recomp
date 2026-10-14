/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239068 ZombieCafe::PostStoryFriendsUpdatedCallback */

/* ZombieCafe::PostStoryFriendsUpdatedCallback(void*) */

void ZombieCafe::PostStoryFriendsUpdatedCallback(void *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  
  iVar2 = CapcomApp::getInstance();
  iVar1 = DAT_00239088;
  pvVar3 = *(void **)(iVar2 + 4);
  FriendsUpdatedCallback(pvVar3);
  (**(code **)((int)pvVar3 + iVar1))(param_1);
  *(undefined4 *)((int)pvVar3 + iVar1) = 0;
  return;
}


