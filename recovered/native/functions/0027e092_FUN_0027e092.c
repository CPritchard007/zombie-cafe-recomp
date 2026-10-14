/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0027e092 FUN_0027e092 */

void FUN_0027e092(int param_1,undefined1 *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  void *__src;
  int iVar3;
  int local_1c;
  
  iVar3 = *(int *)(param_1 + 0x34);
  iVar1 = *(int *)(param_2 + 0x38);
  local_1c = 0;
  if (*(int *)(param_2 + 0x48) == 1) {
    local_1c = 100;
  }
  __src = (void *)(*(int *)(param_1 + 0x38) + (uint)*(byte *)(param_1 + 5));
  uVar2 = (uint)CONCAT11(*(undefined1 *)((int)__src + 5),*(undefined1 *)((int)__src + 6));
  memcpy((void *)(iVar1 + uVar2),(void *)(*(int *)(param_1 + 0x38) + uVar2),
         *(int *)(iVar3 + 0x24) - uVar2);
  memcpy((void *)(iVar1 + local_1c),__src,
         (uint)*(ushort *)(param_1 + 0xc) + (uint)*(ushort *)(param_1 + 0x10) * 2);
  *param_2 = 0;
  iVar1 = FUN_0026b81c(param_2);
  if (iVar1 == 0) {
    if (*(char *)(iVar3 + 0x11) == '\0') {
      return;
    }
    iVar1 = FUN_0027dfec(param_2);
  }
  *param_3 = iVar1;
  return;
}


