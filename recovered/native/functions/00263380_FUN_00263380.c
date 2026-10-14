/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00263380 FUN_00263380 */

int FUN_00263380(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_34;
  uint local_1c [2];
  
  if (((char)param_1[1] == '\0') || (local_34 = FUN_00261b80(param_1,4), local_34 == 0)) {
    iVar5 = param_1[0x2f];
    iVar7 = *param_1;
    iVar6 = param_1[0xf];
    cVar4 = (char)param_1[1];
    iVar2 = param_1[0x22];
    iVar3 = param_1[0x23];
    param_1[0x2e] = 0;
    piVar1 = (int *)FUN_0025f3a8(*(int *)(iVar7 + 4) + 0x70);
    local_34 = 7;
    if (piVar1 != (int *)0x0) {
      piVar1[1] = iVar6;
      *(undefined2 *)(piVar1 + 10) = 0xffff;
      piVar1[4] = iVar2;
      piVar1[5] = iVar3;
      *piVar1 = iVar7;
      piVar1[2] = (int)(piVar1 + 0x1c);
      piVar1[0x19] = iVar5;
      *(undefined1 *)(piVar1 + 0xc) = 1;
      *(undefined1 *)((int)piVar1 + 0x31) = 1;
      if (cVar4 != '\0') {
        cVar4 = '\x02';
      }
      *(char *)((int)piVar1 + 0x2b) = cVar4;
      local_1c[0] = DAT_0026349c;
      local_34 = (**(code **)(iVar7 + 0x18))(iVar7,iVar5,piVar1 + 0x1c,DAT_0026349c,local_1c);
      if (local_34 == 0) {
        if ((local_1c[0] & 1) != 0) {
          *(undefined1 *)((int)piVar1 + 0x2e) = 1;
        }
        iVar2 = (**(code **)(*(int *)piVar1[2] + 0x30))();
        if (iVar2 << 0x15 < 0) {
          *(undefined1 *)(piVar1 + 0xc) = 0;
        }
        if (iVar2 << 0x13 < 0) {
          *(undefined1 *)((int)piVar1 + 0x31) = 0;
        }
        param_1[0x2e] = (int)piVar1;
      }
      else {
        if (*(char *)((int)piVar1 + 0x2b) == '\x02') {
          for (iVar2 = 0; iVar2 < piVar1[6]; iVar2 = iVar2 + 1) {
            sqlite3_free(*(undefined4 *)(piVar1[8] + iVar2 * 4));
            *(undefined4 *)(piVar1[8] + iVar2 * 4) = 0;
          }
        }
        else {
          (**(code **)(*(int *)piVar1[1] + 0x40))((int *)piVar1[1],0);
        }
        FUN_0025acd0(piVar1[2]);
        sqlite3_free(piVar1);
      }
    }
  }
  else {
    FUN_0025bf70(param_1,1);
  }
  return local_34;
}


