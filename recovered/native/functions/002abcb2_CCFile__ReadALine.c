/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002abcb2 CCFile::ReadALine */

/* CCFile::ReadALine(void*, char*, unsigned int) */

bool CCFile::ReadALine(void *param_1,char *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  do {
                    /* WARNING: Load size is inaccurate */
    iVar1 = getc(*param_1);
    param_2[uVar2] = (char)iVar1;
    uVar2 = uVar2 + 1;
    if (param_3 <= uVar2) {
      return false;
    }
  } while (((iVar1 != 0) && (iVar1 != 10)) && (iVar1 != -1));
  return iVar1 != -1;
}


