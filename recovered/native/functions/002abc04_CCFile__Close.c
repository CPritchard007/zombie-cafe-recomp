/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002abc04 CCFile::Close */

/* CCFile::Close(void*) */

void CCFile::Close(void *param_1)

{
                    /* WARNING: Load size is inaccurate */
  if (*param_1 != (FILE *)0x0) {
    fclose(*param_1);
  }
  free(param_1);
  return;
}


