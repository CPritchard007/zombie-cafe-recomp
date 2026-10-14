/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010505c EquipInfoDialog::layout */

/* EquipInfoDialog::layout() */

undefined8 EquipInfoDialog::layout(void)

{
  int *in_r0;
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(DAT_001050f0 + 0x105068);
  L_PrintLog(pcVar4,(char *)(DAT_001050f4 + 0x10506c));
  (**(code **)(*in_r0 + 0x18))
            (in_r0,(int)*(short *)(in_r0[0x1b] + 0xc),(int)*(short *)(in_r0[0x1b] + 0x10));
  iVar3 = in_r0[3];
  piVar5 = (int *)in_r0[0x1c];
  uVar1 = __floatsisf(in_r0[4]);
  uVar2 = __floatsisf(piVar5[4]);
  uVar2 = __addsf3(uVar2,uVar2);
  __subsf3(uVar1,uVar2);
  uVar2 = __fixsfsi();
  (**(code **)(*piVar5 + 0x14))(piVar5,iVar3 >> 1,uVar2);
  (**(code **)(*(int *)in_r0[0x1d] + 0x14))((int *)in_r0[0x1d],in_r0[3],0);
  (**(code **)(*in_r0 + 0x18))
            (in_r0,*(undefined4 *)(in_r0[0x1b] + 0xc),
             *(int *)(in_r0[0x1c] + 0x10) / 2 + *(int *)(in_r0[0x1b] + 0x10));
  L_PrintLog(pcVar4,(char *)(DAT_001050f8 + 0x1050ea));
  return CONCAT44(uVar1,iVar3 >> 1);
}


