/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002abd2e CCFile::IsEOF */

/* CCFile::IsEOF(void*) */

uint CCFile::IsEOF(void *param_1)

{
                    /* WARNING: Load size is inaccurate */
  return ((uint)*(ushort *)(*param_1 + 0xc) << 0x1a) >> 0x1f;
}


