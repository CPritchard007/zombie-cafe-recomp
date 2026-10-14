/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a11dc String::valueOf */

/* String::valueOf(bool) */

String * __thiscall String::valueOf(String *this,bool param_1)

{
  char *pcVar1;
  
  if (param_1) {
    pcVar1 = (char *)(DAT_002a11f8 + 0x2a11ea);
  }
  else {
    pcVar1 = (char *)(DAT_002a11fc + 0x2a11f0);
  }
  String(this,pcVar1);
  return this;
}


