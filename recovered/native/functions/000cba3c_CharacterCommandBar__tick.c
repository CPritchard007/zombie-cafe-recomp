/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cba3c CharacterCommandBar::tick */

/* CharacterCommandBar::tick(long) */

void __thiscall CharacterCommandBar::tick(CharacterCommandBar *this,long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  TutorialSystem *pTVar5;
  uchar uVar6;
  bool bVar7;
  undefined4 *puVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  ZombieCafe *this_00;
  undefined4 uVar12;
  code *pcVar13;
  long lVar14;
  int iVar15;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar16;
  float extraout_s0_02;
  float extraout_s1;
  float extraout_s1_00;
  float fVar17;
  String aSStack_30 [8];
  String aSStack_28 [8];
  String aSStack_20 [12];
  
  ScreenElement::tick((long)this);
  piVar9 = *(int **)(this + 0xb4);
  if (piVar9 != (int *)0x0) {
    if (((char)piVar9[1] != '\0') && (iVar1 = (**(code **)(*piVar9 + 0x1c))(piVar9), iVar1 == 0)) {
      (**(code **)(*piVar9 + 8))(piVar9,param_1);
    }
    iVar10 = *(int *)(this + 0xb4);
    lVar2 = *(long *)(iVar10 + 0xc);
    lVar14 = *(long *)(iVar10 + 8);
    uVar3 = *(uint *)(iVar10 + 0x14);
    iVar1 = __aeabi_ldivmod(uVar3 << 0x10,((int)uVar3 >> 0x1f) << 0x10 | uVar3 >> 0x10,
                            *(int *)(iVar10 + 0x10),*(int *)(iVar10 + 0x10) >> 0x1f);
    iVar1 = CapcomMath::interpolatePoints(lVar14,lVar2,iVar1,*(int *)(iVar10 + 0x18));
    (**(code **)(*(int *)this + 0x14))(this,iVar1 >> 0x10,(int)(short)iVar1);
    iVar1 = (**(code **)(**(int **)(this + 0xb4) + 0x1c))();
    if (iVar1 != 0) {
      if (this[0xb8] == (CharacterCommandBar)0x1) {
        uVar6 = '\x02';
LAB_000cbac4:
        setState(this,uVar6);
      }
      else if (this[0xb8] == (CharacterCommandBar)0x3) {
        uVar6 = '\0';
        goto LAB_000cbac4;
      }
      if (*(int **)(this + 0xb4) != (int *)0x0) {
        (**(code **)(**(int **)(this + 0xb4) + 4))();
      }
      *(undefined4 *)(this + 0xb4) = 0;
    }
  }
  if (1 < (byte)this[0xb8] - 1) {
    return;
  }
  if (this[0x68] != *(CharacterCommandBar *)(*(int *)(*(int *)(this + 100) + 0x8c) + 5)) {
    close(this);
    return;
  }
  piVar9 = *(int **)(*(int *)(this + 0x7c) + 0xc);
  piVar11 = *(int **)(*(int *)(this + 0x7c) + 0x14);
  if (piVar9 != (int *)0x0) {
    iVar10 = *piVar9;
    uVar12 = *(undefined4 *)(*(int *)(*(int *)(this + 100) + 0x8c) + 0x40);
    uVar4 = Character::getMaxEnergy();
    uVar4 = __divsf3(uVar12,uVar4);
    iVar1 = __aeabi_fcmple(uVar4,**(undefined4 **)(DAT_000cbeac + 0xcbb2a));
    *(byte *)(iVar10 + 0x86) = -('\x01' - (iVar1 == 0)) & 1;
  }
  if (piVar11 != (int *)0x0) {
    iVar1 = *(int *)(this + 0x60);
    if ((*(char *)(**(int **)(*(int *)(this + 100) + 0x8c) + DAT_000cbeb0) != '\0') ||
       (bVar7 = false,
       *(int *)(**(int **)(*(int *)(this + 100) + 0x8c) + 0xb20) <= *(int *)(iVar1 + DAT_000cbeb4)))
    {
      bVar7 = *(int *)(iVar1 + DAT_000cbeb8 + 4) + 1 <
              (int)*(short *)((*(int *)(iVar1 + 0x680) + -1) * 2 +
                             **(int **)(DAT_000cbebc + 0xcbb78));
    }
    *(bool *)(*piVar11 + 0x86) = bVar7;
  }
  if (*(int **)(*(int *)(this + 0x7c) + 0x28) != (int *)0x0) {
    *(bool *)(**(int **)(*(int *)(this + 0x7c) + 0x28) + 0x86) =
         *(int *)(*(int *)(this + 0x60) + 0x5a4) + 1 < *(int *)(*(int *)(this + 0x60) + 0x5b8);
  }
  this_00 = *(ZombieCafe **)(this + 0x60);
  iVar10 = ZombieCafe::unhandledPressOrLongEvent(this_00);
  iVar1 = DAT_000cbec0;
  if (iVar10 == 0) goto LAB_000cbdce;
  iVar15 = 0;
  iVar10 = TutorialSystem::isTutorialCompleted(*(TutorialSystem **)(this_00 + DAT_000cbec0),'\t');
  fVar16 = extraout_s0;
  fVar17 = extraout_s1;
  if (iVar10 != 0) {
    for (; iVar15 < *(int *)(this + 0x78) + 1; iVar15 = iVar15 + 1) {
      puVar8 = *(undefined4 **)(iVar15 * 4 + *(int *)(this + 0x7c));
      if (((puVar8 != (undefined4 *)0x0) && (((ZCImageButton *)*puVar8)[0x14] != (ZCImageButton)0x0)
          ) && (iVar10 = ZCImageButton::contains
                                   ((ZCImageButton *)*puVar8,
                                    *(int *)(*(int *)(this + 0x60) + DAT_000cbec4) >> 0x10,
                                    (int)(short)*(int *)(*(int *)(this + 0x60) + DAT_000cbec4),
                                    fVar16,fVar17), fVar16 = extraout_s0_00, fVar17 = extraout_s1_00
               , iVar10 != 0)) {
        ZombieCafe::playEffect(*(int *)(this + 0x60),extraout_s0_00);
        (*(code *)puVar8[4])(puVar8[5],*puVar8);
        *(undefined1 *)(*(int *)(this + 0x60) + DAT_000cbec8) = 1;
        break;
      }
    }
  }
  iVar15 = ScreenElement::contains
                     ((ScreenElement *)**(undefined4 **)(this + 0x80),
                      *(int *)(*(int *)(this + 0x60) + DAT_000cbec4) >> 0x10,
                      (int)(short)*(int *)(*(int *)(this + 0x60) + DAT_000cbec4));
  iVar10 = DAT_000cbec0;
  if (iVar15 != 0) {
    iVar15 = TutorialSystem::isTutorialCompleted
                       (*(TutorialSystem **)(*(int *)(this + 0x60) + iVar1),'\x01');
    if ((iVar15 == 0) ||
       (iVar15 = TutorialSystem::isTutorialCompleted
                           (*(TutorialSystem **)(*(int *)(this + 0x60) + iVar10),'\x02'),
       iVar15 != 0)) {
      iVar10 = DAT_000cbf40;
      iVar15 = TutorialSystem::isTutorialCompleted
                         (*(TutorialSystem **)(*(int *)(this + 0x60) + iVar1),'\x04');
      if ((iVar15 != 0) &&
         (iVar15 = TutorialSystem::isTutorialCompleted
                             (*(TutorialSystem **)(*(int *)(this + 0x60) + iVar10),'\x05'),
         iVar15 == 0)) {
        TutorialSystem::setTutorialIncomplete
                  (*(TutorialSystem **)(*(int *)(this + 0x60) + iVar10),'\x04');
        TutorialSystem::setTutorialIncomplete
                  (*(TutorialSystem **)(*(int *)(this + 0x60) + iVar10),'\x03');
        uVar6 = '\n';
        pTVar5 = *(TutorialSystem **)(*(int *)(this + 0x60) + iVar10);
        goto LAB_000cbcb4;
      }
      iVar10 = DAT_000cbf40;
      iVar15 = TutorialSystem::isTutorialCompleted
                         (*(TutorialSystem **)(*(int *)(this + 0x60) + iVar1),'<');
      if ((iVar15 != 0) &&
         (iVar15 = TutorialSystem::isTutorialCompleted
                             (*(TutorialSystem **)(*(int *)(this + 0x60) + iVar10),'\x06'),
         iVar15 == 0)) {
        TutorialSystem::setTutorialIncomplete
                  (*(TutorialSystem **)(*(int *)(this + 0x60) + iVar10),'<');
        TutorialSystem::setTutorialIncomplete
                  (*(TutorialSystem **)(*(int *)(this + 0x60) + iVar10),'\x05');
        uVar6 = ',';
        pTVar5 = *(TutorialSystem **)(*(int *)(this + 0x60) + iVar10);
        goto LAB_000cbcb4;
      }
      iVar10 = DAT_000cbf40;
      iVar15 = TutorialSystem::isTutorialCompleted
                         (*(TutorialSystem **)(*(int *)(this + 0x60) + iVar1),'\t');
      if ((iVar15 != 0) &&
         (iVar15 = TutorialSystem::isTutorialCompleted
                             (*(TutorialSystem **)(*(int *)(this + 0x60) + iVar10),'\n'),
         iVar15 == 0)) {
        TutorialSystem::setTutorialIncomplete
                  (*(TutorialSystem **)(*(int *)(this + 0x60) + iVar10),'\t');
        TutorialSystem::setTutorialIncomplete
                  (*(TutorialSystem **)(*(int *)(this + 0x60) + iVar10),'\b');
        uVar6 = '\f';
        pTVar5 = *(TutorialSystem **)(*(int *)(this + 0x60) + iVar10);
        goto LAB_000cbcb4;
      }
      iVar10 = DAT_000cbf40;
      iVar15 = TutorialSystem::isTutorialCompleted
                         (*(TutorialSystem **)(*(int *)(this + 0x60) + iVar1),'\'');
      if ((iVar15 == 0) ||
         (iVar15 = TutorialSystem::isTutorialCompleted
                             (*(TutorialSystem **)(*(int *)(this + 0x60) + iVar10),'('), iVar15 != 0
         )) {
        iVar10 = DAT_000cbf40;
        iVar15 = TutorialSystem::isTutorialCompleted
                           (*(TutorialSystem **)(*(int *)(this + 0x60) + iVar1),'\x1e');
        if ((iVar15 != 0) &&
           (iVar15 = TutorialSystem::isTutorialCompleted
                               (*(TutorialSystem **)(*(int *)(this + 0x60) + iVar10),' '),
           iVar15 == 0)) {
          TutorialSystem::setTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(this + 0x60) + iVar10),'\x1f');
          uVar6 = ' ';
          pTVar5 = *(TutorialSystem **)(*(int *)(this + 0x60) + iVar10);
          goto LAB_000cbd4c;
        }
        iVar10 = DAT_000cbf40;
        iVar1 = TutorialSystem::isTutorialCompleted
                          (*(TutorialSystem **)(*(int *)(this + 0x60) + iVar1),'9');
        fVar16 = extraout_s0_02;
        if ((iVar1 != 0) &&
           (iVar1 = TutorialSystem::isTutorialCompleted
                              (*(TutorialSystem **)(*(int *)(this + 0x60) + iVar10),':'),
           fVar16 = extraout_s0_01, iVar1 == 0)) {
          TutorialSystem::setTutorialCompleted
                    (*(TutorialSystem **)(*(int *)(this + 0x60) + iVar10),':');
          fVar16 = (float)TutorialArrow::detach
                                    (*(TutorialArrow **)
                                      (*(int *)(*(int *)(this + 0x60) + iVar10) + 0x788));
          *(undefined1 *)(*(int *)(*(int *)(this + 0x60) + 8) + 0x38) = 0;
        }
      }
      else {
        uVar6 = '(';
        pTVar5 = *(TutorialSystem **)(*(int *)(this + 0x60) + iVar10);
LAB_000cbd4c:
        TutorialSystem::setTutorialCompleted(pTVar5,uVar6);
        fVar16 = (float)TutorialArrow::detach
                                  (*(TutorialArrow **)
                                    (*(int *)(*(int *)(this + 0x60) + iVar10) + 0x788));
      }
    }
    else {
      TutorialSystem::setTutorialIncomplete
                (*(TutorialSystem **)(*(int *)(this + 0x60) + iVar10),'\x01');
      TutorialSystem::setTutorialIncomplete
                (*(TutorialSystem **)(*(int *)(this + 0x60) + iVar10),'\0');
      pTVar5 = *(TutorialSystem **)(*(int *)(this + 0x60) + iVar10);
      uVar6 = '\0';
LAB_000cbcb4:
      fVar16 = (float)TutorialSystem::triggerEvent(pTVar5,uVar6,true);
    }
    ZombieCafe::playEffect(*(int *)(this + 0x60),fVar16);
    puVar8 = *(undefined4 **)(this + 0x80);
    (*(code *)puVar8[1])(puVar8[2],*puVar8);
    *(undefined1 *)(*(int *)(this + 0x60) + DAT_000cbec8) = 1;
  }
  iVar1 = ScreenElement::contains
                    (*(ScreenElement **)(this + 0xbc),
                     *(int *)(*(int *)(this + 0x60) + DAT_000cbec4) >> 0x10,
                     (int)(short)*(int *)(*(int *)(this + 0x60) + DAT_000cbec4));
  if (iVar1 != 0) {
    *(undefined1 *)(*(int *)(this + 0x60) + DAT_000cbec8) = 1;
  }
