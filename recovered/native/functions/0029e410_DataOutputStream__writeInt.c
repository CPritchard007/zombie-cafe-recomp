/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029e410 DataOutputStream::writeInt */

/* DataOutputStream::writeInt(int) */

void DataOutputStream::writeInt(int param_1)

{
  uint in_r1;
  
  (**(code **)(**(int **)param_1 + 0x10))(*(int **)param_1,in_r1 >> 0x18);
  (**(code **)(**(int **)param_1 + 0x10))(*(int **)param_1,(int)in_r1 >> 0x10 & 0xff);
  (**(code **)(**(int **)param_1 + 0x10))(*(int **)param_1,(int)in_r1 >> 8 & 0xff);
  (**(code **)(**(int **)param_1 + 0x10))(*(int **)param_1,in_r1 & 0xff);
  return;
}


