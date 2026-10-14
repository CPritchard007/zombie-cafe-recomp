/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f723e NoticeDialog::show */

/* NoticeDialog::show() */

void NoticeDialog::show(void)

{
  int in_r0;
  code *pcVar1;
  int *piVar2;
  String *pSVar3;
  float in_s0;
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  ZombieCafe::playEffect(*(int *)(in_r0 + 0x60),in_s0);
  pSVar3 = (String *)0x0;
  if (0 < *(int *)(in_r0 + 0x84)) {
    pSVar3 = (String *)**(undefined4 **)(in_r0 + 0x78);
  }
  piVar2 = *(int **)(in_r0 + 0x6c);
  pcVar1 = *(code **)(*piVar2 + 0x44);
  String::String(aSStack_28,pSVar3);
  (*pcVar1)(piVar2,aSStack_28);
  String::~String(aSStack_28);
  piVar2 = *(int **)(in_r0 + 0x70);
  pcVar1 = *(code **)(*piVar2 + 0x44);
  String::String(aSStack_20,pSVar3 + 8);
  (*pcVar1)(piVar2,aSStack_20);
  String::~String(aSStack_20);
  setVisibleOkButton(SUB41(in_r0,0));
  *(undefined1 *)(in_r0 + 0x14) = 1;
  return;
}


