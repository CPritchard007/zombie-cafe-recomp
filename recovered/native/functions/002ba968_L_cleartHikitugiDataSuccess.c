/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ba968 L_cleartHikitugiDataSuccess */

/* L_cleartHikitugiDataSuccess(void*, unsigned char const*, unsigned int) */

void L_cleartHikitugiDataSuccess(void *param_1,uchar *param_2,uint param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(DAT_002ba9bc + 0x2ba974);
  L_PrintLog(pcVar1,(char *)(DAT_002ba9c0 + 0x2ba978));
  L_PrintLog(pcVar1,(char *)param_2);
  *(undefined4 *)((int)param_1 + 0x560) = 0;
  if (param_2 == (uchar *)0x0) {
    if (*(code **)((int)param_1 + DAT_002ba9c4) != (code *)0x0) {
      (**(code **)((int)param_1 + DAT_002ba9c4))(*(undefined4 *)((int)param_1 + 0x570));
    }
  }
  else if (*(code **)((int)param_1 + 0x568) != (code *)0x0) {
    (**(code **)((int)param_1 + 0x568))(*(undefined4 *)((int)param_1 + 0x570),param_2,param_3);
  }
  return;
}


