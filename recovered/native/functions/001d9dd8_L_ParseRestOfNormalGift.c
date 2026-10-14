/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d9dd8 L_ParseRestOfNormalGift */

/* L_ParseRestOfNormalGift(SGiftManager*, char const*, SGiftDef*) */

void L_ParseRestOfNormalGift(SGiftManager *param_1,char *param_2,SGiftDef *param_3)

{
  char cVar1;
  SGiftDef *__s;
  int iVar2;
  size_t __maxlen;
  int iVar3;
  char *__format;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  char *local_168;
  char acStack_15c [64];
  char local_11c [128];
  char acStack_9c [128];
  int local_1c;
  
  piVar4 = *(int **)(DAT_001d9ef8 + 0x1d9de4);
  local_168 = param_2 + 1;
  local_1c = *piVar4;
  iVar5 = 0;
  iVar3 = 0;
  pcVar6 = (char *)(DAT_001d9efc + 0x1d9df8);
  do {
    cVar1 = *local_168;
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
        __maxlen = 0x20;
        __format = (char *)(DAT_001d9f00 + 0x1d9e0c);
        goto LAB_001d9e38;
      }
      if (iVar5 == 1) {
        iVar2 = atoi(local_11c);
        iVar3 = 0x4d0;
LAB_001d9ec0:
        *(int *)(param_3 + iVar3) = iVar2;
      }
      else {
        if (iVar5 == 2) {
          iVar2 = atoi(local_11c);
          iVar3 = DAT_001d9f04;
          goto LAB_001d9ec0;
        }
        if (iVar5 == 3) {
          __s = param_3 + 0x24;
          __format = (char *)(DAT_001d9f08 + 0x1d9e38);
          __maxlen = 0x28;
LAB_001d9e38:
          snprintf((char *)__s,__maxlen,__format,local_11c);
        }
        else {
          if (iVar5 == 4) {
            __s = param_3 + 0x4c;
            __format = (char *)(DAT_001d9f0c + 0x1d9e4e);
            __maxlen = 0x80;
            goto LAB_001d9e38;
          }
          if (iVar5 == 5) {
            L_PrintLog(pcVar6,(char *)(DAT_001d9f10 + 0x1d9e5c));
            snprintf(acStack_9c,0x80,(char *)(DAT_001d9f14 + 0x1d9e78),DAT_001d9f18 + 0x1d9e7a,1,
                     param_3 + 4,*(undefined4 *)(param_3 + 0x4d0),
                     *(undefined4 *)(param_3 + DAT_001d9f04),param_3 + 0x24,param_3 + 0x4c);
            CCMd5(acStack_15c,0x40,acStack_9c);
            iVar3 = strncmp(acStack_15c,local_11c,0x80);
            if (iVar3 != 0) {
              L_PrintLog((char *)(DAT_001d9f1c + 0x1d9eae),(char *)(DAT_001d9f20 + 0x1d9eb0));
            }
          }
          else if (iVar5 == 6) {
            iVar2 = atoi(local_11c);
            iVar3 = DAT_001d9f24;
            goto LAB_001d9ec0;
          }
        }
      }
      iVar3 = 0;
      iVar5 = iVar5 + 1;
      local_11c[0] = '\0';
    }
    else {
      local_11c[iVar3] = cVar1;
      iVar3 = iVar3 + 1;
      local_11c[iVar3] = '\0';
    }
    local_168 = local_168 + 1;
  } while( true );
}


