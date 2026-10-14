/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023c780 ZombieCafe::getBossName */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0023c78e) */
/* WARNING: Removing unreachable block (ram,0x0023c78e) */
/* ZombieCafe::getBossName(int) */

void __thiscall ZombieCafe::getBossName(ZombieCafe *this,int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 - 9;
  if (0xaa < uVar1) {
    uVar1 = FUN_0023ce7c();
  }
                    /* WARNING: Could not recover jumptable at 0x0023c78e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0023c793 + (uint)*(ushort *)(&UNK_0023c792 + uVar1 * 2) * 2))();
  return;
}


