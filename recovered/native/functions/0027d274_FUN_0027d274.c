/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027d274 FUN_0027d274 */

int FUN_0027d274(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int local_14;
  
  iVar3 = *param_1;
  local_14 = param_4;
  if (*(char *)((int)param_1 + 0x1d) == '\0') {
    if (iVar3 != 0) {
      bVar1 = *(byte *)(iVar3 + 0x5b);
      if (1 < bVar1) {
        if (bVar1 == 3) {
          if (*(int *)(iVar3 + 0x54) != 0) {
            return *(int *)(iVar3 + 0x54);
          }
        }
        else {
          *(byte *)(iVar3 + 0x5b) = 0;
          iVar2 = FUN_0027cf9c(iVar3,*(undefined4 *)(iVar3 + 0x50),*(undefined4 *)(iVar3 + 0x48),
                               *(undefined4 *)(iVar3 + 0x4c),0,iVar3 + 0x54,param_3);
          if (iVar2 != 0) {
            return iVar2;
          }
          sqlite3_free(*(undefined4 *)(iVar3 + 0x50));
          *(undefined4 *)(iVar3 + 0x50) = 0;
        }
      }
      if ((*(char *)(iVar3 + 0x5b) != '\x01') || (iVar3 = *(int *)(iVar3 + 0x54), iVar3 != 0)) {
        iVar3 = 0;
        param_1[0x14] = 0;
        *(undefined1 *)(param_1 + 7) = 1;
      }
    }
  }
  else {
    iVar3 = FUN_0027cd22(iVar3,0,param_1[0xe],param_1[0xf],0,&local_14);
    if (iVar3 == 0) {
      param_1[0x10] = param_1[0xe];
      param_1[0x11] = param_1[0xf];
      if (local_14 == 0) {
        *(undefined1 *)((int)param_1 + 0x19) = 1;
        *(undefined1 *)((int)param_1 + 0x1d) = 0;
        param_1[0x14] = 0;
      }
      else {
        iVar3 = FUN_0026b4e4(DAT_0027d314);
      }
    }
  }
  return iVar3;
}


