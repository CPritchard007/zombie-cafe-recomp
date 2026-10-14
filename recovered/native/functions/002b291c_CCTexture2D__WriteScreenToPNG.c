/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b291c CCTexture2D::WriteScreenToPNG */

/* CCTexture2D::WriteScreenToPNG(char const*, unsigned int, unsigned int, unsigned int, unsigned
   int, unsigned int) */

int CCTexture2D::WriteScreenToPNG
              (char *param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  void *pvVar1;
  __jmp_buf_tag *__env;
  int iVar2;
  undefined4 *__ptr;
  void *pvVar3;
  uint uVar4;
  undefined4 *puVar5;
  byte bVar6;
  size_t __size;
  uint uVar7;
  int iVar8;
  void *local_5c;
  uint local_58;
  uint local_4c;
  void *local_48;
  void *local_3c;
  uint local_38;
  int local_20;
  int local_1c [2];
  
  __size = param_4 * 4 * param_5;
  local_5c = malloc(__size);
  glReadPixels(0,0,param_4,param_5,DAT_002b2b44,DAT_002b2b48,local_5c);
  if (param_6 == 0) {
    local_58 = param_5;
    local_38 = param_4;
  }
  else {
    pvVar1 = malloc(__size);
    iVar8 = 0;
    for (local_4c = 0; local_4c != param_5; local_4c = local_4c + 1) {
      local_3c = (void *)((int)pvVar1 + (local_4c + param_5 * (param_4 + DAT_002b2b4c)) * 4);
      for (uVar7 = 0; uVar7 != param_4; uVar7 = uVar7 + 1) {
        memcpy(local_3c,(void *)((int)local_5c + (uVar7 + iVar8) * 4),4);
        local_3c = (void *)((int)local_3c + param_5 * -4);
      }
      iVar8 = iVar8 + param_4;
    }
    free(local_5c);
    local_38 = param_5;
    local_5c = pvVar1;
    local_58 = param_4;
  }
  local_48 = local_5c;
  pvVar1 = local_5c;
  for (uVar7 = 0; uVar7 != param_5; uVar7 = uVar7 + 1) {
    for (uVar4 = 0; uVar4 != param_4; uVar4 = uVar4 + 1) {
      *(undefined1 *)((int)pvVar1 + uVar4 * 4 + 3) = 0xff;
    }
    pvVar1 = (void *)((int)pvVar1 + param_4 * 4);
  }
  iVar8 = local_38 * 4;
  pvVar3 = (void *)((int)local_5c + iVar8 * (local_58 - 1));
  pvVar1 = local_5c;
  for (uVar7 = 0; iVar2 = 0, uVar7 != local_58 >> 1; uVar7 = uVar7 + 1) {
    for (; iVar2 != iVar8; iVar2 = iVar2 + 1) {
      bVar6 = *(byte *)((int)pvVar1 + iVar2) ^ *(byte *)((int)pvVar3 + iVar2);
      *(byte *)((int)pvVar1 + iVar2) = bVar6;
      bVar6 = bVar6 ^ *(byte *)((int)pvVar3 + iVar2);
      *(byte *)((int)pvVar3 + iVar2) = bVar6;
      *(byte *)((int)pvVar1 + iVar2) = bVar6 ^ *(byte *)((int)pvVar1 + iVar2);
    }
    pvVar1 = (void *)((int)pvVar1 + iVar8);
    pvVar3 = (void *)((int)pvVar3 + local_38 * -4);
  }
  pvVar1 = (void *)CCFile::Open(param_1,1);
  local_20 = png_create_write_struct(DAT_002b2b50 + 0x2b2a58,0,0,0);
  png_set_write_fn(local_20,pvVar1,*(undefined4 *)(DAT_002b2b54 + 0x2b2a64),
                   *(undefined4 *)(DAT_002b2b58 + 0x2b2a66));
  iVar2 = local_20;
  if (local_20 != 0) {
    local_1c[0] = png_create_info_struct(local_20);
    if (local_1c[0] != 0) {
      __env = (__jmp_buf_tag *)
              png_set_longjmp_fn(local_20,*(undefined4 *)(DAT_002b2b5c + 0x2b2aa2),0x100);
      iVar2 = setjmp(__env);
      if (iVar2 != 0) {
        png_destroy_write_struct(&local_20,local_1c);
        free(local_5c);
        CCFile::Close(pvVar1);
        return 0;
      }
      png_set_IHDR(local_20,local_1c[0],local_38,local_58,8,6,0,0,0);
      __ptr = (undefined4 *)malloc(local_58 << 2);
      puVar5 = __ptr;
      for (uVar7 = 0; uVar7 != local_58; uVar7 = uVar7 + 1) {
        *puVar5 = local_48;
        puVar5 = puVar5 + 1;
        local_48 = (void *)((int)local_48 + iVar8);
      }
      png_set_rows(local_20,local_1c[0],__ptr);
      png_write_png(local_20,local_1c[0],0,0);
      png_write_end(local_20,local_1c[0]);
      png_destroy_write_struct(&local_20,local_1c);
      free(__ptr);
      free(local_5c);
      CCFile::Close(pvVar1);
      return 1;
    }
    png_destroy_write_struct(&local_20,0);
    iVar2 = 0;
  }
  free(local_5c);
  CCFile::Close(pvVar1);
  return iVar2;
}


