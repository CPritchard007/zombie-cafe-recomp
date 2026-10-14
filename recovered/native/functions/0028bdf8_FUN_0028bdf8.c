/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0028bdf8 FUN_0028bdf8 */

void FUN_0028bdf8(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  int local_24;
  
  iVar8 = *param_1;
  if ((*(char *)(iVar8 + 0x36) == '\0') &&
     (puVar1 = (undefined4 *)
               FUN_00287f90(param_1,0,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 8)),
     puVar1 != (undefined4 *)0x0)) {
    if ((int)((uint)*(byte *)((int)puVar1 + 0x22) << 0x1b) < 0) {
      iVar4 = DAT_0028bf4c + 0x28be2e;
    }
    else {
      if (puVar1[7] == 0) {
        uVar6 = *puVar1;
        iVar4 = FUN_0025b154(uVar6);
        if ((iVar4 < 7) || (iVar4 = sqlite3_strnicmp(uVar6,DAT_0028bf54 + 0x28be56,7), iVar4 != 0))
        {
          iVar4 = FUN_0025d12c(iVar8,puVar1[0x11]);
          piVar2 = (int *)FUN_0025f04c(iVar8,0x4c);
          if (piVar2 != (int *)0x0) {
            param_1[0x7f] = (int)piVar2;
            *(undefined2 *)(piVar2 + 8) = 1;
            iVar5 = puVar1[2];
            piVar2[2] = iVar5;
            iVar5 = iVar5 + -1;
            iVar3 = FUN_0025f04c(iVar8,(((int)(((uint)(iVar5 >> 0x1f) >> 0x1d) + iVar5) >> 3) + 1) *
                                       0xc0);
            iVar5 = DAT_0028bf5c;
            piVar2[3] = iVar3;
            iVar5 = FUN_0026877c(iVar8,iVar5 + 0x28beb2,*puVar1);
            *piVar2 = iVar5;
            if (((void *)piVar2[3] == (void *)0x0) || (iVar5 == 0)) {
              *(undefined1 *)(iVar8 + 0x36) = 1;
            }
            else {
              memcpy((void *)piVar2[3],(void *)puVar1[3],piVar2[2] * 0x18);
              local_24 = 0;
              while (local_24 < piVar2[2]) {
                puVar7 = (undefined4 *)(piVar2[3] + local_24 * 0x18);
                uVar6 = FUN_0025f25a(iVar8,*puVar7);
                *puVar7 = uVar6;
                puVar7[4] = 0;
                local_24 = local_24 + 1;
                puVar7[3] = 0;
                puVar7[1] = 0;
                puVar7[2] = 0;
              }
              piVar2[0x11] = *(int *)(*(int *)(iVar8 + 0x10) + iVar4 * 0x10 + 0xc);
              piVar2[0xc] = puVar1[0xc];
              *(undefined2 *)(piVar2 + 8) = 1;
              FUN_00275f2c(param_1,0,iVar4);
              iVar5 = FUN_002662b8(param_1);
              if (iVar5 != 0) {
                FUN_002668cc(param_1,iVar4);
              }
            }
          }
        }
        else {
          FUN_00268e48(param_1,DAT_0028bf58 + 0x28be66,uVar6);
        }
        goto LAB_0028bf3e;
      }
      iVar4 = DAT_0028bf50 + 0x28be3a;
    }
    FUN_00268e48(param_1,iVar4);
  }
LAB_0028bf3e:
  FUN_00260fde(iVar8,param_2);
  return;
}


