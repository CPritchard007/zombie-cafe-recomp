/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00298a60 SSFJPEventForm::start_infobar */

/* SSFJPEventForm::start_infobar(char const*, char const*, int, char const*, int) */

void SSFJPEventForm::start_infobar
               (char *param_1,char *param_2,int param_3,char *param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_4;
  undefined4 *puVar8;
  
  iVar1 = DAT_00298ad4;
  puVar7 = (undefined4 *)(&stack0xffffffec + DAT_00298ad4);
  puVar8 = (undefined4 *)(&stack0xffffffec + DAT_00298ad4);
  *(int *)(&stack0x00000004 + DAT_00298ad4) = param_3;
  piVar6 = *(int **)(DAT_00298ad8 + 0x298a70);
  iVar4 = *piVar6;
  *(char **)((int)&param_5 + DAT_00298ad4) = param_2;
  *(undefined4 *)(&stack0x00000008 + DAT_00298ad4) =
       *(undefined4 *)(&stack0x0000042c + DAT_00298ad4);
  *(int *)(&stack0x00000410 + DAT_00298ad4) = iVar4;
  *(char **)((int)&uStack_4 + DAT_00298ad4) = param_1;
  uVar2 = CCGetDeviceID();
  uVar3 = CCGetOpenUDIDQuery();
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar3;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = *(undefined4 *)(&stack0x00000008 + iVar1);
  uVar3 = *(undefined4 *)((int)&param_5 + iVar1);
  uVar5 = *(undefined4 *)(&stack0x00000004 + iVar1);
  *puVar7 = uVar2;
  *(char **)(&stack0xfffffff4 + iVar1) = param_4;
  sprintf(&stack0x00000010 + iVar1,(char *)(DAT_00298adc + 0x298a9a),uVar3,uVar5);
  *puVar8 = &stack0x00000010 + iVar1;
  javaShowFixWebView(10,0x14,0x50,0x50);
  **(undefined1 **)((int)&uStack_4 + iVar1) = 1;
  if (*(int *)(&stack0x00000410 + iVar1) != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


