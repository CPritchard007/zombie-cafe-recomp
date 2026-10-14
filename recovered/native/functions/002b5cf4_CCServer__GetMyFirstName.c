/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b5cf4 CCServer::GetMyFirstName */

/* CCServer::GetMyFirstName(void*) */

undefined * CCServer::GetMyFirstName(void *param_1)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = L_ServerConnected((SServer *)param_1);
  if (iVar1 == 0) {
    puVar2 = &UNK_002b5d0e + DAT_002b5d10;
  }
  else {
                    /* WARNING: Load size is inaccurate */
    puVar2 = (undefined *)CCFacebook::GetMyFirstName(*param_1);
  }
  return puVar2;
}


