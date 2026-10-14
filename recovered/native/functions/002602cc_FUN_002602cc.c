/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002602cc FUN_002602cc */

void FUN_002602cc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *__s;
  undefined4 uVar4;
  longlong lVar5;
  
  piVar3 = *(int **)(param_1 + 0x10);
  if (*(char *)((int)piVar3 + 5) != '\x02') {
    __s = (int *)piVar3[0x11];
    if (*__s == 0) {
      if ((*(char *)((int)piVar3 + 5) == '\x04') || (*(char *)((int)piVar3 + 0x15) != '\0')) {
        memset(__s,0,0x28);
        *__s = DAT_00260370 + 0x260354;
      }
      else {
        iVar1 = (**(code **)(*piVar3 + 0x18))(*piVar3,0,__s,DAT_00260374,0);
        if (iVar1 != 0) {
          return;
        }
      }
    }
    lVar5 = __muldi3(piVar3[0xd],0,piVar3[0x20] + 4,piVar3[0x20] + 4 >> 0x1f);
    uVar2 = (undefined4)((ulonglong)lVar5 >> 0x20);
    uVar4 = *(undefined4 *)(param_1 + 4);
    iVar1 = FUN_0025bf4e(piVar3[0x11],uVar2,(int)lVar5,uVar2,*(undefined4 *)(param_1 + 0x14));
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_0025ace6(piVar3[0x11],uVar4,piVar3[0x20],(int)((ulonglong)(lVar5 + 4) >> 0x20),
                         lVar5 + 4);
    if (iVar1 != 0) {
      return;
    }
  }
  piVar3[0xd] = piVar3[0xd] + 1;
  FUN_0026029a(piVar3,*(undefined4 *)(param_1 + 0x14));
  return;
}


