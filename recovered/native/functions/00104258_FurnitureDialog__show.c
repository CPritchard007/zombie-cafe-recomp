/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00104258 FurnitureDialog::show */

/* FurnitureDialog::show(bool) */

void FurnitureDialog::show(bool param_1)

{
  int *piVar1;
  BitmapTextElement *pBVar2;
  int *piVar3;
  int in_r1;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  float in_s0;
  undefined8 uVar11;
  String aSStack_20 [12];
  
  piVar1 = (int *)(uint)param_1;
  if (in_r1 != 0) {
    ZombieCafe::playEffect(piVar1[0x1a],in_s0);
  }
  iVar4 = 0;
  if (0 < piVar1[0x31]) {
    iVar4 = *(int *)piVar1[0x2e];
  }
  pcVar6 = *(code **)(*(int *)piVar1[0x26] + 0x2c);
  String::String(aSStack_20,(String *)(iVar4 + 8));
  iVar8 = piVar1[0x1a];
  iVar4 = SmDev();
  uVar7 = *(undefined4 *)((*(int *)(DAT_00104364 + iVar4 * 4 + 0x1042b6) + 0x136) * 4 + iVar8);
  iVar4 = piVar1[0x26];
  uVar5 = *(undefined4 *)(iVar4 + 0x10);
  uVar10 = *(undefined4 *)(iVar4 + 0xc);
  pBVar2 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar2,aSStack_20,uVar7,0xffffffff,0,0,0,uVar10,uVar5,9,0,0);
  piVar1[0x27] = (int)pBVar2;
  (*pcVar6)(iVar4,pBVar2);
  piVar9 = piVar1 + 0x26;
  String::~String(aSStack_20);
  uVar11 = (**(code **)(*(int *)*piVar9 + 0x14))((int *)*piVar9,piVar1[3] / 2,piVar1[4]);
  ImageButton::setScale((ImageButton *)*piVar9,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  piVar3 = (int *)piVar1[0x27];
  (**(code **)(*piVar3 + 0x18))
            (piVar3,*(undefined4 *)(*piVar9 + 0xc),*(undefined4 *)(*piVar9 + 0x10));
  *(undefined1 *)(piVar1[0x27] + 0x7f) = 0x12;
  (**(code **)(*piVar1 + 0x18))
            (piVar1,*(undefined4 *)(piVar1[0x1d] + 0xc),
             *(int *)(*piVar9 + 0x10) / 2 + *(int *)(piVar1[0x1d] + 0x10));
  *(undefined1 *)(piVar1 + 5) = 1;
  return;
}


