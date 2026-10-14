/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029dc48 FUN_0029dc48 */

void FUN_0029dc48(void)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = (undefined4 *)malloc(0x20);
  piVar3 = (int *)(DAT_0029dc68 + 0x29dc56);
  iVar2 = *piVar3;
  puVar1[7] = iVar2;
  *piVar3 = iVar2 + 1;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[6] = 0;
  return;
}


