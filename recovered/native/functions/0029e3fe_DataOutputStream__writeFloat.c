/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029e3fe DataOutputStream::writeFloat */

/* DataOutputStream::writeFloat(float) */

undefined8 DataOutputStream::writeFloat(float param_1)

{
  undefined4 *in_r0;
  undefined4 in_r1;
  undefined4 local_c [3];
  
  local_c[0] = in_r1;
  (**(code **)(*(int *)*in_r0 + 0x14))((int *)*in_r0,local_c,4);
  return CONCAT44(local_c[0],in_r0);
}


