/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a42c0 GatyaEftImageElement::PlayEffectKeyAnimation */

/* GatyaEftImageElement::PlayEffectKeyAnimation(float) */

undefined4 __thiscall
GatyaEftImageElement::PlayEffectKeyAnimation(GatyaEftImageElement *this,float param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_r1;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  int iVar18;
  uint uVar19;
  undefined4 *puVar20;
  GatyaEftImageElement *pGVar21;
  uint uVar22;
  int iVar23;
  undefined4 *puVar24;
  undefined4 uVar25;
  float extraout_s0;
  float fVar26;
  undefined4 extraout_s0_00;
  undefined8 uVar27;
  undefined4 extraout_s1;
  
  iVar18 = *(int *)(*(int *)(this + 0x9c) + 0x10);
  uVar1 = __floatsisf((iVar18 >> 0x10) - (iVar18 >> 0x1f) >> 1);
  uVar2 = __floatsisf((int)(short)iVar18 / 2);
  uVar3 = __addsf3(*(undefined4 *)(this + 0xa4),in_r1);
  *(undefined4 *)(this + 0xa4) = uVar3;
  pGVar21 = this + 0xa0;
  while( true ) {
    while( true ) {
      iVar23 = *(int *)pGVar21;
      iVar18 = *(int *)(*(int *)(this + 0x98) + 4) + 1;
      if ((iVar18 <= iVar23) || (iVar18 <= iVar23 + 1)) break;
      iVar16 = *(int *)(*(int *)(this + 0x98) + 8);
      puVar20 = (undefined4 *)(iVar16 + (iVar23 + 1) * 0x28);
      uVar3 = *puVar20;
      uVar17 = *(undefined4 *)(this + 0xa4);
      iVar18 = __aeabi_fcmplt(uVar17,uVar3);
      uVar27 = CONCAT44(extraout_s1,extraout_s0_00);
      if (iVar18 != 0) {
        puVar24 = (undefined4 *)(iVar16 + iVar23 * 0x28);
        uVar5 = *puVar24;
        uVar9 = puVar24[2];
        uVar13 = puVar24[3];
        uVar6 = puVar24[4];
        uVar10 = puVar24[5];
        iVar18 = puVar24[8];
        iVar23 = puVar24[7];
        uVar11 = puVar20[2];
        uVar22 = puVar24[6];
        uVar25 = puVar24[9];
        uVar7 = puVar20[4];
        uVar14 = puVar20[3];
        iVar16 = puVar20[1];
        uVar12 = puVar20[5];
        uVar19 = puVar20[6];
        uVar17 = __subsf3(uVar17,uVar5);
        uVar3 = __subsf3(uVar3,uVar5);
        uVar3 = __divsf3(uVar17,uVar3);
        fVar26 = extraout_s0;
        if (iVar16 << 0x1f < 0) {
          iVar8 = *(int *)this;
          uVar17 = __subsf3(uVar11,uVar9);
          uVar17 = __mulsf3(uVar17,uVar3);
          uVar17 = __addsf3(uVar9,uVar17);
          __addsf3(uVar1,uVar17);
          uVar1 = __fixsfsi();
          uVar17 = __subsf3(uVar14,uVar13);
          uVar17 = __mulsf3(uVar17,uVar3);
          uVar17 = __addsf3(uVar13,uVar17);
          __subsf3(uVar2,uVar17);
          uVar2 = __fixsfsi();
          fVar26 = (float)(**(code **)(iVar8 + 0x14))(this,uVar1,uVar2);
        }
        if (iVar16 << 0x1e < 0) {
          uVar1 = __subsf3(uVar7,uVar6);
          uVar1 = __mulsf3(uVar1,uVar3);
          __addsf3(uVar6,uVar1);
          uVar1 = __subsf3(uVar12,uVar10);
          uVar1 = __mulsf3(uVar1,uVar3);
          uVar27 = __addsf3(uVar10,uVar1);
          fVar26 = (float)ImageElement::setScale
                                    ((ImageElement *)this,(float)uVar27,
                                     (float)((ulonglong)uVar27 >> 0x20));
        }
        if (iVar16 << 0x1d < 0) {
          iVar8 = (int)(uVar22 & 0xff0000) >> 0x10;
          iVar15 = (int)(uVar22 & 0xff00) >> 8;
          uVar1 = __floatsisf(uVar22 >> 0x18);
          uVar2 = __floatsisf((uVar19 >> 0x18) - (uVar22 >> 0x18));
          uVar2 = __mulsf3(uVar2,uVar3);
          __addsf3(uVar1,uVar2);
          iVar16 = __fixsfsi();
          uVar1 = __floatsisf(iVar8);
          uVar2 = __floatsisf(((int)(uVar19 & 0xff0000) >> 0x10) - iVar8);
          uVar2 = __mulsf3(uVar2,uVar3);
          __addsf3(uVar1,uVar2);
          iVar8 = __fixsfsi();
          uVar1 = __floatsisf(iVar15);
          uVar2 = __floatsisf(((int)(uVar19 & 0xff00) >> 8) - iVar15);
          uVar2 = __mulsf3(uVar2,uVar3);
          __addsf3(uVar1,uVar2);
          iVar15 = __fixsfsi();
          uVar1 = __floatsisf(uVar22 & 0xff);
          uVar2 = __floatsisf((uVar19 & 0xff) - (uVar22 & 0xff));
          uVar2 = __mulsf3(uVar2,uVar3);
          __addsf3(uVar1,uVar2);
          iVar4 = __fixsfsi();
          fVar26 = (float)ImageElement::setColor
                                    ((ImageElement *)this,
                                     iVar16 * 0x1000000 + iVar8 * 0x10000 + iVar15 * 0x100 + iVar4);
        }
        if (iVar23 != -1) {
          fVar26 = (float)ZombieCafe::playEffect(*(int *)(this + 0x9c),fVar26);
        }
        if (iVar18 != -1) {
          ZombieCafe::playEffect(*(int *)(this + 0x9c),fVar26);
        }
        *(undefined4 *)(this + 0xac) = uVar25;
        return 0;
      }
      uVar3 = puVar20[3];
      iVar16 = puVar20[1];
      uVar19 = puVar20[6];
      iVar23 = puVar20[7];
      iVar18 = puVar20[8];
      uVar17 = puVar20[9];
      if (iVar16 << 0x1f < 0) {
        __addsf3(uVar1,puVar20[2]);
        uVar5 = __fixsfsi();
        __subsf3(uVar2,uVar3);
        uVar3 = __fixsfsi();
        uVar27 = (**(code **)(*(int *)this + 0x14))(this,uVar5,uVar3);
      }
      fVar26 = (float)uVar27;
      if (iVar16 << 0x1e < 0) {
        fVar26 = (float)ImageElement::setScale
                                  ((ImageElement *)this,fVar26,(float)((ulonglong)uVar27 >> 0x20));
      }
      if (iVar16 << 0x1d < 0) {
        fVar26 = (float)ImageElement::setColor((ImageElement *)this,uVar19);
      }
      if (iVar23 != -1) {
        fVar26 = (float)ZombieCafe::playEffect(*(int *)(this + 0x9c),fVar26);
      }
      if (iVar18 != -1) {
        ZombieCafe::playEffect(*(int *)(this + 0x9c),fVar26);
      }
      *(undefined4 *)(this + 0xac) = uVar17;
      *(int *)pGVar21 = *(int *)pGVar21 + 1;
    }
    if (this[0xa8] == (GatyaEftImageElement)0x0) break;
    *(undefined4 *)pGVar21 = 0;
    *(undefined4 *)(this + 0xa4) = 0;
  }
  return 1;
}


