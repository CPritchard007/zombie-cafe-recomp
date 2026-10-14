/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000ccdf0 CharacterCommandBar::addReviveButton */

/* CharacterCommandBar::addReviveButton(void (*)(void*, ScreenElement*), void*) */

int __thiscall
CharacterCommandBar::addReviveButton
          (CharacterCommandBar *this,_func_void_void_ptr_ScreenElement_ptr *param_1,void *param_2)

{
  int iVar1;
  ZombieCafe *this_00;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  
  iVar1 = enableButton(this,4,param_1,param_2);
  this_00 = *(ZombieCafe **)(this + 0x60);
  if ((((*(int *)(this_00 + DAT_000cceb0) < 1) || (this_00[0x9f0] == (ZombieCafe)0x0)) ||
      (this_00[DAT_000cceb4] != (ZombieCafe)0x0)) &&
     (((*(int *)(this_00 + DAT_000cceb8) < 1 || (this_00[DAT_000ccebc] == (ZombieCafe)0x0)) ||
      (this_00[DAT_000ccec0] != (ZombieCafe)0x0)))) {
    iVar6 = ZombieCafe::getToxin(this_00);
    *(byte *)(iVar1 + 0x86) = (byte)((uint)((iVar6 >> 0x1f) - iVar6) >> 0x1f);
  }
  else {
    *(undefined1 *)(iVar1 + 0x86) = 1;
  }
  piVar5 = *(int **)(*(int *)(*(int *)(this + 0x7c) + 0x10) + 0xc);
  iVar6 = *(int *)(DAT_000ccec4 + 0xcce5e);
  if (*(char *)(*(int *)(this + 0x60) + DAT_000ccec8) == '\0') {
    pcVar7 = *(code **)(*piVar5 + 0x14);
    iVar2 = SmDev();
    uVar3 = __fixsfsi(*(undefined4 *)(iVar6 + iVar2 * 4));
    iVar6 = SmDev();
    uVar4 = __fixsfsi(*(undefined4 *)(iVar6 * 4 + *(int *)(DAT_000ccecc + 0xcce9c)));
  }
  else {
    pcVar7 = *(code **)(*piVar5 + 0x14);
    iVar2 = SmDev();
    uVar3 = __fixsfsi(*(undefined4 *)(iVar6 + iVar2 * 4));
    uVar4 = 0x5a;
  }
  (*pcVar7)(piVar5,uVar3,uVar4);
  return iVar1;
}


