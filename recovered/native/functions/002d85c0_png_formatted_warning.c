/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d85c0 png_formatted_warning */

void png_formatted_warning(undefined4 param_1,int param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  int iVar5;
  char local_dc [192];
  int local_1c;
  
  piVar3 = *(int **)(DAT_002d865c + 0x2d85cc);
  local_1c = *piVar3;
  uVar2 = 0;
  do {
    if (*param_3 == '\0') break;
    if ((param_2 == 0) || (*param_3 != '@')) {
LAB_002d862a:
      cVar1 = *param_3;
      param_3 = param_3 + 1;
      local_dc[uVar2] = cVar1;
      uVar2 = uVar2 + 1;
    }
    else {
      iVar5 = 0;
      if (param_3[1] == '\0') goto LAB_002d862a;
      for (; (cVar1 = *(char *)(iVar5 + DAT_002d8660 + 0x2d85f1), cVar1 != param_3[1] &&
             (cVar1 != '\0')); iVar5 = iVar5 + 1) {
      }
      if (7 < iVar5) {
        param_3 = param_3 + 1;
        goto LAB_002d862a;
      }
      pcVar4 = (char *)(param_2 + iVar5 * 0x20);
      do {
        if ((*pcVar4 == '\0') || ((char *)(param_2 + (iVar5 + 1) * 0x20) <= pcVar4)) break;
        local_dc[uVar2] = *pcVar4;
        uVar2 = uVar2 + 1;
        pcVar4 = pcVar4 + 1;
      } while (uVar2 < 0xbf);
      param_3 = param_3 + 2;
    }
  } while (uVar2 < 0xbf);
  local_dc[uVar2] = '\0';
  png_warning(param_1);
  if (local_1c == *piVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


