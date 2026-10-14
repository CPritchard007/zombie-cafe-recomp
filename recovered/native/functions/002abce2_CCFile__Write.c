/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002abce2 CCFile::Write */

/* CCFile::Write(void*, void const*, unsigned int) */

bool CCFile::Write(void *param_1,void *param_2,uint param_3)

{
  size_t sVar1;
  
                    /* WARNING: Load size is inaccurate */
  sVar1 = fwrite(param_2,param_3,1,*param_1);
  return sVar1 != 0;
}


