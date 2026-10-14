/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001ddfac Vector<HudElement::NewIndicator>::addElement */

/* Vector<HudElement::NewIndicator>::addElement(HudElement::NewIndicator) */

undefined8
Vector<HudElement::NewIndicator>::addElement
          (Vector<HudElement::NewIndicator> *param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)(param_1 + 4) + 2;
  if (*(int *)param_1 < iVar2) {
    iVar1 = *(int *)param_1 * 2;
    if (iVar1 < iVar2) {
      iVar1 = iVar2;
    }
    resize(param_1,iVar1,-1);
  }
  iVar2 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = iVar2 + 1;
  puVar3 = (undefined4 *)(*(int *)(param_1 + 8) + (iVar2 + 1) * 0xc);
  *puVar3 = param_2;
  puVar3[1] = param_3;
  puVar3[2] = param_4;
  return CONCAT44(param_2,param_1);
}


