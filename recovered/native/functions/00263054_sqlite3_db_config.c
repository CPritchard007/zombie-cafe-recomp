/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00263054 sqlite3_db_config */

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 sqlite3_db_config(int param_1,int param_2,int param_3,uint *param_4,undefined4 param_5)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1;
  if (param_2 == DAT_00263104) {
    puVar1 = (uint *)0x5;
    if (*(int *)(param_1 + 0xec) == 0) {
      puVar1 = (uint *)FUN_00262f98(param_1,param_3,param_4,param_5,param_1,&stack0x00000004,param_3
                                   );
      iVar5 = param_1;
    }
    goto LAB_002630fa;
  }
  if (param_2 == DAT_00263108) {
    iVar4 = 0;
  }
  else {
    puVar1 = (uint *)0x1;
    if (param_2 != DAT_0026310c) goto LAB_002630fa;
    iVar4 = 1;
  }
  uVar3 = *(uint *)(param_1 + 0x18);
  if (param_3 < 1) {
    if (param_3 == 0) {
      uVar2 = uVar3 & ~*(uint *)(DAT_00263114 + iVar4 * 8 + 0x2630f2);
      goto LAB_002630d2;
    }
  }
  else {
    uVar2 = *(uint *)(DAT_00263110 + iVar4 * 8 + 0x2630e0) | uVar3;
LAB_002630d2:
    *(uint *)(param_1 + 0x18) = uVar2;
  }
  if (uVar3 != *(uint *)(param_1 + 0x18)) {
    FUN_0025c5ec(param_1);
  }
  puVar1 = param_4;
  if (param_4 != (uint *)0x0) {
    *param_4 = (uint)((*(uint *)((int)&DAT_00263114 + DAT_00263118 + iVar4 * 8 + 2) &
                      *(uint *)(param_1 + 0x18)) != 0);
    puVar1 = (uint *)0x0;
  }
LAB_002630fa:
  return CONCAT44(iVar5,puVar1);
}


