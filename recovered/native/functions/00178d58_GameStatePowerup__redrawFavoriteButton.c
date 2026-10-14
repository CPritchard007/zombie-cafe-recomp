/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00178d58 GameStatePowerup::redrawFavoriteButton */

/* GameStatePowerup::redrawFavoriteButton(bool) */

undefined8 __thiscall GameStatePowerup::redrawFavoriteButton(GameStatePowerup *this,bool param_1)

{
  int *piVar1;
  PackedImage *this_00;
  CImage *pCVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  code *pcVar7;
  ImageButton *pIVar8;
  int iVar9;
  undefined8 uVar10;
  
  if (param_1) {
    pcVar6 = (char *)(*(int *)(*(int *)(this + 0x24) + 0x8c) + 0x34);
    *pcVar6 = *pcVar6 == '\0';
  }
  iVar3 = DAT_00178e68;
  piVar1 = *(int **)(*(int *)(this + 0x108) + 0x60);
  if (*(char *)(*(int *)(*(int *)(this + 0x24) + 0x8c) + 0x34) == '\0') {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      *(undefined4 *)(*(int *)(this + 0x108) + 0x60) = 0;
    }
    pIVar8 = *(ImageButton **)(this + 0x108);
    iVar9 = 0x11c;
    this_00 = *(PackedImage **)(*(int *)(this + 0xc) + iVar3);
  }
  else {
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
      *(undefined4 *)(*(int *)(this + 0x108) + 0x60) = 0;
    }
    pIVar8 = *(ImageButton **)(this + 0x108);
    this_00 = *(PackedImage **)(*(int *)(this + 0xc) + iVar3);
    iVar9 = DAT_00178e6c;
  }
  pCVar2 = (CImage *)PackedImage::getImage(this_00,iVar9,false);
  ImageButton::setImageAndResize(pIVar8,pCVar2);
  pIVar8 = *(ImageButton **)(this + 0x108);
  iVar3 = SmDev();
  iVar9 = DAT_00178e70 + 0x178dea;
  __mulsf3(*(undefined4 *)(iVar9 + iVar3 * 4 + 0x58),*(undefined4 *)(this + DAT_00178e74));
  iVar3 = SmDev();
  uVar10 = __mulsf3(*(undefined4 *)(iVar9 + iVar3 * 4 + 0x58),*(undefined4 *)(this + DAT_00178e74));
  ImageButton::setScale(pIVar8,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  piVar1 = *(int **)(this + 0x108);
  pcVar7 = *(code **)(*piVar1 + 0x14);
  iVar3 = SmDev();
  uVar4 = __floatsisf(*(undefined4 *)(iVar9 + iVar3 * 4 + 0x70));
  __mulsf3(uVar4,*(undefined4 *)(this + DAT_00178e74));
  uVar4 = __fixsfsi();
  iVar3 = SmDev();
  uVar5 = __floatsisf(*(undefined4 *)(DAT_00178e78 + iVar3 * 4 + 0x178e48));
  __mulsf3(uVar5,*(undefined4 *)(this + DAT_00178e74));
  uVar5 = __fixsfsi();
  (*pcVar7)(piVar1,uVar4,uVar5);
  (**(code **)(**(int **)(this + 0x108) + 0x20))(*(int **)(this + 0x108),1);
  return CONCAT44(pcVar7,this);
}


