/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f8660 FrequentFryerDialog::getItemData */

/* FrequentFryerDialog::getItemData(int) */

int FrequentFryerDialog::getItemData(int param_1)

{
  int iVar1;
  int in_r1;
  int in_r2;
  undefined4 uVar2;
  
  iVar1 = ZombieCafe::isEventFryerFlag();
  if (iVar1 == 0) {
    if (*(short *)(*(ZombieCafe **)(in_r1 + 0x60) + DAT_000f86c4) == 0) {
      iVar1 = (in_r2 + -1) * 8;
      uVar2 = *(undefined4 *)(DAT_000f86c8 + 0xf8686 + iVar1 + 4);
      *(undefined4 *)param_1 = *(undefined4 *)(iVar1 + DAT_000f86c8 + 0xf8686);
      goto LAB_000f86be;
    }
    iVar1 = DAT_000f86cc + 0xf8694;
  }
  else {
    iVar1 = ZombieCafe::getEventFryerID(*(ZombieCafe **)(in_r1 + 0x60));
    if (iVar1 != 0) {
      iVar1 = DAT_000f86d4 + 0xf86b8 + (in_r2 + -1) * 8;
      uVar2 = *(undefined4 *)(iVar1 + 0x34);
      *(undefined4 *)param_1 = *(undefined4 *)(iVar1 + 0x30);
      goto LAB_000f86be;
    }
    iVar1 = DAT_000f86d0 + 0xf86a6;
  }
  iVar1 = iVar1 + (in_r2 + -1) * 8;
  *(undefined4 *)param_1 = *(undefined4 *)(iVar1 + 0x58);
  uVar2 = *(undefined4 *)(iVar1 + 0x5c);
LAB_000f86be:
  *(undefined4 *)(param_1 + 4) = uVar2;
  return param_1;
}


