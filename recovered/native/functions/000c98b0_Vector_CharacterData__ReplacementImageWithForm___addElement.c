/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c98b0 Vector<CharacterData::ReplacementImageWithForm>::addElement */

/* Vector<CharacterData::ReplacementImageWithForm>::addElement(CharacterData::ReplacementImageWithForm)
    */

void Vector<CharacterData::ReplacementImageWithForm>::addElement
               (Vector<CharacterData::ReplacementImageWithForm> *param_1,undefined4 param_2,
               undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = *(int *)(param_1 + 4) + 2;
  local_c = param_2;
  local_8 = param_3;
  local_4 = param_4;
  if (*(int *)param_1 < iVar2) {
    iVar1 = *(int *)param_1 * 2;
    if (iVar1 < iVar2) {
      iVar1 = iVar2;
    }
    resize(param_1,iVar1,-1);
  }
  iVar2 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = iVar2 + 1;
  memcpy((void *)(*(int *)(param_1 + 8) + (iVar2 + 1) * 0x18),&local_c,0x15);
  return;
}


