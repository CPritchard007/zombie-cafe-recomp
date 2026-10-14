/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024aaa4 ZombieCafe::endLoadOrders */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0024aaf8) */
/* WARNING: Removing unreachable block (ram,0x0024aaf8) */
/* ZombieCafe::endLoadOrders(ZombieCafe*) */

void ZombieCafe::endLoadOrders(ZombieCafe *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = DAT_0024adb8;
  puVar4 = (undefined4 *)(&stack0xffffffec + DAT_0024adb8);
  puVar3 = *(undefined4 **)(DAT_0024adb4 + 0x24aab0 + DAT_0024adbc);
  *(undefined4 *)(&stack0xffffffec + DAT_0024adc0 + DAT_0024adb8) = *puVar3;
  L_PrintLog((char *)(DAT_0024adc4 + 0x24aac4),(char *)(DAT_0024adc8 + 0x24aac6));
  *(undefined4 **)(&stack0x00000000 + iVar1) = puVar3;
  FUN_0024b542();
  *puVar4 = *(undefined4 *)(&stack0x00000300 + iVar1);
  snprintf(&stack0x00000200 + iVar1,0x100,(char *)(DAT_0024adcc + 0x24aada),&stack0x00000304 + iVar1
          );
  L_PrintLog((char *)(DAT_0024add0 + 0x24aaea),&stack0x00000200 + iVar1);
  uVar2 = *(int *)(&stack0x00000300 + iVar1) - 1;
  if (0x11 < uVar2) {
    uVar2 = FUN_0024b542();
  }
                    /* WARNING: Could not recover jumptable at 0x0024aaf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0024aafd + (uint)*(ushort *)(&UNK_0024aafc + uVar2 * 2) * 2))();
  return;
}


