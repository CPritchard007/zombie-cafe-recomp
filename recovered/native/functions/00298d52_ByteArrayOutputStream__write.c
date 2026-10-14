/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00298d52 ByteArrayOutputStream::write */

/* ByteArrayOutputStream::write(unsigned char*, int) */

void __thiscall ByteArrayOutputStream::write(ByteArrayOutputStream *this,uchar *param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < param_2; iVar1 = iVar1 + 1) {
    Vector<unsigned_char>::addElement((Vector<unsigned_char> *)(this + 4),param_1[iVar1]);
  }
  return;
}


