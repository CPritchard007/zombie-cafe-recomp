/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a20c4 StringUtil::parseInt */

/* StringUtil::parseInt(String) */

void StringUtil::parseInt(String *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  char *__format;
  int iVar6;
  uint uVar7;
  int local_130;
  char acStack_11c [256];
  int local_1c;
  
  piVar4 = *(int **)(DAT_002a2168 + 0x2a20d0);
  iVar6 = 0;
  local_1c = *piVar4;
  iVar2 = String::getBytes(param_1);
  uVar3 = String::getBytes(param_1);
  sprintf(acStack_11c,(char *)(DAT_002a216c + 0x2a20ee),uVar3,(int)*(short *)(param_1 + 6));
  L_PrintLog((char *)(DAT_002a2170 + 0x2a20fa),acStack_11c);
  sVar1 = *(short *)(param_1 + 6);
  local_130 = 0;
  __format = (char *)(DAT_002a2174 + 0x2a210c);
  do {
    if (sVar1 <= iVar6) {
LAB_002a2154:
      if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(local_130);
      }
      return;
    }
    uVar7 = (uint)*(byte *)(iVar2 + iVar6);
    pcVar5 = (char *)(DAT_002a2178 + 0x2a2122);
    sprintf(acStack_11c,__format,uVar7,uVar7,local_130);
    L_PrintLog(pcVar5,acStack_11c);
    if (9 < uVar7 - 0x30) {
      L_PrintLog(pcVar5,(char *)(DAT_002a217c + 0x2a213c));
      goto LAB_002a2154;
    }
    iVar6 = iVar6 + 1;
    local_130 = local_130 * 10 + uVar7 + -0x30;
  } while( true );
}


