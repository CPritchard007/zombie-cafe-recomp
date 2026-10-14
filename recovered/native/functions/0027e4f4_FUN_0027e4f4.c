/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027e4f4 FUN_0027e4f4 */

undefined8 FUN_0027e4f4(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  FUN_00261f68();
  iVar2 = *(int *)(iVar3 + 0xc);
  iVar1 = *(int *)(iVar2 + 0x38);
  iVar2 = FUN_002733c4(*(undefined4 *)(iVar2 + 0x44));
  if ((iVar2 == 0) && (FUN_0025ba48(iVar1 + (param_2 + 9) * 4,param_3), param_2 == 7)) {
    *(char *)(iVar3 + 0x12) = (char)param_3;
  }
  FUN_00262002(param_1);
  return CONCAT44(iVar2,iVar2);
}


