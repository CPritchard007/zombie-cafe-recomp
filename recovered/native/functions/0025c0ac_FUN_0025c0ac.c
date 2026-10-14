/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c0ac FUN_0025c0ac */

undefined8
FUN_0025c0ac(int param_1,uint *param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  
  puVar3 = (uint *)((int)param_2 + param_3);
  puVar4 = param_4;
  if (param_4 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)*param_4;
    param_4 = (undefined4 *)param_4[1];
  }
  if (param_1 == 0) {
    do {
      uVar2 = *param_2;
      puVar4 = (undefined4 *)
               ((int)param_4 + (int)puVar4 + uVar2 * 0x1000000 + (uVar2 >> 0x18) +
                (uVar2 & 0xff00) * 0x100 + ((uVar2 & 0xff0000) >> 8));
      uVar2 = param_2[1];
      param_2 = param_2 + 2;
      param_4 = (undefined4 *)
                ((int)param_4 +
                 ((uVar2 & 0xff0000) >> 8) +
                 (uVar2 & 0xff00) * 0x100 + uVar2 * 0x1000000 + (uVar2 >> 0x18) + (int)puVar4);
    } while (param_2 < puVar3);
  }
  else {
    do {
      puVar4 = (undefined4 *)((int)puVar4 + (int)param_4 + *param_2);
      puVar1 = param_2 + 1;
      param_2 = param_2 + 2;
      param_4 = (undefined4 *)((int)param_4 + (int)puVar4 + *puVar1);
    } while (param_2 < puVar3);
  }
  *param_5 = puVar4;
  param_5[1] = param_4;
  return CONCAT44(puVar3,param_1);
}


