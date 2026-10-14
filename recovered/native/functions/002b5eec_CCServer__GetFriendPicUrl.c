/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b5eec CCServer::GetFriendPicUrl */

/* CCServer::GetFriendPicUrl(void*, unsigned int) */

int CCServer::GetFriendPicUrl(void *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = L_ServerConnected((SServer *)param_1);
  if (iVar1 != 0) {
    iVar1 = *(int *)((int)param_1 + 0x22c) + param_2 * 0x284 + 0x184;
  }
  return iVar1;
}


