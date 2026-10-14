/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026154e FUN_0026154e */

undefined8
FUN_0026154e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined1 param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0025f1da(param_1,0x69,param_2);
  if (iVar1 == 0) {
    FUN_00260004(param_1,param_3);
  }
  else {
    uVar2 = FUN_002607da(param_1,param_5,1);
    *(undefined4 *)(iVar1 + 0x1c) = param_3;
    *(undefined4 *)(iVar1 + 8) = uVar2;
    uVar2 = FUN_002604c0(param_1,param_4,1);
    *(undefined4 *)(iVar1 + 0x18) = uVar2;
    *(undefined1 *)(iVar1 + 1) = param_6;
  }
  FUN_00261102(param_1,param_4);
  FUN_00261092(param_1,param_5);
  return CONCAT44(param_1,iVar1);
}


