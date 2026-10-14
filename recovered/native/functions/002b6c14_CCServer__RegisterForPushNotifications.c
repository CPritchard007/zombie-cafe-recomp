/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b6c14 CCServer::RegisterForPushNotifications */

/* CCServer::RegisterForPushNotifications(void*, char const*) */

bool CCServer::RegisterForPushNotifications(void *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = L_ServerConnected((SServer *)param_1);
  return iVar1 != 0;
}


