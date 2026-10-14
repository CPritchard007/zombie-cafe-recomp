/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027d63c FUN_0027d63c */

uint FUN_0027d63c(int *param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  void *__s1;
  int *piVar12;
  uint uVar13;
  bool bVar14;
  uint local_40;
  int local_3c;
  int local_20;
  uint local_1c [2];
  
  piVar12 = (int *)param_1[1];
  FUN_00261f68();
  local_40 = 0;
  if (((char)param_1[2] == '\x02') || ((param_2 == 0 && ((char)param_1[2] == '\x01'))))
  goto LAB_0027da72;
  bVar14 = param_2 != 0;
  if (bVar14) {
    local_40 = 8;
    if ((int)((uint)*(ushort *)((int)piVar12 + 0x16) << 0x1f) < 0) goto LAB_0027da72;
    if (*(char *)((int)piVar12 + 0x13) != '\x02') goto LAB_0027d67c;
LAB_0027d680:
    iVar9 = *(int *)piVar12[0x13];
LAB_0027d6a2:
    if (iVar9 != 0) {
      local_40 = 0x106;
      goto LAB_0027da72;
    }
  }
  else {
LAB_0027d67c:
    if ((int)((uint)*(ushort *)((int)piVar12 + 0x16) << 0x19) < 0) goto LAB_0027d680;
    if (1 < param_2) {
      for (piVar10 = (int *)piVar12[0x12]; piVar10 != (int *)0x0; piVar10 = (int *)piVar10[3]) {
        if ((int *)*piVar10 != param_1) {
          iVar9 = *(int *)*piVar10;
          goto LAB_0027d6a2;
        }
      }
    }
  }
  local_40 = FUN_0025c21c(param_1,1,1);
  if (local_40 == 0) {
    uVar8 = *(ushort *)((int)piVar12 + 0x16) & 0xfff7;
    *(ushort *)((int)piVar12 + 0x16) = uVar8;
    if (piVar12[0xb] == 0) {
      *(ushort *)((int)piVar12 + 0x16) = uVar8 | 8;
    }
    local_40 = 0;
LAB_0027d6d0:
    do {
      if (((piVar12[3] == 0) && (local_40 = FUN_00274084(*piVar12), local_40 == 0)) &&
         (uVar7 = FUN_00274984(piVar12,1,&local_20,0), local_40 = uVar7, uVar7 == 0)) {
        __s1 = *(void **)(local_20 + 0x38);
        iVar9 = FUN_0025ba30((int)__s1 + 0x1c);
        iVar5 = *(int *)(*piVar12 + 0x18);
        local_3c = iVar5;
        if ((iVar9 != 0) &&
           (iVar4 = memcmp((void *)((int)__s1 + 0x18),(void *)((int)__s1 + 0x5c),4), iVar4 == 0)) {
          local_3c = iVar9;
        }
        if (local_3c < 1) {
LAB_0027d83c:
          iVar5 = piVar12[9];
          sVar3 = __udivsi3((iVar5 + DAT_0027da68) * 0x40,0xff);
          uVar8 = sVar3 - 0x17;
          iVar9 = iVar5 + DAT_0027da6c;
          *(ushort *)(piVar12 + 6) = uVar8;
          sVar3 = __udivsi3(iVar9 * 0x20,0xff);
          *(short *)((int)piVar12 + 0x1a) = sVar3 + -0x17;
          *(short *)(piVar12 + 7) = (short)iVar5 + -0x23;
          *(short *)((int)piVar12 + 0x1e) = sVar3 + -0x17;
          if (uVar8 < 0x80) {
            *(char *)(piVar12 + 5) = (char)uVar8;
          }
          else {
            *(undefined1 *)(piVar12 + 5) = 0x7f;
          }
          piVar12[3] = local_20;
          piVar12[0xb] = local_3c;
          local_40 = uVar7;
          goto LAB_0027d6d0;
        }
        iVar9 = memcmp(__s1,(void *)(DAT_0027da58 + 0x27d74e),0x10);
        if (iVar9 == 0) {
          if (2 < *(byte *)((int)__s1 + 0x12)) {
            *(ushort *)((int)piVar12 + 0x16) = *(ushort *)((int)piVar12 + 0x16) | 1;
          }
          local_40 = 0x1a;
          if (2 < *(byte *)((int)__s1 + 0x13)) goto LAB_0027d886;
          if ((*(byte *)((int)__s1 + 0x13) == 2) && ((*(ushort *)((int)piVar12 + 0x16) & 0x10) == 0)
             ) {
            local_1c[0] = *(ushort *)((int)piVar12 + 0x16) & 0x10;
            local_40 = FUN_002634a0(*piVar12,local_1c);
            if (local_40 != 0) goto LAB_0027d886;
            if (local_1c[0] == 0) {
              FUN_00274a30(local_20);
              local_40 = uVar7;
              goto LAB_0027d6d0;
            }
          }
          iVar9 = memcmp((void *)((int)__s1 + 0x15),(void *)(DAT_0027da5c + 0x27d796),3);
          local_40 = 0x1a;
          if (iVar9 != 0) goto LAB_0027d886;
          uVar13 = (uint)*(byte *)((int)__s1 + 0x11) << 0x10 |
                   (uint)*(byte *)((int)__s1 + 0x10) << 8;
          if (((uVar13 & uVar13 - 1) != 0) || (0x10000 < uVar13)) goto LAB_0027d884;
          if (uVar13 < 0x101) goto LAB_0027d886;
          bVar1 = *(byte *)((int)__s1 + 0x14);
          uVar6 = uVar13 - bVar1;
          if (uVar13 == piVar12[8]) {
            if ((*(int *)(piVar12[1] + 0x18) << 8 < 0) || (local_3c <= iVar5)) {
              local_40 = 0x1a;
              if (DAT_0027da64 < uVar6) {
                piVar12[9] = uVar6;
                iVar9 = FUN_0025ba30((int)__s1 + 0x34);
                *(char *)((int)piVar12 + 0x11) = '\x01' - (iVar9 == 0);
                iVar9 = FUN_0025ba30((int)__s1 + 0x40);
                *(char *)((int)piVar12 + 0x12) = '\x01' - (iVar9 == 0);
                goto LAB_0027d83c;
              }
            }
            else {
              local_40 = FUN_0026b4e4(DAT_0027da60);
            }
            goto LAB_0027d886;
          }
          FUN_00274a30(local_20);
          piVar12[8] = uVar13;
          piVar12[9] = uVar6;
          FUN_0025f6b8(piVar12[0x14]);
          piVar12[0x14] = 0;
          local_40 = FUN_002619f0(*piVar12,piVar12 + 8,(uint)bVar1);
        }
        else {
LAB_0027d884:
          local_40 = 0x1a;
LAB_0027d886:
          FUN_00274a30(local_20);
          piVar12[3] = 0;
        }
        if (local_40 == 0) goto LAB_0027d6d0;
      }
      if ((local_40 == 0) && (bVar14)) {
        local_40 = 8;
        if (-1 < (int)((uint)*(ushort *)((int)piVar12 + 0x16) << 0x1f)) {
          iVar9 = *piVar12;
          uVar7 = *(uint *)(iVar9 + 0x28);
          local_40 = uVar7;
          if (uVar7 == 0) {
            *(bool *)(iVar9 + 0x15) = *(char *)(*param_1 + 0x35) == '\x02';
            if (*(char *)(iVar9 + 0xf) != '\x01') {
LAB_0027da98:
              local_40 = uVar7;
              if (piVar12[0xb] == 0) {
                local_40 = FUN_0027d4b0(piVar12);
                goto LAB_0027d99e;
              }
              goto LAB_0027d9b6;
            }
            iVar5 = *(int *)(iVar9 + 0xb8);
            if (iVar5 == 0) {
              local_40 = FUN_00261b80(iVar9,2);
              if ((local_40 == 0) && (1 < param_2)) {
                local_40 = FUN_00261bae(iVar9,4);
              }
              if (local_40 == 0) {
LAB_0027d97c:
                *(undefined1 *)(iVar9 + 0xf) = 2;
                uVar11 = *(undefined4 *)(iVar9 + 0x18);
                *(undefined4 *)(iVar9 + 0x24) = uVar11;
                *(undefined4 *)(iVar9 + 0x20) = uVar11;
                *(undefined4 *)(iVar9 + 0x1c) = uVar11;
                *(undefined4 *)(iVar9 + 0x48) = 0;
                *(undefined4 *)(iVar9 + 0x4c) = 0;
                goto LAB_0027da98;
              }
            }
            else {
              if ((*(char *)(iVar9 + 4) != '\0') &&
                 (iVar5 = FUN_00261d48(iVar5,0xffffffff), iVar5 != 0)) {
                local_40 = FUN_00261b80(iVar9,4);
                if (local_40 != 0) goto LAB_0027d9a4;
                FUN_00261d48(*(int *)(iVar9 + 0xb8),1);
              }
              iVar5 = *(int *)(iVar9 + 0xb8);
              local_40 = 8;
              if ((*(char *)(iVar5 + 0x2e) == '\0') &&
                 ((*(char *)(iVar5 + 0x2b) != '\0' ||
                  (local_40 = (**(code **)(**(int **)(iVar5 + 4) + 0x38))
                                        (*(int **)(iVar5 + 4),0,1,10), local_40 == 0)))) {
                *(undefined1 *)(iVar5 + 0x2c) = 1;
                iVar4 = memcmp((void *)(iVar5 + 0x34),(void *)**(undefined4 **)(iVar5 + 0x20),0x30);
                if (iVar4 == 0) goto LAB_0027d97c;
                FUN_00261c56(iVar5,0,1);
                local_40 = 5;
                *(undefined1 *)(iVar5 + 0x2c) = 0;
              }
            }
          }
        }
LAB_0027d9a4:
        if ((*(char *)((int)piVar12 + 0x13) == '\0') && (piVar12[3] != 0)) {
          FUN_00274a30();
          piVar12[3] = 0;
        }
      }
      else {
LAB_0027d99e:
        if (local_40 != 0) goto LAB_0027d9a4;
      }
LAB_0027d9b6:
      if ((((local_40 & 0xff) != 5) || (*(char *)((int)piVar12 + 0x13) != '\0')) ||
         (iVar9 = FUN_0025c2dc(piVar12), iVar9 == 0)) goto LAB_0027d9d2;
    } while( true );
  }
LAB_0027da72:
  if ((local_40 == 0) && (param_2 != 0)) {
    local_40 = FUN_0025f5bc(*piVar12,*(undefined4 *)(*param_1 + 0x1e0));
  }
  FUN_00262002(param_1);
  return local_40;
LAB_0027d9d2:
  if (local_40 == 0) {
    if (((char)param_1[2] == '\0') &&
       (piVar12[10] = piVar12[10] + 1, *(char *)((int)param_1 + 9) != '\0')) {
      *(undefined1 *)(param_1 + 9) = 1;
      param_1[10] = piVar12[0x12];
      piVar12[0x12] = (int)(param_1 + 7);
    }
    uVar2 = (undefined1)(2 - !bVar14);
    *(undefined1 *)(param_1 + 2) = uVar2;
    if ((uint)*(byte *)((int)piVar12 + 0x13) < 2 - !bVar14) {
      *(undefined1 *)((int)piVar12 + 0x13) = uVar2;
    }
    if (bVar14) {
      uVar8 = *(ushort *)((int)piVar12 + 0x16) & 0xffdf;
      iVar9 = piVar12[3];
      piVar12[0x13] = (int)param_1;
      *(ushort *)((int)piVar12 + 0x16) = uVar8;
      if (1 < param_2) {
        *(ushort *)((int)piVar12 + 0x16) = uVar8 | 0x20;
      }
      iVar5 = FUN_0025ba30(*(int *)(iVar9 + 0x38) + 0x1c);
      if ((piVar12[0xb] != iVar5) &&
         (local_40 = FUN_002733c4(*(undefined4 *)(iVar9 + 0x44)), local_40 == 0)) {
        FUN_0025ba48(*(int *)(iVar9 + 0x38) + 0x1c,piVar12[0xb]);
      }
    }
  }
  goto LAB_0027da72;
}


