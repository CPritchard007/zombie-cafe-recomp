/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025e9a0 FUN_0025e9a0 */

undefined8 FUN_0025e9a0(int param_1,longlong *param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  timeval local_20;
  undefined4 uStack_18;
  
  local_20.tv_sec = param_1;
  local_20.tv_usec = (__suseconds_t)param_2;
  uStack_18 = param_3;
  iVar2 = gettimeofday(&local_20,(__timezone_ptr_t)0x0);
  if (iVar2 == 0) {
    lVar4 = __muldi3(local_20.tv_sec,local_20.tv_sec >> 0x1f,DAT_0025e9e8,DAT_0025e9ec);
    lVar1 = CONCAT44(DAT_0025e9f4,DAT_0025e9f0);
    iVar3 = __divsi3(local_20.tv_usec,1000);
    *param_2 = lVar4 + lVar1 + (longlong)iVar3;
  }
  return CONCAT44(local_20.tv_sec,(uint)(iVar2 != 0));
}


