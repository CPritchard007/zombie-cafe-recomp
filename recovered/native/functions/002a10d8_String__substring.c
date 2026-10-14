/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a10d8 String::substring */

/* String::substring(int, int) */

undefined8 String::substring(int param_1,int param_2)

{
  int in_r2;
  int in_r3;
  int iStack_20;
  undefined4 local_1c;
  
  iStack_20 = param_1;
  local_1c = param_2;
  if (((in_r2 < 0) || (in_r3 < in_r2)) || (*(short *)(param_2 + 6) < in_r3)) {
    String((String *)param_1,0);
  }
  else {
    String((String *)&iStack_20,(String *)param_2);
    local_1c = CONCAT22((short)in_r3 - (short)in_r2,(short)in_r2 + *(short *)(param_2 + 4));
    String((String *)param_1,(String *)&iStack_20);
    ~String((String *)&iStack_20);
  }
  return CONCAT44(iStack_20,param_1);
}


