/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029e10c DataInputStream::readBoolean */

/* DataInputStream::readBoolean() */

bool __thiscall DataInputStream::readBoolean(DataInputStream *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(**(int **)(this + 4) + 0x18))();
  return iVar1 != 0;
}


