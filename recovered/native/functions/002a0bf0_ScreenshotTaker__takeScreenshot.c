/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a0bf0 ScreenshotTaker::takeScreenshot */

/* ScreenshotTaker::takeScreenshot(void (*)(void*), void*) */

void __thiscall
ScreenshotTaker::takeScreenshot(ScreenshotTaker *this,_func_void_void_ptr *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  char acStack_9c [128];
  int local_1c;
  
  piVar3 = *(int **)(DAT_002a0c54 + 0x2a0bfc);
  pvVar4 = (void *)(DAT_002a0c58 + 0x2a0c00);
  iVar2 = *piVar3;
  local_1c = iVar2;
  iVar1 = CCOptions::GetInt((CCOptions *)0x0,pvVar4,(char *)0x0,iVar2);
  CCOptions::SetInt((CCOptions *)0x0,pvVar4,(char *)(iVar1 + 1),iVar2);
  snprintf(acStack_9c,0x80,(char *)(DAT_002a0c5c + 0x2a0c26),(char *)(iVar1 + 1));
  L_PrintLog((char *)(DAT_002a0c60 + 0x2a0c32),acStack_9c);
  javaScreenshot(acStack_9c);
  (*param_1)(param_2);
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(1);
  }
  return;
}


