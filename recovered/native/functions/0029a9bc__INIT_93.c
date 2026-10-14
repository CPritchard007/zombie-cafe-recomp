/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029a9bc _INIT_93 */

void _INIT_93(void)

{
  undefined4 *puVar1;
  undefined4 in_r3;
  int iVar2;
  Vector<unsigned_short> *pVVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar2 = DAT_0029aa10 + 0x29a9c6;
  puVar1 = *(undefined4 **)(iVar2 + DAT_0029aa14);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = *(undefined4 **)(iVar2 + DAT_0029aa18);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  pVVar3 = *(Vector<unsigned_short> **)(iVar2 + DAT_0029aa1c);
  Vector<unsigned_short>::Vector(pVVar3);
  uVar4 = *(undefined4 *)(iVar2 + DAT_0029aa20);
  uVar5 = *(undefined4 *)(iVar2 + DAT_0029aa24);
  __aeabi_atexit(pVVar3,uVar4,uVar5,DAT_0029aa24,in_r3);
  pVVar3 = *(Vector<unsigned_short> **)(iVar2 + DAT_0029aa28);
  Vector<unsigned_short>::Vector(pVVar3);
  __aeabi_atexit(pVVar3,uVar4,uVar5);
  return;
}


