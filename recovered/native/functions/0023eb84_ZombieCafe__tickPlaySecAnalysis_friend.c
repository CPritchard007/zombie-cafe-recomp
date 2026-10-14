/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023eb84 ZombieCafe::tickPlaySecAnalysis_friend */

/* ZombieCafe::tickPlaySecAnalysis_friend(long) */

void __thiscall ZombieCafe::tickPlaySecAnalysis_friend(ZombieCafe *this,long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(this + 0x58);
  uVar1 = __divsf3(uVar3,DAT_0023ebc4);
  iVar2 = __aeabi_fcmpgt(uVar1,DAT_0023ebc8);
  if (iVar2 == 0) {
    uVar1 = __floatsisf(param_1);
    uVar1 = __divsf3(uVar1,DAT_0023ebc4);
    iVar2 = __aeabi_fcmpgt(uVar1,DAT_0023ebc8);
    if (iVar2 == 0) {
      uVar1 = __addsf3(uVar3,uVar1);
      *(undefined4 *)(this + 0x58) = uVar1;
    }
  }
  return;
}


