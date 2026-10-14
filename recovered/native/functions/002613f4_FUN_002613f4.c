/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002613f4 FUN_002613f4 */

undefined8 FUN_002613f4(undefined4 *param_1,undefined4 param_2,int param_3)

{
  void *__dest;
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 local_1c;
  
  if ((int)param_1[7] <= (int)param_1[6]) {
    puVar2 = (undefined4 *)param_1[8];
    uVar3 = *(undefined4 *)*param_1;
    __dest = (void *)FUN_0025ee10(uVar3,param_1[7] * 0x50);
    param_1[8] = __dest;
    if (__dest == (void *)0x0) {
      if (param_3 << 0x1f < 0) {
        FUN_002610aa(uVar3,param_2);
      }
      param_1[8] = puVar2;
      iVar1 = 0;
      goto LAB_00261478;
    }
    memcpy(__dest,puVar2,param_1[6] * 0x28);
    if (puVar2 != param_1 + 10) {
      FUN_0025fbda(uVar3,puVar2);
    }
    uVar3 = FUN_0025f450(uVar3,param_1[8]);
    uVar3 = __udivsi3(uVar3,0x28);
    param_1[7] = uVar3;
  }
  iVar1 = param_1[6];
  puVar2 = (undefined4 *)(param_1[8] + iVar1 * 0x28);
  param_1[6] = iVar1 + 1;
  local_1c = (undefined1)param_3;
  *puVar2 = param_2;
  puVar2[5] = param_1;
  *(undefined1 *)((int)puVar2 + 0x12) = local_1c;
  puVar2[1] = 0xffffffff;
LAB_00261478:
  return CONCAT44(param_1,iVar1);
}


