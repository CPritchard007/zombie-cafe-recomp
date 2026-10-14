/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a0c64 ScreenshotTaker::uploadLastScreenshot */

/* ScreenshotTaker::uploadLastScreenshot(void*, void (*)(void*, unsigned int), void*, String) */

void ScreenshotTaker::uploadLastScreenshot(void)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  String *in_stack_00000000;
  char acStack_94 [128];
  int local_14;
  
  piVar3 = *(int **)(DAT_002a0cc4 + 0x2a0c70);
  iVar2 = *piVar3;
  local_14 = iVar2;
  L_PrintLog((char *)(DAT_002a0cc8 + 0x2a0c76),(char *)(DAT_002a0ccc + 0x2a0c7a));
  uVar1 = CCOptions::GetInt((CCOptions *)0x0,(void *)(DAT_002a0cd0 + 0x2a0c8a),(char *)0x0,iVar2);
  snprintf(acStack_94,0x80,(char *)(DAT_002a0cd4 + 0x2a0c96),uVar1);
  L_PrintLog((char *)(DAT_002a0cd8 + 0x2a0ca2),acStack_94);
  uVar1 = String::getBytes(in_stack_00000000);
  javaFacebook2(1,acStack_94,uVar1);
  if (local_14 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


