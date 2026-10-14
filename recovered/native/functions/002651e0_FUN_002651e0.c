/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002651e0 FUN_002651e0 */

void * FUN_002651e0(int param_1,void *param_2,int param_3)

{
  void *__dest;
  
  if (*(char *)(param_1 + 0x36) == '\0') {
    if (param_2 == (void *)0x0) {
      __dest = (void *)FUN_0025ee10();
    }
    else if ((param_2 < *(void **)(param_1 + 0x104)) || (*(void **)(param_1 + 0x108) <= param_2)) {
      __dest = (void *)sqlite3_realloc(param_2);
      if (__dest == (void *)0x0) {
        *(undefined1 *)(param_1 + 0x36) = 1;
      }
    }
    else {
      __dest = param_2;
      if (((int)(uint)*(ushort *)(param_1 + 0xe8) < param_3) &&
         (__dest = (void *)FUN_0025ee10(), __dest != (void *)0x0)) {
        memcpy(__dest,param_2,(uint)*(ushort *)(param_1 + 0xe8));
        FUN_0025fbda(param_1,param_2);
      }
    }
  }
  else {
    __dest = (void *)0x0;
  }
  return __dest;
}


