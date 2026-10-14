/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bb5cc CCSpline::Sample */

/* CCSpline::Sample(ccSpline const*, float) */

undefined4 CCSpline::Sample(ccSpline *param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 in_r1;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *puVar12;
  
  iVar2 = __aeabi_fcmple(in_r1,0);
  puVar12 = *(undefined4 **)param_1;
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 4);
    uVar1 = 0;
    do {
      uVar11 = uVar1;
      if (iVar2 - 1U <= uVar11) {
        return puVar12[(iVar2 + -1) * 4];
      }
      puVar9 = puVar12 + (uVar11 + 1) * 4;
      uVar3 = puVar9[3];
      iVar4 = __aeabi_fcmpgt(uVar3,in_r1);
      uVar1 = uVar11 + 1;
    } while (iVar4 == 0);
    puVar12 = puVar12 + uVar11 * 4;
    uVar10 = puVar12[3];
    uVar5 = __subsf3(in_r1,uVar10);
    uVar3 = __subsf3(uVar3,uVar10);
    uVar3 = __divsf3(uVar5,uVar3);
    uVar5 = __mulsf3(uVar3,uVar3);
    uVar10 = __mulsf3(uVar5,uVar3);
    uVar6 = __mulsf3(uVar5,DAT_002bb6dc);
    uVar7 = __addsf3(uVar10,uVar10);
    uVar7 = __subsf3(uVar7,uVar6);
    uVar7 = __addsf3(uVar7,0x3f800000);
    uVar7 = __mulsf3(uVar7,*puVar12);
    uVar8 = __addsf3(uVar5,uVar5);
    uVar8 = __subsf3(uVar10,uVar8);
    uVar3 = __addsf3(uVar8,uVar3);
    uVar3 = __mulsf3(uVar3,puVar12[2]);
    uVar3 = __addsf3(uVar7,uVar3);
    uVar7 = __mulsf3(uVar10,0xc0000000);
    uVar6 = __addsf3(uVar7,uVar6);
    uVar6 = __mulsf3(uVar6,*puVar9);
    uVar3 = __addsf3(uVar3,uVar6);
    uVar5 = __subsf3(uVar10,uVar5);
    uVar5 = __mulsf3(uVar5,puVar9[1]);
    uVar3 = __addsf3(uVar3,uVar5);
  }
  else {
    uVar3 = *puVar12;
  }
  return uVar3;
}


