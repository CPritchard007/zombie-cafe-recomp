/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c74b0 CharacterInstance::groan */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x000c74d4) */
/* WARNING (jumptable): Removing unreachable block (ram,0x000c74f6) */
/* WARNING: Removing unreachable block (ram,0x000c74d4) */
/* WARNING: Removing unreachable block (ram,0x000c74f6) */
/* CharacterInstance::groan() */

void __thiscall CharacterInstance::groan(CharacterInstance *this)

{
  int iVar1;
  undefined4 uVar2;
  float extraout_s0;
  
  iVar1 = CapcomApp::getInstance();
  iVar1 = *(int *)(iVar1 + 4);
  uVar2 = CapcomMath::random(5);
  if (*(char *)(**(int **)(this + 0x8c) + DAT_000c751c) == '\0') {
    switch(uVar2) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
    }
  }
  else {
    switch(uVar2) {
    case 0:
      break;
    case 1:
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
    }
  }
  ZombieCafe::playEffect(iVar1,extraout_s0);
  return;
}


