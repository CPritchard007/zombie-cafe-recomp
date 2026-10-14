/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cced0 CharacterCommandBar::addHealButton */

/* CharacterCommandBar::addHealButton(void (*)(void*, ScreenElement*), void*) */

int __thiscall
CharacterCommandBar::addHealButton
          (CharacterCommandBar *this,_func_void_void_ptr_ScreenElement_ptr *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  code *pcVar7;
  
  iVar1 = enableButton(this,3,param_1,param_2);
  iVar2 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0x60));
  *(byte *)(iVar1 + 0x86) = (byte)((uint)((iVar2 >> 0x1f) - iVar2) >> 0x1f);
  piVar6 = *(int **)(*(int *)(*(int *)(this + 0x7c) + 0xc) + 0xc);
  iVar2 = *(int *)(DAT_000ccf54 + 0xccf02);
  if (*(char *)(*(int *)(this + 0x60) + DAT_000ccf58) == '\0') {
    pcVar7 = *(code **)(*piVar6 + 0x14);
    iVar3 = SmDev();
    uVar4 = __fixsfsi(*(undefined4 *)(iVar2 + iVar3 * 4));
    iVar2 = SmDev();
    uVar5 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + *(int *)(DAT_000ccf5c + 0xccf40)));
  }
  else {
    pcVar7 = *(code **)(*piVar6 + 0x14);
    iVar3 = SmDev();
    uVar4 = __fixsfsi(*(undefined4 *)(iVar2 + iVar3 * 4));
    uVar5 = 0x5a;
  }
  (*pcVar7)(piVar6,uVar4,uVar5);
  return iVar1;
}


