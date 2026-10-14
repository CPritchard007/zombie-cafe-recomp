/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bfe1c CapcomOrderableList<Furniture*>::addOrdered */

/* CapcomOrderableList<Furniture*>::addOrdered(Furniture*) */

void CapcomOrderableList<Furniture*>::addOrdered(Furniture *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_r1;
  Furniture *pFVar3;
  
  for (pFVar3 = param_1; *(undefined4 **)(pFVar3 + 8) != (undefined4 *)0x0;
      pFVar3 = *(Furniture **)(pFVar3 + 8)) {
    if (param_1[0x18] == (Furniture)0x1) {
      iVar1 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x24),in_r1);
    }
    else {
      iVar1 = (**(code **)(param_1 + 0x1c))(in_r1,**(undefined4 **)(pFVar3 + 8));
    }
    if (iVar1 < 1) break;
  }
  iVar1 = *(int *)(pFVar3 + 8);
  puVar2 = (undefined4 *)operator_new(0xc);
  *puVar2 = in_r1;
  puVar2[1] = pFVar3;
  puVar2[2] = iVar1;
  *(undefined4 **)(pFVar3 + 8) = puVar2;
  if (iVar1 != 0) {
    *(undefined4 **)(iVar1 + 4) = puVar2;
  }
  if (pFVar3 == *(Furniture **)(param_1 + 0xc)) {
    *(undefined4 **)(param_1 + 0xc) = puVar2;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}


