/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00289eb4 FUN_00289eb4 */

void FUN_00289eb4(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  size_t __n;
  int iVar8;
  void *__src;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined1 *local_7c;
  int local_74;
  int local_6c;
  undefined4 local_64;
  undefined4 local_5c;
  undefined4 local_58;
  int local_40;
  int local_3c;
  int local_38 [3];
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_20;
  size_t local_1c;
  
  piVar4 = (int *)FUN_0025d110(param_2);
  iVar3 = -(uint)(param_3 == 0);
  do {
    if (piVar4 == (int *)0x0) {
      return;
    }
    iVar11 = *param_1;
    cVar1 = *(char *)((int)piVar4 + iVar3 + 0x1a);
    iVar9 = piVar4[iVar3 + 8];
    if ((cVar1 == '\0') || (iVar9 != 0)) {
LAB_0028a288:
      if (iVar9 != 0) {
        FUN_00289e20(param_1,iVar9,param_2,param_4,2,0);
      }
    }
    else {
      local_40 = 0;
      local_3c = 0;
      iVar9 = FUN_0026a6fc(param_1,param_2,piVar4,&local_40,&local_3c);
      if (iVar9 == 0) {
        iVar9 = DAT_0028a250 + 0x289f20;
        local_74 = 0;
        local_64 = 0;
        local_5c = 0;
        for (local_7c = (undefined1 *)0x0; (int)local_7c < piVar4[5];
            local_7c = (undefined1 *)((int)local_7c + 1)) {
          local_38[2] = DAT_0028a254 + 0x289f2c;
          local_38[1] = 3;
          local_2c = 3;
          if (local_3c == 0) {
            iVar8 = piVar4[9];
          }
          else {
            iVar8 = *(int *)(local_3c + (int)local_7c * 4);
          }
          if (local_40 == 0) {
            local_20 = (void *)(DAT_0028a258 + 0x289f60);
          }
          else {
            local_20 = *(void **)(*(int *)((int)local_7c * 4 + *(int *)(local_40 + 4)) * 0x18 +
                                 *(int *)(param_2 + 0xc));
          }
          uVar10 = *(undefined4 *)(*(int *)(*piVar4 + 0xc) + iVar8 * 0x18);
          local_38[0] = iVar9;
          local_28 = uVar10;
          local_1c = FUN_0025b154();
          local_24 = FUN_0025b154(uVar10);
          uVar10 = FUN_00269118(param_1,0x1a,0,0,local_38);
          uVar5 = FUN_00269118(param_1,0x1a,0,0,&local_20);
          uVar10 = FUN_00269118(param_1,0x76,uVar10,uVar5,0);
          uVar5 = FUN_00269118(param_1,0x1a,0,0,&local_28);
          uVar10 = FUN_00269118(param_1,0x4c,uVar10,uVar5,0);
          local_64 = FUN_00262684(iVar11,local_64,uVar10);
          if (param_3 != 0) {
            uVar10 = FUN_00269118(param_1,0x1a,0,0,local_38);
            uVar5 = FUN_00269118(param_1,0x1a,0,0,&local_20);
            uVar10 = FUN_00269118(param_1,0x76,uVar10,uVar5,0);
            uVar5 = FUN_00269118(param_1,0x1a,0,0,local_38 + 2);
            uVar6 = FUN_00269118(param_1,0x1a,0,0,&local_20);
            uVar5 = FUN_00269118(param_1,0x76,uVar5,uVar6,0);
            uVar10 = FUN_00269118(param_1,0x46,uVar10,uVar5,0);
            local_74 = FUN_00262684(iVar11,local_74,uVar10);
          }
          if ((cVar1 != '\x06') && ((cVar1 != '\t' || (iVar3 != -1)))) {
            if (cVar1 == '\t') {
              iVar7 = FUN_00269118(param_1,0x1a,0,0,local_38 + 2);
              iVar8 = FUN_00269118(param_1,0x1a,0,0,&local_20);
              uVar10 = 0x76;
              iVar12 = 0;
LAB_0028a0ce:
              uVar10 = FUN_00269118(param_1,uVar10,iVar7,iVar8,iVar12);
            }
            else {
              iVar7 = 0;
              if ((cVar1 != '\b') ||
                 (iVar7 = *(int *)(*(int *)(*piVar4 + 0xc) + iVar8 * 0x18 + 4), iVar7 == 0)) {
                uVar10 = 0x62;
                iVar8 = iVar7;
                iVar12 = iVar7;
                goto LAB_0028a0ce;
              }
              uVar10 = FUN_002606fc(iVar11,iVar7,0);
            }
            local_5c = FUN_00267228(param_1,local_5c,uVar10);
            FUN_0025f2f2(param_1,local_5c,&local_28,0);
          }
        }
        local_6c = local_74;
        FUN_0025fbda(iVar11);
        __src = *(void **)*piVar4;
        __n = FUN_0025b154(__src);
        local_58 = 0;
        if (cVar1 == '\x06') {
          local_20 = __src;
          local_1c = __n;
          iVar9 = FUN_0025f1ba(iVar11,0x38,DAT_0028a25c + 0x28a130);
          if (iVar9 != 0) {
            *(undefined1 *)(iVar9 + 1) = 2;
          }
          uVar10 = FUN_00267228(param_1,0);
          uVar5 = FUN_00266f0c(iVar11,0,&local_20,0);
          local_58 = FUN_002672e8(param_1,uVar10,uVar5,local_64,0,0,0,0,0,0);
          local_64 = 0;
        }
        uVar2 = *(undefined1 *)(iVar11 + 0xea);
        *(undefined1 *)(iVar11 + 0xea) = 0;
        iVar9 = FUN_0025f04c(iVar11,__n + 0x4d);
        if (iVar9 == 0) {
          local_7c = (undefined1 *)0x0;
        }
        else {
          local_7c = (undefined1 *)(iVar9 + 0x24);
          *(size_t *)(iVar9 + 0x34) = __n;
          *(undefined1 **)(iVar9 + 0x1c) = local_7c;
          *(void **)(iVar9 + 0x30) = (void *)(iVar9 + 0x4c);
          memcpy((void *)(iVar9 + 0x4c),__src,__n);
          uVar10 = FUN_002606fc(iVar11,local_64,1);
          *(undefined4 *)(iVar9 + 0x38) = uVar10;
          uVar10 = FUN_002604c0(iVar11,local_5c,1);
          *(undefined4 *)(iVar9 + 0x3c) = uVar10;
          uVar10 = FUN_002607da(iVar11,local_58,1);
          *(undefined4 *)(iVar9 + 0x2c) = uVar10;
          if (local_74 != 0) {
            local_6c = FUN_00269118(param_1,0x13,local_74,0,0);
            uVar10 = FUN_002606fc(iVar11,local_6c,1);
            *(undefined4 *)(iVar9 + 0xc) = uVar10;
          }
        }
        *(undefined1 *)(iVar11 + 0xea) = uVar2;
        FUN_002610aa(iVar11,local_64);
        FUN_002610aa(iVar11,local_6c);
        FUN_00261102(iVar11,local_5c);
        FUN_00261092(iVar11,local_58);
        if (*(char *)(iVar11 + 0x36) != '\x01') {
          if (cVar1 == '\x06') {
            *local_7c = 0x74;
          }
          else if ((cVar1 == '\t') && (param_3 == 0)) {
            *local_7c = 0x6a;
          }
          else {
            *local_7c = 0x6b;
          }
          *(int *)(local_7c + 4) = iVar9;
          *(undefined4 *)(iVar9 + 0x14) = *(undefined4 *)(param_2 + 0x44);
          *(undefined4 *)(iVar9 + 0x18) = *(undefined4 *)(param_2 + 0x44);
          piVar4[iVar3 + 8] = iVar9;
          *(char *)(iVar9 + 8) = 'k' - (param_3 == 0);
          goto LAB_0028a288;
        }
        FUN_0026151c(iVar11,iVar9);
      }
    }
    piVar4 = (int *)piVar4[3];
  } while( true );
}


