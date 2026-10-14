/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002abd02 CCFile::GetSize */

/* CCFile::GetSize(void*) */

long CCFile::GetSize(void *param_1)

{
  long __off;
  long lVar1;
  
                    /* WARNING: Load size is inaccurate */
  __off = ftell(*param_1);
                    /* WARNING: Load size is inaccurate */
  fseek(*param_1,0,2);
                    /* WARNING: Load size is inaccurate */
  lVar1 = ftell(*param_1);
                    /* WARNING: Load size is inaccurate */
  fseek(*param_1,__off,0);
  return lVar1;
}


