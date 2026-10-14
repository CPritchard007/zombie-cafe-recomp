/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00298d30 ByteArrayOutputStream::write */

/* ByteArrayOutputStream::write(unsigned char*, int, int) */

undefined8 __thiscall
ByteArrayOutputStream::write(ByteArrayOutputStream *this,uchar *param_1,int param_2,int param_3)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 < param_3; iVar1 = iVar1 + 1) {
    Vector<unsigned_char>::addElement((Vector<unsigned_char> *)(this + 4),param_1[iVar1 + param_2]);
  }
  return CONCAT44(param_3,this);
}


