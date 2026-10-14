/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0011e3f0 GameStateCafe::~GameStateCafe */

/* GameStateCafe::~GameStateCafe() */

GameStateCafe * __thiscall GameStateCafe::~GameStateCafe(GameStateCafe *this)

{
  void *pvVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = DAT_0011e4cc + 0x11e3fc;
  *(int *)this = *(int *)(iVar2 + DAT_0011e4d0) + 8;
  String::~String((String *)(this + 0x188));
  if (*(void **)(this + 0x180) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x180));
  }
  if (*(int *)(this + 0x154) != 0) {
    while (pvVar1 = *(void **)(this + 0x148), pvVar1 != (void *)0x0) {
      uVar3 = *(undefined4 *)((int)pvVar1 + 4);
      operator_delete(pvVar1);
      *(undefined4 *)(this + 0x148) = uVar3;
    }
    *(undefined4 *)(this + 0x154) = 0;
    *(GameStateCafe **)(this + 0x14c) = this + 0x144;
    *(undefined4 *)(this + 0x150) = 0;
  }
  Vector<CharacterInstance*>::~Vector((Vector<CharacterInstance*> *)(this + 0x6c));
  Vector<CharacterInstance*>::~Vector((Vector<CharacterInstance*> *)(this + 0x34));
  Vector<CharacterInstance*>::~Vector((Vector<CharacterInstance*> *)(this + 0x28));
  Vector<CharacterInstance*>::~Vector((Vector<CharacterInstance*> *)(this + 0x1c));
  *(int *)this = *(int *)(iVar2 + DAT_0011e4d4) + 8;
  return this;
}


