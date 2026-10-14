/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cb52c CharacterCommandBar::layoutButtons */

/* CharacterCommandBar::layoutButtons() */

void __thiscall CharacterCommandBar::layoutButtons(CharacterCommandBar *this)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  code *pcVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  CharacterCommandBar *pCVar12;
  int local_2c;
  int local_28;
  
  iVar3 = SmDev();
  iVar6 = *(int *)(this + 0xc);
  piVar8 = *(int **)(DAT_000cb614 + 0xcb544);
  iVar10 = *(int *)(DAT_000cb618 + 0xcb546);
  iVar5 = *(int *)(**(int **)(this + 0x80) + 0xc);
  if (iVar3 - 3U < 2) {
    iVar11 = *piVar8;
    iVar3 = SmDev();
    iVar3 = (iVar6 - iVar5) - *(int *)(iVar3 * 4 + iVar11);
  }
  else {
    iVar11 = *piVar8;
    iVar3 = SmDev();
    iVar3 = (iVar6 - ((int)(((uint)(iVar5 >> 0x1f) >> 0x1e) + iVar5) >> 2)) -
            *(int *)(iVar3 * 4 + iVar11);
  }
  uVar4 = __floatsisf(iVar3);
  iVar3 = SmDev();
  __addsf3(uVar4,*(undefined4 *)(iVar10 + iVar3 * 4));
  uVar2 = __fixsfsi();
  *(undefined2 *)(this + 0x84) = uVar2;
  local_2c = *(int *)(this + 0x78);
  pCVar12 = this + 0x84;
  local_28 = local_2c << 2;
  for (; -1 < local_2c; local_2c = local_2c + -1) {
    if ((*(undefined4 **)(*(int *)(this + 0x7c) + local_28) != (undefined4 *)0x0) &&
       (piVar9 = (int *)**(undefined4 **)(*(int *)(this + 0x7c) + local_28), (char)piVar9[5] != '\0'
       )) {
      iVar5 = *piVar8;
      pcVar7 = *(code **)(*piVar9 + 0x14);
      sVar1 = *(short *)pCVar12;
      iVar3 = SmDev();
      iVar3 = *(int *)(iVar5 + iVar3 * 4);
      if (*(int *)(this + 0x10) - piVar9[4] < iVar3) {
        iVar3 = *(int *)(this + 0x10) - piVar9[4];
      }
      (*pcVar7)(piVar9,(int)sVar1,iVar3);
      SmDev();
      *(short *)pCVar12 = (*(short *)pCVar12 - (short)piVar9[3]) - (short)(piVar9[3] >> 4);
    }
    local_28 = local_28 + -4;
  }
  return;
}


