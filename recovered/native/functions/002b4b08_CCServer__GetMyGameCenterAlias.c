/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b4b08 CCServer::GetMyGameCenterAlias */

/* CCServer::GetMyGameCenterAlias(void*) */

int CCServer::GetMyGameCenterAlias(void *param_1)

{
  int iVar1;
  
  if (*(void **)((int)param_1 + 4) == (void *)0xffffffff) {
    iVar1 = (int)&DAT_002b4b1c + DAT_002b4b1c;
  }
  else {
    iVar1 = CCGameCenter::GetMyAlias(*(void **)((int)param_1 + 4));
  }
  return iVar1;
}


