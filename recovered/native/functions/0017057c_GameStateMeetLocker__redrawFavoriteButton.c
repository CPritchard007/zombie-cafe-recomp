/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0017057c GameStateMeetLocker::redrawFavoriteButton */

/* GameStateMeetLocker::redrawFavoriteButton(bool) */

void __thiscall GameStateMeetLocker::redrawFavoriteButton(GameStateMeetLocker *this,bool param_1)

{
  int iVar1;
  int *piVar2;
  PackedImage *this_00;
  CImage *pCVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char *pcVar7;
  int iVar8;
  ImageButton *this_01;
  int iVar9;
  undefined8 uVar10;
  
  if (param_1) {
    pcVar7 = (char *)(*(int *)(*(int *)(this + 0x2c) + 0x8c) + 0x34);
    *pcVar7 = *pcVar7 == '\0';
  }
  iVar8 = DAT_0017067c;
  iVar1 = DAT_00170678;
  piVar2 = *(int **)(*(int *)(this + DAT_00170678) + 0x60);
  if (*(char *)(*(int *)(*(int *)(this + 0x2c) + 0x8c) + 0x34) == '\0') {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
      *(undefined4 *)(*(int *)(this + iVar1) + 0x60) = 0;
    }
    this_01 = *(ImageButton **)(this + iVar1);
    this_00 = *(PackedImage **)(*(int *)(this + 0xc) + iVar8);
    iVar8 = 0x11c;
  }
  else {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
      *(undefined4 *)(*(int *)(this + iVar1) + 0x60) = 0;
    }
    this_01 = *(ImageButton **)(this + iVar1);
    this_00 = *(PackedImage **)(*(int *)(this + 0xc) + iVar8);
    iVar8 = DAT_00170680;
  }
  pCVar3 = (CImage *)PackedImage::getImage(this_00,iVar8,false);
  ImageButton::setImageAndResize(this_01,pCVar3);
  uVar10 = __mulsf3(*(undefined4 *)(this + 0x24),DAT_00170684);
  ImageButton::setScale
            (*(ImageButton **)(this + iVar1),(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  piVar2 = *(int **)(this + iVar1);
  iVar9 = *(int *)(this + 0x54);
  uVar6 = *(undefined4 *)(this + 0x24);
  iVar8 = *piVar2;
  uVar4 = __floatsisf(*(int *)(iVar9 + 0xc) / 2 + *(int *)(iVar9 + 4));
  uVar5 = __mulsf3(uVar6,DAT_00170688);
  __addsf3(uVar4,uVar5);
  uVar4 = __fixsfsi();
  uVar5 = __floatsisf(*(int *)(iVar9 + 8) - *(int *)(iVar9 + 0x10) / 2);
  uVar6 = __mulsf3(uVar6,DAT_0017068c);
  __addsf3(uVar5,uVar6);
  uVar5 = __fixsfsi();
  (**(code **)(iVar8 + 0x14))(piVar2,uVar4,uVar5);
  (**(code **)(**(int **)(this + iVar1) + 0x20))(*(int **)(this + iVar1),1);
  return;
}


