/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00165438 GameStateMap::chooseSMSContacts */

/* GameStateMap::chooseSMSContacts(void*) */

void GameStateMap::chooseSMSContacts(void *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = CapcomApp::getInstance();
  iVar1 = DAT_00165470;
  if (param_1 == *(void **)(*(int *)(iVar2 + 4) + 8)) {
    InviteContactList::setFinishedCallback
              (*(InviteContactList **)((int)param_1 + DAT_00165470),
               *(_func_void_void_ptr **)(DAT_0016546c + 0x165452),param_1);
    InviteContactList::loadList(*(InviteContactList **)((int)param_1 + iVar1),false);
    piVar3 = *(int **)((int)param_1 + iVar1);
    (**(code **)(*piVar3 + 0x20))(piVar3,1);
  }
  return;
}


