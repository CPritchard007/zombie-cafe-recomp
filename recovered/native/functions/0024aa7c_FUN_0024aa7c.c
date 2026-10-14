/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024aa7c FUN_0024aa7c */

char * FUN_0024aa7c(char *param_1,char *param_2)

{
  *(char **)(param_1 + 0x10) = param_1;
  *(char **)(param_1 + 0x14) = param_1;
  strlen(param_2);
  std::string::_M_range_initialize(param_1,param_2);
  return param_1;
}


