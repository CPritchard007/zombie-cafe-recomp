/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0022bbc8 CapcomOrderableList<FurnitureData*>::addOrdered */

/* CapcomOrderableList<FurnitureData*>::addOrdered(FurnitureData*) */

void CapcomOrderableList<FurnitureData*>::addOrdered(FurnitureData *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_r1;
  FurnitureData *pFVar3;
  
  for (pFVar3 = param_1; *(undefined4 **)(pFVar3 + 8) != (undefined4 *)0x0;
      pFVar3 = *(FurnitureData **)(pFVar3 + 8)) {
    if (param_1[0x18] == (FurnitureData)0x1) {
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
  if (pFVar3 == *(FurnitureData **)(param_1 + 0xc)) {
    *(undefined4 **)(param_1 + 0xc) = puVar2;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}


