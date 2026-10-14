/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f1e0c EnemyLayouts::unload */

/* EnemyLayouts::unload() */

void EnemyLayouts::unload(void)

{
  int iVar1;
  int *piVar2;
  String *pSVar3;
  
  piVar2 = *(int **)(DAT_000f1e4c + 0xf1e14);
  iVar1 = *piVar2;
  if (iVar1 != 0) {
    pSVar3 = (String *)(iVar1 + *(int *)(iVar1 + -4) * 0x14);
    while (pSVar3 != (String *)*piVar2) {
      String::~String(pSVar3 + -0x14);
      pSVar3 = pSVar3 + -0x14;
    }
    operator_delete__(pSVar3 + -8);
  }
  iVar1 = DAT_000f1e50;
  *piVar2 = 0;
  **(undefined2 **)(iVar1 + 0xf1e46) = 0;
  return;
}


