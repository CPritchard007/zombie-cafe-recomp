/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002ab54a CCOptions::SetBool */

/* CCOptions::SetBool(void*, char const*, unsigned int) */

undefined4 __thiscall CCOptions::SetBool(CCOptions *this,void *param_1,char *param_2,uint param_3)

{
  javaSetBool(param_1,param_2 + (-(uint)(param_2 == (char *)0x0) - (int)(param_2 + -1)),
              param_2 + (-(uint)(param_2 == (char *)0x0) - (int)(param_2 + -1)),param_2 + -1,param_3
             );
  return 1;
}


