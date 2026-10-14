/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00292ac8 FUN_00292ac8 */

int FUN_00292ac8(int param_1,int param_2,size_t param_3,int param_4,undefined4 *param_5)

{
  undefined4 *__s;
  size_t sVar1;
  int iVar2;
  void *__s_00;
  undefined4 uVar3;
  undefined4 extraout_r1;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *__s_01;
  undefined8 uVar9;
  undefined1 auStack_80 [16];
  uint local_70;
  undefined4 local_68;
  undefined4 local_64;
  uint local_50;
  int local_4c;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    __s = (undefined4 *)sqlite3_malloc(0x10);
    if (__s == (undefined4 *)0x0) {
      return 7;
    }
    memset(__s,0,0x10);
    FUN_0025bb6c();
    iVar6 = *(int *)(param_1 + 8);
    __s_01 = *(undefined4 **)(iVar6 + 0x14);
    if (__s_01 == (undefined4 *)0x0) {
      iVar8 = (**(code **)(DAT_00292d64 + 0x292b4c))(*(undefined4 *)(param_1 + 0xc),auStack_80);
      if ((iVar8 == 0) || (iVar8 = DAT_00292d88, *(char *)(iVar6 + 0xd) != '\0')) {
        sVar1 = strlen(*(char **)(param_1 + 0x20));
        __s_01 = (undefined4 *)sqlite3_malloc(sVar1 + 0x2a);
        if (__s_01 != (undefined4 *)0x0) {
          memset(__s_01,0,sVar1 + 0x2a);
          iVar8 = DAT_00292d68;
          puVar7 = __s_01 + 9;
          __s_01[2] = puVar7;
          sqlite3_snprintf(sVar1 + 6,puVar7,iVar8 + 0x292b4a,*(undefined4 *)(param_1 + 0x20));
          __s_01[3] = 0xffffffff;
          *(undefined4 **)(*(int *)(param_1 + 8) + 0x14) = __s_01;
          *__s_01 = *(undefined4 *)(param_1 + 8);
          iVar8 = sqlite3_mutex_alloc(0);
          __s_01[1] = iVar8;
          if (iVar8 != 0) {
            if (*(char *)(iVar6 + 0xd) != '\0') goto LAB_00292c0c;
            iVar6 = sqlite3_uri_boolean(*(undefined4 *)(param_1 + 0x20),DAT_00292d6c + 0x292b7c,0);
            uVar3 = 0x42;
            if (iVar6 != 0) {
              *(undefined1 *)((int)__s_01 + 0x16) = 1;
              uVar3 = 0;
            }
            iVar6 = FUN_0025e6c4(puVar7,uVar3,local_70 & 0x1ff);
            __s_01[3] = iVar6;
            if (iVar6 < 0) {
              uVar3 = FUN_0026b474(DAT_00292d70);
              iVar8 = FUN_0026c154(uVar3,DAT_00292d74 + 0x292bac,puVar7,DAT_00292d70);
              goto LAB_00292c38;
            }
            (**(code **)(DAT_00292d78 + 0x292cb0))(iVar6,local_68,local_64);
            uVar3 = extraout_r1;
            if ((int)__s_01[3] < 0) {
LAB_00292bd6:
              iVar6 = FUN_0025e730(__s_01[3],uVar3,0,0);
              if ((iVar6 != 0) &&
                 (iVar8 = FUN_0026c154(DAT_00292d80,DAT_00292d7c + 0x292bee,puVar7,DAT_00292d84),
                 iVar8 != 0)) goto LAB_00292c38;
            }
            else {
              uVar9 = FUN_002635b0(__s_01,1,0x80,1);
              uVar3 = (undefined4)((ulonglong)uVar9 >> 0x20);
              if ((int)uVar9 == 0) goto LAB_00292bd6;
            }
            if (((int)__s_01[3] < 0) || (iVar8 = FUN_002635b0(__s_01,0,0x80,1), iVar8 == 0))
            goto LAB_00292c0c;
            goto LAB_00292c38;
          }
        }
        iVar8 = 7;
      }
LAB_00292c38:
      FUN_0026c1cc(param_1);
      sqlite3_free(__s);
      FUN_0025bb7a();
      if (iVar8 != 0) {
        return iVar8;
      }
    }
    else {
LAB_00292c0c:
      *__s = __s_01;
      __s_01[7] = __s_01[7] + 1;
      *(undefined4 **)(param_1 + 0x24) = __s;
      FUN_0025bb7a();
      sqlite3_mutex_enter(__s_01[1]);
      __s[1] = __s_01[8];
      __s_01[8] = __s;
      sqlite3_mutex_leave(__s_01[1]);
    }
  }
  iVar8 = **(int **)(param_1 + 0x24);
  sqlite3_mutex_enter(*(undefined4 *)(iVar8 + 4));
  iVar6 = 0;
  if (param_2 < (int)(uint)*(ushort *)(iVar8 + 0x14)) goto LAB_00292d32;
  *(size_t *)(iVar8 + 0x10) = param_3;
  if (-1 < *(int *)(iVar8 + 0xc)) {
    iVar2 = (**(code **)(DAT_00292d8c + 0x292cb8))(*(int *)(iVar8 + 0xc),auStack_80);
    iVar6 = DAT_00292d94;
    if (iVar2 != 0) goto LAB_00292d32;
    uVar4 = (param_2 + 1) * param_3;
    iVar6 = (int)uVar4 >> 0x1f;
    if ((local_4c < iVar6) || ((local_4c == iVar6 && (local_50 < uVar4)))) {
      iVar6 = param_4;
      if (param_4 == 0) goto LAB_00292d32;
      iVar6 = FUN_0025e730(*(undefined4 *)(iVar8 + 0xc));
      if (iVar6 != 0) {
        uVar5 = *(undefined4 *)(iVar8 + 8);
        iVar2 = DAT_00292d90 + 0x292cae;
        iVar6 = DAT_00292d94;
        uVar3 = DAT_00292d98;
LAB_00292cf2:
        iVar6 = FUN_0026c154(iVar6,iVar2,uVar5,uVar3);
        goto LAB_00292d32;
      }
    }
  }
  iVar2 = sqlite3_realloc(*(undefined4 *)(iVar8 + 0x18),(param_2 + 1) * 4);
  iVar6 = DAT_00292da8;
  if (iVar2 != 0) {
    *(int *)(iVar8 + 0x18) = iVar2;
    while ((int)(uint)*(ushort *)(iVar8 + 0x14) <= param_2) {
      if (*(int *)(iVar8 + 0xc) < 0) {
        __s_00 = (void *)sqlite3_malloc(param_3);
        if (__s_00 == (void *)0x0) {
          iVar6 = 7;
          goto LAB_00292d32;
        }
        memset(__s_00,0,param_3);
      }
      else {
        iVar6 = 3;
        if (*(char *)(iVar8 + 0x16) != '\0') {
          iVar6 = 1;
        }
        __s_00 = mmap((void *)0x0,param_3,iVar6,1,*(int *)(iVar8 + 0xc),
                      param_3 * *(ushort *)(iVar8 + 0x14));
        if (__s_00 == (void *)0xffffffff) {
          uVar5 = *(undefined4 *)(iVar8 + 8);
          iVar2 = DAT_00292d9c + 0x292cf4;
          iVar6 = DAT_00292da0;
          uVar3 = DAT_00292da4;
          goto LAB_00292cf2;
        }
      }
      *(void **)((uint)*(ushort *)(iVar8 + 0x14) * 4 + *(int *)(iVar8 + 0x18)) = __s_00;
      *(short *)(iVar8 + 0x14) = *(short *)(iVar8 + 0x14) + 1;
    }
    iVar6 = 0;
  }
LAB_00292d32:
  if (param_2 < (int)(uint)*(ushort *)(iVar8 + 0x14)) {
    *param_5 = *(undefined4 *)(param_2 * 4 + *(int *)(iVar8 + 0x18));
  }
  else {
    *param_5 = 0;
  }
  if ((iVar6 == 0) && (*(char *)(iVar8 + 0x16) != '\0')) {
    iVar6 = 8;
  }
  sqlite3_mutex_leave(*(undefined4 *)(iVar8 + 4));
  return iVar6;
}


