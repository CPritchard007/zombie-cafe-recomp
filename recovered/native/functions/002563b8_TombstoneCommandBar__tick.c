/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002563b8 TombstoneCommandBar::tick */

/* TombstoneCommandBar::tick(long) */

void __thiscall TombstoneCommandBar::tick(TombstoneCommandBar *this,long param_1)

{
  int iVar1;
  uint uVar2;
  String *this_00;
  uchar uVar3;
  long lVar4;
  long lVar5;
  ConfirmDialog *pCVar6;
  int iVar7;
  code *pcVar8;
  int *piVar9;
  int iVar10;
  ZombieCafe *this_01;
  NoticeDialog *pNVar11;
  float extraout_s0;
  float extraout_s0_00;
  float fVar12;
  float extraout_s0_01;
  float extraout_s1;
  float extraout_s1_00;
  String aSStack_80 [8];
  String aSStack_78 [8];
  String aSStack_70 [8];
  String aSStack_68 [8];
  String aSStack_60 [8];
  String aSStack_58 [8];
  String aSStack_50 [8];
  String aSStack_48 [8];
  String aSStack_40 [8];
  String aSStack_38 [8];
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  ScreenElement::tick((long)this);
  piVar9 = *(int **)(this + 0x98);
  iVar7 = DAT_00256730 + 0x2563d0;
  if (piVar9 != (int *)0x0) {
    if (((char)piVar9[1] != '\0') && (iVar1 = (**(code **)(*piVar9 + 0x1c))(piVar9), iVar1 == 0)) {
      (**(code **)(*piVar9 + 8))(piVar9,param_1);
    }
    iVar10 = *(int *)(this + 0x98);
    lVar5 = *(long *)(iVar10 + 0xc);
    uVar2 = *(uint *)(iVar10 + 0x14);
    lVar4 = *(long *)(iVar10 + 8);
    iVar1 = __aeabi_ldivmod(uVar2 << 0x10,((int)uVar2 >> 0x1f) << 0x10 | uVar2 >> 0x10,
                            *(int *)(iVar10 + 0x10),*(int *)(iVar10 + 0x10) >> 0x1f);
    iVar1 = CapcomMath::interpolatePoints(lVar4,lVar5,iVar1,*(int *)(iVar10 + 0x18));
    (**(code **)(*(int *)this + 0x14))(this,iVar1 >> 0x10,(int)(short)iVar1);
    iVar1 = (**(code **)(**(int **)(this + 0x98) + 0x1c))();
    if (iVar1 != 0) {
      if (this[0x9c] == (TombstoneCommandBar)0x1) {
        uVar3 = '\x02';
LAB_00256446:
        setState(this,uVar3);
      }
      else if (this[0x9c] == (TombstoneCommandBar)0x3) {
        uVar3 = '\0';
        goto LAB_00256446;
      }
      if (*(int **)(this + 0x98) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0x98) + 4))();
      }
      *(undefined4 *)(this + 0x98) = 0;
    }
  }
  if (1 < (byte)this[0x9c] - 1) {
    return;
  }
  this_01 = *(ZombieCafe **)(this + 0x68);
  iVar10 = ZombieCafe::unhandledPressOrLongEvent(this_01);
  iVar1 = DAT_00256738;
  piVar9 = *(int **)(iVar7 + DAT_00256734);
  if (iVar10 == 0) goto LAB_002566c6;
  iVar10 = *(int *)(this_01 + DAT_00256738);
  iVar10 = ZCImageButton::contains
                     (*(ZCImageButton **)(this + 0x60),iVar10 >> 0x10,(int)(short)iVar10,extraout_s0
                      ,extraout_s1);
  if (iVar10 == 0) {
    iVar10 = *(int *)(*(int *)(this + 0x68) + iVar1);
    iVar10 = ZCImageButton::contains
                       (*(ZCImageButton **)(this + 100),iVar10 >> 0x10,(int)(short)iVar10,
                        extraout_s0_00,extraout_s1_00);
    if (iVar10 != 0) {
      iVar1 = *piVar9;
      ZombieCafe::playEffect(*(int *)(this + 0x68),extraout_s0_01);
      iVar10 = *(int *)(*(int *)(*(int *)(this + 0x78) + 0x38) + 0x24);
      if (((((iVar10 == **(int **)(iVar7 + DAT_00256740)) &&
            (*(int *)(*(int *)(this + 0x68) + DAT_00256748) == **(int **)(iVar7 + DAT_00256744))) ||
           ((iVar10 == **(int **)(iVar7 + DAT_0025674c) &&
            (*(int *)(*(int *)(this + 0x68) + 0x9d0) == **(int **)(iVar7 + DAT_00256750))))) ||
          ((iVar10 == **(int **)(iVar7 + DAT_00256754) &&
           (*(int *)(*(int *)(this + 0x68) + DAT_00256758) == **(int **)(iVar7 + DAT_00256744)))))
         || ((iVar10 == **(int **)(iVar7 + DAT_0025675c) &&
             (*(int *)(*(int *)(this + 0x68) + DAT_00256760) == **(int **)(iVar7 + DAT_00256750)))))
      {
        pNVar11 = *(NoticeDialog **)(this + 0x74);
        Vector<String>::elementAt((int)aSStack_80);
        Vector<String>::elementAt((int)aSStack_78);
        NoticeDialog::show(pNVar11,aSStack_80,aSStack_78,0,this);
        String::~String(aSStack_78);
        this_00 = aSStack_80;
      }
      else {
        if ((iVar10 + DAT_0025676c == 0) || (iVar10 == 0x1e4)) goto LAB_002566c6;
        iVar10 = ZombieCafe::getToxin(*(ZombieCafe **)(this + 0x68));
        pCVar6 = *(ConfirmDialog **)(this + 0x6c);
        if (iVar10 < iVar1) {
          Vector<String>::elementAt((int)aSStack_38);
          Vector<String>::elementAt((int)aSStack_30);
          Vector<String>::elementAt((int)aSStack_28);
          ConfirmDialog::show(pCVar6,aSStack_38,aSStack_30,aSStack_28,
                              *(undefined4 *)(iVar7 + DAT_0025678c),*(undefined4 *)(this + 0x70));
          String::~String(aSStack_28);
          String::~String(aSStack_30);
          this_00 = aSStack_38;
        }
        else {
          Vector<String>::elementAt((int)aSStack_70);
          String::valueOf((int)aSStack_68);
          String::operator+(aSStack_60,aSStack_70,aSStack_68);
          Vector<String>::elementAt((int)aSStack_58);
          String::operator+(aSStack_50,aSStack_60,aSStack_58);
          Vector<String>::elementAt((int)aSStack_48);
          Vector<String>::elementAt((int)aSStack_40);
          ConfirmDialog::show(pCVar6,aSStack_50,aSStack_48,aSStack_40,
                              *(undefined4 *)(iVar7 + DAT_00256780),this);
          String::~String(aSStack_40);
          String::~String(aSStack_48);
          String::~String(aSStack_50);
          String::~String(aSStack_58);
          String::~String(aSStack_60);
          String::~String(aSStack_68);
          this_00 = aSStack_70;
        }
      }
      String::~String(this_00);
      goto LAB_002566c6;
    }
    iVar7 = *(int *)(*(int *)(this + 0x68) + iVar1);
    iVar7 = ScreenElement::contains((ScreenElement *)this,iVar7 >> 0x10,(int)(short)iVar7);
    if (iVar7 == 0) goto LAB_002566c6;
  }
  else {
    fVar12 = (float)TutorialSystem::triggerEvent
                              (*(TutorialSystem **)(*(int *)(this + 0x68) + DAT_0025673c),'2',true);
    ZombieCafe::playEffect(*(int *)(this + 0x68),fVar12);
    close(this);
  }
  *(undefined1 *)(*(int *)(this + 0x68) + DAT_00256790) = 1;
LAB_002566c6:
  piVar9 = *(int **)(this + 0x90);
  pcVar8 = *(code **)(*piVar9 + 0x44);
  String::valueOf((long)aSStack_20);
  (*pcVar8)(piVar9,aSStack_20);
  String::~String(aSStack_20);
  return;
}


