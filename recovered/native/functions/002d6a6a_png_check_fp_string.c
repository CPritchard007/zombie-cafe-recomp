/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d6a6a png_check_fp_string */

undefined8 png_check_fp_string(int param_1,int param_2)

{
  int iVar1;
  int local_18;
  int local_14;
  
  local_18 = 0;
  local_14 = 0;
  iVar1 = png_check_fp_number(param_1,param_2,&local_18,&local_14);
  if ((iVar1 != 0) && ((local_14 == param_2 || (iVar1 = 0, *(char *)(param_1 + local_14) == '\0'))))
  {
    iVar1 = local_18;
  }
  return CONCAT44(local_18,iVar1);
}


