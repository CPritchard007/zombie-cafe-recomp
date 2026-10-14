/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b2dcc CCTexture2D::Load */

/* CCTexture2D::Load(ccTexture2D*, unsigned char const*, void*) */

void CCTexture2D::Load(ccTexture2D *param_1,uchar *param_2,void *param_3)

{
  int iVar1;
  
  L_PrintLog((char *)(DAT_002b2e34 + 0x2b2ddc),(char *)(DAT_002b2e38 + 0x2b2dde));
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  iVar1 = ccTexture_cctIs(param_2);
  if (iVar1 == 1) {
    ccTexture_cctLoad(param_1,param_2,param_3);
  }
  else {
    iVar1 = ccTexture_pngIs(param_2);
    if (iVar1 == 1) {
      ccTexture_pngLoad(param_1,param_2,param_3);
    }
    else {
      iVar1 = ccTexture_jpgIs(param_2);
      if (iVar1 == 1) {
        ccTexture_jpgLoad(param_1,param_2,param_3);
      }
      else {
        ccTexture_pvrLoad(param_1,param_2,param_3);
      }
    }
  }
  return;
}


