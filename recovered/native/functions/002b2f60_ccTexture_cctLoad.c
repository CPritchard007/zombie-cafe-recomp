/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b2f60 ccTexture_cctLoad */

/* ccTexture_cctLoad(ccTexture2D*, unsigned char const*, void*) */

uchar * ccTexture_cctLoad(ccTexture2D *param_1,uchar *param_2,void *param_3)

{
  int iVar1;
  uchar *__ptr;
  int iVar2;
  int iVar3;
  uint __size;
  uchar *puVar4;
  uchar *local_50;
  undefined4 local_4c;
  uchar *local_44;
  uint local_40;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar2 = *(int *)(param_2 + 0xc);
  iVar3 = *(int *)(param_2 + 8);
  iVar1 = CCTexture2D::CalcBPP(*(undefined4 *)(param_2 + 4));
  __size = (uint)(iVar1 * iVar2 * iVar3) >> 3;
  __ptr = (uchar *)malloc(__size);
  puVar4 = __ptr;
  if (__ptr != (uchar *)0x0) {
    puVar4 = (uchar *)0x0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_4c = 0;
    local_50 = (uchar *)0x0;
    iVar1 = inflateInit_(&local_50,DAT_002b3020 + 0x2b2f92,0x38);
    if (iVar1 == 0) {
      local_4c = *(undefined4 *)(param_2 + 0x18);
      local_50 = param_2 + 0x1c;
      local_44 = __ptr;
      local_40 = __size;
      iVar1 = inflate(&local_50,0);
      if (((iVar1 == -3) || (iVar1 == 2)) || (iVar1 == -4)) {
        free(__ptr);
        inflateEnd(&local_50);
        puVar4 = (uchar *)0x0;
      }
      else {
        inflateEnd(&local_50);
        iVar1 = CCTexture2D::LoadFromData
                          (param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8),
                           *(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),__ptr,
                           param_3);
        if (iVar1 == 0) {
          free(__ptr);
        }
        else {
          free(__ptr);
          *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 8);
          *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0xc);
          puVar4 = param_2 + 0x1c + (*(int *)(param_2 + 0x18) - (int)param_2);
        }
      }
    }
  }
  return puVar4;
}


