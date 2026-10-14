/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e39d8 png_set_iCCP */

void png_set_iCCP(int param_1,int param_2,char *param_3,int param_4,void *param_5,size_t param_6)

{
  int iVar1;
  size_t sVar2;
  void *__dest;
  void *__dest_00;
  
  if ((((param_2 != 0) && (param_1 != 0)) && (param_5 != (void *)0x0)) && (param_3 != (char *)0x0))
  {
    if (param_4 != 0) {
      png_app_error(param_1,DAT_002e3ab0 + 0x2e39fe);
    }
    iVar1 = png_colorspace_set_ICC
                      (param_1,param_2 + 0x28,param_3,param_6,param_5,
                       *(undefined1 *)(param_2 + 0x19));
    png_colorspace_sync_info(param_1,param_2);
    if (iVar1 != 0) {
      *(ushort *)(param_2 + 0x72) = *(ushort *)(param_2 + 0x72) | 0x18;
      sVar2 = strlen(param_3);
      __dest = (void *)png_malloc_warn(param_1,sVar2 + 1);
      if (__dest == (void *)0x0) {
        iVar1 = DAT_002e3ab4 + 0x2e3a4c;
      }
      else {
        memcpy(__dest,param_3,sVar2 + 1);
        __dest_00 = (void *)png_malloc_warn(param_1,param_6);
        if (__dest_00 != (void *)0x0) {
          memcpy(__dest_00,param_5,param_6);
          png_free_data(param_1,param_2,0x10,0);
          *(void **)(param_2 + 0x78) = __dest_00;
          *(void **)(param_2 + 0x74) = __dest;
          *(size_t *)(param_2 + 0x7c) = param_6;
          *(uint *)(param_2 + 0xe8) = *(uint *)(param_2 + 0xe8) | 0x10;
          *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x1000;
          return;
        }
        png_free(param_1,__dest);
        iVar1 = DAT_002e3ab8 + 0x2e3a70;
      }
      png_benign_error(param_1,iVar1);
    }
  }
  return;
}


