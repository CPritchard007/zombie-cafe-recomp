/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00293350 sqlite3_uri_int64 */

undefined8
sqlite3_uri_int64(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = param_1;
  local_14 = param_2;
  iVar1 = sqlite3_uri_parameter();
  if (iVar1 != 0) {
    uVar2 = FUN_0025b154(iVar1);
    iVar1 = FUN_0025b710(iVar1,&local_18,uVar2,1);
    if (iVar1 == 0) {
      param_3 = local_18;
      param_4 = local_14;
    }
  }
  return CONCAT44(param_4,param_3);
}


