/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00266430 FUN_00266430 */

void FUN_00266430(int param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  void *__dest;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  bool bVar5;
  int local_20;
  int local_1c;
  
  puVar4 = *(undefined4 **)(param_1 + 8);
  if ((int)((uint)*(ushort *)(param_2 + 2) << 0x15) < 0) {
    iVar2 = *(int *)(param_2 + 4);
    if (param_3 != 0) {
      iVar2 = -iVar2;
    }
    FUN_0026641e(puVar4,7,iVar2,param_4);
  }
  else {
    uVar3 = *(undefined4 *)(param_2 + 4);
    uVar1 = FUN_0025b154(uVar3);
    iVar2 = FUN_0025b710(uVar3,&local_20,uVar1,1);
    if (iVar2 == 0) {
      if (param_3 != 0) {
        bVar5 = local_20 != 0;
        local_20 = -local_20;
        local_1c = -(uint)bVar5 - local_1c;
      }
    }
    else if ((iVar2 != 2) || (local_20 = DAT_002664d0, local_1c = DAT_002664d4, param_3 == 0)) {
      FUN_0026632e(puVar4,uVar3,param_3,param_4);
      return;
    }
    __dest = (void *)FUN_0025ee10(*puVar4,8);
    if (__dest != (void *)0x0) {
      memcpy(__dest,&local_20,8);
    }
    FUN_002662da(puVar4,8,0,param_4,0,__dest,0xfffffff3);
  }
  return;
}


