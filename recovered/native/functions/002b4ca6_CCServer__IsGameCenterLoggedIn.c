/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b4ca6 CCServer::IsGameCenterLoggedIn */

/* CCServer::IsGameCenterLoggedIn(void*) */

undefined4 CCServer::IsGameCenterLoggedIn(void *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((int)*(void **)((int)param_1 + 4) - 1U < 0xfffffffe) {
    uVar1 = CCGameCenter::IsConnected(*(void **)((int)param_1 + 4));
  }
  return uVar1;
}


