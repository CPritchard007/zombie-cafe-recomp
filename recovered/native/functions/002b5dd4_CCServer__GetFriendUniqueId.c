/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b5dd4 CCServer::GetFriendUniqueId */

/* CCServer::GetFriendUniqueId(void*, unsigned int) */

undefined * CCServer::GetFriendUniqueId(void *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  
  iVar1 = L_ServerConnected((SServer *)param_1);
  if (iVar1 == 0) {
    puVar3 = (undefined *)(DAT_002b5e10 + 0x2b5e08);
  }
  else {
    uVar2 = L_TotalFriends((SServer *)param_1);
    if (param_2 < uVar2) {
      puVar3 = (undefined *)(*(int *)((int)param_1 + 0x22c) + param_2 * 0x284 + 0x204);
    }
    else {
      puVar3 = &UNK_002b5e0e + DAT_002b5e14;
    }
  }
  return puVar3;
}


