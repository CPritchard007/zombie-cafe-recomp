/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001bb898 GameStateEventRaid3Menu::loadInfo */

/* GameStateEventRaid3Menu::loadInfo(void*, void*) */

void GameStateEventRaid3Menu::loadInfo(void *param_1,void *param_2)

{
  int iVar1;
  int *piVar2;
  char *__format;
  int *piVar3;
  char acStack_4 [4];
  
  iVar1 = DAT_001bb914;
  piVar3 = (int *)(&stack0xfffffff0 + DAT_001bb914);
  piVar2 = *(int **)(DAT_001bb91c + 0x1bb8ac);
  *(int *)(&stack0x000001fc + DAT_001bb914) = *piVar2;
  printf((char *)(DAT_001bb918 + 0x1bb8a8));
  *(void **)((int)param_1 + 0x330) = param_2;
  __format = (char *)(DAT_001bb920 + 0x1bb8c0);
  printf(__format);
  *(undefined4 *)((int)param_2 + 0xdc) = 1;
  *piVar3 = DAT_001bb924 + 0x1bb8d6;
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = *(undefined4 *)(DAT_001bb92c + 0x1bb8e0);
  snprintf(acStack_4 + iVar1,0x200,(char *)(DAT_001bb928 + 0x1bb8dc),__format);
  CCUrlConnection::NewRequest(__format,acStack_4 + iVar1,0x4a,param_2);
  printf((char *)(DAT_001bb930 + 0x1bb8fc));
  if (*(int *)(&stack0x000001fc + iVar1) != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


