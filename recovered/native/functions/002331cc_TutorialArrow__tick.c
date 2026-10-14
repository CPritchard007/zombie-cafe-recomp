/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002331cc TutorialArrow::tick */

/* TutorialArrow::tick(long, long, float) */

undefined8 __thiscall
TutorialArrow::tick(TutorialArrow *this,long param_1,long param_2,float param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  ScreenElement *this_00;
  int extraout_r1;
  int extraout_r1_00;
  short sVar5;
  int iVar6;
  undefined4 in_r3;
  short *psVar7;
  code *pcVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  
  psVar7 = *(short **)(DAT_00233330 + 0x2331da);
  iVar6 = param_1 + *(int *)(this + 0x70);
  *(int *)(this + 0x70) = iVar6;
  if (*psVar7 < iVar6) {
    *(int *)(this + 0x70) = iVar6 - *psVar7;
  }
  iVar6 = __divsi3(*(int *)(this + 0x70) * 0xb4);
  if (iVar6 < 0) {
    __aeabi_idivmod(-iVar6,0x168);
    iVar6 = -*(int *)(extraout_r1_00 * 4 + DAT_00233338 + 0x23321e);
  }
  else {
    __aeabi_idivmod(iVar6,0x168);
    iVar6 = *(int *)(extraout_r1 * 4 + DAT_00233334 + 0x23320a);
  }
  piVar9 = *(int **)(this + 0x6c);
  iVar2 = __divsi3(piVar9[4],3);
  iVar6 = iVar2 * iVar6 >> 0x10;
  *(int *)(this + 0x74) = iVar6;
  if (this[0x68] == (TutorialArrow)0x0) {
    iVar6 = *(int *)(this + 0x10) - iVar6;
  }
  (**(code **)(*piVar9 + 0x14))(piVar9,piVar9[3] / 2,iVar6);
  piVar9 = *(int **)(this + 0x60);
  if (piVar9 == (int *)0x0) {
    this_00 = *(ScreenElement **)(this + 100);
    if (this_00 == (ScreenElement *)0x0) goto LAB_0023332c;
    this[0x14] = (TutorialArrow)0x1;
    uVar10 = (uint)(byte)this[0x68];
    if (uVar10 != 0) {
      uVar10 = *(uint *)(this_00 + 0x10);
    }
    uVar10 = ScreenElement::localToGlobalCoords
                       (this_00,(*(int *)(this_00 + 0xc) >> 1) << 0x10 | uVar10 & 0xffff);
    uVar4 = uVar10 + *(uint *)(this + 0x78);
    uVar10 = uVar4 & 0xffff | ((uVar10 >> 0x10) + (*(uint *)(this + 0x78) >> 0x10)) * 0x10000;
    sVar5 = (short)uVar4;
    pcVar8 = *(code **)(*(int *)this + 0x14);
  }
  else {
    this[0x14] = (TutorialArrow)0x1;
    uVar10 = piVar9[1];
    if (this[0x68] == (TutorialArrow)0x0) {
      iVar6 = (**(code **)(*piVar9 + 0x14))();
      iVar2 = *(int *)(this + 0x60);
      if (iVar6 == 1) {
        uVar1 = *(ushort *)(*(int *)(iVar2 + 0x38) + (uint)*(byte *)(iVar2 + 0x34) * 4 + 4);
      }
      else {
        uVar1 = *(ushort *)(iVar2 + 0x20);
      }
      uVar10 = ((uVar10 >> 0x10) + (*(uint *)(this + 0x78) >> 0x10)) * 0x10000 |
               (uVar10 - uVar1 & 0xffff) + *(uint *)(this + 0x78) & 0xffff;
    }
    uVar3 = __floatsisf((int)uVar10 >> 0x10);
    __mulsf3(uVar3,in_r3);
    uVar4 = __fixsfsi();
    uVar3 = __floatsisf((int)(short)uVar10);
    __mulsf3(uVar3,in_r3);
    uVar10 = __fixsfsi();
    uVar11 = (uVar10 & 0xffff) + param_2;
    uVar10 = uVar11 & 0xffff | ((uVar4 & 0xffff) + ((uint)param_2 >> 0x10)) * 0x10000;
    sVar5 = (short)uVar11;
    pcVar8 = *(code **)(*(int *)this + 0x14);
  }
  (*pcVar8)(this,(int)uVar10 >> 0x10,(int)sVar5);
LAB_0023332c:
  return CONCAT44(param_2,this);
}


