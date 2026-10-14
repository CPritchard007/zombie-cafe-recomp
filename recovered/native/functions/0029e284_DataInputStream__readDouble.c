/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029e284 DataInputStream::readDouble */

/* DataInputStream::readDouble() */

undefined8 DataInputStream::readDouble(void)

{
  undefined1 uVar1;
  DataInputStream *in_r0;
  undefined4 in_r1;
  int iVar2;
  DataInputStream *local_18;
  undefined4 local_14;
  
  iVar2 = 0;
  local_18 = in_r0;
  local_14 = in_r1;
  do {
    uVar1 = readByte(in_r0);
    *(undefined1 *)((int)&local_18 + iVar2) = uVar1;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 8);
  return CONCAT44(local_14,local_18);
}


