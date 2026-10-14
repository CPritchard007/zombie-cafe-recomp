/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00263832 FUN_00263832 */

undefined8 FUN_00263832(int *param_1,int param_2,void *param_3,int param_4)

{
  int iVar1;
  void *__dest;
  void *__dest_00;
  undefined4 uVar2;
  void *__src;
  undefined1 uVar3;
  int iVar4;
  int *local_20;
  int local_1c;
  
  iVar1 = *param_1;
  local_20 = param_1;
  local_1c = param_2;
  if ((param_1[1] == 0) || (*(char *)(iVar1 + 0x36) != '\0')) {
    if ((param_4 != -10) && (param_4 != -6)) {
      FUN_0026376e(iVar1,param_4,param_3);
    }
    goto LAB_0026391e;
  }
  if (param_2 < 0) {
    param_2 = param_1[7] + -1;
  }
  iVar4 = param_1[1] + param_2 * 0x14;
  FUN_0026376e(iVar1,(int)*(char *)(iVar4 + 1),*(undefined4 *)(iVar4 + 0x10));
  *(undefined4 *)(iVar4 + 0x10) = 0;
  if (param_4 == -0xe) {
LAB_002638fe:
    *(void **)(iVar4 + 0x10) = param_3;
LAB_002638d8:
    *(char *)(iVar4 + 1) = (char)param_4;
    goto LAB_0026391e;
  }
  if (param_3 == (void *)0x0) {
    *(undefined1 *)(iVar4 + 1) = 0;
    goto LAB_0026391e;
  }
  if (param_4 == -6) {
    local_20 = (int *)(uint)*(ushort *)((int)param_3 + 6);
    local_1c = (int)local_20 * 5 + 0xc;
    __dest = (void *)FUN_0025ee10(0,local_1c);
    *(void **)(iVar4 + 0x10) = __dest;
    if (__dest == (void *)0x0) {
      *(undefined1 *)(*param_1 + 0x36) = 1;
      param_4 = 0;
      goto LAB_002638d8;
    }
    memcpy(__dest,param_3,local_1c - (int)local_20);
    __src = *(void **)((int)__dest + 8);
    if (__src != (void *)0x0) {
      __dest_00 = (void *)((int)__dest + ((int)local_20 + 2) * 4 + 4);
      *(void **)((int)__dest + 8) = __dest_00;
      memcpy(__dest_00,__src,(size_t)local_20);
    }
LAB_002638e4:
    uVar3 = 0xfa;
  }
  else {
    if (param_4 == -0x10) {
      *(void **)(iVar4 + 0x10) = param_3;
      goto LAB_002638e4;
    }
    if (param_4 == -10) {
      *(void **)(iVar4 + 0x10) = param_3;
      *(undefined1 *)(iVar4 + 1) = 0xf6;
      *(int *)((int)param_3 + 0xc) = *(int *)((int)param_3 + 0xc) + 1;
      goto LAB_0026391e;
    }
    if (param_4 < 0) goto LAB_002638fe;
    if (param_4 == 0) {
      param_4 = FUN_0025b154(param_3);
    }
    uVar2 = FUN_0025f286(*param_1,param_3,param_4);
    uVar3 = 0xff;
    *(undefined4 *)(iVar4 + 0x10) = uVar2;
  }
  *(undefined1 *)(iVar4 + 1) = uVar3;
LAB_0026391e:
  return CONCAT44(local_1c,local_20);
}


