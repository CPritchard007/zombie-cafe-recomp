/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c8774 Vector<CharacterData::ReplacementImageWithForm>::elementAt */

/* Vector<CharacterData::ReplacementImageWithForm>::elementAt(int) const */

void Vector<CharacterData::ReplacementImageWithForm>::elementAt(int param_1)

{
  int in_r1;
  int in_r2;
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)(*(int *)(in_r1 + 8) + in_r2 * 0x18);
  uVar2 = puVar1[1];
  uVar3 = puVar1[2];
  *(undefined4 *)param_1 = *puVar1;
  *(undefined4 *)(param_1 + 4) = uVar2;
  *(undefined4 *)(param_1 + 8) = uVar3;
  uVar2 = puVar1[4];
  uVar3 = puVar1[5];
  *(undefined4 *)(param_1 + 0xc) = puVar1[3];
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  return;
}


