/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00194010 GameStateDoJo::redrawFavoriteButton */

/* GameStateDoJo::redrawFavoriteButton(bool) */

undefined8 GameStateDoJo::redrawFavoriteButton(bool param_1)

{
  uint uVar1;
  int *piVar2;
  PackedImage *this;
  CImage *pCVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  int *piVar8;
  ImageButton *pIVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined8 uVar12;
  
  iVar4 = DAT_00194100;
  uVar1 = (uint)param_1;
  piVar8 = (int *)(uVar1 + 0xdc);
  piVar2 = *(int **)(*piVar8 + 0x60);
  if (*(char *)(*(int *)(*(int *)(uVar1 + 0x2c) + 0x8c) + 0x34) == '\0') {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
      *(undefined4 *)(*piVar8 + 0x60) = 0;
    }
    pIVar9 = *(ImageButton **)(uVar1 + 0xdc);
    iVar10 = 0x11c;
    this = *(PackedImage **)(*(int *)(uVar1 + 0xc) + iVar4);
  }
  else {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
      *(undefined4 *)(*piVar8 + 0x60) = 0;
    }
    pIVar9 = *(ImageButton **)(uVar1 + 0xdc);
    this = *(PackedImage **)(*(int *)(uVar1 + 0xc) + iVar4);
    iVar10 = DAT_00194104;
  }
  pCVar3 = (CImage *)PackedImage::getImage(this,iVar10,false);
  puVar11 = (undefined4 *)(uVar1 + 0xdc);
  ImageButton::setImageAndResize(pIVar9,pCVar3);
  pIVar9 = (ImageButton *)*puVar11;
  iVar4 = SmDev();
  iVar10 = DAT_00194108 + 0x194088;
  __mulsf3(*(undefined4 *)(iVar10 + iVar4 * 4 + 0x5c),*(undefined4 *)(uVar1 + 0x24));
  iVar4 = SmDev();
  uVar12 = __mulsf3(*(undefined4 *)(iVar10 + iVar4 * 4 + 0x5c),*(undefined4 *)(uVar1 + 0x24));
  ImageButton::setScale(pIVar9,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  piVar2 = (int *)*puVar11;
  pcVar7 = *(code **)(*piVar2 + 0x14);
  iVar4 = SmDev();
  uVar5 = __floatsisf(*(undefined4 *)(iVar10 + iVar4 * 4 + 0x74));
  __mulsf3(uVar5,*(undefined4 *)(uVar1 + 0x20));
  uVar5 = __fixsfsi();
  iVar4 = SmDev();
  uVar6 = __floatsisf(*(undefined4 *)(DAT_0019410c + iVar4 * 4 + 0x1940e4));
  __mulsf3(uVar6,*(undefined4 *)(uVar1 + 0x24));
  uVar6 = __fixsfsi();
  (*pcVar7)(piVar2,uVar5,uVar6);
  (**(code **)(*(int *)*puVar11 + 0x20))((int *)*puVar11,1);
  return CONCAT44(pcVar7,uVar1);
}


