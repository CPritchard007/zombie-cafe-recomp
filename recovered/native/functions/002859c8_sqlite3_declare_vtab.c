/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002859c8 sqlite3_declare_vtab */

undefined4 sqlite3_declare_vtab(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 local_28;
  int local_1c [2];
  
  local_1c[0] = 0;
  sqlite3_mutex_enter(*(undefined4 *)(param_1 + 0xc));
  if ((*(int *)(param_1 + 0x134) == 0) ||
     (iVar5 = *(int *)(*(int *)(param_1 + 0x134) + 4), iVar5 == 0)) {
    FUN_00268578(param_1,0x15,0);
    sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
    uVar2 = FUN_0026adf0(DAT_00285ae0);
  }
  else {
    piVar3 = (int *)FUN_0025f04c(param_1,0x230);
    local_28 = 7;
    if (piVar3 != (int *)0x0) {
      *(undefined1 *)((int)piVar3 + DAT_00285ae4) = 1;
      iVar1 = DAT_00285adc;
      iVar4 = DAT_00285ad8;
      *piVar3 = param_1;
      piVar3[0x6e] = iVar4;
      piVar3[0x6f] = iVar1;
      iVar4 = FUN_002856f4(piVar3,param_2,local_1c);
      if ((((iVar4 == 0) && (iVar4 = piVar3[0x7f], iVar4 != 0)) &&
          (*(char *)(param_1 + 0x36) == '\0')) &&
         ((*(int *)(iVar4 + 0x1c) == 0 && (-1 < (int)((uint)*(byte *)(iVar4 + 0x22) << 0x1b))))) {
        if (*(int *)(iVar5 + 0xc) == 0) {
          *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(iVar4 + 0xc);
          *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(piVar3[0x7f] + 8);
          *(undefined4 *)(piVar3[0x7f] + 8) = 0;
          *(undefined4 *)(piVar3[0x7f] + 0xc) = 0;
        }
        local_28 = 0;
        *(undefined4 *)(*(int *)(param_1 + 0x134) + 4) = 0;
      }
      else {
        iVar5 = local_1c[0];
        if (local_1c[0] != 0) {
          iVar5 = DAT_00285ae8 + 0x285a8c;
        }
        FUN_00268578(param_1,1,iVar5);
        FUN_0025fbda(param_1,local_1c[0]);
        local_28 = 1;
      }
      *(undefined1 *)((int)piVar3 + DAT_00285ae4) = 0;
      if (piVar3[2] != 0) {
        FUN_002810d0();
      }
      FUN_00260e84(param_1,piVar3[0x7f]);
      FUN_0025fbda(param_1,piVar3);
    }
    uVar2 = FUN_002685e0(param_1,local_28);
    sqlite3_mutex_leave(*(undefined4 *)(param_1 + 0xc));
  }
  return uVar2;
}


