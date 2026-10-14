/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0010308c Vector<bool>::move */

/* Vector<bool>::move(int, int) */

void __thiscall Vector<bool>::move(Vector<bool> *this,int param_1,int param_2)

{
  void *__s;
  size_t __n;
  
  if ((-1 < param_1) && (param_1 <= *(int *)(this + 4))) {
    memmove((void *)(*(int *)(this + 8) + param_2 + param_1),(void *)(*(int *)(this + 8) + param_1),
            (*(int *)(this + 4) - param_1) + 1);
    if (param_2 < 1) {
      __n = -param_2;
      __s = (void *)(*(int *)(this + 8) + *(int *)(this + 4) + 1 + param_2);
    }
    else {
      __s = (void *)(*(int *)(this + 8) + param_1);
      __n = param_2;
    }
    memset(__s,0,__n);
  }
  return;
}


