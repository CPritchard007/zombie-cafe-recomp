/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00130020 Vector<CapcomDate>::addElement */

/* Vector<CapcomDate>::addElement(CapcomDate) */

undefined8
Vector<CapcomDate>::addElement(Vector<CapcomDate> *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  iVar2 = *(int *)(param_1 + 4) + 2;
  local_10 = param_2;
  local_c = param_3;
  if (*(int *)param_1 < iVar2) {
    iVar1 = *(int *)param_1 * 2;
    if (iVar1 < iVar2) {
      iVar1 = iVar2;
    }
    resize(param_1,iVar1,-1);
  }
  iVar2 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = iVar2 + 1;
  memcpy((void *)(*(int *)(param_1 + 8) + (iVar2 + 1) * 8),&local_10,7);
  return CONCAT44(local_c,local_10);
}


