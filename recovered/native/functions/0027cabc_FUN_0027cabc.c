/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027cabc FUN_0027cabc */

undefined8 FUN_0027cabc(undefined4 *param_1,int *param_2)

{
  void *__s;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *local_20;
  
  local_20 = param_1;
  if (param_2 != (int *)0x0) {
    iVar3 = param_2[0x12];
    uVar4 = *param_1;
    if (iVar3 != 0) {
      local_20 = (undefined4 *)0x0;
      if (*(int *)(iVar3 + 0x24) != 0) {
        for (; (int)local_20 < *(int *)(iVar3 + 0x14); local_20 = (undefined4 *)((int)local_20 + 1))
        {
          __s = (void *)(*(int *)(iVar3 + 0x24) + (int)local_20 * 0x30);
          FUN_0025fbda(uVar4,*(undefined4 *)((int)__s + 0x1c));
          FUN_0025fbda(uVar4,*(undefined4 *)((int)__s + 0x24));
          memset(__s,0,0x30);
        }
        FUN_0025fbda(uVar4);
      }
      iVar1 = *(int *)(iVar3 + 0x2c);
      if (iVar1 != 0) {
        FUN_0025acd0(iVar1);
        sqlite3_free(iVar1);
      }
      puVar2 = *(undefined4 **)(iVar3 + 0x30);
      while (puVar2 != (undefined4 *)0x0) {
        local_20 = (undefined4 *)puVar2[2];
        FUN_0025fbda(uVar4,puVar2);
        puVar2 = local_20;
      }
      FUN_0025fbda(uVar4,*(undefined4 *)(iVar3 + 0x34));
      FUN_0025fbda(uVar4,iVar3);
      param_2[0x12] = 0;
    }
    if (param_2[1] == 0) {
      if (*param_2 != 0) {
        FUN_00274a3e();
      }
    }
    else {
      FUN_0027c61c();
    }
    if (param_2[9] != 0) {
      iVar3 = param_2[10];
      *(undefined1 *)((int)param_1 + 0x62) = 1;
      (**(code **)(iVar3 + 0x1c))();
      *(undefined1 *)((int)param_1 + 0x62) = 0;
    }
  }
  return CONCAT44(param_1,local_20);
}


