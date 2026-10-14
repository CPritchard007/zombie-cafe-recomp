/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00298970 InfoBarClass::start_infobar */

/* InfoBarClass::start_infobar(char const*) */

void __thiscall InfoBarClass::start_infobar(InfoBarClass *this,char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  iVar1 = DAT_002989c0;
  puVar5 = (undefined4 *)(&stack0xfffffff4 + DAT_002989c0);
  piVar4 = *(int **)(DAT_002989c4 + 0x298982);
  *(int *)(&stack0x00000400 + DAT_002989c0) = *piVar4;
  uVar2 = CCGetOpenUDIDQuery();
  uVar3 = *(undefined4 *)(DAT_002989c8 + 0x298994);
  *puVar5 = uVar2;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = uVar3;
  snprintf(&stack0x00000000 + iVar1,0x400,(char *)(DAT_002989cc + 0x298998),param_1);
  javaStartInfobar(&stack0x00000000 + iVar1);
  if (*(int *)(&stack0x00000400 + iVar1) != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


