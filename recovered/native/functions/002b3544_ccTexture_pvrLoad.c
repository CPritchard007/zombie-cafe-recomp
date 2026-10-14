/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b3544 ccTexture_pvrLoad */

/* ccTexture_pvrLoad(ccTexture2D*, unsigned char const*, void*) */

undefined4 ccTexture_pvrLoad(ccTexture2D *param_1,uchar *param_2,void *param_3)

{
  void *__ptr;
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  size_t __size;
  uchar *local_50;
  undefined4 local_4c;
  void *local_44;
  size_t local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar3 = *(int *)(param_2 + 4) * *(int *)(param_2 + 8);
  if (*(int *)(param_2 + 0x18) == 2) {
    __size = uVar3 >> 2;
    uVar2 = 7;
  }
  else if (*(int *)(param_2 + 0x18) == 4) {
    __size = uVar3 >> 1;
    uVar2 = 8;
  }
  else if (*(int *)(param_2 + 0x10) == 0x10) {
    __size = uVar3 * 2;
    uVar2 = 2;
  }
  else {
    __size = uVar3 * 4;
    uVar2 = 1;
  }
  if ((*(int *)(param_2 + 0x2c) == DAT_002b3654) && (__size != *(size_t *)(param_2 + 0x14))) {
    __ptr = malloc(__size);
    if (__ptr == (void *)0x0) {
      return 0;
    }
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_4c = 0;
    local_50 = (uchar *)0x0;
    iVar1 = inflateInit_(&local_50,DAT_002b3658 + 0x2b35a8,0x38);
    if (iVar1 != 0) {
      return 0;
    }
    local_4c = *(undefined4 *)(param_2 + 0x14);
    local_50 = param_2 + 0x34;
    local_44 = __ptr;
    local_40 = __size;
    iVar1 = inflate(&local_50,0);
    if (((iVar1 == -3) || (iVar1 == 2)) || (iVar1 == -4)) {
      free(__ptr);
      inflateEnd(&local_50);
      return 0;
    }
    inflateEnd(&local_50);
    printf((char *)(DAT_002b365c + 0x2b35fc),*(undefined4 *)(param_2 + 0x14),__size);
    iVar1 = CCTexture2D::LoadFromData
                      (param_1,uVar2,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 4),
                       *(undefined4 *)(param_2 + 0xc),__ptr,param_3);
    if (iVar1 == 0) {
      free(__ptr);
      return 0;
    }
    free(__ptr);
  }
  else {
    iVar1 = CCTexture2D::LoadFromData
                      (param_1,uVar2,*(int *)(param_2 + 8),*(int *)(param_2 + 4),
                       *(undefined4 *)(param_2 + 0xc),param_2 + 0x34,param_3);
    if (iVar1 == 0) {
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 4);
  return 0x34;
}


