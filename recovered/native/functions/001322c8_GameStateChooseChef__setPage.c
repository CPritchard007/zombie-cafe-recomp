/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001322c8 GameStateChooseChef::setPage */

/* GameStateChooseChef::setPage(unsigned char) */

void __thiscall GameStateChooseChef::setPage(GameStateChooseChef *this,uchar param_1)

{
  CharacterData *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ChefHeadButton *this_00;
  int extraout_r1;
  int iVar6;
  code *pcVar7;
  int iVar8;
  GameStateChooseChef *pGVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uVar13;
  int iVar14;
  int local_3c;
  
  this[0x58] = (GameStateChooseChef)param_1;
  iVar6 = *(int *)(*(int *)(this + 0xc) + 0x10);
  iVar6 = 9 - ((((int)(short)iVar6 >> 0x1f) - (iVar6 >> 0x1f)) +
              (uint)((uint)(iVar6 >> 0x10) <= (uint)(int)(short)iVar6));
  iVar8 = (uint)param_1 * iVar6;
  pGVar9 = this + 0x60;
  iVar14 = 0;
  do {
    if (*(int *)pGVar9 != 0) {
      (**(code **)(**(int **)(this + 0x14) + 0x34))();
      if (*(int **)pGVar9 != (int *)0x0) {
        (**(code **)(**(int **)pGVar9 + 4))();
      }
    }
    iVar10 = iVar14 + iVar8;
    if ((iVar10 < *(int *)(*(CapcomOrderableList<CharacterData*> **)(this + 0xb0) + 0x14)) &&
       (iVar14 < iVar6)) {
      pCVar1 = (CharacterData *)
               CapcomOrderableList<CharacterData*>::get
                         (*(CapcomOrderableList<CharacterData*> **)(this + 0xb0),iVar10);
      for (local_3c = 0; local_3c <= *(int *)(this + 0xa8); local_3c = local_3c + 1) {
        if (*(CharacterData **)(local_3c * 4 + *(int *)(this + 0xac)) == pCVar1) goto LAB_00132366;
      }
      local_3c = -1;
LAB_00132366:
      piVar11 = *(int **)(this + 0x14);
      pcVar7 = *(code **)(*piVar11 + 0x2c);
      piVar12 = (int *)(DAT_00132448 + 0x132374);
      iVar2 = SmDev();
      __aeabi_idivmod(iVar14,3);
      iVar2 = __fixsfsi(*(undefined4 *)((extraout_r1 * 6 + iVar2) * 4 + *piVar12));
      iVar3 = SmDev();
      iVar4 = __divsi3(iVar14,3);
      uVar13 = *(undefined4 *)((iVar4 * 6 + iVar3) * 4 + *(int *)(DAT_0013244c + 0x1323b0));
      iVar3 = SmDev();
      uVar5 = __floatsisf(*(undefined4 *)(iVar3 * 4 + *(int *)(DAT_00132450 + 0x1323c2)));
      __addsf3(uVar13,uVar5);
      iVar3 = __fixsfsi();
      this_00 = (ChefHeadButton *)operator_new(0x80);
      ChefHeadButton::ChefHeadButton(this_00,pCVar1,iVar10,local_3c,iVar2,iVar3);
      *(ChefHeadButton **)pGVar9 = this_00;
      (*pcVar7)(piVar11,this_00);
    }
    else {
      *(undefined4 *)pGVar9 = 0;
    }
    iVar14 = iVar14 + 1;
    pGVar9 = pGVar9 + 4;
    if (iVar14 == 9) {
      (**(code **)(**(int **)(this + 0x34) + 0x20))
                (*(int **)(this + 0x34),(uint)((iVar8 >> 0x1f) - iVar8) >> 0x1f);
      (**(code **)(**(int **)(this + 0x38) + 0x20))
                (*(int **)(this + 0x38),iVar8 + iVar6 < *(int *)(*(int *)(this + 0xb0) + 0x14));
      return;
    }
  } while( true );
}


