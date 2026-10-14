/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001241a4 GameStateCafe::tickEditModes */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00124216) */
/* WARNING: Removing unreachable block (ram,0x00124216) */
/* GameStateCafe::tickEditModes(long) */

void __thiscall GameStateCafe::tickEditModes(GameStateCafe *this,long param_1)

{
  int iVar1;
  GameStateCafe *this_00;
  uint uVar2;
  
  iVar1 = DAT_001244e8;
  *(long *)(&stack0x00000004 + DAT_001244e8) = param_1;
  uVar2 = (uint)(byte)this[DAT_001244ec];
  this_00 = this;
  if (0xd < uVar2) {
    this_00 = (GameStateCafe *)FUN_00125b58();
  }
  if ((1 << (uVar2 & 0xff) & DAT_001244f4) == 0) {
    this_00 = (GameStateCafe *)FUN_00125b58();
  }
  if ((uVar2 == 9) &&
     (*(char *)(*(int *)(*(int *)(*(int *)(this_00 + 0xc) + DAT_001244f8) + 0x788) + 0x14) != '\0'))
  {
    cancelAllEdits(this_00);
    exitEditModes();
  }
  (**(code **)(**(int **)(this + 0xe0) + 8))
            (*(int **)(this + 0xe0),*(undefined4 *)(&stack0x00000004 + iVar1));
  *(undefined4 *)(&stack0x0000001c + iVar1) = *(undefined4 *)(this + 0x168);
  uVar2 = (byte)this[DAT_001244ec] - 1;
  if (0xc < uVar2) {
    uVar2 = FUN_001250e8();
  }
                    /* WARNING: Could not recover jumptable at 0x00124216. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0012421b + (uint)*(ushort *)(&UNK_0012421a + uVar2 * 2) * 2))();
  return;
}


