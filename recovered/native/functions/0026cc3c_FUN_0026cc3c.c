/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026cc3c FUN_0026cc3c */

undefined4 FUN_0026cc3c(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_24;
  int local_1c [2];
  
  iVar5 = *(int *)(param_1 + 0x48);
  piVar1 = (int *)FUN_0025f3a8(0x100);
  uVar2 = 7;
  if (piVar1 != (int *)0x0) {
    local_1c[0] = *(int *)(iVar5 + 0x30);
    while (local_1c[0] != 0) {
      iVar3 = *(int *)(local_1c[0] + 8);
      *(undefined4 *)(local_1c[0] + 8) = 0;
      piVar4 = piVar1;
      while( true ) {
        if (*piVar4 == 0) break;
        FUN_0026cbd2(param_1,local_1c[0],*piVar4,local_1c);
        *piVar4 = 0;
        piVar4 = piVar4 + 1;
      }
      *piVar4 = local_1c[0];
      local_1c[0] = iVar3;
    }
    local_24 = local_1c[0];
    piVar4 = piVar1;
    do {
      iVar3 = *piVar4;
      piVar4 = piVar4 + 1;
      FUN_0026cbd2(param_1,local_1c[0],iVar3,local_1c);
      local_24 = local_24 + 1;
    } while (local_24 != 0x40);
    *(int *)(iVar5 + 0x30) = local_1c[0];
    sqlite3_free(piVar1);
    uVar2 = 0;
  }
  return uVar2;
}


