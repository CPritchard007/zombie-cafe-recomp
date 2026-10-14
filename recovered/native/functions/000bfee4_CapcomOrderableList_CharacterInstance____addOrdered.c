/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bfee4 CapcomOrderableList<CharacterInstance*>::addOrdered */

/* CapcomOrderableList<CharacterInstance*>::addOrdered(CharacterInstance*) */

void CapcomOrderableList<CharacterInstance*>::addOrdered(CharacterInstance *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 in_r1;
  CharacterInstance *pCVar3;
  
  for (pCVar3 = param_1; *(undefined4 **)(pCVar3 + 8) != (undefined4 *)0x0;
      pCVar3 = *(CharacterInstance **)(pCVar3 + 8)) {
    if (param_1[0x18] == (CharacterInstance)0x1) {
      iVar1 = (**(code **)(param_1 + 0x20))(*(undefined4 *)(param_1 + 0x24),in_r1);
    }
    else {
      iVar1 = (**(code **)(param_1 + 0x1c))(in_r1,**(undefined4 **)(pCVar3 + 8));
    }
    if (iVar1 < 1) break;
  }
  iVar1 = *(int *)(pCVar3 + 8);
  puVar2 = (undefined4 *)operator_new(0xc);
  *puVar2 = in_r1;
  puVar2[1] = pCVar3;
  puVar2[2] = iVar1;
  *(undefined4 **)(pCVar3 + 8) = puVar2;
  if (iVar1 != 0) {
    *(undefined4 **)(iVar1 + 4) = puVar2;
  }
  if (pCVar3 == *(CharacterInstance **)(param_1 + 0xc)) {
    *(undefined4 **)(param_1 + 0xc) = puVar2;
  }
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  return;
}


