/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002abae8 CCColor::Lerp */

/* CCColor::Lerp(unsigned int, unsigned int, float) */

void CCColor::Lerp(uint param_1,uint param_2,float param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 in_r2;
  
  uVar1 = __floatunsisf(param_1 & 0xff);
  uVar2 = __floatunsisf(param_1 >> 8 & 0xff);
  uVar3 = __floatunsisf(param_1 >> 0x10 & 0xff);
  uVar4 = __floatunsisf(param_1 >> 0x18);
  uVar5 = __floatunsisf(param_2 & 0xff);
  uVar5 = __subsf3(uVar5,uVar1);
  uVar5 = __mulsf3(uVar5,in_r2);
  __addsf3(uVar1,uVar5);
  uVar1 = __fixunssfsi();
  uVar5 = __floatunsisf(param_2 >> 8 & 0xff);
  uVar5 = __subsf3(uVar5,uVar2);
  uVar5 = __mulsf3(uVar5,in_r2);
  __addsf3(uVar2,uVar5);
  uVar2 = __fixunssfsi();
  uVar5 = __floatunsisf(param_2 >> 0x10 & 0xff);
  uVar5 = __subsf3(uVar5,uVar3);
  uVar5 = __mulsf3(uVar5,in_r2);
  __addsf3(uVar3,uVar5);
  uVar3 = __fixunssfsi();
  uVar5 = __floatunsisf(param_2 >> 0x18);
  uVar5 = __subsf3(uVar5,uVar4);
  uVar5 = __mulsf3(uVar5,in_r2);
  __addsf3(uVar4,uVar5);
  uVar4 = __fixunssfsi();
  FUN_002ab86c(uVar1,uVar2,uVar3,uVar4);
  return;
}


