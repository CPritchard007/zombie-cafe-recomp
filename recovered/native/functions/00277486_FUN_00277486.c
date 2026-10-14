/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00277486 FUN_00277486 */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0027730e) */
/* WARNING: Removing unreachable block (ram,0x0027730e) */
/* WARNING: Removing unreachable block (ram,0x002771ea) */
/* WARNING: Removing unreachable block (ram,0x002771f4) */
/* WARNING: Removing unreachable block (ram,0x002771fe) */
/* WARNING: Removing unreachable block (ram,0x00277266) */
/* WARNING: Removing unreachable block (ram,0x00277246) */
/* WARNING: Removing unreachable block (ram,0x00277272) */
/* WARNING: Removing unreachable block (ram,0x002772da) */
/* WARNING: Removing unreachable block (ram,0x00277278) */
/* WARNING: Removing unreachable block (ram,0x00277304) */
/* WARNING: Removing unreachable block (ram,0x002773a2) */
/* WARNING: Removing unreachable block (ram,0x00277380) */
/* WARNING: Removing unreachable block (ram,0x00277398) */
/* WARNING: Removing unreachable block (ram,0x002773a0) */
/* WARNING: Removing unreachable block (ram,0x002773a8) */
/* WARNING: Removing unreachable block (ram,0x002773e4) */
/* WARNING: Removing unreachable block (ram,0x002773ae) */
/* WARNING: Removing unreachable block (ram,0x00277316) */
/* WARNING: Removing unreachable block (ram,0x0027733c) */
/* WARNING: Removing unreachable block (ram,0x0027736c) */
/* WARNING: Removing unreachable block (ram,0x00277372) */
/* WARNING: Removing unreachable block (ram,0x002773f0) */
/* WARNING: Removing unreachable block (ram,0x00277412) */
/* WARNING: Removing unreachable block (ram,0x00277414) */
/* WARNING: Removing unreachable block (ram,0x0027742a) */
/* WARNING: Recovered jumptable eliminated as dead code */

void FUN_00277486(void)

{
  int iVar1;
  int iVar2;
  int in_r3;
  int unaff_r5;
  int *unaff_r6;
  int unaff_r7;
  undefined4 in_stack_00000020;
  int in_stack_00000024;
  int iStack00000030;
  undefined4 in_stack_00000034;
  int in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined4 in_stack_00000060;
  undefined4 in_stack_0000006c;
  int in_stack_00000088;
  
  iStack00000030 = -in_r3;
  FUN_00276702();
  iVar2 = FUN_002604c0(in_stack_00000048,*(undefined4 *)(**(int **)(*unaff_r6 + 8) + 0x10),0);
  if ((iVar2 != 0) && (*(char *)(in_stack_00000048 + 0x36) == '\0')) {
    *(char *)(*(int *)(iVar2 + 8) + 0xc) = '\x01' - (unaff_r7 == 1);
    *(undefined1 *)**(undefined4 **)(iVar2 + 8) = 0x98;
  }
  in_stack_00000088 = iVar2;
  FUN_0026d31c(unaff_r5,&stack0x000000c0);
  iVar1 = FUN_00279b98(unaff_r5,in_stack_00000060,in_stack_00000034,&stack0x00000088);
  if (iVar1 == 0) {
    FUN_00261102(in_stack_00000048,iVar2);
    FUN_00277444();
    return;
  }
  FUN_00278d8a(unaff_r5,&stack0x000000c0);
  if ((unaff_r7 != 0) && (in_stack_00000088 == 0)) {
    FUN_0026641e(in_stack_00000020,1,0,*(undefined4 *)(iVar1 + 0x18));
  }
  FUN_0026663a(iVar1);
  FUN_0026638e(unaff_r5,&stack0x000000c0);
  FUN_00278ac2(unaff_r5,in_stack_00000050,iStack00000030,8);
  FUN_00278436(unaff_r5,unaff_r6,*unaff_r6,0);
  FUN_00261102(in_stack_00000048,iVar2);
  FUN_0025c384(in_stack_00000020,iStack00000030);
  if ((-1 < in_stack_00000024) && (*(char *)(unaff_r5 + 0x1d4) == '\x02')) {
    FUN_00268b58(unaff_r5,DAT_002773dc + 0x2771e0);
  }
  FUN_0025c384(in_stack_00000020,in_stack_0000006c);
  FUN_00277446();
  return;
}


