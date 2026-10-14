/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b8510 L_GetEventGiftDataSuccessSub */

/* L_GetEventGiftDataSuccessSub(void*, unsigned char const*, unsigned int) */

void L_GetEventGiftDataSuccessSub(void *param_1,uchar *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  code *pcVar9;
  int iVar10;
  int *piVar11;
  undefined4 uStack_4;
  int *piVar12;
  
  iVar1 = DAT_002b8694;
  puVar8 = *(undefined4 **)(DAT_002b8690 + 0x2b851c);
  piVar11 = (int *)(&stack0xffffffec + DAT_002b8694);
  piVar12 = (int *)(&stack0xffffffec + DAT_002b8694);
  *(undefined4 *)(&stack0xffffffec + DAT_002b8698 + DAT_002b8694) = *puVar8;
  *(undefined4 *)((int)param_1 + 0x538) = 0;
  *(undefined4 **)(&stack0x00000010 + iVar1) = puVar8;
  if (param_2 == (uchar *)0x0) {
    pcVar9 = *(code **)((int)param_1 + DAT_002b869c);
joined_r0x002b858c:
    if (pcVar9 == (code *)0x0) goto LAB_002b8676;
    uVar3 = *(undefined4 *)((int)param_1 + 0x548);
    uVar5 = 1;
  }
  else {
    iVar2 = strncmp((char *)param_2,(char *)(DAT_002b86a0 + 0x2b854c),0xb);
    if (iVar2 != 0) {
      iVar2 = strncmp((char *)param_2,(char *)(DAT_002b86a4 + 0x2b8570),7);
      if ((iVar2 != 0) &&
         (iVar2 = strncmp((char *)param_2,(char *)(DAT_002b86a8 + 0x2b8580),9), iVar2 != 0)) {
        if (*(code **)((int)param_1 + 0x540) != (code *)0x0) {
          (**(code **)((int)param_1 + 0x540))(*(undefined4 *)((int)param_1 + 0x548),param_2,param_3)
          ;
        }
        iVar2 = CapcomApp::getInstance();
        iVar7 = *(int *)(DAT_002b86ac + 0x2b85be);
        iVar6 = 0;
        *(undefined4 *)(&stack0x00000008 + iVar1) = *(undefined4 *)(iVar2 + 4);
        iVar2 = 0;
        do {
          pcVar4 = (char *)(iVar6 + iVar7);
          iVar10 = *(int *)(pcVar4 + 0x80);
          *(int *)(&stack0x0000000c + iVar1) = iVar7;
          if (iVar10 != 0) {
            iVar2 = iVar2 + (uint)(*pcVar4 != '\0');
          }
          iVar6 = iVar6 + 0x94;
        } while (iVar6 != DAT_002b86b0);
        *(undefined1 **)(&stack0x00000004 + iVar1) = &stack0x00000018 + iVar1;
        snprintf(&stack0x00000018 + iVar1,0x400,(char *)(DAT_002b86b4 + 0x2b85ee),iVar2);
        iVar2 = 0;
        iVar6 = 0;
        iVar7 = 0;
        do {
          pcVar4 = (char *)(*(int *)(&stack0x0000000c + iVar1) + iVar2);
          if ((*(int *)(pcVar4 + 0x80) != 0) && (*pcVar4 != '\0')) {
            *(int *)(&stack0xfffffff0 + iVar1) = *(int *)(&stack0x0000000c + iVar1) + iVar6 * 0x94;
            *piVar11 = iVar7;
            snprintf(&stack0x00000018 + iVar1,0x400,(char *)(DAT_002b86b8 + 0x2b861e),
                     &stack0x00000018 + iVar1);
            iVar7 = iVar7 + 1;
          }
          iVar2 = iVar2 + 0x94;
          iVar6 = iVar6 + 1;
        } while (iVar2 != DAT_002b86b0);
        uVar3 = ZombieCafe::getColaboEventId(*(ZombieCafe **)(&stack0x00000008 + iVar1));
        *piVar12 = DAT_002b86bc + 0x2b8644;
        *(int *)(&stack0xfffffff8 + iVar1) = DAT_002b86bc + 0x2b8644;
        *(undefined4 *)((int)&uStack_4 + iVar1) = uVar3;
        *(int *)(&stack0xfffffff0 + iVar1) = DAT_002b86c0 + 0x2b8648;
        *(undefined1 **)(&stack0xfffffff4 + iVar1) = &stack0x00000018 + iVar1;
        snprintf(&stack0x00000418 + iVar1,0x400,(char *)(DAT_002b86c4 + 0x2b8652),
                 DAT_002b86c8 + 0x2b8654);
        CCUrlConnection::NewRequest
                  ((char *)((int)param_1 + 0x18),&stack0x00000418 + iVar1,0,param_1);
        ZombieCafe::setGiftBox(*(ZombieCafe **)(&stack0x00000008 + iVar1));
        goto LAB_002b8676;
      }
      pcVar9 = *(code **)((int)param_1 + DAT_002b869c);
      goto joined_r0x002b858c;
    }
    pcVar9 = *(code **)((int)param_1 + DAT_002b869c);
    if (pcVar9 == (code *)0x0) goto LAB_002b8676;
    uVar3 = *(undefined4 *)((int)param_1 + 0x548);
    uVar5 = 3;
  }
  (*pcVar9)(uVar3,uVar5);
LAB_002b8676:
  if (*(int *)(&stack0xffffffec + DAT_002b8698 + iVar1) != **(int **)(&stack0x00000010 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


