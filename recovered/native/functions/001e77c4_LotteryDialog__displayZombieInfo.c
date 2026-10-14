/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e77c4 LotteryDialog::displayZombieInfo */

/* LotteryDialog::displayZombieInfo() */

void __thiscall LotteryDialog::displayZombieInfo(LotteryDialog *this)

{
  *(undefined1 *)(*(int *)(*(int *)(this + 100) + 0xb0) + 0x60) = 1;
  CharacterDetails::setCharacter
            (*(CharacterDetails **)(*(int *)(this + 100) + 0xb0),
             *(Character **)(*(int *)(*(int *)(this + 100) + 0x54) + 0x8c));
  (**(code **)(**(int **)(*(int *)(this + 100) + 0xb0) + 0x20))
            (*(int **)(*(int *)(this + 100) + 0xb0),1);
  return;
}


