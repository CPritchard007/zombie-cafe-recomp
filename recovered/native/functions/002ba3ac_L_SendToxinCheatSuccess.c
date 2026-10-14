/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ba3ac L_SendToxinCheatSuccess */

/* L_SendToxinCheatSuccess(void*, unsigned char const*, unsigned int) */

void L_SendToxinCheatSuccess(void *param_1,uchar *param_2,uint param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(DAT_002ba400 + 0x2ba3b8);
  L_PrintLog(pcVar1,(char *)(DAT_002ba404 + 0x2ba3bc));
  L_PrintLog(pcVar1,(char *)param_2);
  *(undefined4 *)((int)param_1 + 0x4c0) = 0;
  if (param_2 == (uchar *)0x0) {
    if (*(code **)((int)param_1 + DAT_002ba408) != (code *)0x0) {
      (**(code **)((int)param_1 + DAT_002ba408))(*(undefined4 *)((int)param_1 + 0x4d0));
    }
  }
  else if (*(code **)((int)param_1 + 0x4c8) != (code *)0x0) {
    (**(code **)((int)param_1 + 0x4c8))(*(undefined4 *)((int)param_1 + 0x4d0),param_2,param_3);
  }
  return;
}


