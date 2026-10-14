/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bdabe FUN_000bdabe */

void FUN_000bdabe(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int *unaff_r6;
  code *pcVar5;
  int in_stack_00000034;
  int *in_stack_0000008c;
  
  iVar1 = SmDev();
  if ((iVar1 == 0) || (iVar1 = SmDev(), iVar1 == 5)) {
    iVar1 = unaff_r6[0x37];
    (**(code **)(*unaff_r6 + 0x18))
              (unaff_r6,(*(int *)(iVar1 + 0xc) >> 1) + *(int *)(unaff_r6[0x36] + 0xc),
               (*(int *)(iVar1 + 0x10) >> 1) + *(int *)(unaff_r6[0x36] + 0x10));
    piVar4 = (int *)unaff_r6[0x37];
    iVar1 = unaff_r6[3];
    uVar2 = 0;
    pcVar5 = *(code **)(*piVar4 + 0x14);
  }
  else {
    piVar4 = (int *)unaff_r6[0x37];
    pcVar5 = *(code **)(*piVar4 + 0x14);
    iVar1 = SmDev();
    uVar2 = __fixsfsi(*(undefined4 *)(iVar1 * 4 + *(int *)(in_stack_00000034 + DAT_000bdc48)));
    iVar1 = SmDev();
    uVar3 = __fixsfsi(*(undefined4 *)(iVar1 * 4 + *(int *)(in_stack_00000034 + DAT_000bdc4c)));
    (*pcVar5)(piVar4,uVar2,uVar3);
    iVar1 = *(int *)(unaff_r6[0x36] + 0xc);
    uVar2 = *(undefined4 *)(unaff_r6[0x36] + 0x10);
    pcVar5 = *(code **)(*unaff_r6 + 0x18);
    piVar4 = unaff_r6;
  }
  (*pcVar5)(piVar4,iVar1,uVar2);
  (**(code **)(*(int *)unaff_r6[0x36] + 0x14))((int *)unaff_r6[0x36],0,unaff_r6[4]);
  piVar4 = (int *)(&stack0x00000000 + DAT_000bdc44);
  unaff_r6[0x1b] = 0;
  if (*piVar4 == *in_stack_0000008c) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


