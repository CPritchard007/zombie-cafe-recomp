/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b49d8 L_ServerConnected */

/* L_ServerConnected(SServer*) */

bool L_ServerConnected(SServer *param_1)

{
  int iVar1;
  
  iVar1 = CCFacebook::IsLoggedIn(*(void **)param_1);
  if (iVar1 == 0) {
    L_PrintLog((char *)(DAT_002b49f8 + 0x2b49f0),(char *)(DAT_002b49fc + 0x2b49f2));
  }
  return iVar1 != 0;
}


