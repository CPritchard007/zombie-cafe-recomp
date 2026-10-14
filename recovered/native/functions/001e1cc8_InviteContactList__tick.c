/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e1cc8 InviteContactList::tick */

/* InviteContactList::tick(long) */

void __thiscall InviteContactList::tick(InviteContactList *this,long param_1)

{
  byte bVar1;
  InviteContactList *pIVar2;
  int iVar3;
  String *pSVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ZombieCafe *this_00;
  int *piVar10;
  undefined4 *puVar11;
  code *pcVar12;
  undefined4 uVar13;
  Vector<String> *pVVar14;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  int local_178;
  String aSStack_170 [8];
  String aSStack_168 [8];
  String aSStack_160 [8];
  String aSStack_158 [8];
  String aSStack_150 [8];
  String aSStack_148 [8];
  String aSStack_140 [8];
  String aSStack_138 [8];
  String aSStack_130 [8];
  String aSStack_128 [8];
  String aSStack_120 [8];
  String aSStack_118 [8];
  String aSStack_110 [8];
  String aSStack_108 [8];
  String aSStack_100 [8];
  String aSStack_f8 [8];
  String aSStack_f0 [8];
  String aSStack_e8 [8];
  String aSStack_e0 [8];
  String aSStack_d8 [8];
  String aSStack_d0 [8];
  String aSStack_c8 [8];
  String aSStack_c0 [8];
  String aSStack_b8 [8];
  String aSStack_b0 [8];
  String aSStack_a8 [8];
  String aSStack_a0 [8];
  String aSStack_98 [8];
  String aSStack_90 [8];
  String aSStack_88 [8];
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
  
  pIVar2 = this;
  if (this[0x14] == (InviteContactList)0x0) {
    pIVar2 = (InviteContactList *)FUN_001e2540();
  }
  ScreenElement::tick((long)pIVar2);
  this_00 = *(ZombieCafe **)(this + 100);
  iVar3 = ZombieCafe::unhandledPressOrLongEvent(this_00);
  iVar8 = DAT_001e23f0;
  iVar7 = DAT_001e2008;
  if (iVar3 == 0) {
    if ((this_00[DAT_001e23f0] == (ZombieCafe)0x0) && (*(int *)(this_00 + 0x4b8) != 0)) {
      if ((int)**(short **)(DAT_001e23f4 + 0x1e22a6) < *(int *)(this_00 + DAT_001e23f8)) {
        uVar5 = __floatsisf((int)(short)*(int *)(this_00 + 0x4b8) -
                            (int)*(short *)(this_00 + DAT_001e23ec));
        *(undefined4 *)(this + 0x98) = uVar5;
        this_00[iVar8] = (ZombieCafe)0x1;
      }
      else {
        *(undefined4 *)(this + 0x98) = 0;
      }
    }
  }
  else {
    iVar8 = ZCImageButton::contains
                      (*(ZCImageButton **)(this + 0x80),*(int *)(this_00 + DAT_001e2008) >> 0x10,
                       (int)(short)*(int *)(this_00 + DAT_001e2008),extraout_s0,extraout_s1);
    if (iVar8 == 0) {
      uVar5 = 0x3f800000;
      iVar8 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x84),
                         *(int *)(*(int *)(this + 100) + iVar7) >> 0x10,
                         (int)(short)*(int *)(*(int *)(this + 100) + iVar7),extraout_s0_00,
                         extraout_s1_00);
      if (iVar8 == 0) {
        uVar5 = 0x3f800000;
        iVar8 = ZCImageButton::contains
                          (*(ZCImageButton **)(this + 0x88),
                           *(int *)(*(int *)(this + 100) + iVar7) >> 0x10,
                           (int)(short)*(int *)(*(int *)(this + 100) + iVar7),extraout_s0_01,
                           extraout_s1_01);
        if (iVar8 == 0) {
          iVar8 = ScreenElement::contains
                            (*(ScreenElement **)(this + 0x90),
                             *(int *)(*(int *)(this + 100) + iVar7) >> 0x10,
                             (int)(short)*(int *)(*(int *)(this + 100) + iVar7));
          if (iVar8 == 0) {
            iVar7 = ZCImageButton::contains
                              (*(ZCImageButton **)(this + 0x8c),
                               *(int *)(*(int *)(this + 100) + iVar7) >> 0x10,
                               (int)(short)*(int *)(*(int *)(this + 100) + iVar7),extraout_s0_02,
                               extraout_s1_02);
            if (iVar7 != 0) {
              *(undefined4 *)(*(int *)(this + 0x60) + 4) = 0xffffffff;
              for (iVar7 = 0; iVar7 < *(int *)(this + 0xa8) + 1; iVar7 = iVar7 + 1) {
                iVar8 = *(int *)(iVar7 * 4 + *(int *)(this + 0xac));
                if (*(char *)(iVar8 + 0x30) != '\0') {
                  pVVar14 = *(Vector<String> **)(this + 0x60);
                  if (this[0x68] == (InviteContactList)0x0) {
                    String::String(aSStack_20,
                                   (String *)
                                   (*(int *)(*(int *)(iVar8 + 0x28) + 8) +
                                   *(int *)(iVar8 + 0x1c) * 8));
                    Vector<String>::addElement(pVVar14,aSStack_20);
                    pSVar4 = aSStack_20;
                  }
                  else {
                    String::String(aSStack_28,
                                   (String *)
                                   (*(int *)(*(int *)(iVar8 + 0x20) + 8) +
                                   *(int *)(iVar8 + 0x18) * 8));
                    Vector<String>::addElement(pVVar14,aSStack_28);
                    pSVar4 = aSStack_28;
                  }
                  String::~String(pSVar4);
                  (**(code **)(*(int *)this + 0x20))(this,0);
                }
              }
              if (*(code **)(this + 0x9c) != (code *)0x0) {
                (**(code **)(this + 0x9c))(*(undefined4 *)(this + 0xa0));
              }
            }
          }
          else {
            for (local_178 = 0; local_178 < *(int *)(this + 0xa8) + 1; local_178 = local_178 + 1) {
              puVar11 = *(undefined4 **)(local_178 * 4 + *(int *)(this + 0xac));
              iVar7 = ScreenElement::contains
                                ((ScreenElement *)*puVar11,
                                 *(int *)(*(int *)(this + 100) + DAT_001e2008) >> 0x10,
                                 (int)(short)*(int *)(*(int *)(this + 100) + DAT_001e2008));
              if (iVar7 == 0) {
                iVar7 = ZCImageButton::contains
                                  ((ZCImageButton *)puVar11[1],
                                   *(int *)(*(int *)(this + 100) + DAT_001e23ec) >> 0x10,
                                   (int)(short)*(int *)(*(int *)(this + 100) + DAT_001e23ec),
                                   extraout_s0_03,extraout_s1_03);
                if (iVar7 != 0) {
                  bVar1 = *(byte *)(puVar11 + 0xc) ^ 1;
                  *(byte *)(puVar11 + 0xc) = bVar1;
                  if (bVar1 == 0) {
                    uVar5 = *(undefined4 *)(this + 0x6c);
                  }
                  else {
                    uVar5 = *(undefined4 *)(this + 0x70);
                  }
                  *(undefined4 *)(puVar11[1] + 0x60) = uVar5;
                }
              }
              else {
                if (this[0x68] == (InviteContactList)0x0) {
                  iVar7 = puVar11[7];
                  puVar11[7] = iVar7 + 1;
                  if (*(int *)(puVar11[10] + 4) + 1 <= iVar7 + 1) {
                    puVar11[7] = 0;
                  }
                  String::String(aSStack_d0);
                  String::String(aSStack_c8,(char *)(DAT_001e202c + 0x1e1fc2));
                  iVar7 = String::equals((String *)(puVar11 + 2),aSStack_c8);
                  bVar1 = 1;
                  if (iVar7 != 0) {
                    String::String(aSStack_c0,(char *)(DAT_001e2030 + 0x1e1fe4));
                    bVar1 = String::equals((String *)(puVar11 + 4),aSStack_c0);
                    String::~String(aSStack_c0);
                    bVar1 = bVar1 ^ 1;
                  }
                  String::~String(aSStack_c8);
                  if (bVar1 == 0) {
                    String::String(aSStack_68,(String *)(*(int *)(puVar11[10] + 8) + puVar11[7] * 8)
                                  );
                    String::String(aSStack_60,(char *)(DAT_001e23e4 + 0x1e210a));
                    String::operator+(aSStack_58,aSStack_68,aSStack_60);
                    String::String(aSStack_50,
                                   (String *)(*(int *)(puVar11[0xb] + 8) + puVar11[7] * 8));
                    String::operator+(aSStack_48,aSStack_58,aSStack_50);
                    String::String(aSStack_40,(char *)(DAT_001e23e8 + 0x1e2138));
                    String::operator+(aSStack_38,aSStack_48,aSStack_40);
                    String::operator=(aSStack_d0,aSStack_38);
                    String::~String(aSStack_38);
                    String::~String(aSStack_40);
                    String::~String(aSStack_48);
                    String::~String(aSStack_50);
                    String::~String(aSStack_58);
                    String::~String(aSStack_60);
                    pSVar4 = aSStack_68;
                  }
                  else {
                    String::String(aSStack_b8,(char *)(DAT_001e23d8 + 0x1e204e));
                    String::operator+(aSStack_b0,(String *)(puVar11 + 2),aSStack_b8);
                    String::String(aSStack_a8,(String *)(puVar11 + 4));
                    String::operator+(aSStack_a0,aSStack_b0,aSStack_a8);
                    String::String(aSStack_98,(char *)(DAT_001e23dc + 0x1e2076));
                    String::operator+(aSStack_90,aSStack_a0,aSStack_98);
                    String::String(aSStack_88,
                                   (String *)(*(int *)(puVar11[0xb] + 8) + puVar11[7] * 8));
                    String::operator+(aSStack_80,aSStack_90,aSStack_88);
                    String::String(aSStack_78,(char *)(DAT_001e23e0 + 0x1e20a4));
                    String::operator+(aSStack_70,aSStack_80,aSStack_78);
                    String::operator=(aSStack_d0,aSStack_70);
                    String::~String(aSStack_70);
                    String::~String(aSStack_78);
                    String::~String(aSStack_80);
                    String::~String(aSStack_88);
                    String::~String(aSStack_90);
                    String::~String(aSStack_98);
                    String::~String(aSStack_a0);
                    String::~String(aSStack_a8);
                    String::~String(aSStack_b0);
                    pSVar4 = aSStack_b8;
                  }
                  String::~String(pSVar4);
                  piVar10 = (int *)*puVar11;
                  pcVar12 = *(code **)(*piVar10 + 0x44);
                  String::String(aSStack_30,aSStack_d0);
                  (*pcVar12)(piVar10,aSStack_30);
                  String::~String(aSStack_30);
                }
                else {
                  iVar7 = puVar11[6];
                  puVar11[6] = iVar7 + 1;
                  if (*(int *)(puVar11[8] + 4) + 1 <= iVar7 + 1) {
                    puVar11[6] = 0;
                  }
                  String::String(aSStack_d0);
                  String::String(aSStack_170,(char *)(DAT_001e2010 + 0x1e1e00));
                  iVar7 = String::equals((String *)(puVar11 + 2),aSStack_170);
                  bVar1 = 1;
                  if (iVar7 != 0) {
                    String::String(aSStack_168,(char *)(DAT_001e2014 + 0x1e1e22));
                    bVar1 = String::equals((String *)(puVar11 + 4),aSStack_168);
                    String::~String(aSStack_168);
                    bVar1 = bVar1 ^ 1;
                  }
                  String::~String(aSStack_170);
                  if (bVar1 == 0) {
                    String::String(aSStack_110,(String *)(*(int *)(puVar11[8] + 8) + puVar11[6] * 8)
                                  );
                    String::String(aSStack_108,(char *)(DAT_001e2024 + 0x1e1f1a));
                    String::operator+(aSStack_100,aSStack_110,aSStack_108);
                    String::String(aSStack_f8,(String *)(*(int *)(puVar11[9] + 8) + puVar11[6] * 8))
                    ;
                    String::operator+(aSStack_f0,aSStack_100,aSStack_f8);
                    String::String(aSStack_e8,(char *)(DAT_001e2028 + 0x1e1f48));
                    String::operator+(aSStack_e0,aSStack_f0,aSStack_e8);
                    String::operator=(aSStack_d0,aSStack_e0);
                    String::~String(aSStack_e0);
                    String::~String(aSStack_e8);
                    String::~String(aSStack_f0);
                    String::~String(aSStack_f8);
                    String::~String(aSStack_100);
                    String::~String(aSStack_108);
                    pSVar4 = aSStack_110;
                  }
                  else {
                    String::String(aSStack_160,(char *)(DAT_001e2018 + 0x1e1e5e));
                    String::operator+(aSStack_158,(String *)(puVar11 + 2),aSStack_160);
                    String::String(aSStack_150,(String *)(puVar11 + 4));
                    String::operator+(aSStack_148,aSStack_158,aSStack_150);
                    String::String(aSStack_140,(char *)(DAT_001e201c + 0x1e1e86));
                    String::operator+(aSStack_138,aSStack_148,aSStack_140);
                    String::String(aSStack_130,(String *)(*(int *)(puVar11[9] + 8) + puVar11[6] * 8)
                                  );
                    String::operator+(aSStack_128,aSStack_138,aSStack_130);
                    String::String(aSStack_120,(char *)(DAT_001e2020 + 0x1e1eb4));
                    String::operator+(aSStack_118,aSStack_128,aSStack_120);
                    String::operator=(aSStack_d0,aSStack_118);
                    String::~String(aSStack_118);
                    String::~String(aSStack_120);
                    String::~String(aSStack_128);
                    String::~String(aSStack_130);
                    String::~String(aSStack_138);
                    String::~String(aSStack_140);
                    String::~String(aSStack_148);
                    String::~String(aSStack_150);
                    String::~String(aSStack_158);
                    pSVar4 = aSStack_160;
                  }
                  String::~String(pSVar4);
                  piVar10 = (int *)*puVar11;
                  pcVar12 = *(code **)(*piVar10 + 0x44);
                  String::String(aSStack_d8,aSStack_d0);
                  (*pcVar12)(piVar10,aSStack_d8);
                  String::~String(aSStack_d8);
                }
                String::~String(aSStack_d0);
              }
            }
          }
          goto LAB_001e22cc;
        }
        piVar10 = *(int **)(this + 0x94);
        iVar7 = piVar10[2] - *(int *)(*(int *)(this + 0x90) + 0x10);
      }
      else {
        piVar10 = *(int **)(this + 0x94);
        iVar7 = piVar10[2] + *(int *)(*(int *)(this + 0x90) + 0x10);
      }
      (**(code **)(*piVar10 + 0x14))
                (piVar10,iVar7 >> 0x10,(int)(short)iVar7,*(code **)(*piVar10 + 0x14),uVar5);
    }
    else {
      (**(code **)(*(int *)this + 0x20))(this,0);
      *(undefined4 *)(this + 0x98) = 0;
      *(undefined1 *)(*(int *)(this + 100) + DAT_001e200c) = 1;
    }
  }
