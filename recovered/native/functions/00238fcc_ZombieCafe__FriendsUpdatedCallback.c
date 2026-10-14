/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00238fcc ZombieCafe::FriendsUpdatedCallback */

/* ZombieCafe::FriendsUpdatedCallback(void*) */

void ZombieCafe::FriendsUpdatedCallback(void *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  void *pvVar5;
  char acStack_114 [256];
  int local_14;
  
  iVar3 = DAT_0023904c;
  piVar4 = *(int **)(DAT_00239048 + 0x238fd8);
  local_14 = *piVar4;
  uVar1 = CCServer::GetFriendCount(*(void **)((int)param_1 + DAT_0023904c));
  snprintf(acStack_114,0x100,(char *)(DAT_00239050 + 0x238fee),uVar1);
  L_PrintLog((char *)(DAT_00239054 + 0x238ffc),acStack_114);
  pvVar5 = *(void **)((int)param_1 + iVar3);
  uVar2 = CCServer::GetFriendCount(pvVar5);
  iVar3 = CCServer::RetrieveMetaDataForFriends
                    (pvVar5,0,uVar2,
                     *(_func_void_void_ptr_char_ptr_char_ptr **)(DAT_0023905c + 0x239014),
                     *(_func_void_void_ptr **)(DAT_00239058 + 0x239010),
                     *(_func_void_void_ptr_ccServerFailureCode **)(DAT_00239060 + 0x239020),param_1)
  ;
  if (iVar3 == 0) {
    CEvent::set((CEvent *)(DAT_00239064 + 0x2390a8),1);
  }
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


