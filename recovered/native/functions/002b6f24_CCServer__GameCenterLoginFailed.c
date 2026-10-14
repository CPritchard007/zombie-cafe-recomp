/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b6f24 CCServer::GameCenterLoginFailed */

/* CCServer::GameCenterLoginFailed(void*) */

void CCServer::GameCenterLoginFailed(void *param_1)

{
  *(undefined1 *)((int)param_1 + 0x198) = 0;
  *(undefined4 *)((int)param_1 + 0x3a8) = 0;
  if (*(code **)((int)param_1 + 0x3a4) != (code *)0x0) {
    (**(code **)((int)param_1 + 0x3a4))(*(undefined4 *)((int)param_1 + 0x3a0),2);
  }
  return;
}


