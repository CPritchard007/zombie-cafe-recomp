/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002390c0 ZombieCafe::pointerDragged */

/* ZombieCafe::pointerDragged(long*, int) */

void __thiscall ZombieCafe::pointerDragged(ZombieCafe *this,long *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  float __x;
  
  if ((*(void **)(this + DAT_00239170) != (void *)0xffffffff) &&
     ((iVar1 = CCFacebook::IsDialogVisible(*(void **)(this + DAT_00239170)), iVar1 == 0 ||
      (iVar1 = SmDev(), iVar1 != 4)))) {
    if (param_2 == 1) {
      *(long *)(this + DAT_00239174) = *param_1;
    }
    else if (param_2 == 2) {
      uVar3 = *param_1 - param_1[1];
      iVar1 = (int)(uVar3 & 0xffff |
                   (((uint)*param_1 >> 0x10) - ((uint)param_1[1] >> 0x10)) * 0x10000) >> 0x10;
      iVar4 = (int)(short)uVar3;
      uVar2 = __floatsisf(iVar1 * iVar1 + iVar4 * iVar4);
      sqrtf(__x);
      *(undefined4 *)(this + 0x4c8) = uVar2;
      uVar3 = param_1[1] + *param_1;
      uVar2 = __floatsisf((int)((((uint)param_1[1] >> 0x10) + ((uint)*param_1 >> 0x10)) * 0x10000 |
                               uVar3 & 0xffff) >> 0x10);
      __mulsf3(uVar2,0x3f000000);
      iVar1 = __fixsfsi();
      uVar2 = __floatsisf((int)(short)uVar3);
      __mulsf3(uVar2,0x3f000000);
      uVar3 = __fixsfsi();
      *(uint *)(this + DAT_00239174) = iVar1 << 0x10 | uVar3 & 0xffff;
    }
  }
  return;
}


