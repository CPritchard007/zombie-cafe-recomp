/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b5c2c CCServer::GetFriendCount */

/* CCServer::GetFriendCount(void*) */

void CCServer::GetFriendCount(void *param_1)

{
  int iVar1;
  
  iVar1 = L_ServerConnected((SServer *)param_1);
  if (iVar1 != 0) {
    L_TotalFriends((SServer *)param_1);
  }
  return;
}


