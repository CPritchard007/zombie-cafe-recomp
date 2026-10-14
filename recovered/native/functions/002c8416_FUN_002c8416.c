/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c8416 FUN_002c8416 */

void FUN_002c8416(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  
  iVar4 = param_1[0x6f];
  if (*(int *)(iVar4 + 8) == 0) {
    if ((param_1[0x15] != 0) && (param_1[0x22] == 0)) {
      if ((param_1[0x17] == 0) || (param_1[0x1b] == 0)) {
        if (param_1[0x19] == 0) {
          *(undefined4 *)(*param_1 + 0x14) = 0x2f;
          (**(code **)*param_1)(param_1);
        }
        else {
          param_1[0x79] = *(int *)(iVar4 + 0x14);
        }
      }
      else {
        param_1[0x79] = *(int *)(iVar4 + 0x18);
        *(undefined4 *)(iVar4 + 8) = 1;
      }
    }
    (**(code **)param_1[0x76])(param_1);
    (**(code **)(param_1[0x71] + 8))(param_1);
    if (param_1[0x11] != 0) goto LAB_002c850a;
    if (*(int *)(iVar4 + 0x10) == 0) {
      (**(code **)param_1[0x78])(param_1);
    }
    (**(code **)param_1[0x77])(param_1);
    if (param_1[0x15] != 0) {
      (**(code **)param_1[0x79])(param_1,*(undefined4 *)(iVar4 + 8));
    }
    iVar2 = *(int *)(iVar4 + 8);
    if (iVar2 != 0) {
      iVar2 = 3;
    }
    (**(code **)param_1[0x72])(param_1,iVar2);
    uVar1 = 0;
    pcVar3 = *(code **)param_1[0x70];
  }
  else {
    *(undefined4 *)(iVar4 + 8) = 0;
    (**(code **)param_1[0x79])();
    (**(code **)param_1[0x72])(param_1,2);
    uVar1 = 2;
    pcVar3 = *(code **)param_1[0x70];
  }
  (*pcVar3)(param_1,uVar1);
LAB_002c850a:
  if (param_1[2] != 0) {
    *(undefined4 *)(param_1[2] + 0xc) = *(undefined4 *)(iVar4 + 0xc);
    *(uint *)(param_1[2] + 0x10) = *(int *)(iVar4 + 0xc) + (2 - (uint)(*(int *)(iVar4 + 8) == 0));
    if ((param_1[0x10] != 0) && (*(int *)(param_1[0x73] + 0x14) == 0)) {
      *(uint *)(param_1[2] + 0x10) = *(int *)(param_1[2] + 0x10) + (2 - (uint)(param_1[0x1b] == 0));
    }
  }
  return;
}


