/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011fa20 GameStateCafe::cancelAllEdits */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0011fa2e) */
/* WARNING: Removing unreachable block (ram,0x0011fa2e) */
/* GameStateCafe::cancelAllEdits() */

void __thiscall GameStateCafe::cancelAllEdits(GameStateCafe *this)

{
  switch(this[DAT_0011fa5c]) {
  case (GameStateCafe)0x7:
  case (GameStateCafe)0xa:
  case (GameStateCafe)0xd:
    if (*(int **)(this + 0x40) != (int *)0x0) {
      (**(code **)(**(int **)(this + 0x40) + 4))();
      *(undefined4 *)(this + 0x40) = 0;
    }
    *(undefined2 *)(this + 0x16c) = 0;
    break;
  default:
    undoEdits(this);
    break;
  case (GameStateCafe)0x9:
    break;
  }
  return;
}


