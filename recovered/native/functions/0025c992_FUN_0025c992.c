/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025c992 FUN_0025c992 */

undefined8 FUN_0025c992(int param_1)

{
  int local_c;
  
  local_c = 0;
  FUN_0025c912(*(undefined4 *)(param_1 + 8),&local_c);
  FUN_0025c912(*(undefined4 *)(param_1 + 0xc),&local_c);
  if ((int)((uint)*(ushort *)(param_1 + 2) << 0x14) < 0) {
    FUN_0025c94a();
  }
  else {
    FUN_0025c922(*(undefined4 *)(param_1 + 0x10),&local_c);
  }
  *(int *)(param_1 + 0x2c) = local_c + 1;
  return CONCAT44(local_c,param_1);
}


