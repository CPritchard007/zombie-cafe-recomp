/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001bb434 GameStateEventRaid3Menu::checkEndTime */

/* GameStateEventRaid3Menu::checkEndTime() */

undefined8 GameStateEventRaid3Menu::checkEndTime(void)

{
  undefined4 in_r0;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 auStack_10 [2];
  
  iVar2 = *(int *)(*(int *)(DAT_001bb458 + 0x1bb43e) + 0x88);
  auStack_10[0] = in_r0;
  CapcomDate::now((CapcomDate *)auStack_10);
  iVar1 = CapcomDate::to1970Offset();
  uVar3 = iVar2 - iVar1;
  return CONCAT44(auStack_10[0],(uVar3 | uVar3 - 1) >> 0x1f);
}


