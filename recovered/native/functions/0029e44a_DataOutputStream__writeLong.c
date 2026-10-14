/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029e44a DataOutputStream::writeLong */

/* DataOutputStream::writeLong(long long) */

void DataOutputStream::writeLong(longlong param_1)

{
  undefined4 *in_r0;
  uint in_r2;
  uint in_r3;
  
  (**(code **)(*(int *)*in_r0 + 0x10))((int *)*in_r0,in_r3 >> 0x18);
  (**(code **)(*(int *)*in_r0 + 0x10))((int *)*in_r0,(int)in_r3 >> 0x10 & 0xff);
  (**(code **)(*(int *)*in_r0 + 0x10))((int *)*in_r0,(int)in_r3 >> 8 & 0xff);
  (**(code **)(*(int *)*in_r0 + 0x10))((int *)*in_r0,in_r3 & 0xff);
  (**(code **)(*(int *)*in_r0 + 0x10))((int *)*in_r0,in_r2 >> 0x18);
  (**(code **)(*(int *)*in_r0 + 0x10))((int *)*in_r0,in_r2 >> 0x10 & 0xff);
  (**(code **)(*(int *)*in_r0 + 0x10))((int *)*in_r0,in_r2 >> 8 & 0xff);
  (**(code **)(*(int *)*in_r0 + 0x10))((int *)*in_r0,in_r2 & 0xff);
  return;
}


