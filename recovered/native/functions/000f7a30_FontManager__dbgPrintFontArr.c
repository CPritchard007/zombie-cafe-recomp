/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f7a30 FontManager::dbgPrintFontArr */

/* FontManager::dbgPrintFontArr() */

void __thiscall FontManager::dbgPrintFontArr(FontManager *this)

{
  int *piVar1;
  char *__format;
  char *pcVar2;
  int iVar3;
  char acStack_9c [128];
  int local_1c;
  
  piVar1 = *(int **)(DAT_000f7a88 + 0xf7a3c);
  pcVar2 = (char *)(DAT_000f7a8c + 0xf7a40);
  local_1c = *piVar1;
  L_PrintLog(pcVar2,(char *)(DAT_000f7a90 + 0xf7a48));
  iVar3 = 0;
  __format = (char *)(DAT_000f7a94 + 0xf7a58);
  do {
    snprintf(acStack_9c,0x80,__format,iVar3,*(undefined4 *)(this + 0x10));
    iVar3 = iVar3 + 1;
    L_PrintLog(pcVar2,acStack_9c);
    this = this + 4;
  } while (iVar3 != 4);
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


