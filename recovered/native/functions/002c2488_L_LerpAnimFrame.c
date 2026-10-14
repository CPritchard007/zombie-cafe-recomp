/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c2488 L_LerpAnimFrame */

/* L_LerpAnimFrame(ccMktAnimFrame const*, ccMktAnimFrame const*, float, ccMktAnimFrame*) */

undefined8
L_LerpAnimFrame(ccMktAnimFrame *param_1,ccMktAnimFrame *param_2,float param_3,
               ccMktAnimFrame *param_4)

{
  undefined4 uVar1;
  undefined4 *in_r3;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = CCColor::Lerp(*(uint *)param_1,*(uint *)param_2,param_3);
  *in_r3 = uVar1;
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar1 = __subsf3(*(undefined4 *)(param_2 + 4),uVar2);
  uVar1 = __mulsf3(uVar1,param_4);
  uVar1 = __addsf3(uVar2,uVar1);
  in_r3[1] = uVar1;
  uVar2 = *(undefined4 *)(param_1 + 8);
  uVar1 = __subsf3(*(undefined4 *)(param_2 + 8),uVar2);
  uVar1 = __mulsf3(uVar1,param_4);
  uVar1 = __addsf3(uVar2,uVar1);
  in_r3[2] = uVar1;
  uVar2 = *(undefined4 *)(param_1 + 0xc);
  uVar1 = __subsf3(*(undefined4 *)(param_2 + 0xc),uVar2);
  uVar1 = __mulsf3(uVar1,param_4);
  uVar1 = __addsf3(uVar2,uVar1);
  in_r3[3] = uVar1;
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar1 = __subsf3(*(undefined4 *)(param_2 + 0x10),uVar2);
  uVar1 = __mulsf3(uVar1,param_4);
  uVar1 = __addsf3(uVar2,uVar1);
  in_r3[4] = uVar1;
  uVar3 = *(undefined4 *)(param_1 + 0x14);
  uVar1 = __subsf3(*(undefined4 *)(param_2 + 0x14),uVar3);
  uVar1 = __mulsf3(uVar1,param_4);
  uVar1 = __addsf3(uVar3,uVar1);
  in_r3[5] = uVar1;
  return CONCAT44(uVar2,param_1);
}


