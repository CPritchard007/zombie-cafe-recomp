/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00145fb4 GameStateFriends::chooseSMSContacts */

/* GameStateFriends::chooseSMSContacts(void*) */

void GameStateFriends::chooseSMSContacts(void *param_1)

{
  int iVar1;
  
  iVar1 = CapcomApp::getInstance();
  if (param_1 == *(void **)(*(int *)(iVar1 + 4) + 8)) {
    InviteContactList::setFinishedCallback
              (*(InviteContactList **)((int)param_1 + 0x5c),
               *(_func_void_void_ptr **)(DAT_00145fe8 + 0x145fce),param_1);
    InviteContactList::loadList(*(InviteContactList **)((int)param_1 + 0x5c),false);
    (**(code **)(**(int **)((int)param_1 + 0x5c) + 0x20))(*(int **)((int)param_1 + 0x5c),1);
  }
  return;
}


