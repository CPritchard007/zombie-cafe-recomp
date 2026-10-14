/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00120b00 GameStateCafe::onHudButtonPress */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00120b94) */
/* WARNING: Removing unreachable block (ram,0x00120b94) */
/* GameStateCafe::onHudButtonPress(GameStateCafe*, int, bool) */

void GameStateCafe::onHudButtonPress(GameStateCafe *param_1,int param_2,bool param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  TutorialArrow *this;
  undefined8 uVar4;
  
  uVar4 = CONCAT44(param_2,param_1);
  if (!param_3) {
    if (param_2 == 0) {
      uVar4 = FUN_001213f6();
    }
    this = *(TutorialArrow **)((int)uVar4 + 0xc4);
    if (this[0x14] == (TutorialArrow)0x0) {
      uVar4 = FUN_001213f6();
    }
    iVar1 = HudElement::getButton
                      (*(HudElement **)((int)uVar4 + 200),(int)((ulonglong)uVar4 >> 0x20));
    iVar2 = TutorialArrow::attachedToScreenElement(this);
    if (iVar2 == 0) {
      FUN_00121372();
    }
    if (*(int *)(this + 100) == iVar1) {
      FUN_001213f6();
    }
    FUN_00121372();
    uVar3 = (uint)*(byte *)(*(int *)(param_1 + 0x84) + 100);
    if (uVar3 == 1) {
      FUN_00121372();
    }
    if (uVar3 == 2) {
      FUN_00121372();
    }
    if ((byte)param_1[DAT_00120e04] < 0xb) {
      if ((1 << (uint)(byte)param_1[DAT_00120e04] & DAT_00120e08) != 0) {
        FUN_00121372();
      }
    }
  }
  if (0x1b < (uint)param_2) {
    FUN_00121370();
  }
                    /* WARNING: Could not recover jumptable at 0x00120b94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_00120b99 + (uint)*(ushort *)(&UNK_00120b98 + param_2 * 2) * 2))();
  return;
}


