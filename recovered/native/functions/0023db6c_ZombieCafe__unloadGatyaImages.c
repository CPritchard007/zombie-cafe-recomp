/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023db6c ZombieCafe::unloadGatyaImages */

/* ZombieCafe::unloadGatyaImages(bool) */

void __thiscall ZombieCafe::unloadGatyaImages(ZombieCafe *this,bool param_1)

{
  int iVar1;
  float extraout_s0;
  float extraout_s0_00;
  float fVar2;
  
  puts((char *)(DAT_0023dbbc + 0x23db7a));
  fVar2 = extraout_s0;
  if ((*(CImage **)(this + 0x810) != (CImage *)0x0) &&
     ((iVar1 = CImage::canDelete(*(CImage **)(this + 0x810)), iVar1 != 0 ||
      (fVar2 = extraout_s0_00, param_1)))) {
    fVar2 = (float)CImage::forceDelete(*(CImage **)(this + 0x810));
    if (*(int **)(this + 0x810) != (int *)0x0) {
      fVar2 = (float)(**(code **)(**(int **)(this + 0x810) + 4))();
      *(undefined4 *)(this + 0x810) = 0;
    }
  }
  stopMusic(fVar2);
  unloadMusic(this,0);
  return;
}


