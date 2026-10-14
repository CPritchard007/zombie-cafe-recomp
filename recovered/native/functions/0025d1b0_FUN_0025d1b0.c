/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025d1b0 FUN_0025d1b0 */

undefined4 *
FUN_0025d1b0(int *param_1,char *param_2,undefined4 *param_3,undefined4 *param_4,int *param_5)

{
  int *piVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  short *psVar7;
  undefined4 *puVar8;
  short *psVar9;
  int iVar10;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  int *local_28;
  
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  if (param_2 == (char *)0x0) {
    return (undefined4 *)0x0;
  }
  if (param_1[1] == 0) {
    return (undefined4 *)0x0;
  }
  cVar2 = *param_2;
  if ((cVar2 == -0x68) || (cVar2 == -0x66)) {
    puVar8 = (undefined4 *)0x0;
    piVar6 = (int *)0x0;
LAB_0025d20c:
    do {
      if ((puVar8 != (undefined4 *)0x0) || (param_1 == (int *)0x0)) goto LAB_0025d214;
      psVar7 = (short *)param_1[1];
      psVar9 = psVar7;
      for (iVar5 = 0; iVar5 < *psVar7; iVar5 = iVar5 + 1) {
        piVar1 = (int *)(psVar9 + 0x14);
        psVar9 = psVar9 + 0x20;
        if (*piVar1 == *(int *)(param_2 + 0x18)) {
          puVar8 = *(undefined4 **)(psVar7 + iVar5 * 0x20 + 10);
          piVar6 = *(int **)(psVar7 + iVar5 * 0x20 + 0xc);
          goto LAB_0025d20c;
        }
      }
      param_1 = (int *)param_1[4];
      puVar8 = (undefined4 *)0x0;
    } while( true );
  }
  puVar3 = (undefined4 *)0x0;
  if (cVar2 != 't') goto LAB_0025d2a6;
  piVar6 = *(int **)(param_2 + 0x10);
  uVar4 = **(undefined4 **)(*piVar6 + 8);
LAB_0025d28c:
  local_34 = piVar6[10];
  local_38 = *param_1;
  local_28 = param_1;
  puVar3 = (undefined4 *)FUN_0025d1b0(&local_38,uVar4,&local_44,&local_40,&local_3c);
LAB_0025d2a6:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = local_44;
    *param_4 = local_40;
    *param_5 = local_3c;
  }
  return puVar3;
LAB_0025d214:
  puVar3 = puVar8;
  if (puVar8 == (undefined4 *)0x0) goto LAB_0025d2a6;
  iVar5 = (int)*(short *)(param_2 + 0x1c);
  if (piVar6 == (int *)0x0) {
    puVar3 = (undefined4 *)0x0;
    if (puVar8[0x11] != 0) {
      if ((iVar5 < 0) && (iVar5 = puVar8[1], iVar5 < 0)) {
        local_3c = DAT_0025d2d0 + 0x25d256;
        puVar3 = (undefined4 *)(DAT_0025d2d4 + 0x25d25a);
      }
      else {
        piVar6 = (int *)(puVar8[3] + iVar5 * 0x18);
        local_3c = *piVar6;
        puVar3 = (undefined4 *)piVar6[3];
      }
      local_40 = *puVar8;
      if ((int *)*param_1 != (int *)0x0) {
        iVar10 = *(int *)*param_1;
        iVar5 = FUN_0025d12c(iVar10);
        local_44 = *(undefined4 *)(iVar5 * 0x10 + *(int *)(iVar10 + 0x10));
      }
    }
    goto LAB_0025d2a6;
  }
  puVar3 = (undefined4 *)0x0;
  if ((iVar5 < 0) || (*(int *)*piVar6 <= iVar5)) goto LAB_0025d2a6;
  uVar4 = *(undefined4 *)(iVar5 * 0x14 + ((int *)*piVar6)[2]);
  goto LAB_0025d28c;
}


