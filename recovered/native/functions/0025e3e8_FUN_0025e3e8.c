/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025e3e8 FUN_0025e3e8 */

int FUN_0025e3e8(int param_1,undefined4 *param_2)

{
  int iVar1;
  void *__src;
  int iVar2;
  int local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  int local_50;
  int local_4c;
  undefined1 auStack_48 [52];
  
  __src = (void *)**(undefined4 **)(param_1 + 0x20);
  memcpy(&local_78,__src,0x30);
  if (*(char *)(param_1 + 0x2b) != '\x02') {
    (**(code **)(**(int **)(param_1 + 4) + 0x3c))();
  }
  memcpy(auStack_48,(void *)((int)__src + 0x30),0x30);
  iVar1 = memcmp(&local_78,auStack_48,0x30);
  iVar2 = 1;
  if ((iVar1 == 0) && ((char)local_6c != '\0')) {
    FUN_0025c0ac(1,&local_78,0x28,0,&local_80);
    if ((local_80 == local_50) && (local_7c == local_4c)) {
      iVar2 = memcmp((undefined4 *)(param_1 + 0x34),&local_78,0x30);
      if (iVar2 != 0) {
        *param_2 = 1;
        *(undefined4 *)(param_1 + 0x34) = local_78;
        *(undefined4 *)(param_1 + 0x38) = uStack_74;
        *(undefined4 *)(param_1 + 0x3c) = uStack_70;
        *(undefined4 *)(param_1 + 0x40) = local_6c;
        *(undefined4 *)(param_1 + 0x44) = uStack_68;
        *(undefined4 *)(param_1 + 0x48) = uStack_64;
        *(undefined4 *)(param_1 + 0x4c) = local_60;
        *(undefined4 *)(param_1 + 0x50) = uStack_5c;
        *(undefined4 *)(param_1 + 0x54) = uStack_58;
        *(undefined4 *)(param_1 + 0x58) = local_54;
        *(int *)(param_1 + 0x5c) = local_50;
        *(int *)(param_1 + 0x60) = local_4c;
        *(uint *)(param_1 + 0x24) =
             (*(ushort *)(param_1 + 0x42) & 0xfe00) + (*(ushort *)(param_1 + 0x42) & 1) * 0x10000;
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}


