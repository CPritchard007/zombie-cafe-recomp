/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bef50 CCCarousel::IsButtonVisible */

/* CCCarousel::IsButtonVisible(ccCarousel*, unsigned int) */

bool CCCarousel::IsButtonVisible(ccCarousel *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = L_ScaleFactor(param_1,param_2);
  iVar2 = __aeabi_fcmpge(uVar1,DAT_002bef78);
  if (iVar2 == 0) {
    bVar3 = false;
  }
  else {
    iVar2 = __aeabi_fcmple(uVar1,0x3f800000);
    bVar3 = iVar2 != 0;
  }
  return bVar3;
}


