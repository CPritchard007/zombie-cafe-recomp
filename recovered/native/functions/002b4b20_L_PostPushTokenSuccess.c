/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b4b20 L_PostPushTokenSuccess */

/* L_PostPushTokenSuccess(void*, unsigned char const*, unsigned int) */

void L_PostPushTokenSuccess(void *param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  code *pcVar2;
  
  *(undefined4 *)((int)param_1 + 0x284) = 0;
  if (param_2 == (uchar *)0x0) {
    pcVar2 = *(code **)((int)param_1 + 0x290);
  }
  else {
    if ((1 < param_3) &&
       (iVar1 = strncmp((char *)param_2,(char *)(DAT_002b4b7c + 0x2b4b4a),2), iVar1 == 0)) {
      if (*(code **)((int)param_1 + 0x28c) == (code *)0x0) {
        return;
      }
      (**(code **)((int)param_1 + 0x28c))(*(undefined4 *)((int)param_1 + 0x298));
      return;
    }
    pcVar2 = *(code **)((int)param_1 + 0x290);
  }
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(*(undefined4 *)((int)param_1 + 0x298),7);
  }
  return;
}


