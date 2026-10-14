/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e3d40 png_set_tRNS */

undefined8 png_set_tRNS(int param_1,int param_2,void *param_3,size_t param_4,void *param_5)

{
  ushort uVar1;
  void *__dest;
  int iVar2;
  
  if ((param_2 == 0) || (param_1 == 0)) goto LAB_002e3dec;
  if (param_3 != (void *)0x0) {
    png_free_data(param_1,param_2,0x2000);
    __dest = (void *)png_malloc(param_1,0x100);
    *(void **)(param_2 + 0x9c) = __dest;
    *(void **)(param_1 + 0x274) = __dest;
    if (param_4 - 1 < 0x100) {
      memcpy(__dest,param_3,param_4);
    }
  }
  if (param_5 != (void *)0x0) {
    iVar2 = 1 << *(sbyte *)(param_2 + 0x18);
    if (*(char *)(param_2 + 0x19) == '\0') {
      uVar1 = *(ushort *)((int)param_5 + 8);
LAB_002e3db2:
      if (iVar2 < (int)(uint)uVar1) {
LAB_002e3db6:
        png_warning(param_1,DAT_002e3df0 + 0x2e3dbe);
      }
    }
    else if (*(char *)(param_2 + 0x19) == '\x02') {
      if (((int)(uint)*(ushort *)((int)param_5 + 2) <= iVar2) &&
         ((int)(uint)*(ushort *)((int)param_5 + 4) <= iVar2)) {
        uVar1 = *(ushort *)((int)param_5 + 6);
        goto LAB_002e3db2;
      }
      goto LAB_002e3db6;
    }
    memcpy((void *)(param_2 + 0xa0),param_5,10);
    if (param_4 == 0) {
      param_4 = 1;
    }
  }
  *(short *)(param_2 + 0x16) = (short)param_4;
  if (param_4 != 0) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x10;
    *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) | 0x2000;
  }
LAB_002e3dec:
  return CONCAT44(param_3,param_1);
}


