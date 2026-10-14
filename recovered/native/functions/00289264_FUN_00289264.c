/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00289264 FUN_00289264 */

void FUN_00289264(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int unaff_r5;
  int unaff_r6;
  int unaff_r7;
  bool bVar12;
  undefined4 in_stack_0000001c;
  int *piStack00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int iStack0000002c;
  int iStack00000030;
  int in_stack_00000038;
  int in_stack_0000003c;
  int iStack00000040;
  int in_stack_00000044;
  uint uStack0000004c;
  int in_stack_00000050;
  int in_stack_00000054;
  uint uStack00000058;
  int in_stack_0000005c;
  int in_stack_00000060;
  int iStack00000064;
  undefined4 in_stack_00000068;
  int iStack00000070;
  int iStack00000074;
  int in_stack_00000078;
  int in_stack_00000090;
  undefined4 in_stack_0000009c;
  int *in_stack_000000e0;
  uint in_stack_000000e4;
  
  uVar10 = *(byte *)(unaff_r5 + 0x22) & 0x10;
  if ((*(byte *)(unaff_r5 + 0x22) & 0x10) != 0) {
    iVar6 = 0;
    uVar10 = 0;
    for (iVar11 = 0; iVar11 < *(int *)(unaff_r5 + 8); iVar11 = iVar11 + 1) {
      iVar2 = *(int *)(unaff_r5 + 0xc) + iVar6;
      iVar6 = iVar6 + 0x18;
      uVar10 = uVar10 + (*(char *)(iVar2 + 0x17) != '\0');
    }
  }
  uStack00000058 = (uint)(in_stack_000000e0 == (int *)0x0);
  if (((in_stack_00000028 != 0) && (uStack00000058 != 0)) &&
     (in_stack_00000028 != *(int *)(unaff_r5 + 8) - uVar10)) {
    FUN_00268e48(unaff_r6,DAT_00289594 + 0x2892ba,in_stack_00000068,0);
    piStack00000020 = (int *)0x0;
    goto code_r0x002899f4;
  }
  if (in_stack_000000e0 == (int *)0x0) {
    iStack0000002c = -1;
  }
  else {
    iVar6 = 0;
    if (in_stack_00000028 != in_stack_000000e0[1]) {
      FUN_00268e48(unaff_r6,DAT_00289598 + 0x2892de,in_stack_00000028);
LAB_00289374:
      FUN_002899f4();
      return;
    }
    for (; iVar6 < in_stack_000000e0[1]; iVar6 = iVar6 + 1) {
      *(undefined4 *)(*in_stack_000000e0 + iVar6 * 8 + 4) = 0xffffffff;
    }
    iStack0000002c = -1;
    for (piStack00000020 = (int *)0x0; (int)piStack00000020 < in_stack_000000e0[1];
        piStack00000020 = (int *)((int)piStack00000020 + 1)) {
      iVar6 = (int)piStack00000020 * 8;
      for (iVar11 = 0; iVar11 < *(int *)(unaff_r5 + 8); iVar11 = iVar11 + 1) {
        iVar2 = sqlite3_stricmp(*(undefined4 *)(*in_stack_000000e0 + iVar6),
                                *(undefined4 *)(iVar11 * 0x18 + *(int *)(unaff_r5 + 0xc)));
        if (iVar2 == 0) {
          *(int *)(*in_stack_000000e0 + iVar6 + 4) = iVar11;
          if (iVar11 == *(int *)(unaff_r5 + 4)) {
            iStack0000002c = (int)piStack00000020;
          }
          break;
        }
      }
      if (*(int *)(unaff_r5 + 8) <= iVar11) {
        iVar6 = FUN_00264820(*(undefined4 *)(*in_stack_000000e0 + iVar6));
        if (iVar6 == 0) {
          FUN_00268e48(unaff_r6,DAT_0028959c + 0x289368,in_stack_00000068,0);
          *(undefined1 *)(unaff_r6 + 0x11) = 1;
          goto LAB_00289374;
        }
        iStack0000002c = (int)piStack00000020;
      }
    }
  }
  if ((0 < in_stack_00000028) && (uStack00000058 != 0)) {
    iStack0000002c = *(int *)(unaff_r5 + 4);
  }
  uStack0000004c = *(uint *)(in_stack_00000044 + 0x18) & 0x1000;
  if (uStack0000004c != 0) {
    uStack0000004c = *(int *)(unaff_r6 + 0x4c) + 1;
    *(uint *)(unaff_r6 + 0x4c) = uStack0000004c;
    FUN_0026641e(unaff_r7,7,0);
  }
  bVar12 = in_stack_0000005c != 0;
  if (bVar12) {
    piStack00000020 = (int *)0x0;
    iStack00000030 = 0;
  }
  else {
    iStack00000030 = *(int *)(unaff_r6 + 0x48);
    iVar6 = 0;
    if (-1 < (int)((uint)*(byte *)(unaff_r5 + 0x22) << 0x1b)) {
      iVar6 = FUN_0026e7ea(unaff_r6,unaff_r5,iStack00000030,0x28);
    }
    piStack00000020 = (int *)FUN_0025ee10(in_stack_00000044,(iVar6 + 1) * 4);
    if (piStack00000020 == (int *)0x0) {
      FUN_002899f4();
      return;
    }
    piVar7 = piStack00000020;
    for (iVar11 = 0; iVar11 < iVar6; iVar11 = iVar11 + 1) {
      iVar2 = *(int *)(unaff_r6 + 0x4c) + 1;
      *(int *)(unaff_r6 + 0x4c) = iVar2;
      *piVar7 = iVar2;
      piVar7 = piVar7 + 1;
    }
  }
  if (in_stack_0000003c == 0) {
    if (in_stack_00000038 == 0) {
      iStack00000074 = in_stack_00000038;
      iStack00000070 = in_stack_00000038;
    }
    else {
      iStack00000074 = FUN_002665da(unaff_r7,4,in_stack_0000009c);
      iStack00000070 = FUN_002665da(unaff_r7,0x1b,in_stack_00000024);
    }
  }
  else {
    iStack00000070 = FUN_002665da(unaff_r7,0x48,in_stack_0000001c);
    iStack00000074 = *(int *)(unaff_r7 + 0x1c);
  }
  iVar2 = *(int *)(unaff_r6 + 0x4c);
  iVar6 = iVar2 + 1;
  iVar11 = iVar2 + *(int *)(unaff_r5 + 8) + 1;
  *(int *)(unaff_r6 + 0x4c) = iVar11;
  in_stack_00000024 = iVar6;
  if ((int)((uint)*(byte *)(unaff_r5 + 0x22) << 0x1b) < 0) {
    in_stack_00000024 = iVar2 + 2;
    *(int *)(unaff_r6 + 0x4c) = iVar11 + 1;
  }
  uVar3 = FUN_00266020(unaff_r7);
  if (in_stack_00000090 << 0x1f < 0) {
    iVar11 = FUN_00262834(unaff_r6,*(int *)(unaff_r5 + 8) + 1);
    if (iStack0000002c < 0) {
      FUN_0026641e(unaff_r7,7,0xffffffff,iVar11);
    }
    else {
      if (in_stack_0000003c == 0) {
        FUN_002786f4(unaff_r6,*(undefined4 *)
                               (iStack0000002c * 0x14 + *(int *)(in_stack_00000054 + 8)),iVar11);
      }
      else {
        FUN_00266266(unaff_r7,0x1d,in_stack_0000001c,iStack0000002c);
      }
      uVar5 = FUN_002665da(unaff_r7,0x4a,iVar11);
      FUN_0026641e(unaff_r7,7,0xffffffff,iVar11);
      FUN_002624c2(unaff_r7,uVar5);
      FUN_002665da(unaff_r7,0x15,iVar11);
    }
    iStack00000064 = iVar11 + 1;
    for (iStack00000040 = 0; iStack00000040 < *(int *)(unaff_r5 + 8);
        iStack00000040 = iStack00000040 + 1) {
      iVar2 = iStack00000040;
      if (uStack00000058 == 0) {
        iVar2 = 0;
        while ((iVar2 < in_stack_000000e0[1] &&
               (*(int *)(*in_stack_000000e0 + iVar2 * 8 + 4) != iStack00000040))) {
          iVar2 = iVar2 + 1;
        }
      }
      if (((in_stack_0000003c == 0) && (in_stack_00000054 == 0)) ||
         ((in_stack_000000e0 != (int *)0x0 && (in_stack_000000e0[1] <= iVar2)))) {
        FUN_002786f4(unaff_r6,*(undefined4 *)(*(int *)(unaff_r5 + 0xc) + iStack00000040 * 0x18 + 4),
                     iStack00000064);
      }
      else if (in_stack_0000003c == 0) {
        pcVar4 = *(char **)(iVar2 * 0x14 + *(int *)(in_stack_00000054 + 8));
        uVar8 = *(undefined4 *)(unaff_r6 + 8);
        uVar5 = FUN_002786f4(unaff_r6,pcVar4,iStack00000064);
        if (*pcVar4 != -0x7c) {
          iVar2 = *(int *)(unaff_r6 + 0x4c) + 1;
          *(int *)(unaff_r6 + 0x4c) = iVar2;
          FUN_0026641e(uVar8,0xe,uVar5,iVar2);
          *(int *)(pcVar4 + 0x18) = iVar2;
          pcVar4[0x23] = *pcVar4;
          *pcVar4 = -0x7c;
        }
      }
      else {
        FUN_00266266(unaff_r7,0x1d,in_stack_0000001c);
      }
      iStack00000064 = iStack00000064 + 1;
    }
    if (!bVar12) {
      FUN_0026641e(unaff_r7,0x1e,iVar11 + 1);
      FUN_00263920(unaff_r7,unaff_r5);
    }
    FUN_0028a2ac(unaff_r6,in_stack_00000060,0x69,0);
    FUN_0025cbb8(unaff_r6,iVar11,*(int *)(unaff_r5 + 8) + 1);
  }
  if (!bVar12) {
    if ((int)((uint)*(byte *)(unaff_r5 + 0x22) << 0x1b) < 0) {
      FUN_0026641e(unaff_r7,10,0,iVar6);
    }
    if (iStack0000002c < 0) {
      if ((int)((uint)*(byte *)(unaff_r5 + 0x22) << 0x1b) < 0) {
        FUN_0026641e(unaff_r7,10,0,in_stack_00000024);
      }
      else {
        FUN_00266266(unaff_r7,0x38,iStack00000030,in_stack_00000024);
      }
    }
    else {
      if (in_stack_0000003c == 0) {
        if (in_stack_00000038 == 0) {
          FUN_002786f4(unaff_r6,*(undefined4 *)
                                 (iStack0000002c * 0x14 + *(int *)(in_stack_00000054 + 8)),
                       in_stack_00000024);
          pcVar4 = (char *)FUN_0025c3cc(unaff_r7,0xffffffff);
          if (((pcVar4 != (char *)0x0) && (*pcVar4 == '\n')) &&
             (-1 < (int)((uint)*(byte *)(unaff_r5 + 0x22) << 0x1b))) {
            *pcVar4 = '8';
            *(int *)(pcVar4 + 4) = iStack00000030;
            *(int *)(pcVar4 + 0xc) = in_stack_00000050;
            *(int *)(pcVar4 + 8) = in_stack_00000024;
            goto LAB_0028974e;
          }
        }
        else {
          FUN_0026641e(unaff_r7,0xf,in_stack_00000078 + iStack0000002c,in_stack_00000024);
        }
      }
      else {
        FUN_00266266(unaff_r7,0x1d,in_stack_0000001c);
      }
      if ((int)((uint)*(byte *)(unaff_r5 + 0x22) << 0x1b) < 0) {
        FUN_0026641e(unaff_r7,0x49,in_stack_00000024,*(int *)(unaff_r7 + 0x1c) + 2);
      }
      else {
        uVar5 = FUN_002665da(unaff_r7,0x4a,in_stack_00000024);
        FUN_00266266(unaff_r7,0x38,iStack00000030,in_stack_00000024);
        FUN_002624c2(unaff_r7,uVar5);
      }
      FUN_002665da(unaff_r7,0x15,in_stack_00000024);
    }
LAB_0028974e:
    if (0 < in_stack_00000050) {
      FUN_0026641e(*(undefined4 *)(unaff_r6 + 8),0x77,in_stack_00000050,in_stack_00000024);
    }
    iStack00000040 = 0;
    in_stack_00000050 = 0;
    for (iVar11 = 0; iVar11 < *(int *)(unaff_r5 + 8); iVar11 = iVar11 + 1) {
      iVar2 = in_stack_00000024 + 1 + iVar11;
      if (iVar11 == *(int *)(unaff_r5 + 4)) {
        uVar5 = 10;
        iVar9 = 0;
LAB_0028980e:
        FUN_0026641e(unaff_r7,uVar5,iVar9,iVar2);
      }
      else {
        if (uStack00000058 == 0) {
          iVar9 = 0;
          while ((iVar9 < in_stack_000000e0[1] &&
                 (*(int *)(*in_stack_000000e0 + iVar9 * 8 + 4) != iVar11))) {
            iVar9 = iVar9 + 1;
          }
        }
        else {
          iVar9 = iVar11 - in_stack_00000050;
          if (*(char *)(*(int *)(unaff_r5 + 0xc) + iStack00000040 + 0x17) != '\0') {
            in_stack_00000050 = in_stack_00000050 + 1;
            iVar9 = -1;
          }
        }
        if (((iVar9 < 0) || (in_stack_00000028 == 0)) ||
           ((in_stack_000000e0 != (int *)0x0 && (in_stack_000000e0[1] <= iVar9)))) {
          uVar5 = *(undefined4 *)(*(int *)(unaff_r5 + 0xc) + iStack00000040 + 4);
        }
        else {
          if (in_stack_0000003c != 0) {
            FUN_00266266(unaff_r7,0x1d,in_stack_0000001c);
            goto LAB_00289828;
          }
          if (in_stack_00000038 != 0) {
            uVar5 = 0xf;
            iVar9 = in_stack_00000078 + iVar9;
            goto LAB_0028980e;
          }
          uVar5 = *(undefined4 *)(iVar9 * 0x14 + *(int *)(in_stack_00000054 + 8));
        }
        FUN_002786f4(unaff_r6,uVar5,iVar2);
      }
LAB_00289828:
      iStack00000040 = iStack00000040 + 0x18;
    }
    bVar1 = *(byte *)(unaff_r5 + 0x22);
    if ((bVar1 & 0x10) == 0) {
      FUN_0028a7e0(unaff_r6,unaff_r5,iStack00000030,iVar6);
      FUN_002888e0(unaff_r6,unaff_r5,bVar1 & 0x10,iVar6);
      FUN_00266cf4(unaff_r6,unaff_r5,iStack00000030,iVar6);
    }
    else {
      FUN_0025d364(in_stack_00000044,unaff_r5);
      FUN_002683ea(unaff_r6,unaff_r5);
      FUN_002662da(unaff_r7,0x8c,1,*(int *)(unaff_r5 + 8) + 2);
      uVar10 = 2;
      if (in_stack_000000e4 != 99) {
        uVar10 = in_stack_000000e4 & 0xff;
      }
      FUN_0025c3b8(unaff_r7,uVar10);
      FUN_0025cdea(unaff_r6);
    }
  }
  if ((*(uint *)(in_stack_00000044 + 0x18) & 0x1000) != 0) {
    FUN_0026641e(unaff_r7,0x14,uStack0000004c,1);
  }
  if (in_stack_00000060 != 0) {
    FUN_0028a2ac(unaff_r6,in_stack_00000060,0x69,0);
  }
  FUN_0025c384(unaff_r7,uVar3);
  if (in_stack_0000003c == 0) {
    if (in_stack_00000038 != 0) {
      FUN_0026641e(unaff_r7,1,0,iStack00000074);
      FUN_002624c2(unaff_r7,iStack00000070);
    }
  }
  else {
    FUN_0026641e(unaff_r7,0x5f,in_stack_0000001c,iStack00000074);
    FUN_002624c2(unaff_r7,iStack00000070);
    FUN_002665da(unaff_r7,0x2d,in_stack_0000001c);
  }
  if ((*(byte *)(unaff_r5 + 0x22) & 0x10) == 0 && !bVar12) {
    FUN_002665da(unaff_r7,0x2d,iStack00000030);
    for (iVar6 = *(int *)(unaff_r5 + 0x10); iStack00000030 = iStack00000030 + 1, iVar6 != 0;
        iVar6 = *(int *)(iVar6 + 0x14)) {
      FUN_002665da(unaff_r7,0x2d,iStack00000030);
    }
  }
  if ((*(char *)(unaff_r6 + 0x12) == '\0') && (*(int *)(unaff_r6 + 0x1b4) == 0)) {
    FUN_00266be6(unaff_r6);
  }
  if (((*(int *)(in_stack_00000044 + 0x18) << 0x13 < 0) && (*(char *)(unaff_r6 + 0x12) == '\0')) &&
     (*(int *)(unaff_r6 + 0x1b4) == 0)) {
    FUN_0026641e(unaff_r7,0x10,uStack0000004c,1);
    FUN_00263b94(unaff_r7,1);
    FUN_00265916(unaff_r7,0,0,iRam00289ab4 + 0x2899e8);
    FUN_002899f4();
    return;
  }
code_r0x002899f4:
  FUN_00260fde(in_stack_00000044,in_stack_00000068);
  FUN_00261102(in_stack_00000044,in_stack_00000054);
  FUN_00261092(in_stack_00000044,in_stack_00000038);
  FUN_00260004(in_stack_00000044,in_stack_000000e0);
  FUN_0025fbda(in_stack_00000044,piStack00000020);
  return;
}


