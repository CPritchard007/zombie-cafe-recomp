/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b4108 CCEscapeWithPercent */

/* CCEscapeWithPercent(char*, unsigned int, char const*) */

void CCEscapeWithPercent(char *param_1,uint param_2,char *param_3)

{
  int iVar1;
  size_t sVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  for (uVar4 = 0; sVar2 = strlen(param_3), iVar1 = DAT_002b4158, uVar4 < sVar2; uVar4 = uVar4 + 1) {
    if (param_3[uVar4] == ' ') {
      param_1[iVar3] = '%';
      param_1[iVar3 + 1] = '2';
      param_1[iVar3 + 2] = '0';
      iVar3 = iVar3 + 3;
    }
    else {
      param_1[iVar3] = param_3[uVar4];
      iVar3 = iVar3 + 1;
    }
  }
  param_1[iVar3] = '\0';
  L_PrintLog((char *)(iVar1 + 0x2b4148),param_3);
  L_PrintLog((char *)(DAT_002b415c + 0x2b4152),param_1);
  return;
}


