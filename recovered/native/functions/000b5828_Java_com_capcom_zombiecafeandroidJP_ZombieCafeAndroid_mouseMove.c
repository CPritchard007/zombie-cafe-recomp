/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b5828 Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_mouseMove */

void Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_mouseMove
               (_jarray *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  void *__ptr;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  int local_50;
  uint local_48 [13];
  
  iVar1 = _JNIEnv::GetArrayLength(param_1);
  __ptr = malloc(iVar1 << 2);
  (**(code **)(*(int *)param_1 + 0x334))(param_1,param_3,0,iVar1);
  if (2 < param_4) {
    param_4 = 2;
  }
  iVar1 = 0;
  puVar5 = local_48;
  local_50 = 0;
  while (local_50 < param_4) {
    *(undefined4 *)((int)local_48 + iVar1 + 8) = *(undefined4 *)((int)__ptr + iVar1);
    *(undefined4 *)((int)local_48 + iVar1 + 0xc) = *(undefined4 *)((int)__ptr + iVar1 + 4);
    uVar2 = __fixsfsi();
    iVar3 = __fixsfsi(*(undefined4 *)((int)local_48 + iVar1 + 8));
    local_50 = local_50 + 1;
    *puVar5 = iVar3 << 0x10 | uVar2 & 0xffff;
    puVar5 = puVar5 + 1;
    iVar1 = iVar1 + 8;
  }
  free(__ptr);
  piVar4 = *(int **)(*(int *)(DAT_000b58c4 + 0xb58be) + 4);
  (**(code **)(*piVar4 + 0x24))(piVar4,local_48,param_4);
  return;
}


