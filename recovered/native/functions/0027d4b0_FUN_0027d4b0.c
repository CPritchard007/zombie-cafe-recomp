/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027d4b0 FUN_0027d4b0 */

undefined8 FUN_0027d4b0(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  void *__dest;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xc);
  __dest = *(void **)(iVar3 + 0x38);
  iVar2 = FUN_002733c4(*(undefined4 *)(iVar3 + 0x44));
  if (iVar2 == 0) {
    memcpy(__dest,(void *)(DAT_0027d52c + 0x27d4ce),0x10);
    *(char *)((int)__dest + 0x10) = (char)((uint)*(undefined4 *)(param_1 + 0x20) >> 8);
    uVar1 = *(undefined2 *)(param_1 + 0x22);
    *(undefined1 *)((int)__dest + 0x12) = 1;
    *(undefined1 *)((int)__dest + 0x13) = 1;
    *(char *)((int)__dest + 0x11) = (char)uVar1;
    *(char *)((int)__dest + 0x14) =
         (char)*(undefined4 *)(param_1 + 0x20) - (char)*(undefined4 *)(param_1 + 0x24);
    *(undefined1 *)((int)__dest + 0x15) = 0x40;
    *(undefined1 *)((int)__dest + 0x16) = 0x20;
    *(undefined1 *)((int)__dest + 0x17) = 0x20;
    memset((void *)((int)__dest + 0x18),0,0x4c);
    FUN_0026b790(iVar3,0xd);
    *(ushort *)(param_1 + 0x16) = *(ushort *)(param_1 + 0x16) | 2;
    FUN_0025ba48((int)__dest + 0x34,*(undefined1 *)(param_1 + 0x11));
    FUN_0025ba48((int)__dest + 0x40,*(undefined1 *)(param_1 + 0x12));
    *(undefined4 *)(param_1 + 0x2c) = 1;
    *(undefined1 *)((int)__dest + 0x1f) = 1;
  }
  return CONCAT44(param_1,iVar2);
}


