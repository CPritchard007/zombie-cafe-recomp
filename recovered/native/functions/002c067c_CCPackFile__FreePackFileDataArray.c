/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c067c CCPackFile::FreePackFileDataArray */

/* CCPackFile::FreePackFileDataArray(unsigned char*) */

bool CCPackFile::FreePackFileDataArray(uchar *param_1)

{
  if (param_1 + -1 < (uchar *)0xfffffffe) {
    free(param_1);
  }
  return param_1 + -1 < (uchar *)0xfffffffe;
}


