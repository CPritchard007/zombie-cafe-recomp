/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00236ca0 WaitDialog::layout */

/* WaitDialog::layout() */

void WaitDialog::layout(void)

{
  int *in_r0;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  
  (**(code **)(*in_r0 + 0x18))
            (in_r0,(int)*(short *)(in_r0[0x19] + 0xc),(int)*(short *)(in_r0[0x19] + 0x10));
  iVar1 = SmDev();
  iVar1 = __fixsfsi(*(undefined4 *)(iVar1 * 4 + *(int *)(DAT_00236d08 + 0x236cca)));
  (**(code **)(*(int *)in_r0[0x1c] + 0x14))((int *)in_r0[0x1c],iVar1,iVar1);
  piVar5 = (int *)in_r0[0x1c];
  pcVar6 = *(code **)(*piVar5 + 0x18);
  iVar4 = in_r0[3];
  iVar2 = SmDev();
  uVar3 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(DAT_00236d0c + 0x236cf6)));
  (*pcVar6)(piVar5,iVar4 + iVar1 * -2,uVar3);
  return;
}


