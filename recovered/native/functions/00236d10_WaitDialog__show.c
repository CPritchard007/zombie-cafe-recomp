/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00236d10 WaitDialog::show */

/* WaitDialog::show() */

undefined8 WaitDialog::show(void)

{
  int in_r0;
  undefined4 in_r1;
  String *pSVar1;
  code *pcVar2;
  int *piVar3;
  int iStack_18;
  undefined4 uStack_14;
  
  pSVar1 = (String *)0x0;
  if (0 < *(int *)(in_r0 + 0x84)) {
    pSVar1 = (String *)**(undefined4 **)(in_r0 + 0x78);
  }
  piVar3 = *(int **)(in_r0 + 0x70);
  pcVar2 = *(code **)(*piVar3 + 0x44);
  iStack_18 = in_r0;
  uStack_14 = in_r1;
  String::String((String *)&iStack_18,pSVar1);
  (*pcVar2)(piVar3,(String *)&iStack_18);
  String::~String((String *)&iStack_18);
  *(undefined1 *)(in_r0 + 0x14) = 1;
  return CONCAT44(uStack_14,iStack_18);
}


