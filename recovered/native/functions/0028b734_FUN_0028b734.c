/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0028b734 FUN_0028b734 */

void FUN_0028b734(int *param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ushort *puVar15;
  undefined4 uVar16;
  undefined4 *puVar17;
  uint uVar18;
  
  iVar9 = *param_1;
  if (*(char *)(iVar9 + 0x36) != '\0') goto LAB_0028baa4;
  if (param_4 != 0) {
    *(char *)(iVar9 + 0x39) = *(char *)(iVar9 + 0x39) + '\x01';
  }
  puVar2 = (undefined4 *)
           FUN_00287f90(param_1,param_3,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 8))
  ;
  if (param_4 != 0) {
    *(char *)(iVar9 + 0x39) = *(char *)(iVar9 + 0x39) + -1;
  }
  if (puVar2 == (undefined4 *)0x0) {
    if (param_4 != 0) {
      FUN_002760de(param_1,*(undefined4 *)(param_2 + 8));
    }
    goto LAB_0028baa4;
  }
  iVar3 = FUN_0025d12c(iVar9,puVar2[0x11]);
  if (((int)((uint)*(byte *)((int)puVar2 + 0x22) << 0x1b) < 0) &&
     (iVar4 = FUN_0026d134(param_1,puVar2), iVar4 != 0)) goto LAB_0028baa4;
  if (iVar3 == 1) {
    iVar4 = DAT_0028bab0 + 0x28b7be;
  }
  else {
    iVar4 = DAT_0028bab4 + 0x28b7c4;
  }
  iVar11 = iVar3 * 0x10;
  uVar16 = *(undefined4 *)(*(int *)(iVar9 + 0x10) + iVar11);
  iVar4 = FUN_00268e90(param_1,9,iVar4,0,uVar16);
  if (iVar4 != 0) goto LAB_0028baa4;
  if (param_3 == 0) {
    if ((int)((uint)*(byte *)((int)puVar2 + 0x22) << 0x1b) < 0) {
      iVar4 = FUN_0025d364(iVar9,puVar2);
      uVar10 = 0x1e;
      uVar8 = *(undefined4 *)(*(int *)(iVar4 + 4) + 4);
    }
    else {
      uVar8 = 0;
      if (iVar3 == 1) {
        uVar10 = 0xd;
      }
      else {
        uVar10 = 0xb;
      }
    }
  }
  else {
    uVar8 = 0;
    if (iVar3 == 1) {
      uVar10 = 0xf;
    }
    else {
      uVar10 = 0x11;
    }
  }
  iVar4 = FUN_00268e90(param_1,uVar10,*puVar2,uVar8,uVar16);
  if ((iVar4 != 0) || (iVar4 = FUN_00268e90(param_1,9,*puVar2,0,uVar16), iVar4 != 0))
  goto LAB_0028baa4;
  iVar4 = sqlite3_strnicmp(*puVar2,DAT_0028bab8 + 0x28b84a,7);
  if ((iVar4 == 0) && (iVar4 = sqlite3_strnicmp(*puVar2,DAT_0028babc + 0x28b85a,0xb), iVar4 != 0)) {
    iVar3 = DAT_0028bac0 + 0x28b866;
  }
  else if (param_3 == 0) {
    if (puVar2[7] == 0) goto LAB_0028b88a;
    iVar3 = DAT_0028bac8 + 0x28b88a;
  }
  else {
    if (puVar2[7] != 0) {
LAB_0028b88a:
      iVar4 = FUN_002662b8(param_1);
      if (iVar4 != 0) {
        FUN_00275f2c(param_1,1,iVar3);
        FUN_00285f98(param_1,iVar3,DAT_0028bacc + 0x28b8aa,*puVar2);
        iVar4 = *param_1;
        if (((*(int *)(iVar4 + 0x18) << 5 < 0) &&
            (-1 < (int)((uint)*(byte *)((int)puVar2 + 0x22) << 0x1b))) && (puVar2[7] == 0)) {
          iVar5 = FUN_002662b8(param_1);
          iVar6 = FUN_0025d110(puVar2);
          iVar12 = 0;
          if (iVar6 == 0) {
            for (iVar12 = puVar2[9]; iVar12 != 0; iVar12 = *(int *)(iVar12 + 4)) {
              if (*(char *)(iVar12 + 0x18) != '\0') {
                iVar12 = FUN_00266020(iVar5);
                FUN_0026641e(iVar5,0x76,1,iVar12);
                goto LAB_0028b8fe;
              }
            }
          }
          else {
LAB_0028b8fe:
            *(undefined1 *)((int)param_1 + 0x1ca) = 1;
            uVar16 = FUN_00260706(iVar4,param_2,0);
            FUN_0028a47c(param_1,uVar16,0);
            *(undefined1 *)((int)param_1 + 0x1ca) = 0;
            FUN_0026641e(iVar5,0x76,0,*(int *)(iVar5 + 0x1c) + 2);
            FUN_002662fa(param_1,2,DAT_0028bad0 + 0x28b938,0xfffffffe);
            if (iVar12 != 0) {
              FUN_0025c384(iVar5,iVar12);
            }
          }
        }
        iVar4 = *param_1;
        puVar17 = (undefined4 *)(*(int *)(iVar4 + 0x10) + iVar11);
        uVar16 = FUN_002662b8(param_1);
        FUN_00275f2c(param_1,1,iVar3);
        if ((int)((uint)*(byte *)((int)puVar2 + 0x22) << 0x1b) < 0) {
          FUN_002662aa(uVar16,0x84);
        }
        for (iVar12 = FUN_00264860(param_1,puVar2); iVar12 != 0; iVar12 = *(int *)(iVar12 + 0x20)) {
          FUN_00275f5c(param_1,iVar12);
        }
        if ((int)((uint)*(byte *)((int)puVar2 + 0x22) << 0x1c) < 0) {
          FUN_00285af0(param_1,DAT_0028bad4 + 0x28b9a8,*puVar17,*puVar2);
        }
        if (iVar3 == 1) {
          iVar12 = DAT_0028bad8 + 0x28b9ba;
        }
        else {
          iVar12 = DAT_0028badc + 0x28b9c0;
        }
        FUN_00285af0(param_1,DAT_0028bae0 + 0x28b9c8,*puVar17,iVar12,*puVar2);
        if ((param_3 == 0) && (-1 < (int)((uint)*(byte *)((int)puVar2 + 0x22) << 0x1b))) {
          uVar13 = puVar2[5];
          uVar14 = 0;
          while( true ) {
            uVar1 = (uint)(uVar14 == 0);
            if (((int)uVar13 < (int)uVar14) || (uVar18 = uVar1, uVar1 != 0)) {
              uVar18 = uVar13;
            }
            for (iVar12 = puVar2[4]; iVar12 != 0; iVar12 = *(int *)(iVar12 + 0x14)) {
              uVar7 = *(uint *)(iVar12 + 0x28);
              if ((((int)uVar7 < (int)uVar14) || (uVar1 != 0)) && ((int)uVar18 < (int)uVar7)) {
                uVar18 = uVar7;
              }
            }
            if (uVar18 == 0) break;
            uVar8 = FUN_0025d12c(*param_1,puVar2[0x11]);
            FUN_00286010(param_1,uVar18,uVar8);
            uVar14 = uVar18;
          }
        }
        if ((int)((uint)*(byte *)((int)puVar2 + 0x22) << 0x1b) < 0) {
          FUN_002662da(uVar16,0x86,iVar3,0,0,*puVar2,0);
        }
        FUN_002662da(uVar16,0x6c,iVar3,0,0,*puVar2,0);
        FUN_002668cc(param_1,iVar3);
        iVar3 = *(int *)(*(int *)(iVar4 + 0x10) + iVar11 + 0xc);
        if ((int)((uint)*(ushort *)(iVar3 + 0x4e) << 0x1e) < 0) {
          for (puVar2 = *(undefined4 **)(iVar3 + 0x10); puVar2 != (undefined4 *)0x0;
              puVar2 = (undefined4 *)*puVar2) {
            iVar3 = puVar2[2];
            if (*(int *)(iVar3 + 0x1c) != 0) {
              FUN_00261144(iVar4,iVar3);
              *(undefined4 *)(iVar3 + 0xc) = 0;
              *(undefined4 *)(iVar3 + 8) = 0;
            }
          }
          puVar15 = (ushort *)(*(int *)(*(int *)(iVar4 + 0x10) + iVar11 + 0xc) + 0x4e);
          *puVar15 = *puVar15 & 0xfffd;
        }
      }
      goto LAB_0028baa4;
    }
    iVar3 = DAT_0028bac4 + 0x28b878;
  }
  FUN_00268e48(param_1,iVar3,*puVar2);
LAB_0028baa4:
  FUN_00260fde(iVar9,param_2);
  return;
}


