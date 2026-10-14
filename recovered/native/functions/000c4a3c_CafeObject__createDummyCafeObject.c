/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c4a3c CafeObject::createDummyCafeObject */

/* CafeObject::createDummyCafeObject() */

void CafeObject::createDummyCafeObject(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)operator_new(0x34);
  piVar1[4] = (int)(piVar1 + 2);
  piVar1[3] = 0;
  piVar1[6] = 0;
  piVar1[5] = 0;
  *(undefined2 *)(piVar1 + 9) = 0;
  *(undefined1 *)((int)piVar1 + 0x2e) = 0;
  *(undefined1 *)(piVar1 + 7) = 1;
  iVar2 = DAT_000c4a74;
  piVar1[0xc] = 0;
  *(undefined2 *)(piVar1 + 0xb) = 0;
  iVar2 = *(int *)(iVar2 + 0xc4a66);
  piVar1[10] = 0;
  piVar1[1] = 0;
  *piVar1 = iVar2 + 8;
  piVar1[8] = 0;
  return;
}


