/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002abd5c CCFile::Rename */

/* CCFile::Rename(char const*, char const*) */

bool CCFile::Rename(char *param_1,char *param_2)

{
  int iVar1;
  
  iVar1 = rename(param_1,param_2);
  return iVar1 == 0;
}