LAB_001e22cc:
  piVar10 = *(int **)(this + 0x94);
  pcVar12 = *(code **)(*piVar10 + 0x14);
  uVar5 = __floatsisf(piVar10[2]);
  __addsf3(uVar5,*(undefined4 *)(this + 0x98));
  uVar6 = __fixsfsi();
  iVar7 = DAT_001e23fc;
  uVar9 = *(int *)(*(int *)(this + 0x90) + 0x10) - piVar10[4];
  uVar9 = uVar9 & (int)(uVar9 - 1 | uVar9) >> 0x1f;
  if ((int)uVar9 <= (int)uVar6) {
    uVar9 = (int)(uVar6 - 1 | uVar6) >> 0x1f & uVar6;
  }
  (*pcVar12)(piVar10,0,uVar9);
  puVar11 = *(undefined4 **)(iVar7 + 0x1e2316);
  uVar13 = *(undefined4 *)(this + 0x98);
  uVar5 = __floatsisf(param_1);
  uVar5 = __mulsf3(uVar5,*puVar11);
  iVar7 = __aeabi_fcmplt(uVar5,0x3f800000);
  if (iVar7 == 0) {
    uVar5 = 0x3f800000;
  }
  uVar5 = __subsf3(0x3f800000,uVar5);
  iVar7 = __mulsf3(uVar13,uVar5);
  *(int *)(this + 0x98) = iVar7;
  iVar8 = __aeabi_fcmpge(iVar7,0);
  if (iVar8 == 0) {
    iVar7 = iVar7 + -0x80000000;
  }
  iVar7 = __aeabi_fcmplt(iVar7,**(undefined4 **)(DAT_001e2400 + 0x1e236c));
  if (iVar7 != 0) {
    *(undefined4 *)(this + 0x98) = 0;
  }
  (**(code **)(**(int **)(this + 0x84) + 0x20))
            (*(int **)(this + 0x84),*(uint *)(*(int *)(this + 0x94) + 8) >> 0x1f);
  iVar7 = *(int *)(this + 0x94);
  (**(code **)(**(int **)(this + 0x88) + 0x20))
            (*(int **)(this + 0x88),
             *(int *)(*(int *)(this + 0x90) + 0x10) < *(int *)(iVar7 + 8) + *(int *)(iVar7 + 0x10));
  FUN_001e2540();
  return;
}


