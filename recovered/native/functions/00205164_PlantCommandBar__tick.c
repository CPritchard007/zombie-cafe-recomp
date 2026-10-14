/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00205164 PlantCommandBar::tick */

/* PlantCommandBar::tick(long) */

void __thiscall PlantCommandBar::tick(PlantCommandBar *this,long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uchar uVar6;
  int *piVar7;
  int iVar8;
  code *pcVar9;
  ZombieCafe *this_00;
  long lVar10;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float fVar11;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float fVar12;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  ScreenElement::tick((long)this);
  piVar7 = *(int **)(this + 0xc0);
  if (piVar7 != (int *)0x0) {
    if (((char)piVar7[1] != '\0') && (iVar1 = (**(code **)(*piVar7 + 0x1c))(piVar7), iVar1 == 0)) {
      (**(code **)(*piVar7 + 8))(piVar7,param_1);
    }
    iVar8 = *(int *)(this + 0xc0);
    lVar2 = *(long *)(iVar8 + 0xc);
    lVar10 = *(long *)(iVar8 + 8);
    uVar3 = *(uint *)(iVar8 + 0x14);
    iVar1 = __aeabi_ldivmod(uVar3 << 0x10,((int)uVar3 >> 0x1f) << 0x10 | uVar3 >> 0x10,
                            *(int *)(iVar8 + 0x10),*(int *)(iVar8 + 0x10) >> 0x1f);
    iVar1 = CapcomMath::interpolatePoints(lVar10,lVar2,iVar1,*(int *)(iVar8 + 0x18));
    (**(code **)(*(int *)this + 0x14))(this,iVar1 >> 0x10,(int)(short)iVar1);
    iVar1 = (**(code **)(**(int **)(this + 0xc0) + 0x1c))();
    if (iVar1 != 0) {
      if (this[0xc4] == (PlantCommandBar)0x1) {
        uVar6 = '\x02';
LAB_002051ec:
        setState(this,uVar6);
      }
      else if (this[0xc4] == (PlantCommandBar)0x3) {
        uVar6 = '\0';
        goto LAB_002051ec;
      }
      if (*(int **)(this + 0xc0) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0xc0) + 4))();
      }
      *(undefined4 *)(this + 0xc0) = 0;
    }
  }
  if (1 < (byte)this[0xc4] - 1) {
    return;
  }
  iVar1 = ZombieCafe::getZombieFlowerPlantState(*(ZombieCafe **)(this + 0x74));
  if (*(short *)(this + 0xc6) != iVar1) {
    *(short *)(this + 0xc6) = (short)iVar1;
    if ((iVar1 != 0) && (iVar1 != 1)) {
      iVar1 = 2;
    }
    setPlant(this,iVar1);
  }
  uVar4 = ZombieCafe::getZombieFlowerPoint(*(ZombieCafe **)(this + 0x74));
  iVar1 = __aeabi_fcmpeq(uVar4,*(undefined4 *)(this + 200));
  if (iVar1 == 0) {
    *(undefined4 *)(this + 200) = uVar4;
    piVar7 = *(int **)(this + 0xa0);
    pcVar9 = *(code **)(*piVar7 + 0x44);
    String::valueOf(aSStack_30,extraout_s0);
    String::String(aSStack_28,(char *)(DAT_00205424 + 0x20526e));
    String::operator+(aSStack_20,aSStack_30,aSStack_28);
    (*pcVar9)(piVar7,aSStack_20);
    String::~String(aSStack_20);
    String::~String(aSStack_28);
    String::~String(aSStack_30);
    iVar1 = __fixsfsi(uVar4);
    ProgressBar::setValue(*(ProgressBar **)(this + 0xa4),iVar1,false);
    piVar7 = *(int **)(this + 0xa4);
    (**(code **)(*piVar7 + 8))(piVar7,param_1);
  }
  this_00 = *(ZombieCafe **)(this + 0x74);
  iVar8 = ZombieCafe::unhandledPressOrLongEvent(this_00);
  iVar1 = DAT_00205428;
  if (iVar8 == 0) {
    return;
  }
  iVar8 = *(int *)(this_00 + DAT_00205428);
  iVar8 = ZCImageButton::contains
                    (*(ZCImageButton **)(this + 0x60),iVar8 >> 0x10,(int)(short)iVar8,extraout_s0_00
                     ,extraout_s1);
  if (iVar8 == 0) {
    fVar11 = extraout_s0_01;
    fVar12 = extraout_s1_00;
    if (((*(ZCImageButton **)(this + 0x6c))[0x86] == (ZCImageButton)0x0) ||
       (iVar8 = *(int *)(*(int *)(this + 0x74) + iVar1),
       iVar8 = ZCImageButton::contains
                         (*(ZCImageButton **)(this + 0x6c),iVar8 >> 0x10,(int)(short)iVar8,
                          extraout_s0_01,extraout_s1_00), fVar11 = extraout_s0_02,
       fVar12 = extraout_s1_01, iVar8 == 0)) {
      if (((*(ZCImageButton **)(this + 0x70))[0x86] == (ZCImageButton)0x0) ||
         (iVar8 = ZCImageButton::contains
                            (*(ZCImageButton **)(this + 0x70),
                             *(int *)(*(int *)(this + 0x74) + iVar1) >> 0x10,
                             (int)(short)*(int *)(*(int *)(this + 0x74) + iVar1),fVar11,fVar12),
         fVar11 = extraout_s0_03, fVar12 = extraout_s1_02, iVar8 == 0)) {
        if (((*(ZCImageButton **)(this + 0x68))[0x86] != (ZCImageButton)0x0) &&
           (iVar8 = ZCImageButton::contains
                              (*(ZCImageButton **)(this + 0x68),
                               *(int *)(*(int *)(this + 0x74) + iVar1) >> 0x10,
                               (int)(short)*(int *)(*(int *)(this + 0x74) + iVar1),fVar11,fVar12),
           iVar8 != 0)) {
          if (*(int *)(this + 0xe4) == 0) {
            return;
          }
          ZombieCafe::playEffect(*(int *)(this + 0x74),extraout_s0_04);
          (**(code **)(this + 0xe4))(*(undefined4 *)(this + 0xe8),0);
          *(undefined1 *)(*(int *)(this + 0x74) + DAT_0020542c) = 1;
          close(this);
          return;
        }
        iVar1 = ScreenElement::contains
                          ((ScreenElement *)this,*(int *)(*(int *)(this + 0x74) + iVar1) >> 0x10,
                           (int)(short)*(int *)(*(int *)(this + 0x74) + iVar1));
        if (iVar1 == 0) {
          return;
        }
        goto LAB_002053c2;
      }
      *(undefined1 *)(*(int *)(this + 0x74) + DAT_0020542c) = 1;
      if (*(int *)(this + 0xdc) == 0) {
        return;
      }
      ZombieCafe::playEffect(*(int *)(this + 0x74),extraout_s0_03);
      uVar5 = *(undefined4 *)(this + 0xe0);
      pcVar9 = *(code **)(this + 0xdc);
      uVar4 = 0xf;
    }
    else {
      *(undefined1 *)(*(int *)(this + 0x74) + DAT_0020542c) = 1;
      if (*(int *)(this + 0xd4) == 0) {
        return;
      }
      ZombieCafe::playEffect(*(int *)(this + 0x74),extraout_s0_02);
      uVar5 = *(undefined4 *)(this + 0xd8);
      pcVar9 = *(code **)(this + 0xd4);
      uVar4 = DAT_00205430;
    }
    (*pcVar9)(uVar5,uVar4);
  }
  else {
    ZombieCafe::playEffect(*(int *)(this + 0x74),extraout_s0_01);
    close(this);
LAB_002053c2:
    *(undefined1 *)(*(int *)(this + 0x74) + DAT_0020542c) = 1;
  }
  return;
}


