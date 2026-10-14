/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002abcf6 CCFile::Seek */

/* CCFile::Seek(void*, unsigned int) */

void CCFile::Seek(void *param_1,uint param_2)

{
                    /* WARNING: Load size is inaccurate */
  fseek(*param_1,param_2,0);
  return;
}


