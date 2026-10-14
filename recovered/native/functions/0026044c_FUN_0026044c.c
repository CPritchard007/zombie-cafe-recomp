/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026044c FUN_0026044c */

undefined8 FUN_0026044c(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  void *__dest;
  int iVar6;
  int iVar7;
  int local_1c;
  
  iVar6 = 2;
  iVar7 = 2;
  local_1c = param_2;
  while( true ) {
    iVar4 = *(int *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x14) <= iVar7) break;
    puVar5 = (undefined4 *)(iVar4 + iVar7 * 0x10);
    local_1c = puVar5[1];
    if (local_1c == 0) {
      FUN_0025fbda(param_1,*puVar5);
      *puVar5 = 0;
    }
    else {
      if (iVar6 < iVar7) {
        puVar1 = (undefined4 *)(iVar4 + iVar6 * 0x10);
        uVar2 = puVar5[1];
        uVar3 = puVar5[2];
        *puVar1 = *puVar5;
        puVar1[1] = uVar2;
        puVar1[2] = uVar3;
        puVar1[3] = puVar5[3];
      }
      iVar6 = iVar6 + 1;
    }
    iVar7 = iVar7 + 1;
  }
  memset((void *)(iVar4 + iVar6 * 0x10),0,(*(int *)(param_1 + 0x14) - iVar6) * 0x10);
  *(int *)(param_1 + 0x14) = iVar6;
  if (iVar6 == 2) {
    __dest = (void *)(param_1 + 0x1b8);
    if (*(void **)(param_1 + 0x10) != __dest) {
      memcpy(__dest,*(void **)(param_1 + 0x10),0x20);
      FUN_0025fbda(param_1,*(undefined4 *)(param_1 + 0x10));
      *(void **)(param_1 + 0x10) = __dest;
    }
  }
  return CONCAT44(local_1c,param_1);
}


