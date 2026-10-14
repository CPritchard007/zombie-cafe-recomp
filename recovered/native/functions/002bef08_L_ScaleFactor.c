/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bef08 L_ScaleFactor */

/* L_ScaleFactor(ccCarousel*, unsigned int) */

void L_ScaleFactor(ccCarousel *param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = __floatunsisf(*(undefined4 *)(param_1 + 8));
  uVar2 = __mulsf3(*(undefined4 *)(param_1 + 0x3c),DAT_002bef4c);
  uVar3 = __floatunsisf(param_2);
  uVar3 = __subsf3(uVar1,uVar3);
  uVar1 = __subsf3(*(undefined4 *)param_1,uVar1);
  uVar1 = __addsf3(uVar3,uVar1);
  __mulsf3(uVar2,uVar1);
  return;
}


