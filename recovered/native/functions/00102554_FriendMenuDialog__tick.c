/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00102554 FriendMenuDialog::tick */

/* WARNING: Function: __gnu_thumb1_case_uhi replaced with injection: switch16_uhi_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00102568) */
/* WARNING: Removing unreachable block (ram,0x00102568) */
/* FriendMenuDialog::tick(long) */

void FriendMenuDialog::tick(long param_1)

{
  short sVar1;
  int iVar2;
  CapcomOrderableList<RecipeAndVariants*> *pCVar3;
  byte *pbVar4;
  undefined4 uVar5;
  ScreenElement *this;
  char cVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ZombieCafe *this_00;
  char *pcVar10;
  undefined4 uVar11;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float fVar12;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float fVar13;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  
  cVar6 = *(char *)(param_1 + 0x60);
  switch(cVar6) {
  case '\x01':
  case '\x03':
    if (cVar6 == '\x01') {
      cVar6 = '\x02';
    }
    else {
      cVar6 = '\0';
    }
    *(char *)(param_1 + 0x60) = cVar6;
    break;
  case '\x02':
    ScreenElement::tick(param_1);
    this_00 = *(ZombieCafe **)(param_1 + 100);
    iVar2 = ZombieCafe::unhandledPressOrLongEvent(this_00);
    iVar9 = DAT_00102874;
    if (iVar2 != 0) {
      iVar2 = ZCImageButton::contains
                        (*(ZCImageButton **)(param_1 + 0x84),*(long *)(this_00 + DAT_00102874),
                         extraout_s0,extraout_s1);
      iVar8 = *(int *)(param_1 + 100);
      fVar12 = extraout_s0_00;
      if (iVar2 == 0) {
        fVar13 = extraout_s1_00;
        if (((*(ZCImageButton **)(param_1 + 0x7c))[0x14] == (ZCImageButton)0x0) ||
           (iVar2 = ZCImageButton::contains
                              (*(ZCImageButton **)(param_1 + 0x7c),*(long *)(iVar8 + iVar9),
                               extraout_s0_00,extraout_s1_00), fVar12 = extraout_s0_01,
           fVar13 = extraout_s1_01, iVar2 == 0)) {
          if (((*(ZCImageButton **)(param_1 + 0x80))[0x14] == (ZCImageButton)0x0) ||
             (iVar2 = ZCImageButton::contains
                                (*(ZCImageButton **)(param_1 + 0x80),
                                 *(long *)(*(int *)(param_1 + 100) + iVar9),fVar12,fVar13),
             fVar12 = extraout_s0_02, fVar13 = extraout_s1_02, iVar2 == 0)) {
            iVar8 = ZCImageButton::contains
                              (*(ZCImageButton **)(param_1 + 0x88),
                               *(long *)(*(int *)(param_1 + 100) + iVar9),fVar12,fVar13);
            iVar2 = DAT_00102874;
            if (iVar8 == 0) {
              iVar8 = ZCImageButton::contains
                                (*(ZCImageButton **)(param_1 + 0x8c),
                                 *(long *)(*(int *)(param_1 + 100) + DAT_00102874),extraout_s0_03,
                                 extraout_s1_03);
              if (iVar8 == 0) {
                iVar8 = ZCImageButton::contains
                                  (*(ZCImageButton **)(param_1 + 0x90),
                                   *(long *)(*(int *)(param_1 + 100) + iVar2),extraout_s0_04,
                                   extraout_s1_04);
                if (iVar8 != 0) {
                  pCVar3 = *(CapcomOrderableList<RecipeAndVariants*> **)(param_1 + 0x9c);
                  iVar9 = (uint)*(byte *)(param_1 + 0xa0) * 2 + 1;
                  goto LAB_00102660;
                }
                iVar8 = ZCImageButton::contains
                                  (*(ZCImageButton **)(param_1 + 0x94),
                                   *(long *)(*(int *)(param_1 + 100) + iVar2),extraout_s0_05,
                                   extraout_s1_05);
                if (iVar8 == 0) {
                  if ((((*(ScreenElement **)(param_1 + 0x74))[0x14] == (ScreenElement)0x0) ||
                      (iVar2 = *(int *)(*(int *)(param_1 + 100) + iVar2),
                      iVar2 = ScreenElement::contains
                                        (*(ScreenElement **)(param_1 + 0x74),iVar2 >> 0x10,
                                         (int)(short)iVar2), iVar2 == 0)) ||
                     (*(char *)(*(int *)(*(int *)(param_1 + 0x74) + 0x94) + 0x14) != '\0')) {
                    if ((((*(ScreenElement **)(param_1 + 0x78))[0x14] == (ScreenElement)0x0) ||
                        (iVar9 = *(int *)(*(int *)(param_1 + 100) + iVar9),
                        iVar9 = ScreenElement::contains
                                          (*(ScreenElement **)(param_1 + 0x78),iVar9 >> 0x10,
                                           (int)(short)iVar9), iVar9 == 0)) ||
                       (*(char *)(*(int *)(*(int *)(param_1 + 0x78) + 0x94) + 0x14) != '\0'))
                    goto LAB_00102732;
                    pCVar3 = *(CapcomOrderableList<RecipeAndVariants*> **)(param_1 + 0x9c);
                    iVar9 = (uint)*(byte *)(param_1 + 0xa0) * 2 + 1;
                  }
                  else {
                    pCVar3 = *(CapcomOrderableList<RecipeAndVariants*> **)(param_1 + 0x9c);
                    iVar9 = (uint)*(byte *)(param_1 + 0xa0) << 1;
                  }
                  pbVar4 = (byte *)CapcomOrderableList<RecipeAndVariants*>::get(pCVar3,iVar9);
                  *(ushort *)(param_1 + 0xa2) = (ushort)*pbVar4;
                  *(undefined1 *)(param_1 + 0xa4) =
                       *(undefined1 *)(*(int *)(param_1 + 0xa8) + (uint)*pbVar4);
                  iVar8 = *(int *)(param_1 + 100);
                  fVar12 = extraout_s0_06;
                  goto LAB_00102862;
                }
                pCVar3 = *(CapcomOrderableList<RecipeAndVariants*> **)(param_1 + 0x9c);
                iVar9 = (uint)*(byte *)(param_1 + 0xa0) * 2 + 1;
              }
              else {
                pCVar3 = *(CapcomOrderableList<RecipeAndVariants*> **)(param_1 + 0x9c);
                iVar9 = (uint)*(byte *)(param_1 + 0xa0) << 1;
              }
              pbVar4 = (byte *)CapcomOrderableList<RecipeAndVariants*>::get(pCVar3,iVar9);
              pcVar10 = (char *)(*(int *)(param_1 + 0xa8) + (uint)*pbVar4);
              iVar2 = Vector<bool>::indexOf
                                ((Vector<bool> *)(pbVar4 + 4),(bool)('\x01' - (*pcVar10 == '\0')));
              iVar9 = iVar2 + 1;
              if (*(int *)(pbVar4 + 8) + 1 <= iVar2 + 1) {
                iVar9 = 0;
              }
            }
            else {
              pCVar3 = *(CapcomOrderableList<RecipeAndVariants*> **)(param_1 + 0x9c);
              iVar9 = (uint)*(byte *)(param_1 + 0xa0) << 1;
LAB_00102660:
              pbVar4 = (byte *)CapcomOrderableList<RecipeAndVariants*>::get(pCVar3,iVar9);
              pcVar10 = (char *)(*(int *)(param_1 + 0xa8) + (uint)*pbVar4);
              iVar2 = Vector<bool>::indexOf
                                ((Vector<bool> *)(pbVar4 + 4),(bool)('\x01' - (*pcVar10 == '\0')));
              iVar9 = iVar2 + -1;
              if (iVar2 + -1 < 0) {
                iVar9 = *(int *)(pbVar4 + 8);
              }
            }
            *pcVar10 = *(char *)(*(int *)(pbVar4 + 0xc) + iVar9);
            setPage((FriendMenuDialog *)param_1,(uint)*(byte *)(param_1 + 0xa0));
            goto LAB_00102732;
          }
          iVar9 = *(byte *)(param_1 + 0xa0) + 1;
        }
        else {
          iVar9 = *(byte *)(param_1 + 0xa0) - 1;
        }
        setPage((FriendMenuDialog *)param_1,iVar9);
        pageFlip();
      }
      else {
LAB_00102862:
        ZombieCafe::playEffect(iVar8,fVar12);
        hide((FriendMenuDialog *)param_1);
      }
    }
LAB_00102732:
    *(undefined1 *)(*(int *)(param_1 + 100) + DAT_00102878) = 1;
    iVar9 = *(int *)(*(int *)(param_1 + 100) + DAT_0010287c) *
            *(int *)(*(int *)(param_1 + 0x7c) + 0xc);
    uVar7 = iVar9 >> 0x1f;
    uVar7 = (iVar9 >> 0x12) + uVar7 ^ uVar7;
    iVar9 = ScreenElement::localToParentCoords
                      (*(ScreenElement **)(param_1 + 0x74),
                       *(int *)(*(ScreenElement **)(param_1 + 0x74) + 0xc) >> 1,0);
    iVar2 = ScreenElement::localToParentCoords
                      (*(ScreenElement **)(param_1 + 0x78),
                       *(int *)(*(ScreenElement **)(param_1 + 0x78) + 0xc) >> 1,0);
    iVar8 = *(int *)(*(int *)(param_1 + 0x74) + 8);
    sVar1 = ScreenElement::localToParentCoords
                      (*(ScreenElement **)(param_1 + 0x70),0,
                       *(int *)(*(ScreenElement **)(param_1 + 0x70) + 0x10));
    uVar11 = *(undefined4 *)(param_1 + 0x7c);
    uVar5 = ScreenElement::localToParentCoords
                      (*(ScreenElement **)(param_1 + 0x70),uVar7,
                       *(int *)(*(ScreenElement **)(param_1 + 0x70) + 0x10) >> 1);
    FUN_0010168a(uVar11,uVar5);
    this = *(ScreenElement **)(param_1 + 0x70);
    uVar11 = *(undefined4 *)(param_1 + 0x80);
    uVar5 = ScreenElement::localToParentCoords
                      (this,*(int *)(this + 0xc) - uVar7,*(int *)(this + 0x10) >> 1);
    FUN_0010168a(uVar11,uVar5);
    iVar8 = iVar8 + uVar7;
    (**(code **)(**(int **)(param_1 + 0x88) + 0x14))(*(int **)(param_1 + 0x88),iVar9 >> 0x10,iVar8);
    (**(code **)(**(int **)(param_1 + 0x8c) + 0x14))
              (*(int **)(param_1 + 0x8c),iVar9 >> 0x10,(int)sVar1 - uVar7);
    (**(code **)(**(int **)(param_1 + 0x90) + 0x14))(*(int **)(param_1 + 0x90),iVar2 >> 0x10,iVar8);
    (**(code **)(**(int **)(param_1 + 0x94) + 0x14))
              (*(int **)(param_1 + 0x94),iVar2 >> 0x10,(int)sVar1 - uVar7);
    break;
  case '\x04':
    *(undefined1 *)(*(int *)(param_1 + 100) + DAT_00102878) = 1;
    *(undefined1 *)(param_1 + 0x60) = 2;
  }
  return;
}


