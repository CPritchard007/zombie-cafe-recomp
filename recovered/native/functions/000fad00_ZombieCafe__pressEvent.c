/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000fad00 ZombieCafe::pressEvent */

/* ZombieCafe::pressEvent() const */

uint __thiscall ZombieCafe::pressEvent(ZombieCafe *this)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)(this + DAT_000fad64);
  if ((((uVar1 != 0) && (uVar1 = 0, *(int *)(this + 0x4b8) == 0)) &&
      (*(int *)(this + DAT_000fad6c) <= (int)**(short **)(DAT_000fad68 + 0xfad1e))) &&
     (*(int *)(this + 0x4d0) <= **(int **)(DAT_000fad70 + 0xfad34))) {
    iVar2 = __aeabi_fcmpgt(*(undefined4 *)(this + DAT_000fad74),0);
    if (iVar2 == 0) {
      uVar1 = 1;
    }
    else {
      iVar2 = __aeabi_fcmpgt(*(undefined4 *)(this + 0x4c0),0);
      uVar1 = iVar2 != 0 ^ 1;
    }
  }
  return uVar1;
}


