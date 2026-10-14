/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e246c ConfirmDialog::layout */

/* ConfirmDialog::layout() */

undefined8 ConfirmDialog::layout(void)

{
  int *in_r0;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  undefined8 uVar8;
  
  (**(code **)(*in_r0 + 0x18))
            (in_r0,(int)*(short *)(in_r0[0x19] + 0xc),(int)*(short *)(in_r0[0x19] + 0x10));
  iVar1 = SmDev();
  iVar1 = __fixsfsi(*(undefined4 *)(iVar1 * 4 + *(int *)(DAT_000e2570 + 0xe2496)));
  (**(code **)(*(int *)in_r0[0x1d] + 0x14))((int *)in_r0[0x1d],iVar1,iVar1);
  piVar6 = (int *)in_r0[0x1d];
  iVar7 = in_r0[3];
  pcVar4 = *(code **)(*piVar6 + 0x18);
  iVar2 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(DAT_000e2574 + 0xe24c4)));
  (*pcVar4)(piVar6,iVar7 + iVar1 * -2,uVar3);
  iVar2 = SmDev();
  uVar3 = __floatsisf(iVar1);
  __mulsf3(uVar3,*(undefined4 *)(iVar2 * 4 + *(int *)(DAT_000e2578 + 0xe24e8)));
  iVar1 = __fixsfsi();
  iVar2 = in_r0[0x26];
  piVar6 = (int *)in_r0[0x1a];
  if (iVar2 == 2) {
    (**(code **)(*piVar6 + 0x14))(piVar6,in_r0[3] / 2 - piVar6[3] / 2,in_r0[4] - iVar1);
    piVar6 = (int *)in_r0[0x1b];
    pcVar5 = *(code **)(*piVar6 + 0x20);
  }
  else {
    (**(code **)(*piVar6 + 0x14))(piVar6,iVar1,in_r0[4] - iVar1);
    (**(code **)(*(int *)in_r0[0x1b] + 0x14))((int *)in_r0[0x1b],in_r0[3] - iVar1,in_r0[4] - iVar1);
    piVar6 = (int *)in_r0[0x1b];
    pcVar5 = *(code **)(*piVar6 + 0x20);
  }
  uVar8 = (*pcVar5)(piVar6,iVar2 != 2);
  if ((ImageButton *)in_r0[0x1c] != (ImageButton *)0x0) {
    ImageButton::setScale((ImageButton *)in_r0[0x1c],(float)uVar8,(float)((ulonglong)uVar8 >> 0x20))
    ;
    (**(code **)(*(int *)in_r0[0x1c] + 0x14))((int *)in_r0[0x1c],in_r0[3],0);
    (**(code **)(*(int *)in_r0[0x1c] + 0x20))((int *)in_r0[0x1c],0);
  }
  return CONCAT44(pcVar4,in_r0);
}


