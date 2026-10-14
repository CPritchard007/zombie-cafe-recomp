/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b5cd4 CCServer::GetMyName */

/* CCServer::GetMyName(void*) */

undefined * CCServer::GetMyName(void *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = L_ServerConnected((SServer *)param_1);
  if (iVar1 == 0) {
    puVar2 = &UNK_002b5cee + DAT_002b5cf0;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    puVar2 = (undefined *)CCFacebook::GetMyName(*param_1);
  }
  return puVar2;
}


