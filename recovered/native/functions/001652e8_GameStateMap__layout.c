/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001652e8 GameStateMap::layout */

/* GameStateMap::layout() */

void GameStateMap::layout(void)

{
  int iVar1;
  int in_r0;
  int iVar2;
  
  (**(code **)(**(int **)(in_r0 + 0x430) + 0x14))
            (*(int **)(in_r0 + 0x430),0,(int)*(short *)(*(int *)(in_r0 + 0xc) + 0x10));
  iVar2 = DAT_001653b8;
  MessageElement::layout(*(MessageElement **)(in_r0 + 0x430));
  NoticeDialog::layout();
  iVar1 = DAT_001653bc;
  FUN_001652d4(*(undefined4 *)(in_r0 + iVar2),*(undefined4 *)(*(int *)(in_r0 + 0xc) + 0x14));
  FUN_001652d4(*(undefined4 *)(in_r0 + iVar1),*(undefined4 *)(*(int *)(in_r0 + 0xc) + 0x14));
  ConfirmDialog::layout();
  FUN_001652d4(*(undefined4 *)(in_r0 + 0x438),*(undefined4 *)(*(int *)(in_r0 + 0xc) + 0x14));
  FUN_001652d4(*(undefined4 *)(in_r0 + DAT_001653c0),*(undefined4 *)(*(int *)(in_r0 + 0xc) + 0x14));
  FUN_001652d4(*(undefined4 *)(in_r0 + DAT_001653c4),*(undefined4 *)(*(int *)(in_r0 + 0xc) + 0x14));
  iVar2 = *(int *)(*(int *)(in_r0 + 0xc) + 0x10);
  (**(code **)(**(int **)(in_r0 + 0x14) + 0x18))
            (*(int **)(in_r0 + 0x14),iVar2 >> 0x10,(int)(short)iVar2);
  (**(code **)(**(int **)(in_r0 + 0x14) + 0x14))(*(int **)(in_r0 + 0x14),0,0);
  FUN_001652d4(*(undefined4 *)(in_r0 + 0x448),*(undefined4 *)(*(int *)(in_r0 + 0xc) + 0x14));
  iVar2 = *(int *)(*(int *)(in_r0 + 0xc) + 0x10);
  (**(code **)(**(int **)(in_r0 + 0x24) + 0x14))
            (*(int **)(in_r0 + 0x24),(iVar2 >> 0x10) + -10,(short)iVar2 + -10);
  (**(code **)(**(int **)(in_r0 + 0x28) + 0x14))
            (*(int **)(in_r0 + 0x28),10,(int)*(short *)(*(int *)(in_r0 + 0xc) + 0x14));
  (**(code **)(**(int **)(in_r0 + 0x2c) + 0x14))
            (*(int **)(in_r0 + 0x2c),*(short *)(*(int *)(in_r0 + 0xc) + 0x12) + -10,
             (int)*(short *)(*(int *)(in_r0 + 0xc) + 0x14));
  return;
}


