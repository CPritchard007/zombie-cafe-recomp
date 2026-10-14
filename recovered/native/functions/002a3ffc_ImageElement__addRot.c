/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a3ffc ImageElement::addRot */

/* ImageElement::addRot(float) */

void ImageElement::addRot(float param_1)

{
  int in_r0;
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 in_r1;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(in_r0 + 0x8c);
  uVar1 = __addsf3(in_r1,*puVar4);
  *puVar4 = uVar1;
  iVar2 = __aeabi_fcmplt(uVar1,0);
  if (iVar2 == 0) {
    uVar3 = __addsf3(**(undefined4 **)(DAT_002a4058 + 0x2a401c));
    iVar2 = __aeabi_fcmpge(uVar1,uVar3);
    if (iVar2 == 0) goto LAB_002a4050;
    uVar1 = __subsf3(uVar1,uVar3);
  }
  else {
    uVar3 = __addsf3(**(undefined4 **)(DAT_002a4058 + 0x2a401c));
    uVar1 = __addsf3(uVar1,uVar3);
  }
  *puVar4 = uVar1;
LAB_002a4050:
  *(undefined4 *)(in_r0 + 0x88) = 1;
  return;
}


