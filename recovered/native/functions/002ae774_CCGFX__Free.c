/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ae774 CCGFX::Free */

/* CCGFX::Free() */

undefined8 __thiscall CCGFX::Free(CCGFX *this)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_002ae7b8 + 0x2ae780);
  puVar1 = (undefined4 *)(iVar2 + 0x1dc);
  do {
    glDeleteProgram(*puVar1);
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 != (undefined4 *)(iVar2 + 0x214));
  puVar1 = (undefined4 *)(iVar2 + 0x214);
  do {
    glDeleteProgram(*puVar1);
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  } while (puVar1 != (undefined4 *)(iVar2 + 0x244));
  return CONCAT44(iVar2,this);
}


