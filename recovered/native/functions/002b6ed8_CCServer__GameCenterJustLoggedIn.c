/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b6ed8 CCServer::GameCenterJustLoggedIn */

/* CCServer::GameCenterJustLoggedIn(void*) */

void CCServer::GameCenterJustLoggedIn(void *param_1)

{
  undefined4 uVar1;
  
  uVar1 = CCGameCenter::GetMyUniqueId(*(void **)((int)param_1 + 4));
  snprintf((char *)((int)param_1 + 0x198),0x80,(char *)(DAT_002b6f20 + 0x2b6ef2),uVar1);
  CCSwapChars((char *)((int)param_1 + 0x198),':','_',0x80);
  *(undefined4 *)((int)param_1 + 0x3a8) = 0;
  if (*(code **)((int)param_1 + 0x3a4) != (code *)0x0) {
    (**(code **)((int)param_1 + 0x3a4))(*(undefined4 *)((int)param_1 + 0x3a0));
  }
  return;
}


