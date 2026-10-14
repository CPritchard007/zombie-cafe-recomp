/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b70ea CCServer::IsGettingGameState */

/* CCServer::IsGettingGameState(void*) */

bool CCServer::IsGettingGameState(void *param_1)

{
  return *(int *)((int)param_1 + 0x31c) != 0;
}


