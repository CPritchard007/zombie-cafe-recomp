/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d6fb8 png_muldiv */

undefined8 png_muldiv(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined8 uVar3;
  undefined8 uVar4;
  double __x;
  undefined4 *puVar5;
  
  puVar5 = param_1;
  if (param_4 != 0) {
    if ((param_3 == 0) || (param_2 == 0)) {
      *param_1 = 0;
    }
    else {
      iVar2 = param_3;
      uVar3 = __floatsidf(param_2);
      uVar4 = __floatsidf(param_3);
      __x = (double)__muldf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),(int)uVar4,
                             (int)((ulonglong)uVar4 >> 0x20),uVar3,iVar2);
      uVar3 = __floatsidf(param_4);
      uVar3 = __divdf3(SUB84(__x,0),(int)((ulonglong)__x >> 0x20),(int)uVar3,
                       (int)((ulonglong)uVar3 >> 0x20));
      uVar1 = __adddf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),DAT_002d7048,DAT_002d704c);
      puVar5 = SUB84(__x,0);
      floor(__x);
      iVar2 = __aeabi_dcmple();
      if ((iVar2 == 0) ||
         (iVar2 = __aeabi_dcmpge(uVar1,extraout_r1,DAT_002d7058,DAT_002d705c), iVar2 == 0)) {
        param_4 = 0;
        goto LAB_002d7042;
      }
      uVar1 = __fixdfsi(uVar1,extraout_r1);
      *param_1 = uVar1;
    }
    param_4 = 1;
  }
LAB_002d7042:
  return CONCAT44(puVar5,param_4);
}


