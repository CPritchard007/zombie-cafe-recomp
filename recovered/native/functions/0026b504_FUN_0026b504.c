/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026b504 FUN_0026b504 */

int FUN_0026b504(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_24;
  int local_20;
  int local_1c [2];
  
  local_24 = 0;
  local_20 = 0;
  local_1c[0] = 0;
  iVar1 = FUN_0026835a(param_1,param_2 + 0x21U >> 0xc,local_1c,&local_20,&local_24);
  if (iVar1 == 0) {
    param_2 = param_2 - local_24;
    if (param_2 == 1) {
      memset((void *)(local_20 + 4),0,(local_1c[0] - local_20) + DAT_0026b5a4);
    }
    if (*(int *)(local_20 + param_2 * 4) != 0) {
      FUN_00268392(param_1);
    }
    uVar3 = param_3 * 0x17f;
    iVar4 = param_2;
    while( true ) {
      iVar2 = (uVar3 & 0x1fff) * 2;
      if (*(short *)(local_1c[0] + iVar2) == 0) break;
      if (iVar4 == 0) {
        iVar1 = FUN_0026b4e4(DAT_0026b5a8);
        return iVar1;
      }
      uVar3 = (uVar3 & 0x1fff) + 1;
      iVar4 = iVar4 + -1;
    }
    *(int *)(local_20 + param_2 * 4) = param_3;
    *(short *)(local_1c[0] + iVar2) = (short)param_2;
  }
  return iVar1;
}


