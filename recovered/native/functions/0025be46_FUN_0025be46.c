/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025be46 FUN_0025be46 */

undefined4 FUN_0025be46(uint *param_1,uint *param_2,undefined4 param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint auStack_20 [2];
  undefined4 local_18;
  
  puVar3 = auStack_20;
  local_18 = param_3;
  do {
    while( true ) {
      puVar1 = param_2;
      if ((puVar1 == (uint *)0x0) || (param_1 == (uint *)0x0)) {
        if (param_1 == (uint *)0x0) {
          param_1 = puVar1;
        }
        puVar3[2] = (uint)param_1;
        return local_18;
      }
      uVar4 = param_1[1];
      uVar2 = puVar1[1];
      if (((int)uVar4 < (int)uVar2) || ((uVar2 == uVar4 && (*param_1 < *puVar1)))) break;
      if (((int)uVar4 <= (int)uVar2) && ((uVar4 != uVar2 || (*param_1 <= *puVar1))))
      goto LAB_0025be76;
      puVar3[2] = (uint)puVar1;
      param_2 = (uint *)puVar1[2];
      puVar3 = puVar1;
    }
    puVar3[2] = (uint)param_1;
    puVar3 = param_1;
LAB_0025be76:
    param_1 = (uint *)param_1[2];
    param_2 = puVar1;
  } while( true );
}


