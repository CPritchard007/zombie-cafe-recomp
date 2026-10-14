/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f7128 NoticeDialog::layout */

/* NoticeDialog::layout() */

undefined8 NoticeDialog::layout(void)

{
  int *in_r0;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  code *local_1c;
  
  (**(code **)(*in_r0 + 0x18))
            (in_r0,(int)*(short *)(in_r0[0x19] + 0xc),(int)*(short *)(in_r0[0x19] + 0x10));
  piVar6 = (int *)in_r0[0x1b];
  iVar7 = in_r0[3] >> 4;
  local_1c = *(code **)(*piVar6 + 0x14);
  iVar1 = SmDev();
  uVar2 = __floatsisf(iVar7);
  __addsf3(uVar2,*(undefined4 *)(iVar1 * 4 + *(int *)(DAT_001f71fc + 0x1f7166)));
  uVar2 = __fixsfsi();
  (*local_1c)(piVar6,uVar2,iVar7);
  (**(code **)(*(int *)in_r0[0x1b] + 0x18))((int *)in_r0[0x1b],in_r0[3] + iVar7 * -2,in_r0[4]);
  uVar3 = SmDev();
  iVar1 = in_r0[3];
  piVar6 = (int *)in_r0[0x1a];
  if ((uVar3 < 6) && ((1 << (uVar3 & 0xff) & 0x23U) != 0)) {
    iVar7 = in_r0[4];
    pcVar5 = *(code **)(*piVar6 + 0x14);
  }
  else {
    uVar2 = __floatsisf(in_r0[4]);
    uVar4 = __floatsisf(piVar6[4]);
    uVar4 = __mulsf3(uVar4,DAT_001f7200);
    __subsf3(uVar2,uVar4);
    iVar7 = __fixsfsi();
    pcVar5 = *(code **)(*piVar6 + 0x14);
    local_1c = (code *)(iVar1 >> 1);
  }
  (*pcVar5)(piVar6,(code *)(iVar1 >> 1),iVar7);
  (**(code **)(*in_r0 + 0x18))
            (in_r0,*(undefined4 *)(in_r0[0x19] + 0xc),
             *(int *)(in_r0[0x1a] + 0x10) / 2 + *(int *)(in_r0[0x19] + 0x10));
  return CONCAT44(local_1c,in_r0);
}


