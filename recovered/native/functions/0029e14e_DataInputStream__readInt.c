/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029e14e DataInputStream::readInt */

/* DataInputStream::readInt() */

uint __thiscall DataInputStream::readInt(DataInputStream *this)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = (**(code **)(**(int **)(this + 4) + 0x18))();
  uVar2 = (**(code **)(**(int **)(this + 4) + 0x18))();
  iVar3 = (**(code **)(**(int **)(this + 4) + 0x18))();
  uVar4 = (**(code **)(**(int **)(this + 4) + 0x18))();
  return uVar4 & 0xff | iVar1 << 0x18 | (uVar2 & 0xff) << 0x10 | (uint)(iVar3 << 0x18) >> 0x10;
}


