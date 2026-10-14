/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026d44c FUN_0026d44c */

int * FUN_0026d44c(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,uint param_5,
                  uint param_6,ushort param_7,int param_8)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  bool bVar8;
  int local_40;
  
  do {
    if (param_1 == (undefined4 *)0x0) {
      return (int *)0x0;
    }
    piVar7 = (int *)param_1[8];
    for (local_40 = param_1[6]; local_40 != 0; local_40 = local_40 + -1) {
      if ((((piVar7[2] == param_2) && ((piVar7[7] & param_6) == 0 && (piVar7[6] & param_5) == 0)) &&
          (piVar7[3] == param_3)) && ((param_7 & 0xfff & *(ushort *)(piVar7 + 4)) != 0)) {
        if (param_8 == 0) {
          return piVar7;
        }
        if (param_3 < 0) {
          return piVar7;
        }
        if (*(ushort *)(piVar7 + 4) == 0x80) {
          return piVar7;
        }
        iVar5 = *piVar7;
        uVar6 = *param_1;
        bVar1 = *(byte *)(*(int *)(*(int *)(param_8 + 0xc) + 0xc) + param_3 * 0x18 + 0x16);
        iVar2 = FUN_0025cd42(iVar5);
        if (iVar2 == 0x61) {
          bVar8 = bVar1 == 0x61;
LAB_0026d4f2:
          if (!bVar8) goto LAB_0026d52e;
        }
        else if (iVar2 != 0x62) {
          bVar8 = 0x62 < bVar1;
          goto LAB_0026d4f2;
        }
        puVar3 = (undefined4 *)
                 FUN_0026d3c4(uVar6,*(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0xc));
        piVar4 = *(int **)(param_8 + 4);
        iVar2 = 0;
        while( true ) {
          iVar5 = *piVar4;
          piVar4 = piVar4 + 1;
          if (iVar5 == param_3) break;
          if (*(int *)(param_8 + 0x24) <= iVar2) {
            return (int *)0x0;
          }
          iVar2 = iVar2 + 1;
        }
        if (puVar3 == (undefined4 *)0x0) {
          return piVar7;
        }
        iVar2 = sqlite3_stricmp(*puVar3,*(undefined4 *)(*(int *)(param_8 + 0x20) + iVar2 * 4));
        if (iVar2 == 0) {
          return piVar7;
        }
      }
LAB_0026d52e:
      piVar7 = piVar7 + 10;
    }
    param_1 = (undefined4 *)param_1[4];
  } while( true );
}


