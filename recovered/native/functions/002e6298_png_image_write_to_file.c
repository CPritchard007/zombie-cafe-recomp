/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e6298 png_image_write_to_file */

undefined4
png_image_write_to_file
          (int param_1,char *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  FILE *__stream;
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uVar4;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 4) == 1) {
    if (param_2 == (char *)0x0) {
      pcVar3 = (char *)(DAT_002e6354 + 0x2e633e);
    }
    else {
      __stream = fopen(param_2,(char *)(DAT_002e6350 + 0x2e62bc));
      if (__stream == (FILE *)0x0) {
        piVar2 = (int *)__errno();
        pcVar3 = strerror(*piVar2);
      }
      else {
        iVar1 = png_image_write_to_stdio(param_1,__stream,param_3,param_4,param_5,param_6);
        if (iVar1 == 0) {
          fclose(__stream);
          remove(param_2);
          return 0;
        }
        iVar1 = fflush(__stream);
        if ((iVar1 == 0) && (-1 < (int)((uint)*(ushort *)&__stream->_IO_read_base << 0x19))) {
          iVar1 = fclose(__stream);
          if (iVar1 == 0) {
            return 1;
          }
          piVar2 = (int *)__errno();
          iVar1 = *piVar2;
        }
        else {
          piVar2 = (int *)__errno();
          iVar1 = *piVar2;
          fclose(__stream);
        }
        remove(param_2);
        pcVar3 = strerror(iVar1);
      }
    }
  }
  else {
    pcVar3 = (char *)(DAT_002e6358 + 0x2e6344);
  }
  uVar4 = png_image_error(param_1,pcVar3);
  return uVar4;
}


