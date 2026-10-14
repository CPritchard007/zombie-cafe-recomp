/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b53e8 L_SendGiftDataSuccess */

/* L_SendGiftDataSuccess(void*, unsigned char const*, unsigned int) */

void L_SendGiftDataSuccess(void *param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  iVar1 = DAT_002b5450;
  *(undefined4 *)((int)param_1 + 0x334) = 0;
  iVar1 = strncmp((char *)param_2,(char *)(iVar1 + 0x2b53fc),7);
  if (iVar1 == 0) {
    if (*(code **)((int)param_1 + 0x33c) != (code *)0x0) {
      (**(code **)((int)param_1 + 0x33c))(*(undefined4 *)((int)param_1 + 0x344));
    }
  }
  else {
    iVar1 = strncmp((char *)param_2,(char *)(DAT_002b5454 + 0x2b5424),0xb);
    pcVar4 = *(code **)((int)param_1 + 0x340);
    if (iVar1 == 0) {
      if (pcVar4 == (code *)0x0) {
        return;
      }
      uVar2 = *(undefined4 *)((int)param_1 + 0x344);
      uVar3 = 3;
    }
    else {
      if (pcVar4 == (code *)0x0) {
        return;
      }
      uVar2 = *(undefined4 *)((int)param_1 + 0x344);
      uVar3 = 4;
    }
    (*pcVar4)(uVar2,uVar3);
  }
  return;
}


