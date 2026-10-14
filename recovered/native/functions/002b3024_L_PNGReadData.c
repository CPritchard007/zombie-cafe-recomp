/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b3024 L_PNGReadData */

/* L_PNGReadData(png_struct_def*, unsigned char*, unsigned int) */

void L_PNGReadData(png_struct_def *param_1,uchar *param_2,uint param_3)

{
  int *piVar1;
  
  piVar1 = (int *)png_get_io_ptr();
  memcpy(param_2,(void *)(*piVar1 + piVar1[1]),param_3);
  piVar1[1] = piVar1[1] + param_3;
  return;
}


