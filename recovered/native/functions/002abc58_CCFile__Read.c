/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002abc58 CCFile::Read */

/* CCFile::Read(void*, void*, unsigned int) */

void CCFile::Read(void *param_1,void *param_2,uint param_3)

{
                    /* WARNING: Load size is inaccurate */
  fread(param_2,1,param_3,*param_1);
  return;
}


