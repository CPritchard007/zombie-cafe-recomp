/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026d3fa FUN_0026d3fa */

undefined4
FUN_0026d3fa(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,byte param_8)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = FUN_0026d3c4();
  uVar3 = FUN_0025ccc4(param_3);
  bVar1 = FUN_0025cd0e(param_2,uVar3);
  uVar2 = FUN_002662da(*(undefined4 *)(param_1 + 8),param_4,param_6,param_7,param_5,uVar2,0xfffffffc
                      );
  FUN_0025c3b8(*(undefined4 *)(param_1 + 8),bVar1 | param_8);
  return uVar2;
}


