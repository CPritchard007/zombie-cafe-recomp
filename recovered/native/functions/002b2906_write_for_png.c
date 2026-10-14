/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b2906 write_for_png */

/* write_for_png(png_struct_def*, unsigned char*, unsigned int) */

void write_for_png(png_struct_def *param_1,uchar *param_2,uint param_3)

{
  void *pvVar1;
  
  pvVar1 = (void *)png_get_io_ptr();
  CCFile::Write(pvVar1,param_2,param_3);
  return;
}


