/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00298d6e ByteArrayOutputStream::write */

/* ByteArrayOutputStream::write(unsigned char) */

void __thiscall ByteArrayOutputStream::write(ByteArrayOutputStream *this,uchar param_1)

{
  Vector<unsigned_char>::addElement((Vector<unsigned_char> *)(this + 4),param_1);
  return;
}


