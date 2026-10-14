/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b5e18 CCServer::GetFriendIndexOfUniqueId */

/* CCServer::GetFriendIndexOfUniqueId(void*, char const*) */

undefined8 CCServer::GetFriendIndexOfUniqueId(void *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = L_ServerConnected((SServer *)param_1);
  if (iVar1 != 0) {
    iVar2 = L_TotalFriends((SServer *)param_1);
    for (iVar1 = 0; iVar1 != iVar2; iVar1 = iVar1 + 1) {
      iVar3 = strcmp((char *)(*(int *)((int)param_1 + 0x22c) + iVar1 * 0x284 + 0x204),param_2);
      if (iVar3 == 0) goto LAB_002b5e5e;
    }
  }
  iVar1 = -1;
LAB_002b5e5e:
  return CONCAT44(param_1,iVar1);
}


