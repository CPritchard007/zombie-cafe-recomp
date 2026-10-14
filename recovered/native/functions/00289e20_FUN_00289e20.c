/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00289e20 FUN_00289e20 */

void FUN_00289e20(int *param_1,uint *param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  uVar1 = FUN_002662b8();
  piVar3 = (int *)param_1[0x6c];
  if ((int *)param_1[0x6c] == (int *)0x0) {
    piVar3 = param_1;
  }
  for (piVar3 = (int *)piVar3[0x8a]; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[1]) {
    if (((uint *)*piVar3 == param_2) && (piVar3[3] == param_5)) goto LAB_00289e6c;
  }
  piVar3 = (int *)FUN_00289ab8(param_1,param_2,param_3,param_5);
  if (piVar3 != (int *)0x0) {
LAB_00289e6c:
    uVar4 = *param_2;
    if (uVar4 != 0) {
      uVar4 = (uint)((*(uint *)(*param_1 + 0x18) & 0x2000000) == 0);
    }
    iVar2 = param_1[0x13];
    param_1[0x13] = iVar2 + 1;
    FUN_00266266(uVar1,0x73,param_4,param_6,iVar2 + 1);
    FUN_00263832(uVar1,0xffffffff,piVar3[2],0xffffffee);
    FUN_0025c3b8(uVar1,uVar4 & 0xff);
  }
  return;
}


