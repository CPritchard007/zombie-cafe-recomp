/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a6cbc ComponentAnimation::draw */

/* ComponentAnimation::draw(CapcomGraphics*, int, int) */

void __thiscall
ComponentAnimation::draw(ComponentAnimation *this,CapcomGraphics *param_1,int param_2,int param_3)

{
  byte bVar1;
  uchar uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  CImage *pCVar8;
  float extraout_s0;
  float extraout_s1;
  
  piVar4 = (int *)(**(int **)(this + 0x20) + (uint)(byte)this[9] * 0x14);
  bVar1 = *(byte *)((int)piVar4 + 0x12);
  iVar5 = *piVar4;
  for (iVar7 = 0; iVar7 < (int)(uint)bVar1; iVar7 = iVar7 + 1) {
    psVar6 = (short *)(iVar5 + iVar7 * 0xc);
    pCVar8 = *(CImage **)(psVar6 + 2);
    uVar2 = __floatsisf(param_2 + *psVar6);
    iVar3 = __floatsisf(param_3 + psVar6[1]);
    CapcomGraphics::drawImage(param_1,pCVar8,extraout_s0,extraout_s1,uVar2,iVar3);
  }
  return;
}


