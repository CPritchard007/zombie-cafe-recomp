/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026321e FUN_0026321e */

ushort FUN_0026321e(char *param_1,char *param_2)

{
  char cVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  ushort uVar5;
  
  if ((param_2 == (char *)0x0) || (param_1 == (char *)0x0)) {
    uVar5 = (ushort)(param_2 != param_1) * 2;
  }
  else {
    uVar2 = *(ushort *)(param_1 + 2);
    uVar5 = 2;
    if ((((((uVar2 & 0x800) == 0) && (uVar3 = *(ushort *)(param_2 + 2), (uVar3 & 0x800) == 0)) &&
         (-1 < (int)((uint)(uVar2 ^ uVar3) << 0x1b))) &&
        (((cVar1 = *param_1, *param_2 == cVar1 &&
          (iVar4 = FUN_0026321e(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 8)),
          iVar4 == 0)) &&
         ((iVar4 = FUN_0026321e(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_2 + 0xc)),
          iVar4 == 0 &&
          ((iVar4 = FUN_002631c8(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 0x10)),
           iVar4 == 0 && (*(int *)(param_1 + 0x18) == *(int *)(param_2 + 0x18))))))))) &&
       (*(short *)(param_1 + 0x1c) == *(short *)(param_2 + 0x1c))) {
      if ((uVar2 & 0x400) == 0) {
        if (((cVar1 != -0x66) && (cVar1 != -0x68)) && (*(char **)(param_1 + 4) != (char *)0x0)) {
          if ((uVar3 & 0x400) != 0) {
            return 2;
          }
          if (*(char **)(param_2 + 4) == (char *)0x0) {
            return 2;
          }
          iVar4 = strcmp(*(char **)(param_1 + 4),*(char **)(param_2 + 4));
          if (iVar4 != 0) {
            return 2;
          }
        }
      }
      else {
        if ((uVar3 & 0x400) == 0) {
          return 2;
        }
        if (*(int *)(param_1 + 4) != *(int *)(param_2 + 4)) {
          return 2;
        }
      }
      uVar5 = 1;
      if ((((uVar2 ^ uVar3) & 0x100) == 0) && (uVar5 = uVar2 & 0x100, (uVar2 & 0x100) != 0)) {
        uVar5 = (ushort)(*(int *)(param_1 + 0x14) != *(int *)(param_2 + 0x14)) * 2;
      }
    }
  }
  return uVar5;
}


