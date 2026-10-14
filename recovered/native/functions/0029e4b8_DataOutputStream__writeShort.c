/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029e4b8 DataOutputStream::writeShort */

/* DataOutputStream::writeShort(short) */

void DataOutputStream::writeShort(short param_1)

{
  int *piVar1;
  uint in_r1;
  
  piVar1 = *(int **)(int)param_1;
  (**(code **)(*piVar1 + 0x10))(piVar1,(int)in_r1 >> 8 & 0xff);
  piVar1 = *(int **)(int)param_1;
  (**(code **)(*piVar1 + 0x10))(piVar1,in_r1 & 0xff);
  return;
}


