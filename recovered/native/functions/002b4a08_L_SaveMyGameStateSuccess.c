/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b4a08 L_SaveMyGameStateSuccess */

/* L_SaveMyGameStateSuccess(void*, unsigned char const*, unsigned int) */

void L_SaveMyGameStateSuccess(void *param_1,uchar *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  *(undefined4 *)((int)param_1 + 0x284) = 0;
  if (param_2 == (uchar *)0x0) {
    pcVar4 = *(code **)((int)param_1 + 0x290);
    if (pcVar4 == (code *)0x0) {
      return;
    }
    uVar1 = *(undefined4 *)((int)param_1 + 0x298);
    uVar3 = 1;
  }
  else {
    iVar2 = strncmp((char *)param_2,(char *)(DAT_002b4ab8 + 0x2b4a38),7);
    if (iVar2 == 0) {
      if (*(code **)((int)param_1 + 0x28c) == (code *)0x0) {
        return;
      }
      (**(code **)((int)param_1 + 0x28c))(*(undefined4 *)((int)param_1 + 0x298));
      return;
    }
    iVar2 = strncmp((char *)param_2,(char *)(DAT_002b4abc + 0x2b4a5c),0xb);
    if ((iVar2 == 0) ||
       (iVar2 = strncmp((char *)param_2,(char *)(DAT_002b4ac0 + 0x2b4a70),8), iVar2 == 0)) {
      pcVar4 = *(code **)((int)param_1 + 0x290);
      if (pcVar4 == (code *)0x0) {
        return;
      }
      uVar1 = *(undefined4 *)((int)param_1 + 0x298);
      uVar3 = 3;
    }
    else {
      iVar2 = strncmp((char *)param_2,(char *)(DAT_002b4ac4 + 0x2b4a90),0xd);
      pcVar4 = *(code **)((int)param_1 + 0x290);
      if (iVar2 == 0) {
        if (pcVar4 == (code *)0x0) {
          return;
        }
        uVar1 = *(undefined4 *)((int)param_1 + 0x298);
        uVar3 = 10;
      }
      else {
        if (pcVar4 == (code *)0x0) {
          return;
        }
        uVar1 = *(undefined4 *)((int)param_1 + 0x298);
        uVar3 = 4;
      }
    }
  }
  (*pcVar4)(uVar1,uVar3);
  return;
}


