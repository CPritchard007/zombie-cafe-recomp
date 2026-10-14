/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00210ec8 RatingBar::setValue */

/* RatingBar::setValue(float) */

void RatingBar::setValue(float param_1)

{
  int in_r0;
  int iVar1;
  undefined4 in_r1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(in_r0 + 0x70);
  __mulsf3(in_r1,DAT_00210f04);
  iVar1 = __fixsfsi();
  *(int *)(in_r0 + 0x70) = iVar1;
  if (iVar3 < iVar1) {
    *(int *)(in_r0 + 0x74) = iVar3;
    uVar2 = 0xff00;
  }
  else {
    if (iVar3 <= iVar1) {
      return;
    }
    *(int *)(in_r0 + 0x74) = iVar3;
    uVar2 = 0xff0000;
  }
  *(undefined4 *)(in_r0 + 0x88) = uVar2;
  *(undefined4 *)(in_r0 + 0x8c) = DAT_00210f08;
  return;
}


