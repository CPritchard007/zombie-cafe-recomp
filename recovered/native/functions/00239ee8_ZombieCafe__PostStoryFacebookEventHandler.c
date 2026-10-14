/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239ee8 ZombieCafe::PostStoryFacebookEventHandler */

/* ZombieCafe::PostStoryFacebookEventHandler(ccFacebookMessageType, void*) */

void ZombieCafe::PostStoryFacebookEventHandler(int param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(iVar1 + 4);
  *(undefined1 *)(iVar1 + DAT_00239f10) = 0;
  if (param_1 == 4) {
    CCServer::UpdateFriends
              (*(void **)(iVar1 + DAT_00239f18),*(_func_void_void_ptr **)(DAT_00239f14 + 0x239f06),
               param_2);
  }
  return;
}


