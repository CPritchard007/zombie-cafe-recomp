/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0028d074 sqlite3_blob_open */

undefined4
sqlite3_blob_open(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6,int param_7,undefined4 *param_8)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_r1;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *__s;
  uint local_48;
  int *local_44;
  int local_40;
  int local_34;
  int local_1c [2];
  
  *param_8 = 0;
  iVar1 = -(uint)(param_7 == 0) + 1;
  local_1c[0] = 0;
  sqlite3_mutex_enter(*(undefined4 *)(param_1 + 0xc));
  piVar2 = (int *)FUN_0025f04c(param_1,0x1c);
  if ((piVar2 != (int *)0x0) && (__s = (int *)FUN_0025ee10(param_1,0x230), __s != (int *)0x0)) {
    uVar6 = -(uint)(param_7 == 0) + 4;
    local_34 = 5;
    local_44 = (int *)0x0;
    do {
      memset(__s,0,0x230);
      *__s = param_1;
      FUN_0025fbda(param_1,local_1c[0]);
      local_1c[0] = 0;
      FUN_00261fe0(param_1);
      puVar3 = (undefined4 *)FUN_00287f90(__s,0,param_3,param_2);
      if (puVar3 == (undefined4 *)0x0) {
LAB_0028d11a:
        if (__s[1] != 0) {
          FUN_0025fbda(param_1,local_1c[0]);
          local_1c[0] = __s[1];
          __s[1] = 0;
        }
LAB_0028d1f8:
        FUN_00262022(param_1);
        local_44 = (int *)0x1;
        goto LAB_0028d366;
      }
      if ((int)((uint)*(byte *)((int)puVar3 + 0x22) << 0x1b) < 0) {
        iVar1 = DAT_0028d3c4 + 0x28d10e;
LAB_0028d112:
        FUN_00268e48(__s,iVar1,param_3);
        goto LAB_0028d11a;
      }
      if (puVar3[7] != 0) {
        iVar1 = DAT_0028d3c8 + 0x28d114;
        goto LAB_0028d112;
      }
      local_40 = 0;
      while ((local_40 < (int)puVar3[2] &&
             (iVar7 = sqlite3_stricmp(*(undefined4 *)(local_40 * 0x18 + puVar3[3]),param_4),
             iVar7 != 0))) {
        local_40 = local_40 + 1;
      }
      if (local_40 == puVar3[2]) {
        FUN_0025fbda(param_1,local_1c[0]);
        iVar1 = DAT_0028d3cc + 0x28d16e;
LAB_0028d1f2:
        local_1c[0] = FUN_0026877c(param_1,iVar1,param_4);
        goto LAB_0028d1f8;
      }
      if (iVar1 != 0) {
        local_48 = *(uint *)(param_1 + 0x18) & 0x4000000;
        if (local_48 != 0) {
          local_48 = 0;
          for (iVar7 = puVar3[9]; iVar7 != 0; iVar7 = *(int *)(iVar7 + 4)) {
            iVar5 = iVar7;
            for (iVar8 = 0; iVar8 < *(int *)(iVar7 + 0x14); iVar8 = iVar8 + 1) {
              if (*(int *)(iVar5 + 0x24) == local_40) {
                local_48 = DAT_0028d3d0 + 0x28d18c;
              }
              iVar5 = iVar5 + 8;
            }
          }
        }
        for (iVar7 = puVar3[4]; iVar7 != 0; iVar7 = *(int *)(iVar7 + 0x14)) {
          for (iVar5 = 0; iVar5 < *(int *)(iVar7 + 0x24); iVar5 = iVar5 + 1) {
            if (*(int *)(iVar5 * 4 + *(int *)(iVar7 + 4)) == local_40) {
              local_48 = DAT_0028d3d4 + 0x28d1ba;
            }
          }
        }
        if (local_48 != 0) {
          FUN_0025fbda(param_1,local_1c[0]);
          iVar1 = DAT_0028d3d8 + 0x28d1f4;
          param_4 = local_48;
          goto LAB_0028d1f2;
        }
      }
      iVar7 = FUN_0025f080(param_1);
      piVar2[5] = iVar7;
      if (iVar7 != 0) {
        uVar4 = FUN_0025d12c(param_1,puVar3[0x11]);
        FUN_00266dd0(iVar7,0xc,DAT_0028d3dc + 0x28d294);
        FUN_0025c394(iVar7,0,uVar4);
        FUN_0025c3a6(iVar7,0,iVar1);
        FUN_0025c394(iVar7,1,uVar4);
        FUN_0025c3a6(iVar7,1,*(undefined4 *)puVar3[0x11]);
        if (1 < *(uint *)(iVar7 + 0x1c)) {
          *(undefined4 *)(*(int *)(iVar7 + 4) + 0x20) = *(undefined4 *)(puVar3[0x11] + 4);
        }
        FUN_0025c3f4(iVar7,uVar4);
        FUN_0025c394(iVar7,2,uVar4);
        FUN_0025c3a6(iVar7,2,puVar3[5]);
        if (2 < *(uint *)(iVar7 + 0x1c)) {
          *(int *)(*(int *)(iVar7 + 4) + 0x34) = iVar1;
        }
        FUN_00263832(iVar7,2,*puVar3,0);
        FUN_00263806(iVar7,4 - iVar1);
        FUN_0025c3a6(iVar7,uVar6,puVar3[5]);
        if (uVar6 < *(uint *)(iVar7 + 0x1c)) {
          *(undefined4 *)(*(int *)(iVar7 + 4) + uVar6 * 0x14 + 0xc) = uVar4;
        }
        FUN_00263832(iVar7,uVar6,puVar3[2] + 1,0xfffffff2);
        FUN_0025c3a6(iVar7,7,puVar3[2]);
        if (*(char *)(param_1 + 0x36) == '\0') {
          __s[0x73] = 1;
          __s[0x13] = 1;
          __s[0x12] = 1;
          FUN_0025fd94(iVar7,__s);
        }
      }
      piVar2[6] = param_1;
      *piVar2 = iVar1;
      piVar2[3] = local_40;
      FUN_00262022(param_1);
      if (*(char *)(param_1 + 0x36) != '\0') goto LAB_0028d340;
      sqlite3_bind_int64(piVar2[5],1,param_5,param_6);
      local_44 = (int *)FUN_0028cf04(piVar2,extraout_r1,param_5,param_6,local_1c);
      local_34 = local_34 + -1;
      if ((local_34 == 0) || (local_44 != (int *)0x11)) goto LAB_0028d340;
    } while( true );
  }
  __s = (int *)0x0;
LAB_0028d346:
  if (*(char *)(param_1 + 0x36) == '\0') {
    *param_8 = piVar2;
    local_44 = (int *)0x0;
    goto LAB_0028d37a;
  }
  local_44 = piVar2;
  if (piVar2 != (int *)0x0) {
    local_44 = (int *)0x0;
    goto LAB_0028d366;
  }
LAB_0028d372:
  FUN_0025fbda(param_1,piVar2);
LAB_0028d37a:
  iVar1 = local_1c[0];
  if (local_1c[0] != 0) {
    iVar1 = DAT_0028d3e0 + 0x28d386;
  }
  FUN_00268578(param_1,local_44,iVar1);
  FUN_0025fbda(param_1,local_1c[0]);
  FUN_0025fbda(param_1,__s);
  uVar4 = FUN_002685e0(param_1,local_44);
  sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
  return uVar4;
LAB_0028d340:
  if (local_44 == (int *)0x0) goto LAB_0028d346;
LAB_0028d366:
  if (piVar2[5] != 0) {
    FUN_002810d0();
  }
  goto LAB_0028d372;
}


