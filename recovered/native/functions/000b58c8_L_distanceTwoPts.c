/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b58c8 L_distanceTwoPts */

/* L_distanceTwoPts(float, float, float, float) */

void L_distanceTwoPts(float param_1,float param_2,float param_3,float param_4)

{
  undefined4 in_r0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  
  uVar1 = __subsf3(in_r0,in_r2);
  uVar2 = __subsf3(in_r1,in_r3);
  uVar1 = __mulsf3(uVar1,uVar1);
  uVar2 = __mulsf3(uVar2,uVar2);
  __addsf3(uVar1,uVar2);
  return;
}


