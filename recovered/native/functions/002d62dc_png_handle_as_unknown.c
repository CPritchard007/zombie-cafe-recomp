/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002d62dc png_handle_as_unknown */

undefined1 png_handle_as_unknown(int param_1,void *param_2)

{
  int iVar1;
  void *__s2;
  void *pvVar2;
  void *pvVar3;
  
  if ((param_2 != (void *)0x0) && (param_1 != 0)) {
    if (*(int *)(param_1 + 0x318) == 0) {
      return 0;
    }
    pvVar3 = *(void **)(param_1 + 0x31c);
    pvVar2 = (void *)((int)pvVar3 + *(int *)(param_1 + 0x318) * 5);
    do {
      __s2 = (void *)((int)pvVar2 + -5);
      iVar1 = memcmp(param_2,__s2,4);
      if (iVar1 == 0) {
        return *(undefined1 *)((int)pvVar2 + -1);
      }
      pvVar2 = __s2;
    } while (pvVar3 < __s2);
  }
  return 0;
}


