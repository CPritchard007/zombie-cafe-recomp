/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029e3c8 DataOutputStream::writeChar */

/* DataOutputStream::writeChar(wchar_t) */

void DataOutputStream::writeChar(wchar_t param_1)

{
  uint in_r1;
  
  (**(code **)(**(int **)param_1 + 0x10))(*(int **)param_1,in_r1 >> 8 & 0xff);
  (**(code **)(**(int **)param_1 + 0x10))(*(int **)param_1,in_r1 & 0xff);
  return;
}


