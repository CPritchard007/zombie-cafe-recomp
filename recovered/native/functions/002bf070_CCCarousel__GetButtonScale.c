/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bf070 CCCarousel::GetButtonScale */

/* CCCarousel::GetButtonScale(ccCarousel*, unsigned int) */

undefined4 CCCarousel::GetButtonScale(ccCarousel *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = L_ScaleFactor(param_1,param_2);
  iVar2 = __aeabi_fcmplt(uVar1,DAT_002bf0cc);
  if ((iVar2 == 0) && (iVar2 = __aeabi_fcmpgt(uVar1,0x3f800000), iVar2 == 0)) {
    uVar1 = uVar1 & 0x7fffffff;
    uVar3 = __mulsf3(uVar1,uVar1);
    uVar4 = __mulsf3(uVar3,DAT_002bf0d0);
    uVar3 = __addsf3(uVar3,uVar3);
    uVar3 = __mulsf3(uVar3,uVar1);
    uVar3 = __subsf3(uVar4,uVar3);
    uVar3 = __subsf3(0x3f800000,uVar3);
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


