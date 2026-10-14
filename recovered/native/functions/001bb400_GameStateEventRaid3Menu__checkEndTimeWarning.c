/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001bb400 GameStateEventRaid3Menu::checkEndTimeWarning */

/* GameStateEventRaid3Menu::checkEndTimeWarning() */

undefined8 GameStateEventRaid3Menu::checkEndTimeWarning(void)

{
  undefined4 in_r0;
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 auStack_10 [2];
  
  iVar2 = *(int *)(*(int *)(DAT_001bb42c + 0x1bb40a) + 0x88);
  auStack_10[0] = in_r0;
  CapcomDate::now((CapcomDate *)auStack_10);
  iVar1 = CapcomDate::to1970Offset();
  uVar3 = iVar2 - iVar1;
  return CONCAT44(auStack_10[0],(uint)(uVar3 <= DAT_001bb430) - ((int)uVar3 >> 0x1f));
}


