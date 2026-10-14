/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e51e0 png_convert_from_time_t */

undefined8 png_convert_from_time_t(undefined4 param_1,time_t param_2)

{
  tm *ptVar1;
  time_t local_c;
  
  local_c = param_2;
  ptVar1 = gmtime(&local_c);
  png_convert_from_struct_tm(param_1,ptVar1);
  return CONCAT44(local_c,param_1);
}


