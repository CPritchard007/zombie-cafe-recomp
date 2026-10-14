/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00272050 sqlite3_complete16 */

undefined8 sqlite3_complete16(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = param_1;
  iVar1 = sqlite3_initialize();
  if (iVar1 == 0) {
    uVar2 = FUN_0025f066(0);
    FUN_00265900(uVar2,0xffffffff,param_1,3 - (uint)(sqlite3_vmprintf[DAT_002720a8] != (code)0x0),0,
                 param_2);
    iVar3 = FUN_0026c760(uVar2,1);
    uVar4 = 7;
    iVar5 = iVar1;
    if (iVar3 != 0) {
      uVar4 = sqlite3_complete();
      iVar5 = iVar1;
    }
    FUN_00263758(uVar2);
    iVar1 = FUN_002685e0(0,uVar4);
  }
  return CONCAT44(iVar5,iVar1);
}


