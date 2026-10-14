/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d7770 FUN_002d7770 */

void FUN_002d7770(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined2 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 in_stack_ffffffb8;
  
  uVar8 = 8 - param_3;
  iVar5 = 1 << (uVar8 & 0xff);
  iVar6 = (1 << (0x10U - param_3 & 0xff)) + -1;
  uVar7 = 0xf - param_3;
  puVar2 = (undefined4 *)png_calloc(param_1,iVar5 << 2);
  *param_2 = puVar2;
  for (iVar10 = 0; iVar10 != iVar5; iVar10 = iVar10 + 1) {
    puVar3 = (undefined2 *)png_malloc(param_1,0x200);
    *puVar2 = puVar3;
    puVar2 = puVar2 + 1;
    iVar4 = png_gamma_significant(param_4);
    if (iVar4 == 0) {
      do {
        iVar9 = (iVar4 << (uVar8 & 0xff)) + iVar10;
        if (param_3 != 0) {
          iVar9 = __udivsi3(iVar9 * 0xffff + (1 << (uVar7 & 0xff)),iVar6);
        }
        iVar4 = iVar4 + 1;
        *puVar3 = (short)iVar9;
        puVar3 = puVar3 + 1;
      } while (iVar4 != 0x100);
    }
    else {
      uVar11 = __floatsidf(param_4);
      __muldf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),DAT_002d7870,DAT_002d7874);
      iVar4 = 0;
      do {
        iVar9 = iVar4 + 1;
        uVar11 = __floatunsidf((iVar4 << (uVar8 & 0xff)) + iVar10);
        uVar12 = __floatunsidf(iVar6);
        __divdf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar12,
                 (int)((ulonglong)uVar12 >> 0x20));
        pow((double)CONCAT44(param_3,in_stack_ffffffb8),(double)CONCAT44(iVar5,uVar8));
        uVar11 = __muldf3();
        __adddf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),DAT_002d7880,DAT_002d7884);
        floor((double)CONCAT44(param_3,in_stack_ffffffb8));
        uVar1 = __fixunsdfsi();
        *puVar3 = uVar1;
        puVar3 = puVar3 + 1;
        iVar4 = iVar9;
      } while (iVar9 != 0x100);
    }
  }
  return;
}


