/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0013bf32 GameStateFriendCafe::layout */

/* GameStateFriendCafe::layout() */

void GameStateFriendCafe::layout(void)

{
  int in_r0;
  ScreenElement *this;
  undefined4 uVar1;
  int *piVar2;
  code *pcVar3;
  
  if (*(char *)(in_r0 + 0xc0) == '\0') {
    (**(code **)(**(int **)(in_r0 + 0x1ac) + 0x14))
              (*(int **)(in_r0 + 0x1ac),0,(int)*(short *)(*(int *)(in_r0 + 0xc) + 0x10));
    MessageElement::layout(*(MessageElement **)(in_r0 + 0x1ac));
    FriendCafeHudElement::layout(*(FriendCafeHudElement **)(in_r0 + 0x19c));
    (**(code **)(**(int **)(in_r0 + 0x1a4) + 0x14))
              (*(int **)(in_r0 + 0x1a4),(int)*(short *)(*(int *)(in_r0 + 0xc) + 0x16),
               (int)*(short *)(*(int *)(in_r0 + 0xc) + 0x10));
    CharacterCommandBar::layout(*(CharacterCommandBar **)(in_r0 + 0x1a4));
    FUN_0013bed8(*(undefined4 *)(in_r0 + 0x1a8),*(undefined4 *)(*(int *)(in_r0 + 0xc) + 0x14));
    FUN_0013bed8(*(undefined4 *)(in_r0 + 0x1c8),*(undefined4 *)(*(int *)(in_r0 + 0xc) + 0x14));
    ConfirmDialog::layout();
    FUN_0013bed8(*(undefined4 *)(in_r0 + 0x1c0),*(undefined4 *)(*(int *)(in_r0 + 0xc) + 0x14));
    FUN_0013bed8(*(undefined4 *)(in_r0 + 0x1b4),*(undefined4 *)(*(int *)(in_r0 + 0xc) + 0x14));
    FUN_0013bed8(*(undefined4 *)(in_r0 + 0x1bc),*(undefined4 *)(*(int *)(in_r0 + 0xc) + 0x14));
    NoticeDialog::layout();
    FUN_0013bed8(*(undefined4 *)(in_r0 + 0x1b0),*(undefined4 *)(*(int *)(in_r0 + 0xc) + 0x14));
    piVar2 = *(int **)(in_r0 + 0x98);
    this = *(ScreenElement **)(*(int *)(in_r0 + 0x19c) + 0x60);
    pcVar3 = *(code **)(*piVar2 + 0xc);
    uVar1 = ScreenElement::localToGlobalCoords(this,(*(int *)(this + 0xc) >> 1) << 0x10);
    (*pcVar3)(piVar2,uVar1);
  }
  return;
}


