/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002e0588 FUN_002e0588 */

int FUN_002e0588(int param_1,int param_2,size_t param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int iVar5;
  void *local_38;
  int local_1c [2];
  
  uVar1 = *(uint *)(param_1 + 0x35c);
  if (uVar1 == 0) {
    uVar1 = 0xffffffff;
  }
  if (uVar1 < param_3 + 1) {
    png_zstream_error(param_1,0xfffffffc);
    iVar5 = 4;
LAB_002e06de:
    return -iVar5;
  }
  uVar1 = uVar1 - (param_3 + 1);
  if (uVar1 < *param_4) {
    *param_4 = uVar1;
  }
  iVar5 = FUN_002e0358(param_1,*(undefined4 *)(param_1 + 0x1dc));
  if (iVar5 != 0) {
    if (iVar5 != 1) {
      return iVar5;
    }
    iVar5 = 7;
    goto LAB_002e06de;
  }
  local_1c[0] = param_2 - param_3;
  iVar5 = FUN_002e0494(param_1,*(undefined4 *)(param_1 + 0x1dc),*(int *)(param_1 + 0x378) + param_3,
                       local_1c,0,param_4);
  if (iVar5 == 1) {
    iVar5 = inflateReset(param_1 + 0x144);
    if (iVar5 != 0) {
      png_zstream_error(param_1,1);
      goto LAB_002e06bc;
    }
    uVar1 = *param_4;
    iVar2 = uVar1 + param_3;
    iVar3 = iVar2 + 1;
    local_38 = (void *)png_malloc_base(param_1,iVar3);
    if (local_38 != (void *)0x0) {
      iVar5 = FUN_002e0494(param_1,*(undefined4 *)(param_1 + 0x1dc),
                           *(int *)(param_1 + 0x378) + param_3,local_1c,(int)local_38 + param_3,
                           param_4);
      if (iVar5 == 1) {
        if (uVar1 == *param_4) {
          *(undefined1 *)((int)local_38 + iVar2) = 0;
          if (param_3 != 0) {
            memcpy(local_38,*(void **)(param_1 + 0x378),param_3);
          }
          pvVar4 = *(void **)(param_1 + 0x378);
          *(void **)(param_1 + 0x378) = local_38;
          *(int *)(param_1 + 0x37c) = iVar3;
          local_38 = pvVar4;
        }
        else {
LAB_002e067c:
          iVar5 = -7;
        }
      }
      else if (iVar5 == 0) goto LAB_002e067c;
      png_free(param_1,local_38);
      if ((iVar5 == 1) && (param_2 - param_3 != local_1c[0])) {
        png_chunk_benign_error(param_1,DAT_002e06e8 + 0x2e069c);
      }
      goto LAB_002e06c0;
    }
    png_zstream_error(param_1,0xfffffffc);
    iVar5 = 4;
  }
  else {
    if (iVar5 != 0) goto LAB_002e06c0;
LAB_002e06bc:
    iVar5 = 7;
  }
  iVar5 = -iVar5;
LAB_002e06c0:
  *(undefined4 *)(param_1 + 0x140) = 0;
  return iVar5;
}


