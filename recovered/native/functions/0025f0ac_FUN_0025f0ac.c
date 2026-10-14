/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025f0ac FUN_0025f0ac */

undefined1 * FUN_0025f0ac(undefined4 param_1,int param_2,int *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  int *piVar4;
  undefined4 local_1c [2];
  
  local_1c[0] = 0;
  piVar4 = param_3;
  if (param_3 != (int *)0x0) {
    if ((param_2 == 0x81) && (*param_3 != 0)) {
      iVar2 = FUN_0025b880(*param_3,local_1c);
      piVar4 = (int *)0x0;
      if (iVar2 != 0) goto LAB_0025f0dc;
    }
    piVar4 = (int *)(param_3[1] + 1);
  }
LAB_0025f0dc:
  puVar3 = (undefined1 *)FUN_0025f04c(param_1,piVar4 + 0xc);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = (char)param_2;
    *(undefined2 *)(puVar3 + 0x1e) = 0xffff;
    if (param_3 != (int *)0x0) {
      if (piVar4 == (int *)0x0) {
        *(ushort *)(puVar3 + 2) = *(ushort *)(puVar3 + 2) | 0x400;
        *(undefined4 *)(puVar3 + 4) = local_1c[0];
      }
      else {
        *(undefined1 **)(puVar3 + 4) = puVar3 + 0x30;
        if (param_3[1] != 0) {
          memcpy(puVar3 + 0x30,(void *)*param_3,param_3[1]);
        }
        *(undefined1 *)(*(int *)(puVar3 + 4) + param_3[1]) = 0;
        if ((2 < (int)piVar4) && (param_4 != 0)) {
          cVar1 = *(char *)*param_3;
          if (((cVar1 == '\'') || (((cVar1 == '[' || (cVar1 == '\"')) || (cVar1 == '`')))) &&
             (FUN_0025b16e(*(undefined4 *)(puVar3 + 4)), cVar1 == '\"')) {
            *(ushort *)(puVar3 + 2) = *(ushort *)(puVar3 + 2) | 0x40;
          }
        }
      }
    }
    *(undefined4 *)(puVar3 + 0x2c) = 1;
  }
  return puVar3;
}


