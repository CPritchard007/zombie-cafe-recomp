/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029e3ea DataOutputStream::writeDouble */

/* DataOutputStream::writeDouble(double) */

undefined8 DataOutputStream::writeDouble(double param_1)

{
  undefined4 *in_r0;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = in_r2;
  local_c = in_r3;
  (**(code **)(*(int *)*in_r0 + 0x14))((int *)*in_r0,&local_10,8);
  return CONCAT44(local_c,local_10);
}


