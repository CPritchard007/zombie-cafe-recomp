/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025e7e8 FUN_0025e7e8 */

undefined8
FUN_0025e7e8(int param_1,undefined4 param_2,__off_t param_3,int param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  __off_t _Var2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar1 = DAT_0025e848;
  do {
    _Var2 = lseek(*(int *)(param_1 + 0xc),param_3,0);
    iVar5 = _Var2 >> 0x1f;
    if ((_Var2 != param_3) || (iVar5 != param_4)) {
      if (_Var2 != -1) {
        *(undefined4 *)(param_1 + 0x14) = 0;
        iVar5 = -1;
        goto LAB_0025e83a;
      }
      break;
    }
    iVar5 = (**(code **)(iVar1 + 0x25e87e))(*(undefined4 *)(param_1 + 0xc),param_5,param_6);
    if (-1 < iVar5) goto LAB_0025e83a;
    piVar3 = (int *)__errno();
  } while (*piVar3 == 4);
  puVar4 = (undefined4 *)__errno();
  *(undefined4 *)(param_1 + 0x14) = *puVar4;
LAB_0025e83a:
  return CONCAT44(param_1,iVar5);
}


