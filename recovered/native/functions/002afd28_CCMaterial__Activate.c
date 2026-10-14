/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002afd28 CCMaterial::Activate */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002afd40) */
/* WARNING: Removing unreachable block (ram,0x002afd40) */
/* CCMaterial::Activate(ccMaterial const*) */

void CCMaterial::Activate(ccMaterial *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)param_1;
  if (0xb < uVar1) {
    FUN_002b07c4();
  }
                    /* WARNING: Could not recover jumptable at 0x002afd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_002afd45 + (uint)*(ushort *)(&UNK_002afd44 + uVar1 * 2) * 2))();
  return;
}


