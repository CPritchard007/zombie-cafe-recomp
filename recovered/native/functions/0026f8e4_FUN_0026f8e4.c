/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026f8e4 FUN_0026f8e4 */

void FUN_0026f8e4(void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 *puVar12;
  byte *__s1;
  uint *unaff_r7;
  bool bVar13;
  undefined8 uVar14;
  longlong lVar15;
  longlong lVar16;
  undefined4 uStack00000030;
  undefined4 uStack00000034;
  undefined4 in_stack_0000004c;
  int in_stack_00000050;
  undefined4 *in_stack_00000054;
  int in_stack_00000058;
  int *in_stack_0000005c;
  int in_stack_0000006c;
  undefined4 in_stack_00000070;
  undefined4 in_stack_00000074;
  undefined4 in_stack_00000078;
  undefined4 in_stack_0000007c;
  byte in_stack_000000ac;
  int in_stack_000000cc;
  
  do {
    if (in_stack_00000058 <= in_stack_00000050) {
      FUN_0026f8f4();
      return;
    }
    uVar3 = *in_stack_00000054;
    in_stack_00000054 = in_stack_00000054 + 1;
    iVar4 = sqlite3_value_text(uVar3);
    if (iVar4 == 0) {
      FUN_0026f8f4();
      return;
    }
    in_stack_0000006c = 1;
    iVar9 = 0;
    do {
      if (*(byte *)(iVar4 + iVar9) == 0) break;
      (&stack0x000000ac)[iVar9] =
           *(undefined1 *)(DAT_0026f428 + 0x26f302 + (uint)*(byte *)(iVar4 + iVar9));
      iVar9 = iVar9 + 1;
    } while (iVar9 != 0x1d);
    (&stack0x000000ac)[iVar9] = '\0';
    if (in_stack_000000ac == 0x6c) {
      iVar9 = strcmp((char *)&stack0x000000ac,(char *)(DAT_0026f42c + 0x26f318));
      iVar4 = in_stack_0000006c;
      if (iVar9 == 0) {
        FUN_0025ea68(unaff_r7);
        lVar16 = *(longlong *)unaff_r7;
        lVar15 = FUN_00265be8(unaff_r7,in_stack_0000004c,&stack0x0000006c);
        *(longlong *)unaff_r7 = lVar15 + lVar16;
        *(undefined1 *)(unaff_r7 + 10) = 0;
        *(undefined1 *)((int)unaff_r7 + 0x29) = 0;
        *(undefined1 *)((int)unaff_r7 + 0x2b) = 0;
        iVar4 = in_stack_0000006c;
      }
    }
    else {
      iVar4 = in_stack_0000006c;
      if (in_stack_000000ac < 0x6d) {
        if ((in_stack_000000ac < 0x3a) &&
           (((0x2f < in_stack_000000ac || (in_stack_000000ac == 0x2b)) ||
            (in_stack_000000ac == 0x2d)))) {
          iVar9 = 1;
          while (((uVar7 = (uint)(&stack0x000000ac)[iVar9], uVar7 != 0x3a && (uVar7 != 0)) &&
                 ((*(byte *)(DAT_0026f75c + 0x26f5fa + uVar7) & 1) == 0))) {
            iVar9 = iVar9 + 1;
          }
          iVar5 = FUN_0025b268(&stack0x000000ac,&stack0x00000070,iVar9,1);
          iVar4 = 1;
          if (iVar5 != 0) {
            __s1 = &stack0x000000ac + iVar9;
            if ((&stack0x000000ac)[iVar9] == ':') {
              puVar12 = &stack0x000000ad;
              if ((int)((uint)*(byte *)(DAT_0026f760 + 0x26f634 + (uint)in_stack_000000ac) << 0x1d)
                  < 0) {
                puVar12 = &stack0x000000ac;
              }
              memset(&stack0x00000078,0,0x30);
              iVar9 = FUN_0025daf8(puVar12,&stack0x00000078);
              iVar4 = in_stack_0000006c;
              if (iVar9 == 0) {
                FUN_0025ea68(&stack0x00000078);
                lVar15 = _in_stack_00000078 + CONCAT44(DAT_0026f72c,DAT_0026f728);
                lVar16 = _in_stack_00000078 + CONCAT44(DAT_0026f72c,DAT_0026f728);
                uVar14 = __aeabi_ldivmod((int)lVar15,(int)((ulonglong)lVar15 >> 0x20),DAT_0026f710,
                                         DAT_0026f714);
                lVar15 = __muldi3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),DAT_0026f730,
                                  DAT_0026f734);
                _in_stack_00000078 = lVar15 + lVar16;
                if (in_stack_000000ac == 0x2d) {
                  _in_stack_00000078 =
                       CONCAT44(-(uint)((int)_in_stack_00000078 != 0) -
                                (int)((ulonglong)_in_stack_00000078 >> 0x20),
                                -(int)_in_stack_00000078);
                }
                FUN_0025ea68(unaff_r7);
                *(undefined1 *)(unaff_r7 + 10) = 0;
                *(undefined1 *)((int)unaff_r7 + 0x29) = 0;
                *(undefined1 *)((int)unaff_r7 + 0x2b) = 0;
                *(longlong *)unaff_r7 = _in_stack_00000078 + *(longlong *)unaff_r7;
                goto LAB_0026f67c;
              }
            }
            else {
              while (bVar1 = *(byte *)(DAT_0026f764 + 0x26f6cc + (uint)*__s1), (bVar1 & 1) != 0) {
                __s1 = __s1 + 1;
              }
              iVar9 = FUN_0025b154(__s1);
              iVar4 = in_stack_0000006c;
              if (iVar9 - 3U < 8) {
                if (__s1[iVar9 + -1] == 0x73) {
                  __s1[iVar9 + -1] = bVar1 & 1;
                  iVar9 = iVar9 + -1;
                }
                FUN_0025ea68(unaff_r7);
                uVar11 = in_stack_00000074;
                uVar3 = in_stack_00000070;
                uVar14 = CONCAT44(in_stack_00000074,in_stack_00000070);
                uVar2 = CONCAT44(in_stack_00000074,in_stack_00000070);
                in_stack_0000006c = 0;
                iVar4 = __aeabi_dcmplt(in_stack_00000070,in_stack_00000074,DAT_0026f720,DAT_0026f724
                                      );
                if (iVar4 == 0) {
                  uStack00000030 = DAT_0026f740;
                  uStack00000034 = DAT_0026f744;
                }
                else {
                  uStack00000030 = DAT_0026f738;
                  uStack00000034 = DAT_0026f73c;
                }
                if (iVar9 == 3) {
                  iVar4 = strcmp((char *)__s1,(char *)(DAT_0026f768 + 0x26f6f4));
                  uVar8 = DAT_0026f930;
                  uVar10 = DAT_0026f934;
joined_r0x0026f7ce:
                  uVar14 = CONCAT44(uVar11,uVar3);
                  if (iVar4 != 0) goto LAB_0026f8c8;
LAB_0026f788:
                  uVar14 = __muldf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar8,uVar10);
                  __adddf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uStack00000030,
                           uStack00000034);
                  lVar16 = __fixdfdi();
                  *(longlong *)unaff_r7 = lVar16 + *(longlong *)unaff_r7;
                }
                else {
                  if (iVar9 == 4) {
                    iVar4 = strcmp((char *)__s1,(char *)(DAT_0026f938 + 0x26f778));
                    uVar8 = DAT_0026f908;
                    uVar10 = DAT_0026f90c;
                    if (iVar4 != 0) {
LAB_0026f864:
                      iVar4 = strcmp((char *)__s1,(char *)(DAT_0026f948 + 0x26f86c));
                      if (iVar4 != 0) goto LAB_0026f8c8;
                      iVar4 = __fixdfsi(uVar3,uVar11);
                      FUN_0025ed60(unaff_r7);
                      unaff_r7[2] = unaff_r7[2] + iVar4;
                      *(undefined1 *)((int)unaff_r7 + 0x2a) = 0;
                      FUN_0025ea68(unaff_r7);
                      uVar14 = __floatsidf(iVar4);
                      uVar11 = in_stack_00000074;
                      uVar3 = in_stack_00000070;
                      uVar8 = (undefined4)((ulonglong)uVar14 >> 0x20);
                      iVar4 = __aeabi_dcmpeq((int)uVar14,uVar8,in_stack_00000070,in_stack_00000074);
                      if (iVar4 != 0) goto LAB_0026f8cc;
                      uVar14 = __subdf3(uVar3,uVar11,(int)uVar14,uVar8);
                      uVar3 = DAT_0026f928;
                      uVar11 = DAT_0026f92c;
LAB_0026f8be:
                      uVar14 = __muldf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar3,uVar11);
                      uVar8 = DAT_0026f930;
                      uVar10 = DAT_0026f934;
                    }
                    goto LAB_0026f788;
                  }
                  if (iVar9 == 6) {
                    iVar4 = strcmp((char *)__s1,(char *)(DAT_0026f93c + 0x26f7b2));
                    uVar8 = DAT_0026f910;
                    uVar10 = DAT_0026f914;
                    uVar14 = uVar2;
                    if (iVar4 != 0) {
                      iVar4 = strcmp((char *)__s1,(char *)(DAT_0026f940 + 0x26f7ca));
                      uVar8 = DAT_0026f918;
                      uVar10 = DAT_0026f91c;
                      goto joined_r0x0026f7ce;
                    }
                    goto LAB_0026f788;
                  }
                  if (iVar9 == 5) {
                    iVar4 = strcmp((char *)__s1,(char *)(DAT_0026f944 + 0x26f7e8));
                    if (iVar4 != 0) goto LAB_0026f8c8;
                    FUN_0025ed60(unaff_r7);
                    iVar9 = __fixdfsi(in_stack_00000070,in_stack_00000074);
                    iVar9 = iVar9 + unaff_r7[3];
                    iVar4 = -1;
                    if (iVar9 < 1) {
                      iVar4 = -0xc;
                    }
                    iVar4 = __divsi3(iVar9 + iVar4,0xc);
                    unaff_r7[2] = unaff_r7[2] + iVar4;
                    unaff_r7[3] = iVar9 + iVar4 * -0xc;
                    *(undefined1 *)((int)unaff_r7 + 0x2a) = 0;
                    FUN_0025ea68(unaff_r7);
                    uVar11 = in_stack_00000074;
                    uVar3 = in_stack_00000070;
                    __fixdfsi(in_stack_00000070,in_stack_00000074);
                    uVar14 = __floatsidf();
                    uVar8 = (undefined4)((ulonglong)uVar14 >> 0x20);
                    iVar4 = __aeabi_dcmpeq((int)uVar14,uVar8,uVar3,uVar11);
                    if (iVar4 == 0) {
                      uVar14 = __subdf3(uVar3,uVar11,(int)uVar14,uVar8);
                      uVar3 = DAT_0026f920;
                      uVar11 = DAT_0026f924;
                      goto LAB_0026f8be;
                    }
                  }
                  else {
                    if (iVar9 == 4) goto LAB_0026f864;
LAB_0026f8c8:
                    in_stack_0000006c = 1;
                  }
                }
LAB_0026f8cc:
                *(undefined1 *)(unaff_r7 + 10) = 0;
                *(undefined1 *)((int)unaff_r7 + 0x29) = 0;
                *(undefined1 *)((int)unaff_r7 + 0x2b) = 0;
                iVar4 = in_stack_0000006c;
              }
            }
          }
        }
      }
      else if (in_stack_000000ac == 0x75) {
        iVar4 = strcmp((char *)&stack0x000000ac,(char *)(DAT_0026f430 + 0x26f34e));
        if ((iVar4 == 0) && (*(char *)((int)unaff_r7 + 0x2a) != '\0')) {
          lVar16 = __aeabi_ldivmod(DAT_0026f400 + *unaff_r7,
                                   DAT_0026f404 + unaff_r7[1] + (uint)CARRY4(DAT_0026f400,*unaff_r7)
                                   ,DAT_0026f408,DAT_0026f40c);
          *(longlong *)unaff_r7 = lVar16 + CONCAT44(DAT_0026f414,DAT_0026f410);
          *(undefined1 *)(unaff_r7 + 10) = 0;
          *(undefined1 *)((int)unaff_r7 + 0x29) = 0;
          *(undefined1 *)((int)unaff_r7 + 0x2b) = 0;
LAB_0026f67c:
          iVar4 = 0;
        }
        else {
          iVar9 = strcmp((char *)&stack0x000000ac,(char *)(DAT_0026f434 + 0x26f392));
          iVar4 = in_stack_0000006c;
          if (iVar9 == 0) {
            FUN_0025ea68(unaff_r7);
            lVar16 = FUN_00265be8(unaff_r7,in_stack_0000004c,&stack0x0000006c);
            iVar4 = in_stack_0000006c;
            if (in_stack_0000006c == 0) {
              uVar7 = *unaff_r7 - (uint)lVar16;
              uVar6 = (unaff_r7[1] - (int)((ulonglong)lVar16 >> 0x20)) -
                      (uint)(*unaff_r7 < (uint)lVar16);
              *unaff_r7 = uVar7;
              unaff_r7[1] = uVar6;
              *(undefined1 *)(unaff_r7 + 10) = 0;
              *(undefined1 *)((int)unaff_r7 + 0x29) = 0;
              *(undefined1 *)((int)unaff_r7 + 0x2b) = 0;
              lVar15 = FUN_00265be8(unaff_r7,in_stack_0000004c,&stack0x0000006c);
              *(longlong *)unaff_r7 = (lVar16 - lVar15) + CONCAT44(uVar6,uVar7);
              iVar4 = in_stack_0000006c;
            }
          }
        }
      }
      else if (in_stack_000000ac == 0x77) {
        iVar9 = strncmp((char *)&stack0x000000ac,(char *)(DAT_0026f748 + 0x26f440),8);
        iVar4 = in_stack_0000006c;
        if (iVar9 == 0) {
          uVar3 = FUN_0025b154(&stack0x000000b4);
          iVar9 = FUN_0025b268(&stack0x000000b4,&stack0x00000070,uVar3,1);
          uVar11 = in_stack_00000074;
          uVar3 = in_stack_00000070;
          iVar4 = in_stack_0000006c;
          if (iVar9 != 0) {
            uVar7 = __fixdfsi(in_stack_00000070,in_stack_00000074);
            uVar14 = __floatsidf();
            iVar9 = __aeabi_dcmpeq((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),uVar3,uVar11);
            iVar4 = in_stack_0000006c;
            if ((iVar9 != 0) && (-1 < (int)uVar7)) {
              iVar9 = __aeabi_dcmplt(uVar3,uVar11,DAT_0026f708,DAT_0026f70c);
              iVar4 = in_stack_0000006c;
              if (iVar9 != 0) {
                FUN_0025ed60(unaff_r7);
                *(undefined1 *)((int)unaff_r7 + 0x2b) = 0;
                *(undefined1 *)((int)unaff_r7 + 0x2a) = 0;
                FUN_0025ea68(unaff_r7);
                lVar16 = *(longlong *)unaff_r7;
                __aeabi_ldivmod(DAT_0026f718 + *unaff_r7,
                                DAT_0026f71c + unaff_r7[1] + (uint)CARRY4(DAT_0026f718,*unaff_r7),
                                DAT_0026f710,DAT_0026f714);
                uVar6 = 7;
                iVar4 = 0;
                __aeabi_ldivmod();
                iVar9 = (int)uVar7 >> 0x1f;
                if ((iVar9 < iVar4) || ((iVar4 == iVar9 && (uVar7 < uVar6)))) {
                  bVar13 = 6 < uVar6;
                  uVar6 = uVar6 - 7;
                  iVar4 = iVar4 + -1 + (uint)bVar13;
                }
                lVar15 = __muldi3(uVar7 - uVar6,(iVar9 - iVar4) - (uint)(uVar7 < uVar6),DAT_0026f710
                                  ,DAT_0026f714);
                *(longlong *)unaff_r7 = lVar15 + lVar16;
                *(undefined1 *)(unaff_r7 + 10) = 0;
                *(undefined1 *)((int)unaff_r7 + 0x29) = 0;
                *(undefined1 *)((int)unaff_r7 + 0x2b) = 0;
                iVar4 = 0;
              }
            }
          }
        }
      }
      else if (in_stack_000000ac == 0x73) {
        iVar9 = strncmp((char *)&stack0x000000ac,(char *)(DAT_0026f74c + 0x26f51e),9);
        iVar4 = in_stack_0000006c;
        if (iVar9 == 0) {
          if ((char)unaff_r7[10] == '\0') {
            FUN_0025eb98(unaff_r7);
          }
          *(undefined1 *)((int)unaff_r7 + 0x29) = 1;
          uVar7 = DAT_0026f724;
          unaff_r7[8] = DAT_0026f720;
          unaff_r7[9] = uVar7;
          unaff_r7[6] = 0;
          unaff_r7[5] = 0;
          *(undefined1 *)((int)unaff_r7 + 0x2b) = 0;
          *(undefined1 *)((int)unaff_r7 + 0x2a) = 0;
          iVar4 = strcmp(&stack0x000000b5,(char *)(DAT_0026f750 + 0x26f560));
          if (iVar4 == 0) {
            unaff_r7[4] = 1;
            iVar9 = 0;
LAB_0026f5a8:
            iVar4 = iVar9;
          }
          else {
            iVar4 = strcmp(&stack0x000000b5,(char *)(DAT_0026f754 + 0x26f574));
            if (iVar4 == 0) {
              if ((char)unaff_r7[10] == '\0') {
                FUN_0025eb98(unaff_r7);
              }
              unaff_r7[3] = 1;
              unaff_r7[4] = 1;
              iVar4 = 0;
            }
            else {
              iVar9 = strcmp(&stack0x000000b5,(char *)(DAT_0026f758 + 0x26f5a0));
              iVar4 = in_stack_0000006c;
              if (iVar9 == 0) goto LAB_0026f5a8;
            }
          }
        }
      }
    }
    in_stack_0000006c = iVar4;
    if (in_stack_0000006c != 0) {
      if (in_stack_000000cc != *in_stack_0000005c) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail(1);
      }
      return;
    }
    in_stack_00000050 = in_stack_00000050 + 1;
  } while( true );
}


