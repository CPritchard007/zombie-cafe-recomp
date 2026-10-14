/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0025e360 FUN_0025e360 */

void FUN_0025e360(int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint __n;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar2 = *(int *)(param_1 + 0x38);
  iVar3 = *(int *)(*(int *)(param_1 + 0x34) + 0x24);
  bVar1 = *(byte *)(param_1 + 5);
  iVar6 = 0;
  puVar4 = (undefined1 *)(*(int *)(param_1 + 0x40) + param_2 * 2);
  iVar5 = iVar3;
  while (iVar6 = iVar6 + -1, -1 < iVar6 + param_2) {
    __n = (uint)*(ushort *)(param_4 + param_2 * 2 + iVar6 * 2);
    iVar5 = iVar5 - __n;
    puVar4[-2] = (char)((uint)iVar5 >> 8);
    puVar4[-1] = (char)iVar5;
    memcpy((void *)(iVar2 + iVar5),*(void **)(param_3 + param_2 * 4 + iVar6 * 4),__n);
    puVar4 = puVar4 + -2;
  }
  iVar2 = iVar2 + (uint)bVar1;
  *(char *)(iVar2 + 3) = (char)((uint)param_2 >> 8);
  *(char *)(iVar2 + 4) = (char)param_2;
  *(char *)(iVar2 + 6) = (char)iVar5;
  *(char *)(iVar2 + 5) = (char)((uint)iVar5 >> 8);
  *(short *)(param_1 + 0xe) =
       (*(short *)(param_1 + 0xe) - (short)iVar3) + (short)param_2 * -2 + (short)iVar5;
  *(short *)(param_1 + 0x10) = (short)param_2;
  return;
}


