/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d6074 png_user_version_check */

void png_user_version_check(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined1 auStack_9c [128];
  int local_1c;
  
  piVar7 = *(int **)(DAT_002d6178 + 0x2d6080);
  local_1c = *piVar7;
  if (param_2 == (char *)0x0) {
    *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) | 0x20000;
  }
  else {
    iVar5 = 0;
    do {
      cVar1 = param_2[iVar5];
      iVar2 = png_get_header_ver(0);
      if (*(char *)(iVar2 + iVar5) != cVar1) {
        *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) | 0x20000;
      }
      iVar2 = png_get_header_ver(0);
      pcVar4 = (char *)(iVar2 + iVar5);
      iVar5 = iVar5 + 1;
    } while (*pcVar4 != '\0');
  }
  uVar3 = 1;
  if ((*(int *)(param_1 + 0x138) << 0xe < 0) &&
     ((((param_2 == (char *)0x0 ||
        (cVar1 = *param_2, pcVar4 = (char *)png_get_header_ver(0), *pcVar4 != cVar1)) ||
       ((*param_2 == '1' &&
        ((cVar1 = param_2[2], iVar5 = png_get_header_ver(0), *(char *)(iVar5 + 2) != cVar1 ||
         (cVar1 = param_2[3], iVar5 = png_get_header_ver(0), *(char *)(iVar5 + 3) != cVar1)))))) ||
      ((uVar3 = 1, *param_2 == '0' && ((byte)param_2[2] < 0x39)))))) {
    uVar3 = png_safecat(auStack_9c,0x80,0,DAT_002d617c + 0x2d6128);
    uVar3 = png_safecat(auStack_9c,0x80,uVar3,param_2);
    uVar3 = png_safecat(auStack_9c,0x80,uVar3,DAT_002d6180 + 0x2d6142);
    uVar6 = png_get_header_ver(0);
    png_safecat(auStack_9c,0x80,uVar3,uVar6);
    png_warning(param_1,auStack_9c);
    uVar3 = 0;
  }
  if (local_1c == *piVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


