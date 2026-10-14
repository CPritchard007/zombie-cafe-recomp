/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002550ec ZombieCafeGameState::sendMessage */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x002550fa) */
/* WARNING: Removing unreachable block (ram,0x002550fa) */
/* ZombieCafeGameState::sendMessage(int) */

undefined4 __thiscall ZombieCafeGameState::sendMessage(ZombieCafeGameState *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  
  uVar1 = 0;
  if (param_1 - 1U < 8) {
    iVar2 = *(int *)this;
    switch(param_1) {
    case 1:
      pcVar3 = *(code **)(iVar2 + 0x38);
      break;
    case 2:
      pcVar3 = *(code **)(iVar2 + 0x3c);
      break;
    case 3:
      pcVar3 = *(code **)(iVar2 + 0x40);
      break;
    case 4:
      pcVar3 = *(code **)(iVar2 + 0x48);
      break;
    case 5:
      pcVar3 = *(code **)(iVar2 + 0x44);
      break;
    case 6:
      pcVar3 = *(code **)(iVar2 + 0x4c);
      break;
    case 7:
      pcVar3 = *(code **)(iVar2 + 0x50);
      break;
    case 8:
      pcVar3 = *(code **)(iVar2 + 0x54);
    }
    (*pcVar3)(this);
    uVar1 = 1;
  }
  return uVar1;
}