LAB_000cbdce:
  if (*(int *)(this + 100) != 0) {
    iVar1 = __fixsfsi(*(undefined4 *)(*(int *)(*(int *)(this + 100) + 0x8c) + 0x40));
    ProgressBar::setValue(*(ProgressBar **)(this + 0xb0),iVar1,false);
    piVar9 = *(int **)(this + 0xb0);
    (**(code **)(*piVar9 + 8))(piVar9,param_1);
    (**(code **)(**(int **)(this + 0x6c) + 0x40))(aSStack_30);
    iVar1 = String::compareTo(aSStack_30,(String *)(*(int *)(*(int *)(this + 100) + 0x8c) + 8));
    String::~String(aSStack_30);
    if (iVar1 != 0) {
      piVar9 = *(int **)(this + 0x6c);
      pcVar13 = *(code **)(*piVar9 + 0x44);
      String::String(aSStack_28,(String *)(*(int *)(*(int *)(this + 100) + 0x8c) + 8));
      (*pcVar13)(piVar9,aSStack_28);
      String::~String(aSStack_28);
    }
    if ((this[0x69] != *(CharacterCommandBar *)(*(int *)(*(int *)(this + 100) + 0x8c) + 0x44)) ||
       (this[0x69] == (CharacterCommandBar)0x6)) {
      piVar9 = *(int **)(this + 0x70);
      pcVar13 = *(code **)(*piVar9 + 0x44);
      CharacterInstance::getCurrentStateText();
      (*pcVar13)(piVar9,aSStack_20);
      String::~String(aSStack_20);
      this[0x69] = *(CharacterCommandBar *)(*(int *)(*(int *)(this + 100) + 0x8c) + 0x44);
    }
  }
  return;
}


