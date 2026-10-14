/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026dedc FUN_0026dedc */

void FUN_0026dedc(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int unaff_r5;
  undefined4 uVar9;
  undefined4 *puVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 uStack00000020;
  undefined4 uStack00000024;
  int in_stack_00000048;
  int in_stack_00000054;
  int *in_stack_0000005c;
  uint in_stack_0000006c;
  uint in_stack_00000070;
  uint in_stack_00000078;
  int in_stack_00000110;
  uint *in_stack_00000118;
  
  if (unaff_r5 != 0) {
    FUN_0026d654();
  }
  if ((in_stack_00000110 == 0) && (*(int *)(*in_stack_0000005c + 0x18) << 7 < 0)) {
    *in_stack_00000118 = *in_stack_00000118 | 0x2000000;
  }
  FUN_0026e168(in_stack_0000005c,in_stack_00000054,in_stack_00000048);
  iVar2 = in_stack_0000005c[0x6e];
  iVar5 = in_stack_0000005c[0x6f];
  iVar3 = __aeabi_dcmple(iVar2,iVar5,DAT_0026e008,DAT_0026e00c);
  uVar13 = CONCAT44(DAT_0026e014,DAT_0026e010);
  if ((((iVar3 == 0) && (*(int *)(*in_stack_0000005c + 0x18) << 4 < 0)) &&
      ((*in_stack_00000118 & DAT_0026e034) == 0)) &&
     ((*(char *)(in_stack_00000048 + 0x1d) == '\0' && (*(char *)(in_stack_00000048 + 0x1e) == '\0'))
     )) {
    iVar3 = *(int *)(in_stack_00000048 + 0xc);
    uVar12 = __floatunsidf(*(undefined4 *)(iVar3 + 0x18));
    uVar6 = (undefined4)((ulonglong)uVar12 >> 0x20);
    uVar14 = CONCAT44(DAT_0026e00c,DAT_0026e008);
    while( true ) {
      uVar9 = (undefined4)((ulonglong)uVar13 >> 0x20);
      uStack00000024 = (undefined4)((ulonglong)uVar14 >> 0x20);
      uStack00000020 = (undefined4)uVar14;
      iVar4 = __aeabi_dcmpgt((int)uVar12,uVar6,(int)uVar13,uVar9);
      if (iVar4 == 0) break;
      uVar14 = __adddf3(uStack00000020,uStack00000024,DAT_0026e008,DAT_0026e00c);
      uVar13 = __muldf3((int)uVar13,uVar9,DAT_0026e010,DAT_0026e014);
    }
    uVar13 = __adddf3(uStack00000020,uStack00000024,uStack00000020,uStack00000024);
    uVar14 = __divdf3((int)uVar12,uVar6,iVar2,iVar5);
    uVar14 = __adddf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),DAT_0026e008,DAT_0026e00c);
    uVar13 = __muldf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,
                      (int)((ulonglong)uVar14 >> 0x20));
    iVar2 = __aeabi_dcmpge((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),in_stack_00000118[6],
                           in_stack_00000118[7]);
    if (iVar2 == 0) {
      puVar8 = *(undefined4 **)(in_stack_00000054 + 0x20);
      puVar10 = puVar8 + *(int *)(in_stack_00000054 + 0x18) * 10;
      for (; puVar8 < puVar10; puVar8 = puVar8 + 10) {
        if (((puVar8[2] == *(int *)(in_stack_00000048 + 0x20)) && (*(short *)(puVar8 + 4) == 2)) &&
           ((puVar8[7] & in_stack_00000070) == 0 && (puVar8[6] & in_stack_0000006c) == 0)) {
          bVar1 = *(byte *)(*(int *)(iVar3 + 0xc) + puVar8[3] * 0x18 + 0x16);
          iVar2 = FUN_0025cd42(*puVar8);
          if (iVar2 == 0x61) {
            bVar11 = bVar1 == 0x61;
LAB_0026e084:
            if (!bVar11) goto LAB_0026e088;
          }
          else if (iVar2 != 0x62) {
            bVar11 = 0x62 < bVar1;
            goto LAB_0026e084;
          }
          *(undefined8 *)(in_stack_00000118 + 6) = uVar13;
          uVar13 = __adddf3(uStack00000020,uStack00000024,DAT_0026e0f0,DAT_0026e0f4);
          *(undefined8 *)(in_stack_00000118 + 2) = uVar13;
          *in_stack_00000118 = 0x20000000;
          uVar7 = puVar8[7];
          in_stack_00000118[8] = puVar8[6];
          in_stack_00000118[9] = uVar7;
          break;
        }
LAB_0026e088:
      }
    }
  }
  *in_stack_00000118 = *in_stack_00000118 | in_stack_00000078;
  return;
}


