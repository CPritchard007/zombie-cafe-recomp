/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027872c FUN_0027872c */

void FUN_0027872c(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 local_1d;
  int local_1c [2];
  
  local_1c[0] = 0;
  uVar6 = *(undefined4 *)(param_1 + 8);
  iVar1 = FUN_002777d0(param_1,param_2,local_1c);
  local_1d = FUN_0025cd42(param_2);
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 1;
  uVar2 = FUN_002627dc(param_1);
  FUN_002786f4(param_1,*(undefined4 *)(param_2 + 8),uVar2);
  if (param_4 == param_3) {
    FUN_0026641e(uVar6,0x49,uVar2,param_4);
  }
  else {
    uVar3 = FUN_002665da(uVar6,0x4a,uVar2);
    FUN_0026641e(uVar6,0x48,*(undefined4 *)(param_2 + 0x18),param_3);
    FUN_0026641e(uVar6,1,0,param_4);
    FUN_002624c2(uVar6,uVar3);
  }
  if (iVar1 == 1) {
    FUN_0026641e(uVar6,0x15,uVar2,param_3);
    FUN_00266266(uVar6,0x36,*(undefined4 *)(param_2 + 0x18),param_3,uVar2);
  }
  else {
    FUN_002662da(uVar6,0x1e,uVar2,1,0,&local_1d,1);
    if ((param_3 == param_4) || (local_1c[0] == 0)) {
      FUN_00266944(uVar6,0x33,*(undefined4 *)(param_2 + 0x18),param_3,uVar2,1);
    }
    else {
      uVar3 = FUN_00266944(uVar6,0x34,*(undefined4 *)(param_2 + 0x18),0,uVar2,1);
      uVar4 = FUN_002665da(uVar6,0x4a,local_1c[0]);
      uVar5 = FUN_00266944(uVar6,0x34,*(undefined4 *)(param_2 + 0x18),0,local_1c[0],1);
      FUN_0026641e(uVar6,7,0xffffffff,local_1c[0]);
      FUN_002624c2(uVar6,uVar5);
      FUN_0026641e(uVar6,0x14,local_1c[0],1);
      FUN_002624c2(uVar6,uVar4);
      FUN_0026641e(uVar6,0x1b,local_1c[0],param_4);
      FUN_0026641e(uVar6,1,0,param_3);
      FUN_002624c2(uVar6,uVar3);
    }
  }
  FUN_002627fe(param_1,uVar2);
  FUN_002644ac(param_1);
  return;
}


