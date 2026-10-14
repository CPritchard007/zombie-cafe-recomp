/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002cf4d0 jpeg_idct_float */

void jpeg_idct_float(int param_1,int param_2,short *param_3,int *param_4,int param_5)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  int local_144;
  int *local_124;
  undefined4 local_118 [16];
  undefined4 local_d8 [8];
  undefined4 local_b8 [8];
  undefined4 local_98 [8];
  undefined4 local_78 [8];
  undefined4 local_58 [8];
  undefined4 local_38 [8];
  undefined4 uStack_18;
  
  iVar2 = *(int *)(param_1 + 0x150);
  puVar11 = *(undefined4 **)(param_2 + 0x54);
  local_144 = 8;
  puVar8 = local_118;
  do {
    sVar1 = param_3[8];
    if ((((sVar1 == 0) && (param_3[0x10] == 0)) && (param_3[0x18] == 0)) &&
       (((param_3[0x20] == 0 && (param_3[0x28] == 0)) &&
        ((param_3[0x30] == 0 && (param_3[0x38] == 0)))))) {
      uVar3 = __floatsisf((int)*param_3);
      uVar3 = __mulsf3(uVar3,*puVar11);
      *puVar8 = uVar3;
      puVar8[8] = uVar3;
      puVar8[0x10] = uVar3;
      puVar8[0x18] = uVar3;
      puVar8[0x20] = uVar3;
      puVar8[0x28] = uVar3;
      puVar8[0x30] = uVar3;
      puVar8[0x38] = uVar3;
    }
    else {
      uVar3 = __floatsisf((int)*param_3);
      uVar3 = __mulsf3(uVar3,*puVar11);
      uVar4 = __floatsisf((int)param_3[0x10]);
      uVar4 = __mulsf3(uVar4,puVar11[0x10]);
      uVar14 = __floatsisf((int)param_3[0x20]);
      uVar14 = __mulsf3(uVar14,puVar11[0x20]);
      uVar7 = __floatsisf((int)param_3[0x30]);
      uVar7 = __mulsf3(uVar7,puVar11[0x30]);
      uVar15 = __addsf3(uVar3,uVar14);
      uVar3 = __subsf3(uVar3,uVar14);
      uVar14 = __addsf3(uVar4,uVar7);
      uVar4 = __subsf3(uVar4,uVar7);
      uVar4 = __mulsf3(uVar4,DAT_002cf918);
      uVar4 = __subsf3(uVar4,uVar14);
      uVar7 = __addsf3(uVar15,uVar14);
      uVar14 = __subsf3(uVar15,uVar14);
      uVar15 = __addsf3(uVar3,uVar4);
      uVar3 = __subsf3(uVar3,uVar4);
      uVar4 = __floatsisf((int)sVar1);
      uVar4 = __mulsf3(uVar4,puVar11[8]);
      uVar12 = __floatsisf((int)param_3[0x18]);
      uVar12 = __mulsf3(uVar12,puVar11[0x18]);
      uVar16 = __floatsisf((int)param_3[0x28]);
      uVar16 = __mulsf3(uVar16,puVar11[0x28]);
      uVar13 = __floatsisf((int)param_3[0x38]);
      uVar13 = __mulsf3(uVar13,puVar11[0x38]);
      uVar17 = __addsf3(uVar16,uVar12);
      uVar12 = __subsf3(uVar16,uVar12);
      uVar16 = __addsf3(uVar4,uVar13);
      uVar4 = __subsf3(uVar4,uVar13);
      uVar13 = __addsf3(uVar16,uVar17);
      uVar5 = __addsf3(uVar12,uVar4);
      uVar5 = __mulsf3(uVar5,DAT_002cf91c);
      uVar12 = __mulsf3(uVar12,DAT_002cf920);
      uVar12 = __subsf3(uVar5,uVar12);
      uVar12 = __subsf3(uVar12,uVar13);
      uVar16 = __subsf3(uVar16,uVar17);
      uVar16 = __mulsf3(uVar16,DAT_002cf918);
      uVar16 = __subsf3(uVar16,uVar12);
      uVar4 = __mulsf3(uVar4,DAT_002cf924);
      uVar4 = __subsf3(uVar5,uVar4);
      uVar4 = __subsf3(uVar4,uVar16);
      uVar17 = __addsf3(uVar7,uVar13);
      *puVar8 = uVar17;
      uVar7 = __subsf3(uVar7,uVar13);
      puVar8[0x38] = uVar7;
      uVar7 = __addsf3(uVar15,uVar12);
      puVar8[8] = uVar7;
      uVar7 = __subsf3(uVar15,uVar12);
      puVar8[0x30] = uVar7;
      uVar7 = __addsf3(uVar3,uVar16);
      puVar8[0x10] = uVar7;
      uVar3 = __subsf3(uVar3,uVar16);
      puVar8[0x28] = uVar3;
      uVar3 = __addsf3(uVar14,uVar4);
      puVar8[0x18] = uVar3;
      uVar3 = __subsf3(uVar14,uVar4);
      puVar8[0x20] = uVar3;
    }
    puVar8 = puVar8 + 1;
    param_3 = param_3 + 1;
    puVar11 = puVar11 + 1;
    local_144 = local_144 + -1;
  } while (local_144 != 0);
  puVar8 = local_118;
  local_124 = param_4;
  do {
    iVar9 = *local_124;
    local_124 = local_124 + 1;
    puVar10 = (undefined1 *)(iVar9 + param_5);
    uVar3 = __addsf3(*puVar8,DAT_002cf928);
    uVar14 = puVar8[4];
    uVar4 = __addsf3(uVar3,uVar14);
    uVar3 = __subsf3(uVar3,uVar14);
    uVar7 = puVar8[6];
    uVar15 = puVar8[2];
    uVar14 = __addsf3(uVar15,uVar7);
    uVar7 = __subsf3(uVar15,uVar7);
    uVar7 = __mulsf3(uVar7,DAT_002cf918);
    uVar7 = __subsf3(uVar7,uVar14);
    uVar15 = __addsf3(uVar4,uVar14);
    uVar4 = __subsf3(uVar4,uVar14);
    uVar14 = __addsf3(uVar3,uVar7);
    uVar3 = __subsf3(uVar3,uVar7);
    uVar12 = puVar8[5];
    uVar16 = puVar8[3];
    uVar7 = __addsf3(uVar12,uVar16);
    uVar12 = __subsf3(uVar12,uVar16);
    uVar13 = puVar8[1];
    uVar17 = puVar8[7];
    uVar16 = __addsf3(uVar13,uVar17);
    uVar13 = __subsf3(uVar13,uVar17);
    uVar17 = __addsf3(uVar16,uVar7);
    uVar5 = __addsf3(uVar12,uVar13);
    uVar5 = __mulsf3(uVar5,DAT_002cf91c);
    uVar12 = __mulsf3(uVar12,DAT_002cf920);
    uVar12 = __subsf3(uVar5,uVar12);
    uVar12 = __subsf3(uVar12,uVar17);
    uVar7 = __subsf3(uVar16,uVar7);
    uVar7 = __mulsf3(uVar7,DAT_002cf918);
    uVar7 = __subsf3(uVar7,uVar12);
    uVar16 = __mulsf3(uVar13,DAT_002cf924);
    uVar16 = __subsf3(uVar5,uVar16);
    uVar16 = __subsf3(uVar16,uVar7);
    __addsf3(uVar15,uVar17);
    uVar6 = __fixsfsi();
    *puVar10 = *(undefined1 *)(iVar2 + (uVar6 & 0x3ff));
    __subsf3(uVar15,uVar17);
    uVar6 = __fixsfsi();
    puVar10[7] = *(undefined1 *)(iVar2 + (uVar6 & 0x3ff));
    __addsf3(uVar14,uVar12);
    uVar6 = __fixsfsi();
    puVar10[1] = *(undefined1 *)(iVar2 + (uVar6 & 0x3ff));
    __subsf3(uVar14,uVar12);
    uVar6 = __fixsfsi();
    puVar8 = puVar8 + 8;
    puVar10[6] = *(undefined1 *)(iVar2 + (uVar6 & 0x3ff));
    __addsf3(uVar3,uVar7);
    uVar6 = __fixsfsi();
    puVar10[2] = *(undefined1 *)(iVar2 + (uVar6 & 0x3ff));
    __subsf3(uVar3,uVar7);
    uVar6 = __fixsfsi();
    puVar10[5] = *(undefined1 *)(iVar2 + (uVar6 & 0x3ff));
    __addsf3(uVar4,uVar16);
    uVar6 = __fixsfsi();
    puVar10[3] = *(undefined1 *)(iVar2 + (uVar6 & 0x3ff));
    __subsf3(uVar4,uVar16);
    uVar6 = __fixsfsi();
    puVar10[4] = *(undefined1 *)(iVar2 + (uVar6 & 0x3ff));
  } while (puVar8 != &uStack_18);
  return;
}


