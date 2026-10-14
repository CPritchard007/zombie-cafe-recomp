/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023dc40 ZombieCafe::unloadPrizeMenuImages */

/* ZombieCafe::unloadPrizeMenuImages(bool) */

void __thiscall ZombieCafe::unloadPrizeMenuImages(ZombieCafe *this,bool param_1)

{
  int iVar1;
  int iVar2;
  float extraout_s0;
  float extraout_s0_00;
  float fVar3;
  
  iVar1 = DAT_0023dc90;
  puts((char *)(DAT_0023dc8c + 0x23dc4e));
  fVar3 = extraout_s0;
  if ((*(CImage **)(this + iVar1) != (CImage *)0x0) &&
     ((iVar2 = CImage::canDelete(*(CImage **)(this + iVar1)), iVar2 != 0 ||
      (fVar3 = extraout_s0_00, param_1)))) {
    fVar3 = (float)CImage::forceDelete(*(CImage **)(this + iVar1));
    if (*(int **)(this + iVar1) != (int *)0x0) {
      fVar3 = (float)(**(code **)(**(int **)(this + iVar1) + 4))();
      *(undefined4 *)(this + DAT_0023dc90) = 0;
    }
  }
  stopMusic(fVar3);
  unloadMusic(this,0);
  return;
}


