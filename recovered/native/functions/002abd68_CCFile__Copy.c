/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002abd68 CCFile::Copy */

/* CCFile::Copy(char const*, char const*) */

undefined8 __thiscall CCFile::Copy(CCFile *this,char *param_1,char *param_2)

{
  FILE *__stream;
  FILE *__s;
  size_t sVar1;
  undefined4 uStack_1c;
  char *pcStack_18;
  
  uStack_1c = param_1;
  pcStack_18 = param_2;
  __stream = fopen((char *)this,(char *)(DAT_002abddc + 0x2abd72));
  if (__stream != (FILE *)0x0) {
    __s = fopen(param_1,(char *)(DAT_002abde0 + 0x2abd82));
    if (__s == (FILE *)0x0) {
      fclose(__stream);
      __stream = (FILE *)0x0;
    }
    else {
      do {
        sVar1 = fread((void *)((int)&uStack_1c + 3),1,1,__stream);
        if (sVar1 == 0) {
          fclose(__stream);
          fclose(__s);
          __stream = (FILE *)0x1;
          goto LAB_002abdd8;
        }
        sVar1 = fwrite((void *)((int)&uStack_1c + 3),1,1,__s);
      } while (sVar1 != 0);
      fclose(__stream);
      fclose(__s);
      ::remove(param_1);
      __stream = (FILE *)0x0;
    }
  }
LAB_002abdd8:
  return CONCAT44(this,__stream);
}


