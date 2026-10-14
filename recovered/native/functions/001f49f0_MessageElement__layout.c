/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f49f0 MessageElement::layout */

/* MessageElement::layout() */

void __thiscall MessageElement::layout(MessageElement *this)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ScreenElement *this_00;
  code *pcVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  
  iVar12 = DAT_001f4c04;
  (**(code **)(*(int *)this + 0x18))
            (this,*(int *)(*(int *)(this + 0x84) + 0x10) >> 0x10,
             (int)(short)*(int *)(*(int *)(this + 0x84) + 0x10));
  iVar12 = iVar12 + 0x1f4a12;
  iVar9 = *(int *)(*(int *)(this + 0x74) + 0x10);
  iVar1 = SmDev();
  uVar10 = iVar9 >> (2 - (iVar1 == 0) & 0xff);
  (**(code **)(**(int **)(this + 0x60) + 0x14))
            (*(int **)(this + 0x60),0,*(undefined4 *)(this + 0x10));
  (**(code **)(**(int **)(this + 100) + 0x14))
            (*(int **)(this + 100),*(undefined4 *)(this + 0xc),*(undefined4 *)(this + 0x10));
  piVar11 = *(int **)(this + 0x74);
  uVar7 = *(uint *)(*(int *)(this + 0x84) + 0x10);
  uVar2 = __floatsisf(uVar10);
  iVar1 = SmDev();
  iVar9 = *(int *)(iVar12 + DAT_001f4c08);
  __addsf3(uVar2,*(undefined4 *)(iVar1 * 4 + iVar9));
  uVar3 = __fixsfsi();
  uVar6 = uVar7 - (uVar10 & 0xffff);
  (**(code **)(*piVar11 + 0x14))
            (piVar11,(int)(uVar6 & 0xffff | ((uVar7 >> 0x10) - (uVar3 & 0xffff)) * 0x10000) >> 0x10,
             (int)(short)uVar6);
  piVar11 = *(int **)(this + 0x78);
  uVar6 = *(uint *)(*(int *)(this + 0x84) + 0x10);
  iVar1 = SmDev();
  uVar2 = __addsf3(uVar2,*(undefined4 *)(iVar1 * 4 + iVar9));
  iVar1 = SmDev();
  __addsf3(uVar2,*(undefined4 *)(iVar1 * 4 + *(int *)(iVar12 + DAT_001f4c0c)));
  uVar3 = __fixsfsi();
  uVar7 = uVar6 - (uVar10 & 0xffff);
  (**(code **)(*piVar11 + 0x14))
            (piVar11,(int)(uVar7 & 0xffff | ((uVar6 >> 0x10) - (uVar3 & 0xffff)) * 0x10000) >> 0x10,
             (int)(short)uVar7);
  iVar1 = ScreenElement::localToGlobalCoords(*(ScreenElement **)(this + 0x74),uVar10 * -0x10000);
  iVar9 = ScreenElement::localToGlobalCoords
                    (*(ScreenElement **)(this + 0x60),
                     (*(int *)(*(ScreenElement **)(this + 0x60) + 0xc) * 7 >> 3) << 0x10);
  this_00 = *(ScreenElement **)(this + 100);
  piVar11 = *(int **)(this + 0x7c);
  iVar4 = SmDev();
  uVar2 = __floatsisf(iVar1 >> 0x10);
  __addsf3(uVar2,*(undefined4 *)(iVar4 * 4 + *(int *)(iVar12 + DAT_001f4c10)));
  iVar4 = __fixsfsi();
  uVar2 = __floatsisf((int)*(short *)(*(int *)(this + 0x84) + 0x10));
  iVar5 = SmDev();
  __addsf3(uVar2,*(undefined4 *)(iVar5 * 4 + *(int *)(iVar12 + DAT_001f4c14)));
  uVar3 = __fixsfsi();
  iVar4 = ScreenElement::globalToLocalCoords(this_00,uVar3 & 0xffff | iVar4 << 0x10);
  (**(code **)(*piVar11 + 0x14))(piVar11,iVar4 >> 0x10,(int)(short)iVar4);
  piVar11 = *(int **)(this + 0x7c);
  pcVar8 = *(code **)(*piVar11 + 0x18);
  iVar4 = SmDev();
  uVar2 = __floatsisf((iVar1 >> 0x10) - (iVar9 >> 0x10));
  __addsf3(uVar2,*(undefined4 *)(iVar4 * 4 + *(int *)(iVar12 + DAT_001f4c18)));
  uVar2 = __fixsfsi();
  (*pcVar8)(piVar11,uVar2,*(int *)(*(int *)(this + 100) + 0x10) + 0x1e);
  iVar12 = *(int *)(this + 0x74);
  (**(code **)(**(int **)(this + 0x80) + 0x14))
            (*(int **)(this + 0x80),*(undefined4 *)(iVar12 + 4),
             (*(int *)(iVar12 + 8) - *(int *)(iVar12 + 0x10)) -
             *(int *)(*(int *)(this + 0x68) + 0x10) / 2);
  iVar12 = *(int *)(this + 0x80);
  (**(code **)(**(int **)(this + 0x68) + 0x14))
            (*(int **)(this + 0x68),*(int *)(iVar12 + 4) - *(int *)(iVar12 + 0xc),
             *(undefined4 *)(iVar12 + 8));
  iVar12 = *(int *)(this + 0x80);
  (**(code **)(**(int **)(this + 0x6c) + 0x14))
            (*(int **)(this + 0x6c),*(int *)(iVar12 + 4) - *(int *)(iVar12 + 0xc),
             *(undefined4 *)(iVar12 + 8));
  iVar12 = *(int *)(this + 0x80);
  (**(code **)(**(int **)(this + 0x70) + 0x14))
            (*(int **)(this + 0x70),*(int *)(iVar12 + 4) - *(int *)(iVar12 + 0xc),
             *(undefined4 *)(iVar12 + 8));
  return;
}


