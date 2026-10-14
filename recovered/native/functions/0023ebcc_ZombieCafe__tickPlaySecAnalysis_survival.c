/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023ebcc ZombieCafe::tickPlaySecAnalysis_survival */

/* ZombieCafe::tickPlaySecAnalysis_survival(long) */

void __thiscall ZombieCafe::tickPlaySecAnalysis_survival(ZombieCafe *this,long param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)(this + 0x5c);
  uVar1 = __divsf3(uVar3,DAT_0023ec0c);
  iVar2 = __aeabi_fcmpgt(uVar1,DAT_0023ec10);
  if (iVar2 == 0) {
    uVar1 = __floatsisf(param_1);
    uVar1 = __divsf3(uVar1,DAT_0023ec0c);
    iVar2 = __aeabi_fcmpgt(uVar1,DAT_0023ec10);
    if (iVar2 == 0) {
      uVar1 = __addsf3(uVar3,uVar1);
      *(undefined4 *)(this + 0x5c) = uVar1;
    }
  }
  return;
}


