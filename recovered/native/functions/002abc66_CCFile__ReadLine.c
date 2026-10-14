/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002abc66 CCFile::ReadLine */

/* CCFile::ReadLine(void*, char*, unsigned int) */

uint CCFile::ReadLine(void *param_1,char *param_2,uint param_3)

{
  size_t sVar1;
  uint uVar2;
  char local_19 [5];
  
  uVar2 = 0;
  while( true ) {
                    /* WARNING: Load size is inaccurate */
    sVar1 = fread(local_19,1,1,*param_1);
    if (sVar1 == 0) {
      return uVar2;
    }
    if (uVar2 == param_3) break;
    if (local_19[0] == '\n') {
      param_2[uVar2] = '\0';
      return uVar2 + 1;
    }
    param_2[uVar2] = local_19[0];
    uVar2 = uVar2 + 1;
  }
  param_2[uVar2 - 1] = '\0';
  return uVar2;
}


