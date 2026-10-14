/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015efb8 GameStateHelp::checkSuCmd */

/* GameStateHelp::checkSuCmd() */

undefined8 GameStateHelp::checkSuCmd(void)

{
  int in_r0;
  int iVar1;
  int in_r1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int local_1c;
  
  iVar1 = DAT_0015f114;
  iVar4 = *(int *)(in_r0 + 0xc);
  iVar2 = *(int *)(iVar4 + DAT_0015f114);
  local_1c = in_r1;
  if (((iVar2 == 0) || (local_1c = *(int *)(iVar4 + 0x4b8), local_1c != 0)) ||
     ((int)**(short **)(DAT_0015f118 + 0x15efde) < *(int *)(iVar4 + DAT_0015f11c)))
  goto LAB_0015f110;
  iVar4 = *(int *)(in_r0 + 0x50);
  if (iVar4 == 0) {
    iVar1 = FUN_0015ec02(*(undefined4 *)(in_r0 + 0x2c));
    if (iVar1 != 0) {
      *(undefined4 *)(in_r0 + 0x50) = 1;
      *(undefined4 *)(in_r0 + 0x54) = 0;
    }
    goto LAB_0015f110;
  }
  if (iVar4 == 1) {
    iVar2 = ScreenElement::contains
                      (*(ScreenElement **)(in_r0 + 0x4c),iVar2 >> 0x10,(int)(short)iVar2);
    if (iVar2 != 0) {
      iVar1 = *(int *)(in_r0 + 0x54) + 1;
      *(int *)(in_r0 + 0x54) = iVar1;
      if (iVar1 < 0xb) goto LAB_0015f110;
      (**(code **)(**(int **)(in_r0 + 0x4c) + 0x24))(*(int **)(in_r0 + 0x4c),0xff000000);
      uVar5 = 2;
LAB_0015f0a2:
      *(undefined4 *)(in_r0 + 0x50) = uVar5;
      *(undefined4 *)(in_r0 + 0x54) = 0;
      goto LAB_0015f110;
    }
    uVar5 = *(undefined4 *)(in_r0 + 0x30);
LAB_0015f054:
    iVar2 = FUN_0015ec02(uVar5,*(undefined4 *)(*(int *)(in_r0 + 0xc) + iVar1));
    if ((iVar2 == 0) &&
       (iVar2 = FUN_0015ec02(*(undefined4 *)(in_r0 + 0x34),
                             *(undefined4 *)(*(int *)(in_r0 + 0xc) + iVar1)), iVar2 == 0)) {
      uVar5 = *(undefined4 *)(in_r0 + 0x3c);
      uVar3 = *(undefined4 *)(*(int *)(in_r0 + 0xc) + iVar1);
LAB_0015f102:
      iVar1 = FUN_0015ec02(uVar5,uVar3);
      if (iVar1 == 0) goto LAB_0015f110;
    }
  }
  else {
    if (iVar4 == 2) {
      iVar2 = FUN_0015ec02(*(undefined4 *)(in_r0 + 0x30));
      if (iVar2 != 0) {
        *(undefined4 *)(in_r0 + 0x50) = 3;
        *(undefined4 *)(in_r0 + 0x54) = 0;
        goto LAB_0015f110;
      }
      uVar5 = *(undefined4 *)(in_r0 + 0x2c);
      goto LAB_0015f054;
    }
    if (iVar4 != 3) {
      if (iVar4 != 4) goto LAB_0015f110;
      iVar2 = FUN_0015ec02(*(undefined4 *)(in_r0 + 0x30));
      if (iVar2 != 0) {
        GiftManager::deleteGiftFile();
        resetSuCmd();
        (**(code **)(**(int **)(in_r0 + 0x4c) + 0x24))(*(int **)(in_r0 + 0x4c),DAT_0015f124);
        goto LAB_0015f110;
      }
LAB_0015f0de:
      iVar2 = FUN_0015ec02(*(undefined4 *)(in_r0 + 0x2c),
                           *(undefined4 *)(*(int *)(in_r0 + 0xc) + iVar1));
      if ((iVar2 != 0) ||
         (iVar1 = FUN_0015ec02(*(undefined4 *)(in_r0 + 0x34),
                               *(undefined4 *)(*(int *)(in_r0 + 0xc) + iVar1)), iVar1 != 0))
      goto LAB_0015f10a;
      uVar5 = *(undefined4 *)(in_r0 + 0x3c);
      uVar3 = *(undefined4 *)(*(int *)(in_r0 + 0xc) + DAT_0015f114);
      goto LAB_0015f102;
    }
    iVar2 = ScreenElement::contains
                      (*(ScreenElement **)(in_r0 + 0x4c),iVar2 >> 0x10,(int)(short)iVar2);
    if (iVar2 != 0) {
      iVar1 = *(int *)(in_r0 + 0x54) + 1;
      *(int *)(in_r0 + 0x54) = iVar1;
      if (iVar1 < 0xb) goto LAB_0015f110;
      (**(code **)(**(int **)(in_r0 + 0x4c) + 0x24))(*(int **)(in_r0 + 0x4c),DAT_0015f120);
      uVar5 = 4;
      goto LAB_0015f0a2;
    }
    iVar2 = FUN_0015ec02(*(undefined4 *)(in_r0 + 0x30),
                         *(undefined4 *)(*(int *)(in_r0 + 0xc) + iVar1));
    if (iVar2 == 0) goto LAB_0015f0de;
  }
LAB_0015f10a:
  resetSuCmd();
LAB_0015f110:
  return CONCAT44(local_1c,in_r0);
}


