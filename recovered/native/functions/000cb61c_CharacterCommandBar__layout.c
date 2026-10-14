/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cb61c CharacterCommandBar::layout */

/* CharacterCommandBar::layout() */

void __thiscall CharacterCommandBar::layout(CharacterCommandBar *this)

{
  short sVar1;
  short sVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  code *pcVar8;
  CharacterCommandBar *pCVar9;
  int *piVar10;
  int iVar11;
  
  iVar11 = DAT_000cb774 + 0xcb62c;
  if (this[0xb8] == (CharacterCommandBar)0x2) {
    (**(code **)(*(int *)this + 0x14))
              (this,(int)*(short *)(*(int *)(this + 0x60) + 0x16),
               (int)*(short *)(*(int *)(this + 0x60) + 0x10) - *(int *)(this + 0x10));
  }
  pCVar9 = this + 0xb0;
  piVar10 = *(int **)(iVar11 + DAT_000cb778);
  piVar3 = *(int **)pCVar9;
  (**(code **)(*piVar3 + 0x14))(piVar3,*piVar10,*(int *)(this + 0x10) - piVar3[4]);
  sVar1 = ScreenElement::localToParentCoords(*(ScreenElement **)pCVar9,0,0);
  (**(code **)(**(int **)(this + 0x6c) + 0x14))(*(int **)(this + 0x6c),*piVar10,(int)sVar1);
  sVar2 = ScreenElement::localToParentCoords(*(ScreenElement **)(this + 0xbc),0,0);
  iVar7 = *(int *)(*(int *)pCVar9 + 0x10);
  piVar3 = *(int **)(this + 0x6c);
  pcVar8 = *(code **)(*piVar3 + 0x18);
  uVar4 = __floatsisf(*(undefined4 *)(*(int *)pCVar9 + 0xc));
  iVar5 = SmDev();
  __addsf3(uVar4,*(undefined4 *)(iVar5 * 4 + *(int *)(iVar11 + DAT_000cb77c)));
  uVar4 = __fixsfsi();
  (*pcVar8)(piVar3,uVar4,(int)sVar1 - ((int)sVar2 + (iVar7 >> 1)));
  layoutButtons(this);
  piVar3 = *(int **)(this + 0x70);
  pcVar8 = *(code **)(*piVar3 + 0x14);
  uVar4 = __floatsisf(*piVar10 * 2 + *(int *)(*(int *)pCVar9 + 0xc));
  iVar5 = SmDev();
  __addsf3(uVar4,*(undefined4 *)(iVar5 * 4 + *(int *)(iVar11 + DAT_000cb780)));
  uVar4 = __fixsfsi();
  uVar6 = __floatsisf(*(int *)(this + 0x10) - (*(int *)(*(int *)pCVar9 + 0x10) >> 1));
  iVar5 = SmDev();
  __addsf3(uVar6,*(undefined4 *)(iVar5 * 4 + *(int *)(iVar11 + DAT_000cb784)));
  uVar6 = __fixsfsi();
  (*pcVar8)(piVar3,uVar4,uVar6);
  piVar3 = *(int **)(this + 0x70);
  pcVar8 = *(code **)(*piVar3 + 0x18);
  uVar4 = __floatsisf((int)*(short *)(this + 0x84) - piVar3[1]);
  iVar5 = SmDev();
  __addsf3(uVar4,*(undefined4 *)(iVar5 * 4 + *(int *)(iVar11 + DAT_000cb788)));
  uVar4 = __fixsfsi();
  (*pcVar8)(piVar3,uVar4,0);
  return;
}


