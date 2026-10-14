/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d56d0 FUN_002d56d0 */

int FUN_002d56d0(undefined4 *param_1)

{
  FILE *__stream;
  int iVar1;
  int *piVar2;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int local_24;
  int iStack_20;
  uint local_1c;
  undefined1 auStack_18 [4];
  
  piVar2 = (int *)*param_1;
  iVar1 = *piVar2;
  if (iVar1 != 0) {
    if ((*(byte *)(piVar2 + 5) & 2) != 0) {
      __stream = *(FILE **)(iVar1 + 0x120);
      *(byte *)(piVar2 + 5) = *(byte *)(piVar2 + 5) & 0xfd;
      if (__stream != (FILE *)0x0) {
        *(undefined4 *)(iVar1 + 0x120) = 0;
        fclose(__stream);
      }
    }
    local_30 = *piVar2;
    iStack_2c = piVar2[1];
    iStack_28 = piVar2[2];
    local_24 = piVar2[3];
    iStack_20 = piVar2[4];
    local_1c = piVar2[5];
    *param_1 = &local_30;
    png_free(local_30,piVar2,piVar2 + 6,auStack_18);
    if ((local_1c & 1) == 0) {
      png_destroy_read_struct(&local_30,&iStack_2c);
    }
    else {
      png_destroy_write_struct();
    }
    iVar1 = 1;
  }
  return iVar1;
}


