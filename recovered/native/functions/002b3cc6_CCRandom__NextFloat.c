/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b3cc6 CCRandom::NextFloat */

/* CCRandom::NextFloat(float, float) */

void CCRandom::NextFloat(float param_1,float param_2)

{
  undefined4 in_r0;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_r1;
  
  lrand48();
  uVar1 = __floatsisf();
  uVar1 = __mulsf3(uVar1,0x30000000);
  uVar2 = __subsf3(in_r1,in_r0);
  uVar1 = __mulsf3(uVar1,uVar2);
  __addsf3(in_r0,uVar1);
  return;
}


