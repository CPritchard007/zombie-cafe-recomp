/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c8520 GatyaEftCharacterInstance::TickAnimation */

/* GatyaEftCharacterInstance::TickAnimation(int) */

void __thiscall
GatyaEftCharacterInstance::TickAnimation(GatyaEftCharacterInstance *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  GatyaEftCharacterInstance *pGVar8;
  undefined4 uVar9;
  float fVar10;
  
  iVar1 = CapcomApp::getInstance();
  uVar9 = *(undefined4 *)(iVar1 + 0x40);
  iVar1 = CapcomApp::getInstance();
  uVar7 = *(undefined4 *)(iVar1 + 0x44);
  uVar2 = __floatsisf(param_1);
  uVar2 = __divsf3(uVar2,DAT_000c8720);
  uVar2 = __divsf3(uVar2,DAT_000c8724);
  iVar1 = *(int *)(this + 0xdc);
  if (iVar1 == 0x2000) {
    if (*(int *)(this + 0xe8) == 0) {
      uVar9 = __mulsf3(uVar7,DAT_000c872c);
      pGVar8 = this + 0xfc;
      uVar5 = *(undefined4 *)pGVar8;
      uVar4 = __subsf3(uVar9,uVar5);
      uVar6 = __mulsf3(uVar4,0x3e800000);
      uVar6 = __addsf3(uVar5,uVar6);
      *(undefined4 *)pGVar8 = uVar6;
      uVar7 = __mulsf3(uVar7,DAT_000c8730);
      iVar1 = __aeabi_fcmplt(uVar4 & 0x7fffffff,uVar7);
      if (iVar1 == 0) goto LAB_000c86b4;
      *(undefined4 *)pGVar8 = uVar9;
    }
    else {
LAB_000c85f6:
      uVar7 = __mulsf3(uVar7,DAT_000c872c);
      *(undefined4 *)(this + 0xfc) = uVar7;
    }
    *(undefined4 *)(this + 0xe4) = 1;
    iVar1 = 0x84;
LAB_000c8666:
    iVar1 = iVar1 << 6;
  }
  else if (iVar1 < 0x2001) {
    if (iVar1 != 0) {
      if (iVar1 != 0x1000) goto LAB_000c86b4;
      if (*(int *)(this + 0xe8) != 0) goto LAB_000c85f6;
      uVar6 = *(undefined4 *)(this + 0xfc);
      uVar9 = __mulsf3(uVar7,0x3f000000);
      uVar4 = __subsf3(uVar9,uVar6);
      uVar9 = __mulsf3(uVar4,0x3e000000);
      uVar9 = __addsf3(uVar6,uVar9);
      *(undefined4 *)(this + 0xfc) = uVar9;
      uVar7 = __mulsf3(uVar7,DAT_000c8728);
      iVar3 = __aeabi_fcmplt(uVar4 & 0x7fffffff,uVar7);
      iVar1 = 0x80;
      if (iVar3 == 0) goto LAB_000c86b4;
      goto LAB_000c8666;
    }
    if (*(int *)(this + 0xe0) < 1) goto LAB_000c86b4;
    CharacterInstance::groan((CharacterInstance *)this);
    iVar1 = 0x1000;
  }
  else {
    if (iVar1 == 0x2100) {
      if (*(int *)(this + 0xe0) != 2) goto LAB_000c86b4;
      iVar1 = 0xc0;
      goto LAB_000c8666;
    }
    if (iVar1 != 0x3000) goto LAB_000c86b4;
    uVar7 = __mulsf3(uVar2,DAT_000c8734);
    uVar7 = __mulsf3(uVar7,uVar9);
    pGVar8 = this + 0xf4;
    uVar7 = __addsf3(*(undefined4 *)pGVar8,uVar7);
    *(undefined4 *)pGVar8 = uVar7;
    uVar7 = __mulsf3(uVar9,DAT_000c8738);
    iVar1 = __aeabi_fcmplt(*(undefined4 *)(this + 0xec),uVar7);
    if (iVar1 == 0) goto LAB_000c86b4;
    *(undefined4 *)pGVar8 = 0;
    *(undefined4 *)(this + 0xe4) = 2;
    iVar1 = 0x4000;
  }
  *(int *)(this + 0xdc) = iVar1;
LAB_000c86b4:
  uVar7 = __mulsf3(uVar2,*(undefined4 *)(this + 0xf4));
  uVar7 = __addsf3(uVar7,*(undefined4 *)(this + 0xec));
  *(undefined4 *)(this + 0xec) = uVar7;
  uVar9 = __mulsf3(uVar2,*(undefined4 *)(this + 0xf8));
  uVar9 = __addsf3(uVar9,*(undefined4 *)(this + 0xf0));
  *(undefined4 *)(this + 0xf0) = uVar9;
  uVar2 = __mulsf3(uVar2,*(undefined4 *)(this + 0x100));
  uVar2 = __addsf3(*(undefined4 *)(this + 0xfc),uVar2);
  *(undefined4 *)(this + 0xfc) = uVar2;
  uVar4 = __fixsfsi(uVar9);
  iVar1 = __fixsfsi(uVar7);
  fVar10 = (float)(**(code **)(*(int *)this + 0xc))(this,iVar1 << 0x10 | uVar4 & 0xffff);
  CharacterInstance::setScale((CharacterInstance *)this,fVar10);
  return;
}


