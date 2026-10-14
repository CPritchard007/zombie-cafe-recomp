/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002abd40 CCFile::Exists */

/* CCFile::Exists(char const*) */

FILE * CCFile::Exists(char *param_1)

{
  FILE *__stream;
  
  __stream = fopen(param_1,(char *)(DAT_002abd58 + 0x2abd48));
  if (__stream != (FILE *)0x0) {
    fclose(__stream);
    __stream = (FILE *)0x1;
  }
  return __stream;
}


