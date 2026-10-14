/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001b56bc GameStateEventRaid3::checkEndTime */

/* GameStateEventRaid3::checkEndTime() */

undefined8 GameStateEventRaid3::checkEndTime(void)

{
  undefined4 in_r0;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 auStack_10 [2];
  
  iVar2 = *(int *)(*(int *)(DAT_001b56e0 + 0x1b56c6) + 0x88);
  auStack_10[0] = in_r0;
  CapcomDate::now((CapcomDate *)auStack_10);
  iVar1 = CapcomDate::to1970Offset();
  uVar3 = iVar2 - iVar1;
  return CONCAT44(auStack_10[0],(uVar3 | uVar3 - 1) >> 0x1f);
}


