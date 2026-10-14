/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0028d528 FUN_0028d528 */

/* WARNING: Function: __gnu_thumb1_case_si replaced with injection: switch32_si_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0028d59c) */
/* WARNING: Removing unreachable block (ram,0x0028d59c) */

void FUN_0028d528(void)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  int in_stack_00000024;
  int in_stack_00000038;
  int in_stack_0000003c;
  int in_stack_00000094;
  int in_stack_000000a0;
  int in_stack_00000120;
  
  if (*(char *)(in_stack_00000024 + 0x36) != '\0') {
    FUN_00292890();
  }
  if (((in_stack_00000120 != 0) && (*(int *)(in_stack_00000024 + 0x11c) == in_stack_000000a0)) &&
     (iVar1 = (**(code **)(in_stack_00000024 + 0x114))(*(undefined4 *)(in_stack_00000024 + 0x118)),
     iVar1 != 0)) {
    FUN_00292812();
  }
  pbVar3 = (byte *)(in_stack_00000094 + in_stack_0000003c * 0x14);
  if ((int)((uint)pbVar3[2] << 0x1e) < 0) {
    in_stack_00000038 = in_stack_00000038 + *(int *)(pbVar3 + 8) * 0x28;
    if ((*(ushort *)(in_stack_00000038 + 0x1c) & DAT_0028d86c) != 0) {
      FUN_002636e8(in_stack_00000038);
    }
    *(undefined2 *)(in_stack_00000038 + 0x1c) = 4;
  }
  uVar2 = *pbVar3 - 1;
  if (0x93 < uVar2) {
    uVar2 = FUN_00292802();
  }
                    /* WARNING: Could not recover jumptable at 0x0028d59c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0028d5a1 + *(int *)(&UNK_0028d5a0 + uVar2 * 4) * 4))();
  return;
}


