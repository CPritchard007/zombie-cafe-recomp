/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029e248 DataInputStream::readUnsignedShort */

/* DataInputStream::readUnsignedShort() */

uint __thiscall DataInputStream::readUnsignedShort(DataInputStream *this)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (**(code **)(**(int **)(this + 4) + 0x18))();
  uVar2 = (**(code **)(**(int **)(this + 4) + 0x18))();
  return uVar2 & 0xff | (uint)(iVar1 << 0x18) >> 0x10;
}


