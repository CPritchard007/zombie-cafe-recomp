/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e38b8 png_set_PLTE */

void png_set_PLTE(int param_1,int param_2,void *param_3,uint param_4)

{
  void *__dest;
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  if (param_4 < 0x101) {
    if ((((int)param_4 < 1) || (param_3 != (void *)0x0)) &&
       ((param_4 != 0 || (*(int *)(param_1 + 0x328) << 0x1f < 0)))) goto LAB_002e3908;
    iVar1 = DAT_002e3968 + 0x2e3904;
  }
  else {
    if (*(char *)(param_2 + 0x19) != '\x03') {
      png_warning(param_1,DAT_002e3964 + 0x2e38e4,param_3,*(char *)(param_2 + 0x19),param_4);
      return;
    }
    iVar1 = DAT_002e3960 + 0x2e38de;
  }
  png_error(param_1,iVar1);
LAB_002e3908:
  png_free_data(param_1,param_2,0x1000,0);
  __dest = (void *)png_calloc(param_1,0x300);
  *(void **)(param_1 + 0x204) = __dest;
  if (param_4 != 0) {
    memcpy(__dest,param_3,param_4 * 3);
  }
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(param_1 + 0x204);
  *(short *)(param_1 + 0x208) = (short)param_4;
  *(short *)(param_2 + 0x14) = (short)param_4;
  *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) | 0x1000;
  *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 8;
  return;
}


