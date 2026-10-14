/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029e214 DataInputStream::readShort */

/* DataInputStream::readShort() */

int __thiscall DataInputStream::readShort(DataInputStream *this)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = (**(code **)(**(int **)(this + 4) + 0x18))();
  uVar1 = (**(code **)(**(int **)(this + 4) + 0x18))();
  return (int)(short)(uVar1 & 0xff | (ushort)(iVar2 << 8));
}


