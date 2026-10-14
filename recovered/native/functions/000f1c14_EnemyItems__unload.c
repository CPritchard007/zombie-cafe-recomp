/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f1c14 EnemyItems::unload */

/* EnemyItems::unload() */

void EnemyItems::unload(void)

{
  int iVar1;
  Data *pDVar2;
  int *piVar3;
  
  piVar3 = *(int **)(DAT_000f1c54 + 0xf1c1c);
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    pDVar2 = (Data *)(iVar1 + *(int *)(iVar1 + -4) * 0x88);
    while (pDVar2 != (Data *)*piVar3) {
      Data::~Data(pDVar2 + -0x88);
      pDVar2 = pDVar2 + -0x88;
    }
    operator_delete__(pDVar2 + -8);
  }
  iVar1 = DAT_000f1c58;
  *piVar3 = 0;
  **(undefined2 **)(iVar1 + 0xf1c4e) = 0;
  return;
}


