/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0018988c GameStateRoulette::paintFurnitureSub */

/* GameStateRoulette::paintFurnitureSub(int, CapcomGraphics*) */

void __thiscall
GameStateRoulette::paintFurnitureSub(GameStateRoulette *this,int param_1,CapcomGraphics *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int extraout_r1;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  CImage *this_00;
  int iVar12;
  int iVar13;
  
  iVar13 = (param_1 + 0x288) * 4;
  iVar8 = *(int *)(this + iVar13);
  this_00 = *(CImage **)
             (*(short *)((int)*(int **)(iVar8 + 0x38) + (*(byte *)(iVar8 + 0x34) + 0x1c) * 2 + 4) *
              4 + **(int **)(iVar8 + 0x38));
  iVar1 = CImage::getHeight(this_00);
  iVar2 = CImage::getWidth(this_00);
  iVar9 = *(int *)(iVar8 + 4);
  uVar3 = __floatsisf(iVar9 >> 0x10);
  iVar8 = SmDev();
  iVar10 = DAT_00189a98 + 0x1898e6;
  uVar4 = __mulsf3(*(undefined4 *)(iVar10 + iVar8 * 4 + 0x10),0x3f000000);
  uVar4 = __subsf3(0,uVar4);
  iVar8 = __aeabi_fcmplt(uVar3,uVar4);
  if (iVar8 == 0) {
    uVar4 = __floatsisf((int)*(short *)(*(int *)(this + 0xc) + 0x12));
    iVar8 = SmDev();
    uVar5 = __mulsf3(*(undefined4 *)(iVar10 + iVar8 * 4 + 0x10),0x3f000000);
    uVar4 = __addsf3(uVar4,uVar5);
    iVar8 = __aeabi_fcmpgt(uVar3,uVar4);
    if (iVar8 == 0) {
      iVar8 = SmDev();
      iVar12 = DAT_00189ab0 + 0x189a2e;
      uVar3 = __floatsisf(iVar2);
      __mulsf3(uVar3,*(undefined4 *)(iVar12 + iVar8 * 4 + 0x20));
      iVar8 = __fixsfsi();
      uVar3 = __floatsisf(iVar1);
      iVar10 = SmDev();
      __mulsf3(uVar3,*(undefined4 *)(iVar12 + iVar10 * 4 + 0x20));
      iVar10 = __fixsfsi();
      uVar6 = (int)(short)iVar9 + (iVar1 - iVar10) / 2;
      iVar1 = (int)(short)((short)((uint)iVar9 >> 0x10) + (short)((iVar2 - iVar8) / 2));
      if (this[0x9f0] == (GameStateRoulette)0x0) {
        (**(code **)(**(int **)(this + iVar13) + 0xc))
                  (*(int **)(this + iVar13),iVar1 << 0x10 | uVar6 & 0xffff);
        piVar11 = *(int **)(this + iVar13);
      }
      else {
        iVar2 = SmDev();
        iVar8 = DAT_00189a9c + 0x189946;
        iVar2 = __fixsfsi(*(undefined4 *)(iVar2 * 4 + iVar8));
        iVar2 = iVar2 - *(short *)(*(int *)(this + iVar13) + 6);
        uVar7 = iVar2 >> 0x1f;
        uVar4 = __floatsisf(iVar2 + uVar7 ^ uVar7);
        iVar2 = SmDev();
        uVar4 = __divsf3(uVar4,*(undefined4 *)(iVar2 * 4 + iVar8));
        uVar4 = __mulsf3(uVar4,DAT_00189aa0);
        iVar2 = __aeabi_fcmpgt(uVar4,DAT_00189aa0);
        if (iVar2 != 0) {
          uVar4 = DAT_00189aa0;
        }
        iVar2 = __fixsfsi(uVar4);
        if (iVar2 < 0) {
          iVar2 = -iVar2;
          iVar8 = DAT_00189aa8 + 0x189998;
        }
        else {
          iVar8 = DAT_00189aa4 + 0x189990;
        }
        __aeabi_idivmod(iVar2,0x168);
        uVar4 = __floatsisf(*(undefined4 *)(iVar8 + extraout_r1 * 4 + 0x38));
        uVar4 = __mulsf3(uVar4,0x37800000);
        uVar4 = __mulsf3(uVar3,uVar4);
        uVar3 = __subsf3(uVar3,uVar4);
        iVar2 = SmDev();
        iVar8 = (param_1 + 0x288) * 4;
        piVar11 = *(int **)(this + iVar8);
        __mulsf3(uVar3,*(undefined4 *)(DAT_00189aac + iVar2 * 4 + 0x189a34));
        iVar2 = __fixsfsi();
        (**(code **)(*piVar11 + 0xc))(piVar11,iVar2 + uVar6 & 0xffff | iVar1 << 0x10);
        piVar11 = *(int **)(this + iVar8);
      }
      (**(code **)(*piVar11 + 8))(piVar11,param_2);
    }
  }
  return;
}


