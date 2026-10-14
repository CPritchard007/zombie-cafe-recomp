/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029dafa CImage::setPadding */

/* CImage::setPadding(short, short, short, short) */

void __thiscall
CImage::setPadding(CImage *this,short param_1,short param_2,short param_3,short param_4)

{
  *(short *)(this + 0x24) = param_1;
  *(short *)(this + 0x26) = param_2;
  *(short *)(this + 0x28) = param_3;
  *(short *)(this + 0x2a) = param_4;
  return;
}


