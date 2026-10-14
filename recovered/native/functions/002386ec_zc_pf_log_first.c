/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002386ec zc_pf_log_first */

/* zc_pf_log_first(int, char const*, unsigned int, char const*, ...) */

undefined8 zc_pf_log_first(int param_1,char *param_2,uint param_3,char *param_4,...)

{
  int iVar1;
  
  iVar1 = zc_pf_is_first();
  if (iVar1 != 0) {
    FUN_00238610(param_1,param_4);
    zc_pf_set_first(false);
    param_2 = (char *)register0x00000054;
  }
  return CONCAT44(param_2,param_1);
}


