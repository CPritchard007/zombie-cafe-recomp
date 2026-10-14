/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001da3a8 L_ParseRestOfUpdateNotice */

/* L_ParseRestOfUpdateNotice(SGiftManager*, char const*, SGiftDef*) */

void L_ParseRestOfUpdateNotice(SGiftManager *param_1,char *param_2,SGiftDef *param_3)

{
  char cVar1;
  SGiftDef *__s;
  char *__format;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char local_9c [128];
  int local_1c;
  
  piVar4 = *(int **)(DAT_001da41c + 0x1da3b4);
  iVar5 = 0;
  local_1c = *piVar4;
  pcVar7 = param_2 + 1;
  pcVar6 = (char *)(DAT_001da420 + 0x1da3c4);
  iVar3 = 0;
  do {
    cVar1 = *pcVar7;
    if (cVar1 == '\0') {
      if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(1);
      }
      return;
    }
    if (cVar1 == ':') {
      if (iVar5 == 0) {
        __s = param_3 + 4;
        __format = (char *)(DAT_001da424 + 0x1da3d8);
LAB_001da3e4:
        snprintf((char *)__s,0x80,__format,local_9c);
      }
      else if (iVar5 == 1) {
        __s = param_3 + 0xcc;
        __format = pcVar6;
        goto LAB_001da3e4;
      }
      iVar2 = 0;
      iVar5 = iVar5 + 1;
      local_9c[0] = '\0';
    }
    else {
      local_9c[iVar3] = cVar1;
      iVar2 = iVar3 + 1;
      local_9c[iVar3 + 1] = '\0';
    }
    pcVar7 = pcVar7 + 1;
    iVar3 = iVar2;
  } while( true );
}


