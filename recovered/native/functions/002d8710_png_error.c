/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d8710 png_error */

int png_error(int param_1,int param_2,undefined4 param_3,code *param_4)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  FILE *__stream;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  if ((param_1 != 0) && (param_4 = *(code **)(param_1 + 0x10c), param_4 != (code *)0x0)) {
    (*param_4)();
  }
  if (param_2 == 0) {
    param_2 = iRam002d8754 + 0x2d8730;
  }
  __stream = (FILE *)(*(int *)(iRam002d8758 + 0x2d8738) + 0xa8);
  fprintf(__stream,(char *)(iRam002d875c + 0x2d873c),param_2);
  fputc(10,__stream);
  uVar6 = 0x2d8753;
  uVar7 = png_longjmp(param_1,1);
  sVar1 = *(short *)(param_1 + (int)uVar7);
  iVar5 = (int)sVar1;
  *(short *)(iVar5 + 0x1c) = sVar1;
  uVar2 = (uint)*(short *)(param_1 + iVar5);
  if (iVar5 != 0) {
    iVar3 = *(int *)(iVar5 + 0x104);
    if (iVar3 == 0) {
      *(undefined4 *)(iVar5 + 0x108) = 0;
      if (uVar2 < 0x101) {
        *(int *)(iVar5 + 0x104) = iVar5;
      }
      else {
        iVar3 = png_malloc_warn(iVar5,uVar2);
        *(int *)(iVar5 + 0x104) = iVar3;
        if (iVar3 == 0) {
          return 0;
        }
        *(uint *)(iVar5 + 0x108) = uVar2;
      }
    }
    else {
      uVar4 = *(uint *)(iVar5 + 0x108);
      if (uVar4 == 0) {
        if (iVar3 != iVar5) {
          png_error(iVar5,DAT_002d87c8 + 0x2d87a4,iVar3,0,param_4,iVar5,param_2,param_1,iVar5,uVar6)
          ;
        }
        uVar4 = 0x100;
      }
      if (uVar4 != uVar2) {
        png_warning(iVar5,DAT_002d87cc + 0x2d87b6);
        return 0;
      }
    }
    *(int *)(iVar5 + 0x100) = (int)((ulonglong)uVar7 >> 0x20);
    iVar5 = *(int *)(iVar5 + 0x104);
  }
  return iVar5;
}


