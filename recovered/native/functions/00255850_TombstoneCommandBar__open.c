/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00255850 TombstoneCommandBar::open */

/* TombstoneCommandBar::open() */

void TombstoneCommandBar::open(void)

{
  TombstoneCommandBar *in_r0;
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  
  if (in_r0[0x9c] != (TombstoneCommandBar)0x2) {
    setState(in_r0,'\x01');
    if (*(int **)(in_r0 + 0x98) != (int *)0x0) {
      (**(code **)(**(int **)(in_r0 + 0x98) + 4))();
    }
    uVar5 = *(uint *)(*(int *)(in_r0 + 0x68) + 0x10);
    iVar3 = *(int *)(in_r0 + 0x10);
    uVar6 = (((int)uVar5 >> 0x10) - ((int)uVar5 >> 0x1f) >> 1) << 0x10;
    piVar1 = (int *)operator_new(0x1c);
    iVar2 = DAT_00255904;
    piVar1[2] = uVar5 & 0xffff | uVar6;
    piVar4 = *(int **)(iVar2 + 0x2558a6);
    piVar1[3] = uVar6 | (short)uVar5 - iVar3 & 0xffffU;
    iVar2 = DAT_00255908;
    piVar1[4] = *piVar4;
    iVar3 = DAT_0025590c;
    piVar1[6] = **(int **)(iVar2 + 0x2558b4);
    *piVar1 = *(int *)(iVar3 + 0x2558be) + 8;
    piVar1[5] = 0;
    *(int **)(in_r0 + 0x98) = piVar1;
    (**(code **)(*piVar1 + 0xc))();
    iVar3 = *(int *)(in_r0 + 0x98);
    uVar5 = *(uint *)(iVar3 + 0x14);
    lVar7 = *(long *)(iVar3 + 8);
    iVar2 = __aeabi_ldivmod(uVar5 << 0x10,((int)uVar5 >> 0x1f) << 0x10 | uVar5 >> 0x10,
                            *(int *)(iVar3 + 0x10),*(int *)(iVar3 + 0x10) >> 0x1f);
    iVar2 = CapcomMath::interpolatePoints(lVar7,*(long *)(iVar3 + 0xc),iVar2,*(int *)(iVar3 + 0x18))
    ;
    (**(code **)(*(int *)in_r0 + 0x14))(in_r0,iVar2 >> 0x10,(int)(short)iVar2);
  }
  return;
}


