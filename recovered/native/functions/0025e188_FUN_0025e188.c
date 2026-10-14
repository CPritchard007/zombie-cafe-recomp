/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025e188 FUN_0025e188 */

undefined4
FUN_0025e188(int param_1,void *param_2,uint param_3,undefined4 param_4,uint param_5,int param_6)

{
  size_t sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  size_t __n;
  bool bVar6;
  void *local_24;
  
  if ((param_5 == 0 && param_6 == 0) ||
     (*(int *)(param_1 + 0x1c) != param_6 || *(uint *)(param_1 + 0x18) != param_5)) {
    uVar2 = 0;
    iVar3 = 0;
    for (puVar5 = *(undefined4 **)(param_1 + 4); puVar5 != (undefined4 *)0x0;
        puVar5 = (undefined4 *)*puVar5) {
      bVar6 = CARRY4(uVar2,DAT_0025e230);
      uVar2 = uVar2 + DAT_0025e230;
      iVar3 = iVar3 + DAT_0025e234 + (uint)bVar6;
      if ((param_6 < iVar3) || ((iVar3 == param_6 && (param_5 < uVar2)))) break;
    }
  }
  else {
    puVar5 = *(undefined4 **)(param_1 + 0x20);
  }
  uVar2 = DAT_0025e230;
  __aeabi_ldivmod(param_5,param_6,DAT_0025e230,DAT_0025e234);
  uVar4 = param_3;
  local_24 = param_2;
  while( true ) {
    sVar1 = 0x3fc - uVar2;
    __n = sVar1;
    if ((int)uVar4 < (int)sVar1) {
      __n = uVar4;
    }
    memcpy(local_24,(void *)((int)puVar5 + uVar2 + 4),__n);
    local_24 = (void *)((int)local_24 + __n);
    uVar4 = uVar4 - sVar1;
    if ((((int)uVar4 < 0) || (puVar5 = (undefined4 *)*puVar5, puVar5 == (undefined4 *)0x0)) ||
       (uVar4 == 0)) break;
    uVar2 = 0;
  }
  *(undefined4 **)(param_1 + 0x20) = puVar5;
  *(uint *)(param_1 + 0x18) = param_3 + param_5;
  *(uint *)(param_1 + 0x1c) = ((int)param_3 >> 0x1f) + param_6 + (uint)CARRY4(param_3,param_5);
  return 0;
}


