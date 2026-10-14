/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026088c FUN_0026088c */

undefined4 * FUN_0026088c(undefined4 param_1,undefined4 *param_2,undefined4 param_3,char *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  byte *pbVar7;
  void *__src;
  undefined4 uVar8;
  undefined4 local_20;
  undefined4 local_1c [2];
  
  local_20 = 0;
  local_1c[0] = 0;
  if ((((param_4 != (char *)0x0) && (*param_4 == -0x68)) && (*(int *)(param_4 + 0x28) != 0)) &&
     ((int)((uint)*(byte *)(*(int *)(param_4 + 0x28) + 0x22) << 0x1b) < 0)) {
    iVar2 = FUN_0025d364(param_1);
    piVar3 = *(int **)(iVar2 + 8);
    iVar2 = *piVar3;
    if ((*(int *)(iVar2 + 0x48) != 0) &&
       (pbVar4 = (byte *)FUN_0025f25a(param_1,param_2[6]), iVar1 = DAT_0026095c, pbVar7 = pbVar4,
       pbVar4 != (byte *)0x0)) {
      for (; *pbVar7 != 0; pbVar7 = pbVar7 + 1) {
        *pbVar7 = *(byte *)(iVar1 + 0x26091a + (uint)*pbVar7);
      }
      iVar2 = (**(code **)(iVar2 + 0x48))(piVar3,param_3,pbVar4,&local_20,local_1c);
      FUN_0025fbda(param_1,pbVar4);
      if (iVar2 != 0) {
        iVar2 = FUN_0025b154(param_2[6]);
        puVar5 = (undefined4 *)FUN_0025f04c(param_1,iVar2 + 0x25);
        if (puVar5 != (undefined4 *)0x0) {
          uVar6 = param_2[1];
          uVar8 = param_2[2];
          *puVar5 = *param_2;
          puVar5[1] = uVar6;
          puVar5[2] = uVar8;
          uVar6 = param_2[4];
          uVar8 = param_2[5];
          puVar5[3] = param_2[3];
          puVar5[4] = uVar6;
          puVar5[5] = uVar8;
          uVar6 = param_2[7];
          uVar8 = param_2[8];
          puVar5[6] = param_2[6];
          puVar5[7] = uVar6;
          puVar5[8] = uVar8;
          puVar5[6] = puVar5 + 9;
          __src = (void *)param_2[6];
          iVar2 = FUN_0025b154(__src,uVar6,param_2 + 9,puVar5 + 9);
          memcpy(puVar5 + 9,__src,iVar2 + 1);
          puVar5[3] = local_20;
          puVar5[1] = local_1c[0];
          *(byte *)((int)puVar5 + 3) = *(byte *)((int)puVar5 + 3) | 4;
          param_2 = puVar5;
        }
      }
    }
  }
  return param_2;
}


