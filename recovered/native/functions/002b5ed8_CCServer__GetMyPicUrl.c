/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b5ed8 CCServer::GetMyPicUrl */

/* CCServer::GetMyPicUrl(void*) */

void CCServer::GetMyPicUrl(void *param_1)

{
  int iVar1;
  
  iVar1 = L_ServerConnected((SServer *)param_1);
  if (iVar1 != 0) {
                    /* WARNING: Load size is inaccurate */
    CCFacebook::GetMyPicUrl(*param_1);
  }
  return;
}


