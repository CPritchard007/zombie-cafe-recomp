/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001fe43c ObjectiveSystem::getRatingBonus */

/* ObjectiveSystem::getRatingBonus() */

void ObjectiveSystem::getRatingBonus(void)

{
  int in_r0;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(in_r0 + 0x18);
  if (2 < iVar1) {
    iVar1 = 3;
  }
  uVar2 = __floatsisf(iVar1);
  __mulsf3(uVar2,**(undefined4 **)(DAT_001fe458 + 0x1fe450));
  return;
}


