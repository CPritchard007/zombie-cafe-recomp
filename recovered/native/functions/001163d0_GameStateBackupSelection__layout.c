/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001163d0 GameStateBackupSelection::layout */

/* GameStateBackupSelection::layout() */

undefined8 GameStateBackupSelection::layout(void)

{
  int in_r0;
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(*(int *)(in_r0 + 0xc) + 0x10);
  (**(code **)(**(int **)(in_r0 + 0x14) + 0x18))
            (*(int **)(in_r0 + 0x14),iVar3 >> 0x10,(int)(short)iVar3);
  (**(code **)(**(int **)(in_r0 + 0x30) + 0x14))
            (*(int **)(in_r0 + 0x30),(int)*(short *)(*(int *)(in_r0 + 0xc) + 0x12) / 2,0);
  iVar3 = in_r0;
  do {
    piVar1 = *(int **)(iVar3 + 0x18);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x18))
                (piVar1,(int)*(short *)(*(int *)(in_r0 + 0xc) + 0x12) / 2,
                 *(int *)(*(int *)(iVar3 + 0x24) + 0x10) + *(int *)(*(int *)(iVar3 + 0x38) + 0x10));
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 != in_r0 + 0xc);
  iVar3 = *(int *)(in_r0 + 0x18);
  iVar5 = *(int *)(in_r0 + 0x30);
  if (iVar3 != 0) {
    iVar3 = __divsi3((*(int *)(iVar3 + 0x10) * -3 -
                     (*(int *)(iVar5 + 0x10) + *(int *)(*(int *)(in_r0 + 0x34) + 0x10))) +
                     *(int *)(*(int *)(in_r0 + 0x14) + 0x10),3);
  }
  iVar5 = *(int *)(iVar5 + 0x10);
  piVar1 = (int *)(in_r0 + 0x18);
  do {
    piVar2 = (int *)*piVar1;
    if (piVar2 != (int *)0x0) {
      iVar4 = (int)*(short *)(*(int *)(in_r0 + 0xc) + 0x12);
      (**(code **)(*piVar2 + 0x14))
                (piVar2,(int)(((uint)(iVar4 >> 0x1f) >> 0x1e) + iVar4) >> 2,iVar5);
      (**(code **)(*(int *)piVar1[8] + 0x14))((int *)piVar1[8],0,*(undefined4 *)(piVar1[3] + 0x10));
      (**(code **)(*(int *)piVar1[0xb] + 0x14))
                ((int *)piVar1[0xb],*(undefined4 *)(*piVar1 + 0xc),*(undefined4 *)(piVar1[3] + 0x10)
                );
      iVar5 = iVar5 + iVar3 + *(int *)(*piVar1 + 0x10);
    }
    piVar1 = piVar1 + 1;
  } while (piVar1 != (int *)(in_r0 + 0x24));
  NoticeDialog::layout();
  iVar3 = *(int *)(*(int *)(in_r0 + 0xc) + 0x14);
  (**(code **)(**(int **)(in_r0 + 0x68) + 0x14))
            (*(int **)(in_r0 + 0x68),iVar3 >> 0x10,(int)(short)iVar3);
  return CONCAT44((int *)(in_r0 + 0x24),in_r0);
}


