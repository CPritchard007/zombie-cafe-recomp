/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029e26a DataInputStream::readFloat */

/* DataInputStream::readFloat() */

undefined8 DataInputStream::readFloat(void)

{
  undefined1 uVar1;
  DataInputStream *in_r0;
  undefined4 in_r1;
  int iVar2;
  undefined4 local_14 [2];
  
  iVar2 = 0;
  local_14[0] = in_r1;
  do {
    uVar1 = readByte(in_r0);
    *(undefined1 *)((int)local_14 + iVar2) = uVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  return CONCAT44(in_r0,local_14[0]);
}


