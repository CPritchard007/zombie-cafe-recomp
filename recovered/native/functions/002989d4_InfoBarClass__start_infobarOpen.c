/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002989d4 InfoBarClass::start_infobarOpen */

/* InfoBarClass::start_infobarOpen(char const*) */

void __thiscall InfoBarClass::start_infobarOpen(InfoBarClass *this,char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  iVar1 = DAT_00298a24;
  puVar5 = (undefined4 *)(&stack0xfffffff4 + DAT_00298a24);
  piVar4 = *(int **)(DAT_00298a28 + 0x2989e6);
  *(int *)(&stack0x00000400 + DAT_00298a24) = *piVar4;
  uVar2 = CCGetOpenUDIDQuery();
  uVar3 = *(undefined4 *)(DAT_00298a2c + 0x2989f8);
  *puVar5 = uVar2;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = uVar3;
  snprintf(&stack0x00000000 + iVar1,0x400,(char *)(DAT_00298a30 + 0x2989fc),param_1);
  javaStartInfobarOpen(&stack0x00000000 + iVar1);
  if (*(int *)(&stack0x00000400 + iVar1) != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


