/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025eeec FUN_0025eeec */

void FUN_0025eeec(int *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int *piVar1;
  uint *puVar2;
  uint *puVar3;
  
  if ((short)param_1[6] == 0) {
    piVar1 = (int *)FUN_0025ee10(param_1[1],0x3f8);
    if (piVar1 == (int *)0x0) {
      return;
    }
    *piVar1 = *param_1;
    *param_1 = (int)piVar1;
    param_1[4] = (int)(piVar1 + 2);
    *(undefined2 *)(param_1 + 6) = 0x3f;
  }
  *(short *)(param_1 + 6) = (short)param_1[6] + -1;
  puVar3 = (uint *)param_1[4];
  param_1[4] = (int)(puVar3 + 4);
  if (puVar3 != (uint *)0x0) {
    *puVar3 = param_3;
    puVar3[1] = param_4;
    puVar3[2] = 0;
    puVar2 = (uint *)param_1[3];
    if (puVar2 == (uint *)0x0) {
      param_1[2] = (int)puVar3;
    }
    else {
      if ((((int)((uint)*(byte *)((int)param_1 + 0x1a) << 0x1f) < 0) &&
          ((int)param_4 <= (int)puVar2[1])) && ((puVar2[1] != param_4 || (param_3 <= *puVar2)))) {
        *(byte *)((int)param_1 + 0x1a) = *(byte *)((int)param_1 + 0x1a) & 0xfe;
      }
      puVar2[2] = (uint)puVar3;
    }
    param_1[3] = (int)puVar3;
  }
  return;
}


