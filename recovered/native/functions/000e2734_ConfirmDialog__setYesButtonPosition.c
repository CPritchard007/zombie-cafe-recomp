/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e2734 ConfirmDialog::setYesButtonPosition */

/* ConfirmDialog::setYesButtonPosition(float, float, float) */

void ConfirmDialog::setYesButtonPosition(float param_1,float param_2,float param_3)

{
  int in_r0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_r1;
  undefined4 in_r2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  
  iVar3 = *(int *)(in_r0 + 100);
  piVar4 = *(int **)(in_r0 + 0x68);
  uVar1 = __floatsisf(*(undefined4 *)(iVar3 + 0xc));
  __mulsf3(uVar1,in_r1);
  uVar1 = __fixsfsi();
  uVar2 = __floatsisf(*(undefined4 *)(iVar3 + 0x10));
  __mulsf3(uVar2,in_r2);
  uVar2 = __fixsfsi();
  uVar5 = (**(code **)(*piVar4 + 0x14))(piVar4,uVar1,uVar2);
  ImageButton::setScale
            (*(ImageButton **)(in_r0 + 0x68),(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
  (**(code **)(**(int **)(in_r0 + 0x78) + 0x18))
            (*(int **)(in_r0 + 0x78),*(undefined4 *)(*(int *)(in_r0 + 0x68) + 0xc),
             *(undefined4 *)(*(int *)(in_r0 + 0x68) + 0x10));
  return;
}


