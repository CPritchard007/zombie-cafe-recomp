/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bf230 CCCarousel::GetNextClosestSelection */

/* CCCarousel::GetNextClosestSelection(ccCarousel*) */

uint CCCarousel::GetNextClosestSelection(ccCarousel *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 8);
  uVar4 = 1;
  if (iVar5 != 0) {
    __addsf3(*(undefined4 *)(param_1 + 4),0x3f000000);
    iVar1 = __fixsfsi();
    uVar4 = iVar5 - 1;
    if (iVar5 != iVar1) {
      uVar2 = GetButtonScale(param_1,uVar4);
      uVar3 = GetButtonScale(param_1,*(int *)(param_1 + 8) + 1);
      iVar5 = __aeabi_fcmpgt(uVar2,uVar3);
      uVar4 = *(int *)(param_1 + 8) - 1;
      if (iVar5 == 0) {
        uVar4 = *(int *)(param_1 + 8) + 1;
      }
    }
  }
  return uVar4;
}


