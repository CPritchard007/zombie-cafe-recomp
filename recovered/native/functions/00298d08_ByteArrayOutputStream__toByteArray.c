/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00298d08 ByteArrayOutputStream::toByteArray */

/* ByteArrayOutputStream::toByteArray() */

void __thiscall ByteArrayOutputStream::toByteArray(ByteArrayOutputStream *this)

{
  void *pvVar1;
  int iVar2;
  
  pvVar1 = operator_new__(*(int *)(this + 8) + 1);
  for (iVar2 = 0; iVar2 < *(int *)(this + 8) + 1; iVar2 = iVar2 + 1) {
    *(undefined1 *)((int)pvVar1 + iVar2) = *(undefined1 *)(*(int *)(this + 0xc) + iVar2);
  }
  return;
}


