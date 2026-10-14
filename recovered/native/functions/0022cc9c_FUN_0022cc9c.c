/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022cc9c FUN_0022cc9c */

void FUN_0022cc9c(void)

{
  int iVar1;
  uint uVar2;
  uchar uVar3;
  int *piVar4;
  int iVar5;
  Store *unaff_r5;
  long lVar6;
  undefined4 in_stack_0000000c;
  
  piVar4 = *(int **)(unaff_r5 + 0x7c);
  if (piVar4 == (int *)0x0) goto LAB_0022cd22;
  if (((char)piVar4[1] != '\0') && (iVar1 = (**(code **)(*piVar4 + 0x1c))(piVar4), iVar1 == 0)) {
    (**(code **)(*piVar4 + 8))(piVar4,in_stack_0000000c);
  }
  iVar5 = *(int *)(unaff_r5 + 0x7c);
  uVar2 = *(uint *)(iVar5 + 0x14);
  lVar6 = *(long *)(iVar5 + 8);
  iVar1 = __aeabi_ldivmod(uVar2 << 0x10,((int)uVar2 >> 0x1f) << 0x10 | uVar2 >> 0x10,
                          *(int *)(iVar5 + 0x10),*(int *)(iVar5 + 0x10) >> 0x1f);
  iVar1 = CapcomMath::interpolatePoints(lVar6,*(long *)(iVar5 + 0xc),iVar1,*(int *)(iVar5 + 0x18));
  (**(code **)(*(int *)unaff_r5 + 0x14))(unaff_r5,iVar1 >> 0x10,(int)(short)iVar1);
  iVar1 = (**(code **)(**(int **)(unaff_r5 + 0x7c) + 0x1c))();
  if (iVar1 == 0) goto LAB_0022cd22;
  if (unaff_r5[0x80] == (Store)0x1) {
    uVar3 = '\x02';
LAB_0022cd0e:
    Store::setState(unaff_r5,uVar3);
  }
  else if (unaff_r5[0x80] == (Store)0x3) {
    uVar3 = '\0';
    goto LAB_0022cd0e;
  }
  if (*(int **)(unaff_r5 + 0x7c) != (int *)0x0) {
    (**(code **)(**(int **)(unaff_r5 + 0x7c) + 4))();
    *(undefined4 *)(unaff_r5 + 0x7c) = 0;
  }
LAB_0022cd22:
  if (*(char *)(*(int *)(unaff_r5 + 0x68) + DAT_0022ce2c) != '\0') {
    Store::backClose(unaff_r5);
  }
  return;
}


