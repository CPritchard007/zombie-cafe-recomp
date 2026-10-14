/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0021d3b8 ReferralCodeDialog::layout */

/* ReferralCodeDialog::layout() */

undefined8 ReferralCodeDialog::layout(void)

{
  int *in_r0;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  iVar6 = DAT_0021d4b8;
  (**(code **)(*in_r0 + 0x18))
            (in_r0,(int)*(short *)(in_r0[0x19] + 0xc),(int)*(short *)(in_r0[0x19] + 0x10));
  iVar1 = SmDev();
  iVar6 = iVar6 + 0x21d3e2;
  iVar1 = __fixsfsi(*(undefined4 *)(iVar1 * 4 + *(int *)(iVar6 + DAT_0021d4bc)));
  piVar7 = (int *)in_r0[0x1a];
  pcVar4 = *(code **)(*piVar7 + 0x14);
  iVar5 = in_r0[3];
  iVar2 = SmDev();
  (*pcVar4)(piVar7,iVar5 / 2,*(undefined4 *)(iVar2 * 4 + *(int *)(iVar6 + DAT_0021d4c0)));
  piVar7 = (int *)in_r0[0x1a];
  iVar5 = in_r0[3];
  pcVar4 = *(code **)(*piVar7 + 0x18);
  iVar2 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(iVar6 + DAT_0021d4c4)));
  (*pcVar4)(piVar7,iVar5 + iVar1 * -2,uVar3);
  iVar2 = SmDev();
  uVar3 = __floatsisf(iVar1);
  __mulsf3(uVar3,*(undefined4 *)(iVar2 * 4 + *(int *)(iVar6 + DAT_0021d4c8)));
  iVar1 = __fixsfsi();
  (**(code **)(*(int *)in_r0[0x1d] + 0x14))((int *)in_r0[0x1d],iVar1,in_r0[4] - iVar1);
  (**(code **)(*(int *)in_r0[0x1e] + 0x14))((int *)in_r0[0x1e],in_r0[3] - iVar1,in_r0[4] - iVar1);
  piVar7 = (int *)in_r0[0x1b];
  pcVar4 = *(code **)(*piVar7 + 0x14);
  iVar5 = in_r0[3];
  iVar2 = SmDev();
  (*pcVar4)(piVar7,iVar5 / 2,*(undefined4 *)(iVar2 * 4 + *(int *)(iVar6 + DAT_0021d4cc)));
  (**(code **)(*(int *)in_r0[0x1b] + 0x18))((int *)in_r0[0x1b],in_r0[3] + iVar1 * -2,0x32);
  *(undefined4 *)(in_r0[0x1b] + 0x18) = 0xffffffff;
  return CONCAT44(iVar5 / 2,pcVar4);
}


