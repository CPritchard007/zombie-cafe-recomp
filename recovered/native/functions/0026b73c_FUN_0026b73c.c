/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026b73c FUN_0026b73c */

undefined4 FUN_0026b73c(int param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 uVar4;
  
  cVar1 = (char)((int)param_2 >> 3);
  *(char *)(param_1 + 6) = cVar1 * -4 + '\x04';
  *(char *)(param_1 + 3) = cVar1;
  iVar3 = *(int *)(param_1 + 0x34);
  if ((param_2 & 0xfffffff7) == 5) {
    *(undefined1 *)(param_1 + 2) = 1;
    *(char *)(param_1 + 4) = cVar1;
    *(undefined2 *)(param_1 + 8) = *(undefined2 *)(iVar3 + 0x1c);
    uVar4 = *(undefined2 *)(iVar3 + 0x1e);
  }
  else {
    if ((param_2 & 0xfffffff7) != 2) {
      uVar2 = FUN_0026b4e4(DAT_0026b78c);
      return uVar2;
    }
    *(undefined1 *)(param_1 + 2) = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined2 *)(param_1 + 8) = *(undefined2 *)(iVar3 + 0x18);
    uVar4 = *(undefined2 *)(iVar3 + 0x1a);
  }
  *(undefined2 *)(param_1 + 10) = uVar4;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(iVar3 + 0x14);
  return 0;
}


