/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a0ec2 String::Test */

/* String::Test() const */

void __thiscall String::Test(String *this)

{
  void *pvVar1;
  
  pvVar1 = malloc((size_t)(this + 1));
  if (pvVar1 != (void *)0x0) {
    *(String *)((int)pvVar1 + (int)this) = (String)0x0;
  }
  return;
}


