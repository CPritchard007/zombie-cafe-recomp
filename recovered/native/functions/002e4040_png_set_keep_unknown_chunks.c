/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e4040 png_set_keep_unknown_chunks */

void png_set_keep_unknown_chunks(int param_1,uint param_2,void *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *__dest;
  void *__dest_00;
  void *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  if (param_1 == 0) {
    return;
  }
  if (3 < param_2) {
    iVar2 = DAT_002e41c0 + 0x2e405a;
LAB_002e4080:
    png_app_error(param_1,iVar2);
    return;
  }
  if (param_4 < 1) {
    *(uint *)(param_1 + 0x314) = param_2;
    if (param_4 == 0) {
      return;
    }
    local_24 = 0x11;
    param_3 = (void *)(DAT_002e41c4 + 0x2e4076);
  }
  else {
    local_24 = param_4;
    if (param_3 == (void *)0x0) {
      iVar2 = DAT_002e41c8 + 0x2e4082;
      goto LAB_002e4080;
    }
  }
  __dest = *(void **)(param_1 + 0x31c);
  iVar2 = *(int *)(param_1 + 0x318);
  if (__dest == (void *)0x0) {
    iVar2 = 0;
  }
  if (DAT_002e41cc < (uint)(iVar2 + local_24)) {
    iVar2 = DAT_002e41d0 + 0x2e40aa;
    goto LAB_002e4080;
  }
  if (param_2 == 0) {
    if (iVar2 == 0) {
      __dest = (void *)0x0;
      local_2c = (void *)0x0;
      goto LAB_002e419a;
    }
  }
  else {
    __dest = (void *)png_malloc(param_1,(iVar2 + local_24) * 5);
    if (iVar2 != 0) {
      memcpy(__dest,*(void **)(param_1 + 0x31c),iVar2 * 5);
    }
  }
  local_2c = __dest;
  if (__dest != (void *)0x0) {
    local_2c = param_3;
    for (local_20 = 0; local_20 != local_24; local_20 = local_20 + 1) {
      pvVar3 = __dest;
      for (local_1c = 0; local_28._0_1_ = (undefined1)param_2, local_1c != iVar2;
          local_1c = local_1c + 1) {
        iVar1 = memcmp(pvVar3,local_2c,4);
        if (iVar1 == 0) {
          *(undefined1 *)((int)pvVar3 + 4) = (undefined1)local_28;
          goto LAB_002e412a;
        }
        pvVar3 = (void *)((int)pvVar3 + 5);
      }
      if (param_2 != 0) {
        memcpy(pvVar3,local_2c,4);
        iVar2 = iVar2 + 1;
        *(undefined1 *)((int)pvVar3 + 4) = (undefined1)local_28;
      }
LAB_002e412a:
      local_2c = (void *)((int)local_2c + 5);
    }
    local_2c = (void *)0x0;
    pvVar3 = __dest;
    __dest_00 = __dest;
    for (local_28 = 0; local_28 != iVar2; local_28 = local_28 + 1) {
      if (*(char *)((int)pvVar3 + 4) != '\0') {
        if (__dest_00 != pvVar3) {
          memcpy(__dest_00,pvVar3,5);
        }
        __dest_00 = (void *)((int)__dest_00 + 5);
        local_2c = (void *)((int)local_2c + 1);
      }
      pvVar3 = (void *)((int)pvVar3 + 5);
    }
    if (local_2c == (void *)0x0) {
      if (*(void **)(param_1 + 0x31c) != __dest) {
        png_free(param_1,__dest);
      }
      __dest = (void *)0x0;
    }
  }
LAB_002e419a:
  *(void **)(param_1 + 0x318) = local_2c;
  if (*(void **)(param_1 + 0x31c) == __dest) {
    return;
  }
  if (*(void **)(param_1 + 0x31c) != (void *)0x0) {
    png_free(param_1);
  }
  *(void **)(param_1 + 0x31c) = __dest;
  return;
}


