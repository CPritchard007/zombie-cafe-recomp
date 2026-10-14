/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00264cfc sqlite3_initialize */

undefined8 sqlite3_initialize(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  void *__s;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  
  iVar6 = DAT_00264fdc;
  iVar9 = 0;
  if (*(int *)(DAT_00264fd0 + 0x264dca) != 0) goto LAB_002650a6;
  puVar8 = param_1;
  if (*(int *)(DAT_00264fd0 + 0x264d4a) == 0) {
    if (*(int *)(DAT_00264fd0 + 0x264d0a) == 0) {
      puVar4 = (undefined4 *)(DAT_00264fd8 + 0x264d3a);
    }
    else {
      puVar4 = (undefined4 *)(DAT_00264fd4 + 0x264d8e);
    }
    *(undefined4 *)(DAT_00264fdc + 0x264d70) = *puVar4;
    *(undefined4 *)(iVar6 + 0x264d74) = puVar4[1];
    uVar10 = puVar4[4];
    uVar11 = puVar4[5];
    *(undefined4 *)(iVar6 + 0x264d7c) = puVar4[3];
    *(undefined4 *)(iVar6 + 0x264d80) = uVar10;
    *(undefined4 *)(iVar6 + 0x264d84) = uVar11;
    uVar10 = puVar4[7];
    uVar11 = puVar4[8];
    puVar8 = puVar4 + 9;
    *(undefined4 *)(iVar6 + 0x264d88) = puVar4[6];
    *(undefined4 *)(iVar6 + 0x264d8c) = uVar10;
    *(undefined4 *)(iVar6 + 0x264d90) = uVar11;
    param_2 = iVar6 + 0x264d94;
    *(undefined4 *)(iVar6 + 0x264d78) = puVar4[2];
  }
  iVar6 = DAT_00264fe0;
  iVar9 = (**(code **)(DAT_00264fe0 + 0x264d8e))(puVar8,param_2);
  if (iVar9 != 0) goto LAB_002650a6;
  uVar10 = FUN_0025ad68(2);
  sqlite3_mutex_enter();
  *(undefined4 *)(iVar6 + 0x264e1e) = 1;
  if (*(int *)(iVar6 + 0x264e22) == 0) {
    if (*(int *)(iVar6 + 0x264d6e) == 0) {
      sqlite3_config(4,DAT_00264fe4 + 0x264d9e);
    }
    iVar6 = DAT_00264fe8;
    memset((void *)(DAT_00264fe8 + 0x264df4),0,0x28);
    if (*(int *)(DAT_00264fec + 0x264da4) != 0) {
      uVar11 = FUN_0025ad68(3);
      *(undefined4 *)(iVar6 + 0x264df4) = uVar11;
    }
    iVar6 = DAT_00264ff4;
    piVar5 = *(int **)(DAT_00264ff0 + 0x264e56);
    if (piVar5 == (int *)0x0) {
LAB_00264e00:
      *(undefined4 *)(DAT_00264ffc + 0x264e80) = 0;
      iVar6 = DAT_00265000;
      *(undefined4 *)(DAT_00265000 + 0x264eb2) = 0;
      *(undefined4 *)(iVar6 + 0x264eb6) = 0;
      *(undefined4 *)(iVar6 + 0x264eba) = 0;
    }
    else {
      uVar2 = *(uint *)(DAT_00264ff0 + 0x264e5a);
      if (((int)uVar2 < 100) || (iVar1 = *(int *)(DAT_00264ff0 + 0x264e5e), iVar1 < 1))
      goto LAB_00264e00;
      uVar2 = uVar2 & 0xfffffff8;
      *(uint *)(DAT_00264ff0 + 0x264e5a) = uVar2;
      *(int **)(iVar6 + 0x264e56) = piVar5;
      *(int *)(iVar6 + 0x264e5a) = iVar1;
      piVar7 = piVar5;
      for (iVar6 = 0; iVar6 < iVar1 + -1; iVar6 = iVar6 + 1) {
        *piVar7 = (int)((int)piVar7 + uVar2);
        piVar7 = (int *)((int)piVar7 + uVar2);
      }
      piVar5 = (int *)((int)piVar5 + uVar2 * (iVar1 + -1));
      *piVar5 = 0;
      *(int **)(DAT_00264ff8 + 0x264e76) = piVar5 + 1;
    }
    iVar6 = DAT_0026500c;
    if (((*(int *)(DAT_00265004 + 0x264ed2) == 0) ||
        (*(int *)(DAT_00265004 + 0x264ed6) <= DAT_00265008)) ||
       (*(int *)(DAT_00265004 + 0x264eda) < 1)) {
      *(undefined4 *)(DAT_0026500c + 0x264ef6) = 0;
      *(undefined4 *)(iVar6 + 0x264efa) = 0;
      *(undefined4 *)(iVar6 + 0x264efe) = 0;
    }
    iVar6 = (**(code **)(DAT_00265010 + 0x264e8a))(*(undefined4 *)(DAT_00265010 + 0x264e92));
    if (iVar6 == 0) goto LAB_00264e62;
  }
  else {
LAB_00264e62:
    iVar6 = DAT_00265014;
    piVar5 = (int *)(DAT_00265014 + 0x264f42);
    *(undefined4 *)(DAT_00265014 + 0x264f3a) = 1;
    if (*piVar5 == 0) {
      iVar1 = FUN_0025ad68();
      iVar6 = *(int *)(iVar6 + 0x264e6e);
      *piVar5 = iVar1;
      if ((iVar6 != 0) && (iVar1 == 0)) {
        iVar6 = 7;
        goto LAB_00264e92;
      }
    }
    *(int *)(DAT_002650c8 + 0x26518c) = *(int *)(DAT_002650c8 + 0x26518c) + 1;
    iVar6 = iVar9;
  }
LAB_00264e92:
  iVar9 = iVar6;
  sqlite3_mutex_leave(uVar10);
  iVar6 = DAT_00265018;
  if (iVar9 != 0) goto LAB_002650a6;
  sqlite3_mutex_enter(*(undefined4 *)(DAT_00265018 + 0x264f7c));
  if ((*(int *)(iVar6 + 0x264f68) == 0) && (piVar5 = (int *)(iVar6 + 0x264f6c), *piVar5 == 0)) {
    *piVar5 = 1;
    __s = (void *)(DAT_0026501c + 0x264f30);
    memset(__s,0,0x5c);
    iVar9 = DAT_00265020 + 0x264ede;
    iVar6 = 0;
    do {
      iVar1 = iVar6 * 0x24;
      iVar6 = iVar6 + 1;
      FUN_0025ce28(__s,iVar9 + iVar1);
    } while (iVar6 != 0x34);
    iVar6 = 0;
    iVar9 = DAT_00265024 + 0x264f58;
    iVar1 = DAT_00265028 + 0x264f4a;
    do {
      iVar3 = iVar6 * 0x24;
      iVar6 = iVar6 + 1;
      FUN_0025ce28(iVar9,iVar1 + iVar3);
      iVar3 = DAT_0026502c;
    } while (iVar6 != 8);
    FUN_0025ce28(iVar9,DAT_0026502c + 0x264f86);
    FUN_0025ce28(iVar9,iVar3 + 0x264faa);
    FUN_0025ce28(iVar9,iVar3 + 0x264fce);
    if (*(int *)((int)&DAT_00265008 + DAT_00265030 + 2) == 0) {
      if (*(int *)(DAT_00265030 + 0x264f9e) == 0) {
        sqlite3_config(0x12,DAT_00265034 + 0x264f84);
      }
      iVar9 = (**(code **)(DAT_00265038 + 0x264fbe))(*(undefined4 *)(DAT_00265038 + 0x264fba));
      if (iVar9 == 0) goto LAB_00264f60;
    }
    else {
LAB_00264f60:
      iVar6 = DAT_0026503c;
      *(undefined4 *)((int)&DAT_0026503c + DAT_0026503c + 2) = 1;
      iVar1 = sqlite3_malloc(10);
      iVar9 = 7;
      if (iVar1 != 0) {
        sqlite3_free();
        iVar9 = sqlite3_os_init();
        iVar1 = DAT_00265040;
        if (iVar9 == 0) {
          puVar8 = *(undefined4 **)((int)&DAT_00265018 + iVar6 + 2);
          iVar3 = *(int *)((int)&DAT_00265020 + iVar6 + 2);
          if (*(int *)((int)&DAT_00264fd4 + DAT_00265040) != 0) {
            uVar2 = *(uint *)((int)&DAT_0026501c + iVar6 + 2) & 0xfffffff8;
            *(uint *)((int)&DAT_00264fd8 + DAT_00265040) = uVar2;
            *(int *)((int)&DAT_00264ff4 + iVar1) = iVar3;
            *(int *)((int)&DAT_00264fdc + iVar1) = iVar3;
            iVar6 = 10;
            if (iVar3 < 0x5b) {
              iVar6 = __divsi3(iVar3);
              iVar6 = iVar6 + 1;
            }
            iVar1 = DAT_00265044;
            *(int *)((int)&DAT_00265004 + DAT_00265044) = iVar6;
            *(undefined4 *)((int)&DAT_00265014 + iVar1) = 0;
            *(undefined4 *)((int)&DAT_0026501c + iVar1) = 0;
            *(undefined4 **)((int)&DAT_00265008 + iVar1) = puVar8;
            iVar6 = DAT_00265048;
            iVar1 = iVar3;
            puVar4 = puVar8;
            while (bVar12 = iVar1 != 0, iVar1 = iVar1 + -1, bVar12) {
              *puVar4 = *(undefined4 *)((int)&DAT_00265024 + iVar6);
              *(undefined4 **)((int)&DAT_00265024 + iVar6) = puVar4;
              puVar4 = (undefined4 *)((int)puVar4 + uVar2);
            }
            *(undefined4 **)(DAT_002650b8 + 0x2650ae) = (undefined4 *)((int)puVar8 + uVar2 * iVar3);
          }
          *(undefined4 *)(DAT_002650bc + 0x26512e) = 1;
        }
      }
    }
    *(undefined4 *)(DAT_002650c0 + 0x26513c) = 0;
  }
  iVar6 = DAT_002650c4;
  puVar8 = (undefined4 *)(DAT_002650c4 + 0x265154);
  sqlite3_mutex_leave(*puVar8);
  sqlite3_mutex_enter(uVar10);
  iVar1 = *(int *)(iVar6 + 0x265158) + -1;
  *(int *)(iVar6 + 0x265158) = iVar1;
  if (iVar1 < 1) {
    sqlite3_mutex_free(*puVar8);
    *puVar8 = 0;
  }
  sqlite3_mutex_leave(uVar10);
LAB_002650a6:
  return CONCAT44(param_1,iVar9);
}


