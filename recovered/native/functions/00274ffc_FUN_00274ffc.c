/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00274ffc FUN_00274ffc */

void FUN_00274ffc(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5
                 )

{
  int iVar1;
  byte local_1d;
  int local_1c [2];
  
  iVar1 = FUN_00274ed0(*param_1,param_2,&local_1d,local_1c);
  if (iVar1 == 0) {
    if ((local_1d != param_3) || (local_1c[0] != param_4)) {
      FUN_00268204(param_1,param_5,DAT_0027506c + 0x275056,param_2,param_3,param_4,(uint)local_1d,
                   local_1c[0]);
    }
  }
  else {
    if ((iVar1 + DAT_00275064 == 0) || (iVar1 == 7)) {
      param_1[6] = 1;
    }
    FUN_00268204(param_1,param_5,DAT_00275068 + 0x275034,param_2);
  }
  return;
}


