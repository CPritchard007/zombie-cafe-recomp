/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00265916 FUN_00265916 */

undefined8 FUN_00265916(int *param_1,int param_2,int param_3,undefined4 param_4,int *param_5)

{
  undefined4 uVar1;
  
  uVar1 = 7;
  if (*(char *)(*param_1 + 0x36) == '\0') {
    uVar1 = FUN_0026578c(param_1[4] + (param_2 + (uint)*(ushort *)(param_1 + 0xb) * param_3) * 0x28,
                         param_4,0xffffffff,1,param_5,param_2,param_3);
    param_1 = param_5;
  }
  return CONCAT44(param_1,uVar1);
}


