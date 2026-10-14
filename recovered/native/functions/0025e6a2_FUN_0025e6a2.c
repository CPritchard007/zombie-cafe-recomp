/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025e6a2 FUN_0025e6a2 */

void FUN_0025e6a2(int param_1,__uid_t param_2,__gid_t param_3)

{
  __uid_t _Var1;
  
  _Var1 = geteuid();
  if (_Var1 == 0) {
    fchown(param_1,param_2,param_3);
  }
  return;
}


