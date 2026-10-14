/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cee50 CharacterDetails::clearButtons */

/* CharacterDetails::clearButtons() */

void CharacterDetails::clearButtons(void)

{
  int *in_r0;
  undefined4 *puVar1;
  int iVar2;
  
  for (iVar2 = 0; iVar2 < in_r0[0x4b] + 1; iVar2 = iVar2 + 1) {
    puVar1 = *(undefined4 **)(iVar2 * 4 + in_r0[0x4c]);
    (**(code **)(*in_r0 + 0x34))(in_r0,*puVar1);
    operator_delete(puVar1);
  }
  in_r0[0x4b] = -1;
  return;
}


