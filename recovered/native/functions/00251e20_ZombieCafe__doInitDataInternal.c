/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00251e20 ZombieCafe::doInitDataInternal */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00251e86) */
/* WARNING: Removing unreachable block (ram,0x00251e86) */
/* ZombieCafe::doInitDataInternal() */

void __thiscall ZombieCafe::doInitDataInternal(ZombieCafe *this)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar2 = DAT_00252154;
  *(int *)(&stack0x0000004c + DAT_00252154) = DAT_00252158 + 0x251e2e;
  puVar4 = *(undefined4 **)(DAT_00252158 + 0x251e2e + DAT_0025215c);
  *(undefined4 *)(&stack0xffffffec + DAT_00252160 + DAT_00252154) = *puVar4;
  sVar1 = *(short *)(this + 0x418);
  *(undefined4 **)(&stack0x00000088 + DAT_00252154) = puVar4;
  if (sVar1 < 8) {
    *(undefined4 *)(this + 0x20) = 0;
    *(undefined4 *)(this + 0x24) = 0;
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined4 *)(this + 0x30) = 0;
    *(undefined4 *)(this + 0x34) = 0;
    *(undefined4 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x3c) = 0;
  }
  snprintf(&stack0x00000348 + iVar2,0x100,(char *)(DAT_00252164 + 0x251e62));
  if (2000 < *(short *)(this + 0x12)) {
    this[DAT_00252168] = (ZombieCafe)0x1;
  }
  uVar3 = (uint)*(short *)(this + 0x418);
  if (0xc < uVar3) {
    uVar3 = FUN_0025371c();
  }
                    /* WARNING: Could not recover jumptable at 0x00251e86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00251e8b + (uint)*(ushort *)(&UNK_00251e8a + uVar3 * 2) * 2))();
  return;
}


