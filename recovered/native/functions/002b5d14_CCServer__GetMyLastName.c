/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b5d14 CCServer::GetMyLastName */

/* CCServer::GetMyLastName(void*) */

undefined * CCServer::GetMyLastName(void *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = L_ServerConnected((SServer *)param_1);
  if (iVar1 == 0) {
    puVar2 = &UNK_002b5d2e + DAT_002b5d30;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    puVar2 = (undefined *)CCFacebook::GetMyLastName(*param_1);
  }
  return puVar2;
}


