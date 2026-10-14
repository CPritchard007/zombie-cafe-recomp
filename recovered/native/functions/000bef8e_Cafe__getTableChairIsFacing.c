/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bef8e Cafe::getTableChairIsFacing */

/* Cafe::getTableChairIsFacing(int) */

Furniture * __thiscall Cafe::getTableChairIsFacing(Cafe *this,int param_1)

{
  Furniture *pFVar1;
  Furniture *pFVar2;
  
  pFVar1 = *(Furniture **)(*(int *)(param_1 * 4 + *(int *)this) + 0x14);
  pFVar2 = pFVar1;
  if ((pFVar1 != (Furniture *)0x0) &&
     (pFVar2 = (Furniture *)0x0, *(char *)(*(int *)(pFVar1 + 0x38) + 0x44) == '\x04')) {
    pFVar2 = (Furniture *)getTableChairIsFacing(this,pFVar1);
  }
  return pFVar2;
}


