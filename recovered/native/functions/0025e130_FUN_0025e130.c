/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025e130 FUN_0025e130 */

undefined8 FUN_0025e130(int param_1,undefined4 param_2)

{
  void *__src;
  void *__dest;
  
  __dest = (void *)**(undefined4 **)(param_1 + 0x20);
  *(undefined1 *)(param_1 + 0x40) = 1;
  __src = (void *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x34) = DAT_0025e184;
  FUN_0025c0ac(1,__src,0x28,0);
  memcpy((void *)((int)__dest + 0x30),__src,0x30);
  if (*(char *)(param_1 + 0x2b) != '\x02') {
    (**(code **)(**(int **)(param_1 + 4) + 0x3c))();
  }
  memcpy(__dest,__src,0x30);
  return CONCAT44(param_2,param_1 + 0x5c);
}


