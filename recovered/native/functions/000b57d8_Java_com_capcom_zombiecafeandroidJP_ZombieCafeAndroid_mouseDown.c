/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b57d8 Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_mouseDown */

undefined8
Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_mouseDown
          (uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint local_18;
  undefined4 uStack_14;
  
  local_18 = param_1;
  uStack_14 = param_2;
  uVar1 = __fixsfsi(param_4);
  iVar2 = __fixsfsi(param_3);
  local_18 = uVar1 & 0xffff | iVar2 << 0x10;
  piVar3 = *(int **)(*(int *)(DAT_000b5820 + 0xb57fe) + 4);
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x20))(piVar3,&local_18,1);
  }
  iVar2 = DAT_000b5824;
  if (*(char *)(DAT_000b5824 + 0xb581c) == '\0') {
    *(undefined4 *)((int)&DAT_000b5820 + DAT_000b5824) = param_3;
    *(undefined4 *)((int)&DAT_000b5824 + iVar2) = param_4;
    *(undefined1 *)(iVar2 + 0xb581c) = 1;
  }
  return CONCAT44(uStack_14,local_18);
}


