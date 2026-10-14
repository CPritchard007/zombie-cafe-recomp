/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002dc6f0 png_read_data */

void png_read_data(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(code **)(param_1 + 0x11c) != (code *)0x0) {
    (**(code **)(param_1 + 0x11c))();
    return;
  }
  uVar3 = png_error(param_1,iRam002dc708 + 0x2dc706,param_3,0,param_4);
  iVar2 = (int)uVar3;
  if (iVar2 != 0) {
    *(int *)(iVar2 + 0x120) = (int)((ulonglong)uVar3 >> 0x20);
    if (param_3 == 0) {
      param_3 = *(int *)(DAT_002dc744 + 0x2dc722);
    }
    *(int *)(iVar2 + 0x11c) = param_3;
    iVar1 = DAT_002dc748;
    if (*(int *)(iVar2 + 0x118) != 0) {
      *(undefined4 *)(iVar2 + 0x118) = 0;
      png_warning(iVar2,iVar1 + 0x2dc734);
    }
    *(undefined4 *)(iVar2 + 0x23c) = 0;
  }
  return;
}


