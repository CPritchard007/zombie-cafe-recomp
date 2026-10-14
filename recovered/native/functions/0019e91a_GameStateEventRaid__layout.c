/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0019e91a GameStateEventRaid::layout */

/* GameStateEventRaid::layout() */

undefined8 GameStateEventRaid::layout(void)

{
  int in_r0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  (**(code **)(**(int **)(in_r0 + 0x70) + 0x14))
            (*(int **)(in_r0 + 0x70),0,(int)*(short *)(*(int *)(in_r0 + 0xc) + 0x10));
  MessageElement::layout(*(MessageElement **)(in_r0 + 0x70));
  iVar4 = *(int *)(*(int *)(in_r0 + 0xc) + 0x10);
  (**(code **)(**(int **)(in_r0 + 100) + 0x18))
            (*(int **)(in_r0 + 100),iVar4 >> 0x10,(int)(short)iVar4);
  iVar5 = *(int *)(in_r0 + 0xc);
  iVar4 = *(int *)(iVar5 + 0x10);
  iVar6 = *(int *)(*(int *)(in_r0 + 0x5c) + 0x18);
  uVar1 = __floatsisf(iVar4 >> 0x10);
  uVar2 = __floatsisf(iVar6 >> 0x10);
  uVar2 = __subsf3(uVar2,0x3f800000);
  uVar2 = __divsf3(uVar1,uVar2);
  uVar1 = __floatsisf((int)(short)iVar4);
  uVar3 = __floatsisf((int)(short)iVar6);
  uVar3 = __subsf3(uVar3,0x3f800000);
  uVar1 = __divsf3(uVar1,uVar3);
  iVar4 = __aeabi_fcmpgt(uVar2,uVar1);
  if (iVar4 != 0) {
    uVar1 = uVar2;
  }
  uVar1 = __mulsf3(uVar1,0x3fc00000);
  *(undefined4 *)(in_r0 + 0x30) = uVar1;
  iVar4 = *(int *)(iVar5 + 0x10);
  (**(code **)(**(int **)(in_r0 + 0x88) + 0x14))
            (*(int **)(in_r0 + 0x88),(iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1,(int)(short)iVar4);
  iVar4 = *(int *)(*(int *)(in_r0 + 0xc) + 0x10);
  (**(code **)(**(int **)(in_r0 + 0x90) + 0x14))
            (*(int **)(in_r0 + 0x90),(iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1,(int)(short)iVar4 / 2);
  iVar4 = *(int *)(*(int *)(in_r0 + 0xc) + 0x10);
  (**(code **)(**(int **)(in_r0 + 0x94) + 0x14))
            (*(int **)(in_r0 + 0x94),(iVar4 >> 0x10) - (iVar4 >> 0x1f) >> 1,(int)(short)iVar4 / 2);
  iVar4 = *(int *)(*(int *)(in_r0 + 0xc) + 0x14);
  (**(code **)(**(int **)(in_r0 + 0x78) + 0x14))
            (*(int **)(in_r0 + 0x78),iVar4 >> 0x10,(int)(short)iVar4);
  ConfirmDialog::layout();
  iVar4 = *(int *)(*(int *)(in_r0 + 0xc) + 0x14);
  (**(code **)(**(int **)(in_r0 + 0x7c) + 0x14))
            (*(int **)(in_r0 + 0x7c),iVar4 >> 0x10,(int)(short)iVar4);
  NoticeDialog::layout();
  iVar4 = *(int *)(*(int *)(in_r0 + 0xc) + 0x14);
  (**(code **)(**(int **)(in_r0 + 0x74) + 0x14))
            (*(int **)(in_r0 + 0x74),iVar4 >> 0x10,(int)(short)iVar4);
  return CONCAT44(uVar2,in_r0);
}


