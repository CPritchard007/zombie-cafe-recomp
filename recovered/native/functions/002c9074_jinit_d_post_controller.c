/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c9074 jinit_d_post_controller */

void jinit_d_post_controller(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = (int *)(*(code *)**(undefined4 **)(param_1 + 4))(param_1,1,0x1c);
  *(int **)(param_1 + 0x1c8) = piVar1;
  iVar2 = DAT_002c90e8;
  piVar1[2] = 0;
  *piVar1 = iVar2 + 0x2c9096;
  piVar1[3] = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    iVar6 = *(int *)(param_1 + 0x140);
    piVar1[4] = iVar6;
    iVar5 = *(int *)(param_1 + 0x78);
    iVar2 = *(int *)(param_1 + 0x70);
    if (param_2 == 0) {
      iVar2 = (**(code **)(*(int *)(param_1 + 4) + 8))(param_1,1,iVar2 * iVar5);
      piVar1[3] = iVar2;
    }
    else {
      pcVar4 = *(code **)(*(int *)(param_1 + 4) + 0x10);
      uVar3 = jround_up(*(undefined4 *)(param_1 + 0x74),iVar6);
      iVar2 = (*pcVar4)(param_1,1,0,iVar5 * iVar2,uVar3,piVar1[4]);
      piVar1[2] = iVar2;
    }
  }
  return;
}


