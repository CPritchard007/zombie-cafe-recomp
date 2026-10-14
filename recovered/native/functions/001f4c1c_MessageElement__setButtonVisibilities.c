/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f4c1c MessageElement::setButtonVisibilities */

/* MessageElement::setButtonVisibilities() */

void MessageElement::setButtonVisibilities(void)

{
  int in_r0;
  int iVar1;
  int iVar2;
  bool bVar3;
  
  if (*(char *)(in_r0 + 0x14) != '\0') {
    iVar2 = *(int *)(in_r0 + 0x7c);
    bVar3 = true;
    if (*(int *)(iVar2 + 0x70) != 0) {
      iVar1 = (uint)*(byte *)(iVar2 + 0x86) * (*(byte *)(iVar2 + 0x85) + 1);
      iVar2 = *(int *)(*(int *)(iVar2 + 0x70) + 4) + 1;
      bVar3 = iVar1 - iVar2 != 0 && iVar2 <= iVar1;
    }
    (**(code **)(**(int **)(in_r0 + 0x74) + 0x20))(*(int **)(in_r0 + 0x74),bVar3);
    (**(code **)(**(int **)(in_r0 + 0x78) + 0x20))(*(int **)(in_r0 + 0x78),bVar3 ^ 1);
  }
  return;
}


