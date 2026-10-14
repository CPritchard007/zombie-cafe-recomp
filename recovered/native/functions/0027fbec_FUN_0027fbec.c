/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027fbec FUN_0027fbec */

int FUN_0027fbec(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined4 *)(param_1 + 4);
  FUN_00261f68();
  uVar3 = FUN_0027c4cc(uVar2,param_2,0);
  iVar1 = (int)uVar3;
  if (iVar1 == 0) {
    FUN_0025c266(param_1,(int)((ulonglong)uVar3 >> 0x20),0,0,1);
    iVar1 = FUN_0027fb0c(uVar2,param_2,0,param_3);
  }
  FUN_00262002(param_1);
  return iVar1;
}


