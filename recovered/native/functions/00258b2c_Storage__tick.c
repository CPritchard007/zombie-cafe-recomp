/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00258b2c Storage::tick */

/* Storage::tick(long) */

void __thiscall Storage::tick(Storage *this,long param_1)

{
  undefined4 uVar1;
  ScreenElement *pSVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uchar uVar6;
  ushort uVar7;
  FurnitureData *pFVar8;
  int iVar9;
  long lVar10;
  undefined4 *puVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  undefined4 uVar15;
  ZombieCafe *this_00;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float fVar16;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  undefined4 extraout_s1_04;
  undefined4 extraout_s1_05;
  undefined8 uVar17;
  Storage *local_28;
  
  this[0x66] = (Storage)0x0;
  ScreenElement::tick((long)this);
  if (this[0x6c] != (Storage)0x0) {
    uVar1 = __floatsisf(param_1);
    uVar1 = __addsf3(*(undefined4 *)(this + 0x68),uVar1);
    *(undefined4 *)(this + 0x68) = uVar1;
  }
  if (this[0xe8] != (Storage)0x0) {
    *(undefined4 *)(this + 0xe4) = 0;
    this[0xe8] = (Storage)0x0;
  }
  if (((byte)this[0x8c] - 1 < 2) && (this[0x14] != (Storage)0x0)) {
    iVar4 = *(int *)(this + 0x70);
    if ((*(int *)(iVar4 + DAT_00258e64) != 0) &&
       ((*(int *)(iVar4 + 0x4b8) == 0 && (this[100] == (Storage)0x0)))) {
      this[0xe8] = (Storage)0x1;
    }
    iVar14 = DAT_00258e68;
    if (((((*(char *)(iVar4 + DAT_00258e68) == '\0') &&
          (iVar9 = *(int *)(iVar4 + 0x4b8), iVar9 != 0)) && (*(int *)(iVar4 + DAT_00258e64) == 0))
        && ((iVar4 = ScreenElement::contains((ScreenElement *)this,iVar9 >> 0x10,(int)(short)iVar9),
            iVar4 != 0 &&
            (iVar4 = ZCImageButton::contains
                               (*(ZCImageButton **)(this + 0xb4),
                                *(int *)(*(int *)(this + 0x70) + 0x4b8) >> 0x10,
                                (int)(short)*(int *)(*(int *)(this + 0x70) + 0x4b8),extraout_s0,
                                extraout_s1), iVar4 == 0)))) &&
       (iVar4 = ZCImageButton::contains
                          (*(ZCImageButton **)(this + 0xb8),
                           *(int *)(*(int *)(this + 0x70) + 0x4b8) >> 0x10,
                           (int)(short)*(int *)(*(int *)(this + 0x70) + 0x4b8),extraout_s0_00,
                           extraout_s1_00), iVar4 == 0)) {
      *(undefined4 *)(this + 0xe4) = 0;
      iVar9 = *(int *)(*(int *)(this + 0xc4) + 0x38);
      for (iVar4 = 0; iVar4 < iVar9; iVar4 = iVar4 + 1) {
        pSVar2 = (ScreenElement *)ScreenElement::getChildAt(*(ScreenElement **)(this + 0xc4),iVar4);
        iVar3 = ScreenElement::contains
                          (pSVar2,*(int *)(*(int *)(this + 0x70) + 0x4b8) >> 0x10,
                           (int)(short)*(int *)(*(int *)(this + 0x70) + 0x4b8));
        if (iVar3 != 0) {
          pFVar8 = *(FurnitureData **)(pSVar2 + 0x6c);
          *(FurnitureData **)(this + 0xe4) = pFVar8;
          iVar4 = specialFurniture(this,pFVar8);
          if (iVar4 == 0) {
            this[100] = (Storage)0x0;
          }
          break;
        }
      }
      *(undefined4 *)(this + 0xcc) = 0;
    }
    this_00 = *(ZombieCafe **)(this + 0x70);
    iVar4 = ZombieCafe::unhandledPressOrLongEvent(this_00);
    if ((iVar4 == 0) ||
       (iVar4 = *(int *)(this_00 + DAT_00258e64),
       iVar4 = ScreenElement::contains((ScreenElement *)this,iVar4 >> 0x10,(int)(short)iVar4),
       iVar4 == 0)) {
      if ((*(char *)(*(int *)(this + 0x70) + iVar14) == '\0') &&
         ((iVar4 = *(int *)(*(int *)(this + 0x70) + 0x4b8), iVar4 != 0 &&
          (iVar4 = ScreenElement::contains((ScreenElement *)this,iVar4 >> 0x10,(int)(short)iVar4),
          iVar4 != 0)))) {
        iVar4 = *(int *)(this + 0x70);
        if ((int)**(short **)(DAT_002590d0 + 0x258e90) < *(int *)(iVar4 + DAT_002590d4)) {
          uVar1 = __floatsisf((*(int *)(iVar4 + 0x4b8) >> 0x10) -
                              (*(int *)(iVar4 + DAT_002590d8) >> 0x10));
          *(undefined4 *)(this + 0xcc) = uVar1;
        }
        *(undefined1 *)(iVar4 + iVar14) = 1;
      }
    }
    else {
      uVar1 = 0x3f800000;
      iVar4 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0xb4),
                         *(int *)(*(int *)(this + 0x70) + DAT_00258e64) >> 0x10,
                         (int)(short)*(int *)(*(int *)(this + 0x70) + DAT_00258e64),extraout_s0_01,
                         extraout_s1_01);
      if (iVar4 == 0) {
        uVar1 = 0x3f800000;
        iVar4 = ZCImageButton::contains
                          (*(ZCImageButton **)(this + 0xb8),
                           *(int *)(*(int *)(this + 0x70) + DAT_00258e64) >> 0x10,
                           (int)(short)*(int *)(*(int *)(this + 0x70) + DAT_00258e64),extraout_s0_02
                           ,extraout_s1_02);
        if (iVar4 != 0) {
          piVar13 = *(int **)(this + 0xc4);
          uVar7 = *(ushort *)(piVar13 + 2);
          iVar4 = (uint)*(ushort *)(piVar13 + 1) - (*(int *)(*(int *)(this + 200) + 0xc) * 7 >> 3);
          goto LAB_00258d24;
        }
        iVar4 = ZCImageButton::contains
                          (*(ZCImageButton **)(this + 0x94),
                           *(int *)(*(int *)(this + 0x70) + DAT_00258e64) >> 0x10,
                           (int)(short)*(int *)(*(int *)(this + 0x70) + DAT_00258e64),extraout_s0_03
                           ,extraout_s1_03);
        uVar17 = CONCAT44(extraout_s1_04,extraout_s0_04);
        if (iVar4 == 0) {
          iVar4 = 0;
          local_28 = this;
          do {
            iVar9 = ZCImageButton::contains
                              (*(ZCImageButton **)(local_28 + 0x98),
                               *(int *)(*(int *)(this + 0x70) + DAT_00258e64) >> 0x10,
                               (int)(short)*(int *)(*(int *)(this + 0x70) + DAT_00258e64),
                               (float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
            uVar17 = CONCAT44(extraout_s1_05,extraout_s0_05);
            if (iVar9 != 0) {
              ZombieCafe::playEffect(*(int *)(this + 0x70),extraout_s0_05);
              uVar17 = setCurrentTab(this,(uchar)iVar4);
              *(undefined1 *)(*(int *)(this + 0x70) + iVar14) = 1;
              this[0xe8] = (Storage)0x1;
            }
            iVar4 = iVar4 + 1;
            local_28 = local_28 + 4;
          } while (iVar4 != 7);
        }
        else {
          ZombieCafe::playEffect(*(int *)(this + 0x70),extraout_s0_04);
          close(this);
          *(undefined1 *)(*(int *)(this + 0x70) + iVar14) = 1;
          this[0xe8] = (Storage)0x1;
        }
      }
      else {
        piVar13 = *(int **)(this + 0xc4);
        uVar7 = *(ushort *)(piVar13 + 2);
        iVar4 = (*(int *)(*(int *)(this + 200) + 0xc) * 7 >> 3) + (uint)*(ushort *)(piVar13 + 1);
LAB_00258d24:
        fVar16 = (float)(**(code **)(*piVar13 + 0x14))
                                  (piVar13,(int)((uint)uVar7 | iVar4 << 0x10) >> 0x10,
                                   (int)(short)uVar7,*(code **)(*piVar13 + 0x14),uVar1);
        ZombieCafe::playEffect(*(int *)(this + 0x70),fVar16);
        *(undefined1 *)(*(int *)(this + 0x70) + iVar14) = 1;
      }
      iVar4 = ZombieCafe::unhandledPressOrLongEvent(*(ZombieCafe **)(this + 0x70));
      if (iVar4 != 0) {
        iVar4 = *(int *)(*(int *)(this + 0xc4) + 0x38);
        for (iVar9 = 0; iVar9 < iVar4; iVar9 = iVar9 + 1) {
          pSVar2 = (ScreenElement *)
                   ScreenElement::getChildAt(*(ScreenElement **)(this + 0xc4),iVar9);
          iVar3 = ScreenElement::contains
                            (pSVar2,*(int *)(*(int *)(this + 0x70) + DAT_00258e64) >> 0x10,
                             (int)(short)*(int *)(*(int *)(this + 0x70) + DAT_00258e64));
          if (iVar3 != 0) {
            *(undefined4 *)(this + 0xe4) = *(undefined4 *)(pSVar2 + 0x6c);
            ZombieCafe::playEffect(*(int *)(this + 0x70),extraout_s0_06);
            iVar4 = specialFurniture(this,*(FurnitureData **)(this + 0xe4));
            if (iVar4 == 0) {
              this[0xe8] = (Storage)0x1;
            }
            *(undefined1 *)(*(int *)(this + 0x70) + iVar14) = 1;
            this[0x66] = (Storage)0x1;
            break;
          }
        }
      }
      if (this[100] == (Storage)0x0) {
        this[0xe8] = (Storage)0x1;
      }
      *(undefined1 *)(*(int *)(this + 0x70) + iVar14) = 1;
    }
    piVar13 = *(int **)(this + 0xc4);
    uVar1 = __floatsisf(piVar13[1]);
    __addsf3(uVar1,*(undefined4 *)(this + 0xcc));
    uVar1 = __fixsfsi();
    iVar4 = DAT_002590dc;
    (**(code **)(*piVar13 + 0x14))(piVar13,uVar1,piVar13[2]);
    puVar11 = *(undefined4 **)(iVar4 + 0x258ee4);
    uVar1 = __floatsisf(param_1);
    uVar1 = __mulsf3(uVar1,*puVar11);
    uVar15 = *(undefined4 *)(this + 0xcc);
    iVar4 = __aeabi_fcmplt(uVar1,0x3f800000);
    if (iVar4 == 0) {
      uVar1 = 0x3f800000;
    }
    uVar1 = __subsf3(0x3f800000,uVar1);
    iVar4 = __mulsf3(uVar15,uVar1);
    *(int *)(this + 0xcc) = iVar4;
    iVar14 = __aeabi_fcmpge(iVar4,0);
    if (iVar14 == 0) {
      iVar4 = iVar4 + -0x80000000;
    }
    iVar4 = __aeabi_fcmplt(iVar4,**(undefined4 **)(DAT_002590e0 + 0x258f36));
    if (iVar4 != 0) {
      *(undefined4 *)(this + 0xcc) = 0;
    }
    piVar13 = *(int **)(this + 0xc4);
    uVar12 = *(int *)(*(int *)(this + 200) + 0xc) - piVar13[3];
    uVar12 = uVar12 & (int)(uVar12 - 1 | uVar12) >> 0x1f;
    uVar5 = uVar12;
    if (piVar13[1] < (int)uVar12) {
LAB_00258f6e:
      (**(code **)(*piVar13 + 0x14))(piVar13,uVar5,piVar13[2]);
      *(undefined4 *)(this + 0xcc) = 0;
    }
    else if (0 < piVar13[1]) {
      uVar5 = 0;
      goto LAB_00258f6e;
    }
    (**(code **)(**(int **)(this + 0xb4) + 0x20))
              (*(int **)(this + 0xb4),*(uint *)(*(int *)(this + 0xc4) + 4) >> 0x1f);
    (**(code **)(**(int **)(this + 0xb8) + 0x20))
              (*(int **)(this + 0xb8),(int)uVar12 < *(int *)(*(int *)(this + 0xc4) + 4));
    piVar13 = *(int **)(this + 0xb4);
    iVar4 = piVar13[3] * *(int *)(*(int *)(this + 0x70) + DAT_002590e4);
    uVar5 = iVar4 >> 0x1f;
    uVar5 = (iVar4 >> 0x12) + uVar5 ^ uVar5;
    (**(code **)(*piVar13 + 0x14))
              (piVar13,uVar5 + *(int *)(this + 0xd4),
               *(int *)(this + 0x10) - (*(int *)(*(int *)(this + 0x90) + 0x10) >> 1));
    (**(code **)(**(int **)(this + 0xb8) + 0x14))
              (*(int **)(this + 0xb8),
               (*(int *)(*(int *)(this + 0x90) + 0xc) - *(int *)(this + 0xd4)) - uVar5,
               *(undefined4 *)(*(int *)(this + 0xb4) + 8));
    continueLoading(this);
  }
  piVar13 = *(int **)(this + 0x88);
  if (piVar13 == (int *)0x0) goto LAB_002590a0;
  if (((char)piVar13[1] != '\0') && (iVar4 = (**(code **)(*piVar13 + 0x1c))(piVar13), iVar4 == 0)) {
    (**(code **)(*piVar13 + 8))(piVar13,param_1);
  }
  iVar14 = *(int *)(this + 0x88);
  uVar5 = *(uint *)(iVar14 + 0x14);
  lVar10 = *(long *)(iVar14 + 0xc);
  iVar4 = __aeabi_ldivmod(uVar5 << 0x10,((int)uVar5 >> 0x1f) << 0x10 | uVar5 >> 0x10,
                          *(int *)(iVar14 + 0x10),*(int *)(iVar14 + 0x10) >> 0x1f);
  iVar4 = CapcomMath::interpolatePoints(*(long *)(iVar14 + 8),lVar10,iVar4,*(int *)(iVar14 + 0x18));
  (**(code **)(*(int *)this + 0x14))(this,iVar4 >> 0x10,(int)(short)iVar4);
  iVar4 = (**(code **)(**(int **)(this + 0x88) + 0x1c))();
  if (iVar4 == 0) goto LAB_002590a0;
  if (this[0x8c] == (Storage)0x1) {
    uVar6 = '\x02';
LAB_00259084:
    setState(this,uVar6);
  }
  else if (this[0x8c] == (Storage)0x3) {
    uVar6 = '\0';
    goto LAB_00259084;
  }
  if (*(int **)(this + 0x88) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x88) + 4))();
  }
  *(undefined4 *)(this + 0x88) = 0;
LAB_002590a0:
  if (*(char *)(*(int *)(this + 0x70) + DAT_002590e8) != '\0') {
    backClose(this);
  }
  return;
}


