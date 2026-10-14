/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024a334 L_DlcRequestSuccessCallback */

/* L_DlcRequestSuccessCallback(void*, unsigned int, ccDlcInfo const*) */

void L_DlcRequestSuccessCallback(void *param_1,uint param_2,ccDlcInfo *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 uVar12;
  undefined1 *__dest;
  undefined1 *__dest_00;
  int *piVar13;
  
  iVar2 = DAT_0024a584;
  __dest = &stack0xffffffec + DAT_0024a584;
  __dest_00 = &stack0xffffffec + DAT_0024a584;
  piVar13 = (int *)(&stack0xffffffec + DAT_0024a584);
  puVar10 = *(undefined4 **)(DAT_0024a580 + 0x24a340);
  *(uint *)(&stack0x000005d4 + DAT_0024a584) = param_2;
  *(undefined4 *)(&stack0xffffffec + DAT_0024a588 + DAT_0024a584) = *puVar10;
  *(undefined4 *)((int)param_1 + DAT_0024a58c + 4) = 0xffffffff;
  *(ccDlcInfo **)(&stack0xffffffec + DAT_0024a590 + iVar2) = param_3;
  *(undefined4 *)(&stack0x000005cc + iVar2) = 0;
  *(undefined4 **)(&stack0xffffffec + DAT_0024a594 + iVar2) = puVar10;
  puVar10 = (undefined4 *)(&stack0x00000654 + iVar2);
  do {
    if (*(int *)(&stack0x000005cc + iVar2) == *(int *)(&stack0x000005d4 + iVar2)) {
      *(undefined4 *)(&stack0x000005e0 + iVar2) = 0;
      *(undefined1 **)(&stack0x000005e4 + iVar2) = &stack0x000005dc + iVar2;
      *(undefined4 *)(&stack0x000005ec + iVar2) = 0;
      *(undefined4 *)(&stack0x000005e8 + iVar2) = 0;
      while (*(int *)((int)param_1 + 0x6d8) != 0) {
        uVar7 = 0;
        if (0 < *(int *)((int)param_1 + 0x6d8)) {
          uVar7 = FUN_00238f02((int)param_1 + 0x6c8);
        }
        CapcomLinkedList<unsigned_int>::add
                  ((CapcomLinkedList<unsigned_int> *)(&stack0x000005dc + iVar2),uVar7);
      }
      while (*(int *)(&stack0x000005ec + iVar2) != 0) {
        uVar7 = 0;
        if (0 < *(int *)(&stack0x000005ec + iVar2)) {
          uVar7 = FUN_00238f02(&stack0x000005dc + iVar2);
        }
        L_DlcPurchaseSuccess(param_1,uVar7,(char *)0x0);
      }
      if (*(code **)((int)param_1 + DAT_0024a5ac) != (code *)0x0) {
        (**(code **)((int)param_1 + DAT_0024a5ac))(*(undefined4 *)((int)param_1 + 0x970));
      }
      if (*(int *)(&stack0x000005ec + iVar2) != 0) {
        while (pvVar6 = *(void **)(&stack0xffffffec + DAT_0024a5b0 + iVar2), pvVar6 != (void *)0x0)
        {
          uVar9 = *(undefined4 *)((int)pvVar6 + 4);
          operator_delete(pvVar6);
          *(undefined4 *)(&stack0xffffffec + DAT_0024a5b0 + iVar2) = uVar9;
        }
      }
      if (*(int *)(&stack0xffffffec + DAT_0024a588 + iVar2) ==
          **(int **)(&stack0xffffffec + DAT_0024a594 + iVar2)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    memcpy(puVar10,*(void **)(&stack0xffffffec + DAT_0024a590 + iVar2),0x5d0);
    for (iVar3 = 0; (cVar1 = *(char *)((int)puVar10 + iVar3 + 4), cVar1 != '_' && (cVar1 != '\0'));
        iVar3 = iVar3 + 1) {
    }
    if ((iVar3 == 0) || (cVar1 == '\0')) {
      *(undefined4 *)(&stack0x00000c24 + iVar2) = 0;
      iVar3 = (int)param_1 + DAT_0024a58c;
LAB_0024a432:
      memcpy(__dest_00,&stack0x0000065c + iVar2,0x5d0);
      Vector<ZombieCafe::ZombieDlcEntry>::addElement(iVar3);
    }
    else {
      iVar4 = atoi((char *)((int)puVar10 + iVar3 + 5));
      *(int *)(&stack0x00000c24 + iVar2) = iVar4;
      iVar3 = (int)param_1 + DAT_0024a58c;
      iVar8 = 0;
      *(int *)(&stack0x000005c4 + iVar2) = *(int *)(iVar3 + 4) + 1;
      for (iVar11 = 0; iVar11 <= *(int *)(&stack0x000005c4 + iVar2); iVar11 = iVar11 + 1) {
        if (iVar11 == *(int *)(&stack0x000005c4 + iVar2)) goto LAB_0024a432;
        iVar5 = *(int *)(*(int *)(iVar3 + 8) + iVar8 + 0x5d0);
        *(int *)(&stack0xffffffec + DAT_0024a598 + iVar2) = iVar5;
        iVar8 = iVar8 + 0x5d8;
        if (iVar4 < iVar5) {
          iVar3 = (int)param_1 + DAT_0024a58c;
          *(int *)(&stack0x000005bc + iVar2) = iVar11;
          memcpy(__dest,&stack0x0000065c + iVar2,0x5d0);
          Vector<ZombieCafe::ZombieDlcEntry>::insertElementAt(iVar3);
          break;
        }
      }
    }
    uVar9 = *(undefined4 *)(&stack0x00000c24 + iVar2);
    uVar12 = *puVar10;
    *piVar13 = (int)(&stack0xffffffec + DAT_0024a59c + iVar2);
    sprintf(&stack0xffffffec + DAT_0024a5a4 + iVar2,(char *)(DAT_0024a5a0 + 0x24a45e),uVar9,uVar12);
    L_PrintLog((char *)(DAT_0024a5a8 + 0x24a46a),&stack0xffffffec + DAT_0024a5a4 + iVar2);
    iVar3 = *(int *)(&stack0xffffffec + DAT_0024a590 + iVar2);
    *(int *)(&stack0x000005cc + iVar2) = *(int *)(&stack0x000005cc + iVar2) + 1;
    *(int *)(&stack0xffffffec + DAT_0024a590 + iVar2) = iVar3 + 0x5d0;
  } while( true );
}


