/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002baa90 L_logHikitugiDataSuccess */

/* L_logHikitugiDataSuccess(void*, unsigned char const*, unsigned int) */

void L_logHikitugiDataSuccess(void *param_1,uchar *param_2,uint param_3)

{
  char *pcVar1;
  
  pcVar1 = (char *)(DAT_002baae4 + 0x2baa9c);
  L_PrintLog(pcVar1,(char *)(DAT_002baae8 + 0x2baaa0));
  L_PrintLog(pcVar1,(char *)param_2);
  *(undefined4 *)((int)param_1 + 0x560) = 0;
  if (param_2 == (uchar *)0x0) {
    if (*(code **)((int)param_1 + DAT_002baaec) != (code *)0x0) {
      (**(code **)((int)param_1 + DAT_002baaec))(*(undefined4 *)((int)param_1 + 0x570));
    }
  }
  else if (*(code **)((int)param_1 + 0x568) != (code *)0x0) {
    (**(code **)((int)param_1 + 0x568))(*(undefined4 *)((int)param_1 + 0x570),param_2,param_3);
  }
  return;
}


