/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027074a FUN_0027074a */

int FUN_0027074a(int param_1,undefined4 param_2,int param_3,int param_4,int param_5,char param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  
  piVar2 = (int *)(param_1 + 100);
  uVar3 = *(undefined4 *)(param_1 + 8);
  piVar4 = piVar2;
  while (((piVar4[4] < 1 || (*piVar4 != param_4)) || (piVar4[1] != param_3))) {
    piVar4 = piVar4 + 6;
    if (piVar4 == (int *)(param_1 + 0x154)) {
      FUN_002706fc(uVar3,param_2,param_4,param_3,param_5);
      if (param_6 == '\0') {
        FUN_00262718(param_1,param_4,param_3,param_5);
      }
      else {
        FUN_0025c3b8(uVar3,param_6);
      }
      return param_5;
    }
  }
  iVar1 = *(int *)(param_1 + 0x60);
  piVar4[5] = iVar1;
  *(int *)(param_1 + 0x60) = iVar1 + 1;
  iVar1 = piVar4[4];
  do {
    if (piVar2[4] == iVar1) {
      *(undefined1 *)(piVar2 + 2) = 0;
    }
    piVar2 = piVar2 + 6;
  } while (piVar2 != (int *)(param_1 + 0x154));
  return piVar4[4];
}


