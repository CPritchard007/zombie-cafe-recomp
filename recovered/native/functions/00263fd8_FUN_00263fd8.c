/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00263fd8 FUN_00263fd8 */

/* WARNING: Removing unreachable block (ram,0x00264046) */

void FUN_00263fd8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  longlong lVar6;
  uint local_2c;
  uint local_28;
  undefined1 auStack_24 [8];
  int local_1c;
  
  piVar1 = *(int **)(DAT_00264170 + 0x263fe6);
  local_1c = *piVar1;
  iVar3 = *(int *)(param_1 + 0x48);
  uVar5 = *(uint *)(param_1 + 0x7c);
  lVar6 = 0;
  if (iVar3 != 0 || *(int *)(param_1 + 0x4c) != 0) {
    lVar6 = __aeabi_ldivmod(iVar3 + -1,*(int *)(param_1 + 0x4c) + -1 + (uint)(iVar3 != 0),uVar5,0);
    lVar6 = __muldi3((int)(lVar6 + 1),(int)((ulonglong)(lVar6 + 1) >> 0x20),uVar5,0);
  }
  *(longlong *)(param_1 + 0x48) = lVar6;
  if (CONCAT44(param_4,param_3) < (longlong)(lVar6 + (ulonglong)uVar5)) {
    iVar3 = 0x65;
    goto LAB_0026415a;
  }
  if (((param_2 != 0) || (*(int *)(param_1 + 0x50) != (int)lVar6)) ||
     (*(int *)(param_1 + 0x54) != (int)((ulonglong)lVar6 >> 0x20))) {
    pcVar4 = *(code **)(**(int **)(param_1 + 0x40) + 8);
    iVar3 = (*pcVar4)(*(int **)(param_1 + 0x40),auStack_24,8,pcVar4,lVar6);
    if (iVar3 != 0) goto LAB_0026415a;
    iVar2 = memcmp(auStack_24,(void *)(DAT_00264174 + 0x2640c2),8);
    iVar3 = 0x65;
    if (iVar2 != 0) goto LAB_0026415a;
  }
  iVar3 = FUN_0025bf2a(*(undefined4 *)(param_1 + 0x40),param_5,(int)(lVar6 + 8),
                       (int)((ulonglong)(lVar6 + 8) >> 0x20),param_5);
  if (((iVar3 != 0) ||
      (iVar3 = FUN_0025bf2a(*(undefined4 *)(param_1 + 0x40),param_1 + 0x30,(int)(lVar6 + 0xc),
                            (int)((ulonglong)(lVar6 + 0xc) >> 0x20),param_1 + 0x30), iVar3 != 0)) ||
     (iVar3 = FUN_0025bf2a(*(undefined4 *)(param_1 + 0x40),param_6,(int)(lVar6 + 0x10),
                           (int)((ulonglong)(lVar6 + 0x10) >> 0x20),param_6), iVar3 != 0))
  goto LAB_0026415a;
  if (*(int *)(param_1 + 0x48) == 0 && *(int *)(param_1 + 0x4c) == 0) {
    iVar3 = FUN_0025bf2a(*(undefined4 *)(param_1 + 0x40),&local_28,(int)(lVar6 + 0x14),
                         (int)((ulonglong)(lVar6 + 0x14) >> 0x20),&local_28);
    if ((iVar3 != 0) ||
       (iVar3 = FUN_0025bf2a(*(undefined4 *)(param_1 + 0x40),&local_2c,(int)(lVar6 + 0x18),
                             (int)((ulonglong)(lVar6 + 0x18) >> 0x20),&local_2c), iVar3 != 0))
    goto LAB_0026415a;
    if (local_2c == 0) {
      local_2c = *(uint *)(param_1 + 0x80);
    }
    iVar3 = 0x65;
    if (((((local_2c <= DAT_00264178) || (local_28 < 0x20)) || (0x10000 < local_2c)) ||
        ((0x10000 < local_28 || ((local_2c & local_2c - 1) != 0)))) ||
       ((local_28 & local_28 - 1) != 0)) goto LAB_0026415a;
    iVar3 = FUN_002619f0(param_1,&local_2c,0xffffffff);
    *(uint *)(param_1 + 0x7c) = local_28;
  }
  uVar5 = *(uint *)(param_1 + 0x48);
  *(uint *)(param_1 + 0x48) = *(uint *)(param_1 + 0x7c) + uVar5;
  *(uint *)(param_1 + 0x4c) =
       *(int *)(param_1 + 0x4c) + (uint)CARRY4(*(uint *)(param_1 + 0x7c),uVar5);
LAB_0026415a:
  if (local_1c != *piVar1) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(iVar3);
  }
  return;
}


