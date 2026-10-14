/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018f484 GameStateSurvivalMenu::setRankingWebWindow */

/* GameStateSurvivalMenu::setRankingWebWindow() */

void GameStateSurvivalMenu::setRankingWebWindow(void)

{
  char *__s;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iStack_4;
  undefined4 *puVar7;
  
  iVar1 = DAT_0018f4fc;
  puVar6 = (undefined4 *)(&stack0xffffffec + DAT_0018f4fc);
  puVar7 = (undefined4 *)(&stack0xffffffec + DAT_0018f4fc);
  __s = &stack0x00000008 + DAT_0018f4fc;
  piVar4 = *(int **)(DAT_0018f500 + 0x18f492);
  *(int *)(&stack0x00000208 + DAT_0018f4fc) = *piVar4;
  uVar5 = *(undefined4 *)(*(int *)(DAT_0018f504 + 0x18f49c) + 0x80);
  uVar2 = CCGetDeviceID();
  uVar3 = CCGetDeviceID();
  *(undefined4 *)(&stack0xfffffff4 + iVar1) = *(undefined4 *)(DAT_0018f508 + 0x18f4b4);
  *(undefined4 *)(&stack0x00000000 + iVar1) = uVar3;
  uVar3 = *(undefined4 *)(DAT_0018f514 + 0x18f4c4);
  *puVar6 = uVar5;
  *(undefined4 *)(&stack0xfffffff0 + iVar1) = uVar2;
  *(undefined4 *)(&stack0xfffffff8 + iVar1) = uVar3;
  *(int *)((int)&iStack_4 + iVar1) = DAT_0018f518 + 0x18f4d0;
  snprintf(__s,0x200,(char *)(DAT_0018f50c + 0x18f4b8),DAT_0018f510 + 0x18f4ba);
  *puVar7 = __s;
  javaShowWebViewRanking(10,0x14,0x50,0x50);
  if (*(int *)(&stack0x00000208 + iVar1) != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


