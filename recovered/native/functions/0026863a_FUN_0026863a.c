/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026863a FUN_0026863a */

int FUN_0026863a(int *param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *param_1;
  iVar3 = param_1[0x16];
  if (param_1[0xd] == 0) {
    FUN_00268578(iVar2,iVar3);
  }
  else {
    uVar1 = *(undefined1 *)(iVar2 + 0x36);
    FUN_0025ad28();
    FUN_00265900(*(undefined4 *)(iVar2 + 0xd0),0xffffffff,param_1[0xd],1,0xffffffff);
    FUN_0025ad3c();
    *(undefined1 *)(iVar2 + 0x36) = uVar1;
    *(int *)(iVar2 + 0x2c) = iVar3;
  }
  return iVar3;
}


