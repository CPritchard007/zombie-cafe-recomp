/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0026f950 FUN_0026f950 */

void FUN_0026f950(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_38;
  undefined4 local_34;
  
  iVar1 = FUN_0026f0d8();
  if (iVar1 == 0) {
    FUN_0025ea68(&local_38);
    uVar3 = __floatdidf(local_38,local_34);
    uVar3 = __divdf3((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),DAT_0026f988,DAT_0026f98c);
    uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    sqlite3_result_double(param_1,uVar2,(int)uVar3,uVar2);
  }
  return;
}


