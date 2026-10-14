/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027c61c FUN_0027c61c */

undefined4 FUN_0027c61c(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  
  puVar7 = *(undefined4 **)(param_1 + 4);
  FUN_00261f68();
  piVar8 = (int *)puVar7[2];
  while (piVar6 = piVar8, piVar6 != (int *)0x0) {
    piVar8 = (int *)piVar6[2];
    if (*piVar6 == param_1) {
      FUN_00274a3e(piVar6);
    }
  }
  FUN_0027c594(param_1,0);
  FUN_00262002(param_1);
  if (*(char *)(param_1 + 9) != '\0') {
    uVar3 = FUN_0025ad68(2);
    sqlite3_mutex_enter();
    iVar4 = puVar7[0x10];
    puVar7[0x10] = iVar4 + -1;
    bVar1 = false;
    if (iVar4 + -1 < 1) {
      puVar2 = *(undefined4 **)(DAT_0027c6e8 + 0x27c6d6);
      if (*(undefined4 **)(DAT_0027c6e8 + 0x27c6d6) == puVar7) {
        *(undefined4 *)(DAT_0027c6e8 + 0x27c6d6) = puVar7[0x11];
      }
      else {
        do {
          puVar5 = puVar2;
          if (puVar5 == (undefined4 *)0x0) goto LAB_0027c686;
          puVar2 = (undefined4 *)puVar5[0x11];
        } while ((undefined4 *)puVar5[0x11] != puVar7);
        puVar5[0x11] = puVar7[0x11];
      }
LAB_0027c686:
      sqlite3_mutex_free(puVar7[0xe]);
      bVar1 = true;
    }
    sqlite3_mutex_leave(uVar3);
    if (!bVar1) goto LAB_0027c6c4;
  }
  FUN_00275670(*puVar7);
  if (((code *)puVar7[0xd] != (code *)0x0) && (puVar7[0xc] != 0)) {
    (*(code *)puVar7[0xd])();
  }
  FUN_0025fbda(0,puVar7[0xc]);
  FUN_0025f6b8(puVar7[0x14]);
  puVar7[0x14] = 0;
  sqlite3_free(puVar7);
LAB_0027c6c4:
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x14) = *(undefined4 *)(param_1 + 0x14);
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x18) = *(undefined4 *)(param_1 + 0x18);
  }
  sqlite3_free(param_1);
  return 0;
}


