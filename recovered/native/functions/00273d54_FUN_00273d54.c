/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00273d54 FUN_00273d54 */

int FUN_00273d54(int *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *__s1;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int local_58;
  int local_54;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  uint local_20;
  int local_1c;
  
  iVar10 = *param_1;
  local_34 = 0;
  local_30 = 1;
  local_58 = (**(code **)(*(int *)param_1[0x10] + 0x18))((int *)param_1[0x10],&local_28);
  if (local_58 == 0) {
    pcVar4 = (char *)param_1[0x2c];
    local_58 = FUN_0025e49c(param_1[0x10],pcVar4,*(int *)(*param_1 + 8) + 1);
    if (local_58 == 0) {
      if ((*pcVar4 == '\0') ||
         (iVar10 = (**(code **)(iVar10 + 0x20))(iVar10,pcVar4,0,&local_30), iVar10 == 0)) {
        if (local_30 == 0) goto LAB_00273ed4;
        param_1[0x12] = 0;
        param_1[0x13] = 0;
        local_54 = param_2;
LAB_00273dc8:
        iVar10 = FUN_00263fd8(param_1,param_2,local_28,local_24,&local_38,&local_34);
        if (iVar10 == 0) {
          uVar8 = param_1[0x1f];
          if (local_38 == 0xffffffff) {
            local_38 = __aeabi_ldivmod(local_28 - uVar8,local_24 - (uint)(local_28 < uVar8),
                                       param_1[0x20] + 8,param_1[0x20] + 8 >> 0x1f);
          }
          uVar6 = param_1[0x12];
          if ((param_2 == 0) && (local_38 == 0)) {
            uVar1 = uVar8 + param_1[0x14];
            iVar10 = param_1[0x15] + (uint)CARRY4(uVar8,param_1[0x14]);
            if ((uVar6 == uVar1) && (param_1[0x13] == iVar10)) {
              local_38 = __aeabi_ldivmod(local_28 - uVar1,
                                         (local_24 - iVar10) - (uint)(local_28 < uVar1),
                                         param_1[0x20] + 8,param_1[0x20] + 8 >> 0x1f);
            }
          }
          if ((uVar6 == uVar8) && (param_1[0x13] == 0)) {
            if ((*(int *)param_1[0xf] != 0) &&
               ((2 < *(byte *)((int)param_1 + 0xf) - 1 &&
                (iVar10 = FUN_0026350c(param_1,local_34), iVar10 != 0)))) goto LAB_00273ed2;
            param_1[6] = local_34;
          }
          for (uVar8 = 0; uVar8 < local_38; uVar8 = uVar8 + 1) {
            if (local_54 != 0) {
              FUN_002619d4(param_1);
            }
            iVar10 = FUN_00273ae0(param_1,param_1 + 0x12,0,1,0);
            if (iVar10 != 0) {
              if (iVar10 != 0x65) {
                local_58 = 0;
                if (iVar10 == DAT_00274078) goto LAB_00273ed4;
                goto LAB_00273ed2;
              }
              local_54 = 0;
              param_1[0x12] = local_28;
              param_1[0x13] = local_24;
              break;
            }
            local_54 = 0;
          }
          goto LAB_00273dc8;
        }
        if (iVar10 == 0x65) goto LAB_00273ed4;
      }
LAB_00273ed2:
      local_58 = iVar10;
    }
  }
LAB_00273ed4:
  *(char *)((int)param_1 + 0x11) = (char)param_1[3];
  if (local_58 == 0) {
    pcVar4 = (char *)param_1[0x2c];
    local_58 = FUN_0025e49c(param_1[0x10],pcVar4,*(int *)(*param_1 + 8) + 1);
    if ((local_58 == 0) &&
       ((((*(byte *)((int)param_1 + 0xf) - 1 < 3 ||
          (local_58 = FUN_00261c22(param_1), local_58 == 0)) &&
         (local_58 = FUN_00261dac(param_1,*pcVar4 != '\0'), local_58 == 0)) &&
        ((*pcVar4 != '\0' && (local_30 != 0)))))) {
      iVar9 = *param_1;
      piVar2 = (int *)FUN_0025f3a8(*(int *)(iVar9 + 4) << 1);
      iVar10 = (int)piVar2 + *(int *)(iVar9 + 4);
      if (piVar2 == (int *)0x0) {
        local_58 = 7;
        local_54 = 0;
      }
      else {
        local_58 = (**(code **)(iVar9 + 0x18))(iVar9,pcVar4,piVar2,DAT_0027407c,0);
        local_54 = 0;
        if ((local_58 == 0) &&
           (local_58 = (**(code **)(*piVar2 + 0x18))(piVar2,&local_20), local_58 == 0)) {
          iVar5 = *(int *)(iVar9 + 8) + 1;
          local_54 = FUN_0025edc8(iVar5 + local_20 + 1);
          local_58 = 7;
          if (local_54 != 0) {
            __s1 = (char *)(local_54 + local_20 + 1);
            local_58 = (**(code **)(*piVar2 + 8))
                                 (piVar2,local_54,local_20,*(code **)(*piVar2 + 8),0,0);
            if (local_58 == 0) {
              *(undefined1 *)(local_54 + local_20) = 0;
              iVar7 = local_54;
              while( true ) {
                iVar3 = iVar7 - local_54 >> 0x1f;
                if ((local_1c <= iVar3) &&
                   ((local_1c != iVar3 || (local_20 <= (uint)(iVar7 - local_54))))) break;
                local_58 = (**(code **)(iVar9 + 0x20))(iVar9,iVar7,0,&local_2c);
                if (local_58 != 0) goto LAB_00274054;
                if (local_2c != 0) {
                  local_58 = (**(code **)(iVar9 + 0x18))(iVar9,iVar7,iVar10,DAT_00274080,0);
                  if (local_58 != 0) goto LAB_00274054;
                  local_58 = FUN_0025e49c(iVar10,__s1,iVar5);
                  FUN_0025acd0(iVar10);
                  if ((local_58 != 0) ||
                     ((*__s1 != '\0' && (iVar3 = strcmp(__s1,pcVar4), iVar3 == 0))))
                  goto LAB_00274054;
                }
                iVar3 = FUN_0025b154(iVar7);
                iVar7 = iVar7 + iVar3 + 1;
              }
              FUN_0025acd0(piVar2);
              local_58 = (**(code **)(iVar9 + 0x1c))(iVar9,pcVar4,0);
            }
          }
        }
      }
LAB_00274054:
      sqlite3_free(local_54);
      if (piVar2 != (int *)0x0) {
        FUN_0025acd0(piVar2);
        sqlite3_free(piVar2);
      }
    }
  }
  FUN_00261bd8(param_1);
  return local_58;
}


