/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002863cc FUN_002863cc */

void FUN_002863cc(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  byte *pbVar10;
  int *piVar11;
  int iVar12;
  char *local_3c;
  int local_1c [2];
  
  iVar12 = *param_1;
  if (param_1[0x11] != 0) {
    return;
  }
  if (*(char *)(iVar12 + 0x36) != '\0') {
    return;
  }
  piVar11 = (int *)param_1[0x7f];
  iVar1 = FUN_0025d12c(iVar12,piVar11[0x11]);
  uVar7 = *(undefined4 *)(iVar1 * 0x10 + *(int *)(iVar12 + 0x10));
  iVar9 = *piVar11;
  iVar8 = piVar11[3] + (piVar11[2] + -1) * 0x18;
  local_3c = *(char **)(iVar8 + 4);
  puVar2 = (undefined4 *)FUN_0026460e(iVar12,iVar9 + 0x10,uVar7);
  iVar3 = FUN_00268e90(param_1,0x1a,uVar7,*puVar2,0);
  if (iVar3 != 0) {
    return;
  }
  if (local_3c != (char *)0x0) {
    local_3c = (char *)((uint)local_3c & -(uint)(*local_3c != 'b'));
  }
  if (*(char *)(iVar8 + 0x15) == '\0') {
    if (piVar11[4] == 0) {
      if (((*(int *)(iVar12 + 0x18) << 5 < 0) && (local_3c != (char *)0x0)) && (piVar11[9] != 0)) {
        iVar12 = DAT_002865f0 + 0x28648c;
      }
      else {
        if ((local_3c != (char *)0x0) || (*(char *)(iVar8 + 0x14) == '\0')) {
          if (local_3c != (char *)0x0) {
            iVar3 = FUN_00270478(iVar12,local_3c,1,0x62,local_1c);
            if (iVar3 != 0) {
              *(undefined1 *)(iVar12 + 0x36) = 1;
              return;
            }
            if (local_1c[0] == 0) {
              iVar12 = DAT_002865f8 + 0x2864ce;
              goto LAB_0028646c;
            }
            FUN_00263758();
          }
          pbVar4 = (byte *)FUN_0025f286(iVar12,*param_2,param_2[1]);
          iVar3 = DAT_002865fc;
          if (pbVar4 != (byte *)0x0) {
            pbVar10 = pbVar4 + param_2[1] + -1;
            uVar5 = *(undefined4 *)(iVar12 + 0x18);
            while ((pbVar4 < pbVar10 &&
                   ((*pbVar10 == 0x3b || ((*(byte *)(iVar3 + 0x286532 + (uint)*pbVar10) & 1) != 0)))
                   )) {
              *pbVar10 = 0;
              pbVar10 = pbVar10 + -1;
            }
            *(uint *)(iVar12 + 0x18) = *(uint *)(iVar12 + 0x18) | 0x10000000;
            if (iVar1 == 1) {
              iVar3 = DAT_00286600 + 0x28652a;
            }
            else {
              iVar3 = DAT_00286604 + 0x286530;
            }
            FUN_00285af0(param_1,DAT_00286608 + 0x286540,uVar7,iVar3,piVar11[0xc],pbVar4,
                         piVar11[0xc] + 1,iVar9 + 0x10);
            FUN_0025fbda(iVar12,pbVar4);
            *(undefined4 *)(iVar12 + 0x18) = uVar5;
          }
          iVar12 = FUN_002662b8(param_1);
          if (iVar12 != 0) {
            uVar7 = FUN_002627dc(param_1);
            uVar5 = FUN_002627dc(param_1);
            FUN_00266266(iVar12,0x24,iVar1,uVar7,2);
            FUN_0025c3f4(iVar12,iVar1);
            FUN_0026641e(iVar12,7,3 - (uint)(local_3c == (char *)0x0),uVar5);
            uVar6 = FUN_00266266(iVar12,0x50,uVar5,0,uVar7);
            FUN_00266266(iVar12,0x25,iVar1,2,uVar5);
            FUN_002624c2(iVar12,uVar6);
            FUN_002627fe(param_1,uVar7);
            FUN_002627fe(param_1,uVar5);
          }
          FUN_00268db4(param_1,puVar2,*puVar2);
          return;
        }
        iVar12 = DAT_002865f4 + 0x2864a0;
      }
    }
    else {
      iVar12 = DAT_002865ec + 0x28646e;
    }
  }
  else {
    iVar12 = DAT_002865e8 + 0x286462;
  }
LAB_0028646c:
  FUN_00268e48(param_1,iVar12);
  return;
}


