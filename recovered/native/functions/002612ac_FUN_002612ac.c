/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002612ac FUN_002612ac */

char * FUN_002612ac(undefined4 param_1,char *param_2,int param_3,int param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  
  if (param_2 != (char *)0x0) {
    if ((*param_2 == -0x68) && (*(int *)(param_2 + 0x18) == param_3)) {
      if (*(short *)(param_2 + 0x1c) < 0) {
        *param_2 = 'b';
      }
      else {
        pcVar1 = (char *)FUN_002606fc(param_1,*(undefined4 *)
                                               (*(short *)(param_2 + 0x1c) * 0x14 +
                                               *(int *)(param_4 + 8)),0);
        if ((pcVar1 != (char *)0x0) && (*(int *)(param_2 + 0x14) != 0)) {
          *(int *)(pcVar1 + 0x14) = *(int *)(param_2 + 0x14);
        }
        FUN_002610aa(param_1,param_2);
        param_2 = pcVar1;
      }
    }
    else {
      uVar2 = FUN_002612ac(param_1,*(undefined4 *)(param_2 + 8),param_3,param_4,param_4);
      *(undefined4 *)(param_2 + 8) = uVar2;
      uVar2 = FUN_002612ac(param_1,*(undefined4 *)(param_2 + 0xc),param_3,param_4);
      *(undefined4 *)(param_2 + 0xc) = uVar2;
      if ((int)((uint)*(ushort *)(param_2 + 2) << 0x14) < 0) {
        FUN_0026136a(param_1,*(undefined4 *)(param_2 + 0x10),param_3,param_4);
      }
      else {
        FUN_00261336(param_1,*(undefined4 *)(param_2 + 0x10),param_3,param_4);
      }
    }
  }
  return param_2;
}


