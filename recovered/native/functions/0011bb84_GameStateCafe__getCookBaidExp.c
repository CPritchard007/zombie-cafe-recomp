/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011bb84 GameStateCafe::getCookBaidExp */

/* GameStateCafe::getCookBaidExp(Stove*) */

undefined4 __thiscall GameStateCafe::getCookBaidExp(GameStateCafe *this,Stove *param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0011bbd4;
  if ((uint)**(ushort **)(param_1 + 100) < (uint)*(byte *)(*(int *)(this + 0xc) + DAT_0011bbc8)) {
    uVar1 = Recipe::getCookTimeSeconds
                      ((Recipe *)
                       (*(int *)(*(int *)(this + 0xc) + 0x4e8) +
                       (uint)**(ushort **)(param_1 + 100) * 0x1c),'\0');
    __divsi3(uVar1,10);
    uVar1 = __floatsisf();
    uVar1 = __divsf3(DAT_0011bbcc,uVar1);
    uVar1 = __divsf3(DAT_0011bbd0,uVar1);
  }
  return uVar1;
}


