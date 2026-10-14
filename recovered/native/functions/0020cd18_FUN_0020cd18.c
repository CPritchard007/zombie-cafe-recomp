/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0020cd18 FUN_0020cd18 */

ScreenElement * FUN_0020cd18(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  ScreenElement *pSVar8;
  CImage *pCVar9;
  ZCImageButton *pZVar10;
  BitmapTextElement *pBVar11;
  char *pcVar12;
  String *pSVar13;
  int iVar14;
  undefined4 uVar15;
  ImageElement *this;
  bool bVar16;
  int iVar17;
  code *pcVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  int *piVar22;
  int *piVar23;
  int iVar24;
  int iVar25;
  ScreenElement *unaff_r5;
  undefined4 uVar26;
  int iVar27;
  int iVar28;
  undefined4 uVar29;
  CImage *unaff_r7;
  float extraout_s0;
  undefined8 uVar30;
  float extraout_s1;
  int in_stack_00000020;
  undefined4 in_stack_00000028;
  int in_stack_0000002c;
  undefined4 in_stack_00000034;
  int in_stack_00000038;
  int in_stack_00000048;
  int in_stack_0000004c;
  int in_stack_00000198;
  int in_stack_0000019c;
  
  String::valueOf((int)&stack0x000000b0);
  iVar20 = *(int *)(unaff_r5 + 0x68);
  iVar7 = SmDev();
  uVar26 = *(undefined4 *)((*(int *)(DAT_0020cf28 + iVar7 * 4 + 0x20cd5e) + 0x136) * 4 + iVar20);
  pSVar8 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar8,&stack0x000000b0,uVar26,0xffffffff);
  *(ScreenElement **)(unaff_r5 + 0x90) = pSVar8;
  ScreenElement::addChild(unaff_r5,pSVar8);
  String::~String((String *)&stack0x000000b0);
  String::valueOf((int)&stack0x000000b8);
  iVar20 = *(int *)(unaff_r5 + 0x68);
  iVar7 = SmDev();
  uVar26 = *(undefined4 *)((*(int *)(DAT_0020cf2c + iVar7 * 4 + 0x20cdb6) + 0x136) * 4 + iVar20);
  pSVar8 = (ScreenElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            ((BitmapTextElement *)pSVar8,&stack0x000000b8,uVar26,0xffffffff);
  *(ScreenElement **)(unaff_r5 + 0x94) = pSVar8;
  ScreenElement::addChild(unaff_r5,pSVar8);
  String::~String((String *)&stack0x000000b8);
  pCVar9 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(unaff_r5 + 0x68) + DAT_0020cf14),0x7f,false);
  pZVar10 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar10,'$',pCVar9,(CImage *)0x0,0,0,false);
  pSVar8 = unaff_r5 + 0xac;
  *(ZCImageButton **)pSVar8 = pZVar10;
  uVar30 = ScreenElement::addChild(unaff_r5,(ScreenElement *)pZVar10);
  ImageButton::setScale(*(ImageButton **)pSVar8,(float)uVar30,(float)((ulonglong)uVar30 >> 0x20));
  (**(code **)(**(int **)pSVar8 + 0x20))(*(int **)pSVar8,0);
  pCVar9 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(unaff_r5 + 0x68) + DAT_0020cf14),10,false);
  pZVar10 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(pZVar10,'\x12',pCVar9,(CImage *)0x0,0,0,false);
  pSVar8 = unaff_r5 + 0xa8;
  *(ZCImageButton **)pSVar8 = pZVar10;
  uVar30 = ScreenElement::addChild(unaff_r5,(ScreenElement *)pZVar10);
  ImageButton::setScale(*(ImageButton **)pSVar8,(float)uVar30,(float)((ulonglong)uVar30 >> 0x20));
  pcVar18 = *(code **)(**(int **)pSVar8 + 0x2c);
  String::String((String *)&stack0x000000c0,
                 (String *)
                 (*(int *)(*(int *)(*(int *)(unaff_r5 + 0x68) + 0x4b0) + 8) +
                 **(int **)(in_stack_00000020 + DAT_0020cf30) * 8));
  iVar20 = *(int *)(unaff_r5 + 0x68);
  iVar7 = SmDev();
  uVar26 = *(undefined4 *)((*(int *)(iVar7 * 4 + DAT_0020cf34 + 0x20ce84) + 0x136) * 4 + iVar20);
  uVar21 = *(undefined4 *)(unaff_r5 + 0xa8);
  pBVar11 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar11,&stack0x000000c0,uVar26,0xffffffff);
  *(BitmapTextElement **)(unaff_r5 + 0x84) = pBVar11;
  (*pcVar18)(uVar21,pBVar11);
  String::~String((String *)&stack0x000000c0);
  (**(code **)(**(int **)(unaff_r5 + 0x8c) + 0x20))(*(int **)(unaff_r5 + 0x8c),0);
  (**(code **)(**(int **)(unaff_r5 + 0x98) + 0x20))(*(int **)(unaff_r5 + 0x98),0);
  bVar16 = SUB41(in_stack_0000002c,0);
  if (in_stack_00000048 == 1) {
    piVar22 = *(int **)(unaff_r5 + 0x7c);
    pcVar18 = *(code **)(*piVar22 + 0x44);
    String::String((String *)&stack0x00000100,
                   (String *)
                   (*(int *)(*(int *)(*(int *)(unaff_r5 + 0x68) + 0x4b0) + 8) +
                   **(int **)(in_stack_00000020 + DAT_0020d26c) * 8));
    (*pcVar18)(piVar22,&stack0x00000100);
    String::~String((String *)&stack0x00000100);
    piVar22 = *(int **)(unaff_r5 + 0x80);
    pcVar18 = *(code **)(*piVar22 + 0x44);
    String::String((String *)&stack0x00000108,
                   (String *)
                   (*(int *)(*(int *)(*(int *)(unaff_r5 + 0x68) + 0x4b0) + 8) +
                   **(int **)(in_stack_00000020 + DAT_0020d270) * 8));
    (*pcVar18)(piVar22,&stack0x00000108);
    String::~String((String *)&stack0x00000108);
    (**(code **)(**(int **)(unaff_r5 + 0x70) + 0x18))
              (*(int **)(unaff_r5 + 0x70),*(undefined4 *)(*(int *)(unaff_r5 + 0x7c) + 0xc),3);
    iVar7 = *(int *)(unaff_r5 + 0x68);
    if (in_stack_0000002c == 0) {
      if ((unaff_r5[0x61] == (ScreenElement)0x0) && (unaff_r5[0x62] == (ScreenElement)0x0)) {
        unaff_r7 = (CImage *)
                   PackedImage::getImage
                             (*(PackedImage **)(iVar7 + DAT_0020d24c),in_stack_0000019c + 0x6b,
                              bVar16);
        *(undefined4 *)(unaff_r7 + 0x2c) = 0x3fc00000;
        *(undefined4 *)(unaff_r7 + 0x30) = DAT_0020d258;
        piVar22 = *(int **)(unaff_r5 + 0x88);
        pcVar18 = *(code **)(*piVar22 + 0x44);
        ZombieCafe::getEnemyCafeName((int)&stack0x00000128);
        (*pcVar18)(piVar22,&stack0x00000128);
        pSVar13 = (String *)&stack0x00000128;
      }
      else {
        unaff_r7 = (CImage *)
                   PackedImage::getImage
                             (*(PackedImage **)(iVar7 + DAT_0020d24c),
                              *(int *)(in_stack_0000019c * 4 +
                                      *(int *)(in_stack_00000020 + DAT_0020d250)),false);
        if (unaff_r5[99] == (ScreenElement)0x0) {
          piVar22 = *(int **)(unaff_r5 + 0x88);
          pcVar18 = *(code **)(*piVar22 + 0x44);
          pcVar12 = (char *)ZombieCafe::getBossName
                                      (*(ZombieCafe **)(unaff_r5 + 0x68),in_stack_0000019c);
          String::String((String *)&stack0x00000120,pcVar12);
          (*pcVar18)(piVar22,&stack0x00000120);
          pSVar13 = (String *)&stack0x00000120;
        }
        else {
          piVar22 = *(int **)(unaff_r5 + 0x88);
          pcVar18 = *(code **)(*piVar22 + 0x44);
          String::String((String *)&stack0x00000118,(char *)(DAT_0020d274 + 0x20d1dc));
          (*pcVar18)(piVar22,&stack0x00000118);
          pSVar13 = (String *)&stack0x00000118;
        }
      }
    }
    else {
      unaff_r7 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar7 + DAT_0020d24c),0x8a,false)
      ;
      piVar22 = *(int **)(unaff_r5 + 0x88);
      pcVar18 = *(code **)(*piVar22 + 0x44);
      String::String((String *)&stack0x00000110,(String *)(in_stack_00000198 + 0x18));
      (*pcVar18)(piVar22,&stack0x00000110);
      pSVar13 = (String *)&stack0x00000110;
    }
  }
  else {
    if (in_stack_00000048 == 0) {
      CRAMHoover::beginTrackEvent(*(char **)(*(int *)(unaff_r5 + 0x68) + 0x840));
      ZombieCafe::addMixPanelHeader(*(ZombieCafe **)(unaff_r5 + 0x68));
      CRAMHoover::endTrackEvent();
      piVar22 = *(int **)(unaff_r5 + 0x7c);
      pcVar18 = *(code **)(*piVar22 + 0x44);
      String::String((String *)&stack0x000000c8,
                     (String *)
                     (*(int *)(*(int *)(*(int *)(unaff_r5 + 0x68) + 0x4b0) + 8) +
                     **(int **)(in_stack_00000020 + DAT_0020d244) * 8));
      (*pcVar18)(piVar22,&stack0x000000c8);
      String::~String((String *)&stack0x000000c8);
      if (in_stack_0000004c == 0) {
        piVar22 = *(int **)(unaff_r5 + 0x80);
        pcVar18 = *(code **)(*piVar22 + 0x44);
        String::String((String *)&stack0x000000d0,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(unaff_r5 + 0x68) + 0x4b0) + 8) +
                       **(int **)(in_stack_00000020 + DAT_0020d248) * 8));
        (*pcVar18)(piVar22,&stack0x000000d0);
        String::~String((String *)&stack0x000000d0);
        iVar7 = *(int *)(unaff_r5 + 0x68);
        if (in_stack_0000002c == 0) {
          if ((unaff_r5[0x61] == (ScreenElement)0x0) && (unaff_r5[0x62] == (ScreenElement)0x0)) {
            unaff_r7 = (CImage *)
                       PackedImage::getImage
                                 (*(PackedImage **)(iVar7 + DAT_0020d24c),in_stack_0000019c + 0x6b,
                                  bVar16);
            *(undefined4 *)(unaff_r7 + 0x2c) = 0x3fc00000;
            *(undefined4 *)(unaff_r7 + 0x30) = DAT_0020d258;
            piVar22 = *(int **)(unaff_r5 + 0x88);
            pcVar18 = *(code **)(*piVar22 + 0x44);
            ZombieCafe::getEnemyCafeName((int)&stack0x000000f0);
            (*pcVar18)(piVar22,&stack0x000000f0);
            pSVar13 = (String *)&stack0x000000f0;
          }
          else {
            unaff_r7 = (CImage *)
                       PackedImage::getImage
                                 (*(PackedImage **)(iVar7 + DAT_0020d24c),
                                  *(int *)(in_stack_0000019c * 4 +
                                          *(int *)(in_stack_00000020 + DAT_0020d250)),false);
            if (unaff_r5[99] == (ScreenElement)0x0) {
              piVar22 = *(int **)(unaff_r5 + 0x88);
              pcVar18 = *(code **)(*piVar22 + 0x44);
              pcVar12 = (char *)ZombieCafe::getBossName
                                          (*(ZombieCafe **)(unaff_r5 + 0x68),in_stack_0000019c);
              String::String((String *)&stack0x000000e8,pcVar12);
              (*pcVar18)(piVar22,&stack0x000000e8);
              pSVar13 = (String *)&stack0x000000e8;
            }
            else {
              piVar22 = *(int **)(unaff_r5 + 0x88);
              pcVar18 = *(code **)(*piVar22 + 0x44);
              String::String((String *)&stack0x000000e0,(char *)(DAT_0020d254 + 0x20d032));
              (*pcVar18)(piVar22,&stack0x000000e0);
              pSVar13 = (String *)&stack0x000000e0;
            }
          }
        }
        else {
          unaff_r7 = (CImage *)
                     PackedImage::getImage(*(PackedImage **)(iVar7 + DAT_0020d24c),0x8a,false);
          piVar22 = *(int **)(unaff_r5 + 0x88);
          pcVar18 = *(code **)(*piVar22 + 0x44);
          String::String((String *)&stack0x000000d8,(String *)(in_stack_00000198 + 0x18));
          (*pcVar18)(piVar22,&stack0x000000d8);
          pSVar13 = (String *)&stack0x000000d8;
        }
        String::~String(pSVar13);
      }
      else {
        piVar22 = *(int **)(unaff_r5 + 0x80);
        pcVar18 = *(code **)(*piVar22 + 0x44);
        String::String((String *)&stack0x000000f8,
                       (String *)
                       (*(int *)(*(int *)(*(int *)(unaff_r5 + 0x68) + 0x4b0) + 8) +
                       **(int **)(in_stack_00000020 + DAT_0020d25c) * 8));
        (*pcVar18)(piVar22,&stack0x000000f8);
        String::~String((String *)&stack0x000000f8);
        unaff_r7 = (CImage *)
                   PackedImage::getImage
                             (*(PackedImage **)(*(int *)(unaff_r5 + 0x68) + DAT_0020d260),
                              (int)*(short *)(*(int *)(*(int *)(unaff_r5 + 0x68) + 0x4e8) +
                                              in_stack_00000038 + 0x14),true);
        *(undefined4 *)(unaff_r7 + 0x2c) = DAT_0020d264;
        *(undefined4 *)(unaff_r7 + 0x30) = DAT_0020d268;
      }
      (**(code **)(**(int **)(unaff_r5 + 0x70) + 0x18))
                (*(int **)(unaff_r5 + 0x70),*(undefined4 *)(*(int *)(unaff_r5 + 0x7c) + 0xc),3);
      goto LAB_0020d434;
    }
    if (in_stack_00000048 != 2) goto LAB_0020d434;
    piVar22 = *(int **)(unaff_r5 + 0x7c);
    pcVar18 = *(code **)(*piVar22 + 0x44);
    String::String((String *)&stack0x00000130,
                   (String *)
                   (*(int *)(*(int *)(*(int *)(unaff_r5 + 0x68) + 0x4b0) + 8) +
                   **(int **)(in_stack_00000020 + DAT_0020d3cc) * 8));
    (*pcVar18)(piVar22,&stack0x00000130);
    String::~String((String *)&stack0x00000130);
    (**(code **)(**(int **)(unaff_r5 + 0x70) + 0x18))
              (*(int **)(unaff_r5 + 0x70),*(undefined4 *)(*(int *)(unaff_r5 + 0x7c) + 0xc),3);
    if (in_stack_0000004c != 0) {
      piVar22 = *(int **)(unaff_r5 + 0x80);
      pcVar18 = *(code **)(*piVar22 + 0x44);
      String::String((String *)&stack0x00000160,
                     (String *)
                     (*(int *)(*(int *)(*(int *)(unaff_r5 + 0x68) + 0x4b0) + 8) +
                     **(int **)(in_stack_00000020 + DAT_0020d7c8) * 8));
      (*pcVar18)(piVar22,&stack0x00000160);
      String::~String((String *)&stack0x00000160);
      unaff_r7 = (CImage *)
                 PackedImage::getImage
                           (*(PackedImage **)(*(int *)(unaff_r5 + 0x68) + DAT_0020d7cc),
                            (int)*(short *)(*(int *)(*(int *)(unaff_r5 + 0x68) + 0x4e8) +
                                            in_stack_00000038 + 0x14),true);
      *(undefined4 *)(unaff_r7 + 0x2c) = DAT_0020d7d0;
      *(undefined4 *)(unaff_r7 + 0x30) = DAT_0020d7d4;
      goto LAB_0020d434;
    }
    piVar22 = *(int **)(unaff_r5 + 0x80);
    pcVar18 = *(code **)(*piVar22 + 0x44);
    String::String((String *)&stack0x00000138,
                   (String *)
                   (*(int *)(*(int *)(*(int *)(unaff_r5 + 0x68) + 0x4b0) + 8) +
                   **(int **)(in_stack_00000020 + DAT_0020d3d0) * 8));
    (*pcVar18)(piVar22,&stack0x00000138);
    String::~String((String *)&stack0x00000138);
    iVar7 = *(int *)(unaff_r5 + 0x68);
    if (in_stack_0000002c == 0) {
      if ((unaff_r5[0x61] == (ScreenElement)0x0) && (unaff_r5[0x62] == (ScreenElement)0x0)) {
        unaff_r7 = (CImage *)
                   PackedImage::getImage
                             (*(PackedImage **)(iVar7 + DAT_0020d3d4),in_stack_0000019c + 0x6b,
                              bVar16);
        *(undefined4 *)(unaff_r7 + 0x2c) = 0x3fc00000;
        *(undefined4 *)(unaff_r7 + 0x30) = DAT_0020d3e0;
        piVar22 = *(int **)(unaff_r5 + 0x88);
        pcVar18 = *(code **)(*piVar22 + 0x44);
        ZombieCafe::getEnemyCafeName((int)&stack0x00000158);
        (*pcVar18)(piVar22,&stack0x00000158);
        pSVar13 = (String *)&stack0x00000158;
      }
      else {
        unaff_r7 = (CImage *)
                   PackedImage::getImage
                             (*(PackedImage **)(iVar7 + DAT_0020d3d4),
                              *(int *)(in_stack_0000019c * 4 +
                                      *(int *)(in_stack_00000020 + DAT_0020d3d8)),false);
        if (unaff_r5[99] == (ScreenElement)0x0) {
          piVar22 = *(int **)(unaff_r5 + 0x88);
          pcVar18 = *(code **)(*piVar22 + 0x44);
          pcVar12 = (char *)ZombieCafe::getBossName
                                      (*(ZombieCafe **)(unaff_r5 + 0x68),in_stack_0000019c);
          String::String((String *)&stack0x00000150,pcVar12);
          (*pcVar18)(piVar22,&stack0x00000150);
          pSVar13 = (String *)&stack0x00000150;
        }
        else {
          piVar22 = *(int **)(unaff_r5 + 0x88);
          pcVar18 = *(code **)(*piVar22 + 0x44);
          String::String((String *)&stack0x00000148,(char *)(DAT_0020d3dc + 0x20d362));
          (*pcVar18)(piVar22,&stack0x00000148);
          pSVar13 = (String *)&stack0x00000148;
        }
      }
    }
    else {
      unaff_r7 = (CImage *)PackedImage::getImage(*(PackedImage **)(iVar7 + DAT_0020d3d4),0x8a,false)
      ;
      piVar22 = *(int **)(unaff_r5 + 0x88);
      pcVar18 = *(code **)(*piVar22 + 0x44);
      String::String((String *)&stack0x00000140,(String *)(in_stack_00000198 + 0x18));
      (*pcVar18)(piVar22,&stack0x00000140);
      pSVar13 = (String *)&stack0x00000140;
    }
  }
  String::~String(pSVar13);
LAB_0020d434:
  piVar23 = *(int **)(unaff_r5 + 0x9c);
  pcVar18 = *(code **)(*piVar23 + 0x14);
  iVar7 = SmDev();
  iVar17 = *(int *)(in_stack_00000020 + DAT_0020d7d8);
  iVar20 = *(int *)(unaff_r5 + 0x10);
  uVar26 = *(undefined4 *)(iVar7 * 4 + iVar17);
  piVar22 = *(int **)(in_stack_00000020 + DAT_0020d7dc);
  iVar27 = *piVar22;
  iVar7 = SmDev();
  (*pcVar18)(piVar23,uVar26,iVar20 - *(int *)(iVar7 * 4 + iVar27));
  pcVar18 = *(code **)(**(int **)(unaff_r5 + 0xa0) + 0x14);
  iVar28 = *(int *)(*(int *)(unaff_r5 + 0x9c) + 4);
  iVar7 = SmDev();
  iVar7 = *(int *)(iVar7 * 4 + *(int *)(in_stack_00000020 + DAT_0020d7e0));
  iVar20 = SmDev();
  iVar24 = *(int *)(iVar20 * 4 + *(int *)(in_stack_00000020 + DAT_0020d7e4));
  iVar20 = *(int *)(*(int *)(unaff_r5 + 0x9c) + 8);
  iVar19 = *(int *)(*(int *)(unaff_r5 + 0x9c) + 0x10);
  iVar27 = SmDev();
  iVar25 = *(int *)(in_stack_00000020 + DAT_0020d7e8);
  iVar14 = *(int *)(*(int *)(unaff_r5 + 0xa0) + 0x10);
  (*pcVar18)(*(int *)(unaff_r5 + 0xa0),iVar28 + iVar7 + iVar24 / 2,
             ((iVar20 - iVar19) + *(int *)(iVar27 * 4 + iVar25)) -
             ((int)(((uint)(iVar14 >> 0x1f) >> 0x1e) + iVar14) >> 2));
  iVar20 = *(int *)(unaff_r5 + 0x9c);
  iVar27 = *(int *)(iVar20 + 0x10);
  uVar26 = __floatsisf(*(int *)(iVar20 + 0xc) * 3 >> 2);
  uVar29 = *(undefined4 *)(unaff_r7 + 0x2c);
  uVar21 = __floatsisf((int)*(short *)(unaff_r7 + 0x20));
  uVar21 = __mulsf3(uVar21,uVar29);
  uVar15 = __floatsisf((int)*(short *)(unaff_r7 + 0x2a));
  uVar21 = __addsf3(uVar21,uVar15);
  uVar15 = __floatsisf((int)*(short *)(unaff_r7 + 0x26));
  __addsf3(uVar21,uVar15);
  __fixsfsi();
  uVar21 = __floatsisf();
  uVar21 = __divsf3(uVar26,uVar21);
  uVar26 = __floatsisf(iVar27 * 3 >> 2);
  uVar15 = __floatsisf((int)*(short *)(unaff_r7 + 0x22));
  uVar15 = __mulsf3(uVar15,uVar29);
  uVar29 = __floatsisf((int)*(short *)(unaff_r7 + 0x24));
  uVar15 = __addsf3(uVar15,uVar29);
  uVar29 = __floatsisf((int)*(short *)(unaff_r7 + 0x28));
  __addsf3(uVar15,uVar29);
  __fixsfsi();
  uVar15 = __floatsisf();
  uVar26 = __divsf3(uVar26,uVar15);
  iVar7 = __aeabi_fcmplt(uVar21,uVar26);
  if (iVar7 != 0) {
    uVar26 = uVar21;
  }
  iVar7 = __aeabi_fcmplt(uVar26,DAT_0020d7ec);
  if (iVar7 == 0) {
    uVar26 = DAT_0020d7ec;
  }
  iVar7 = __aeabi_fcmplt(in_stack_00000034,in_stack_00000028);
  in_stack_00000038 = in_stack_00000034;
  if (iVar7 == 0) {
    in_stack_00000038 = in_stack_00000028;
  }
  iVar28 = *(int *)(iVar20 + 8);
  iVar24 = *(int *)(*(int *)(unaff_r5 + 0xa0) + 4);
  iVar7 = SmDev();
  iVar7 = *(int *)(iVar25 + iVar7 * 4);
  iVar20 = SmDev();
  iVar20 = *(int *)(iVar20 * 4 + *(int *)(in_stack_00000020 + DAT_0020d7f0));
  sVar1 = *(short *)(unaff_r7 + 0x20);
  uVar29 = *(undefined4 *)(unaff_r7 + 0x2c);
  sVar2 = *(short *)(unaff_r7 + 0x2a);
  sVar3 = *(short *)(unaff_r7 + 0x26);
  sVar4 = *(short *)(unaff_r7 + 0x22);
  sVar5 = *(short *)(unaff_r7 + 0x24);
  sVar6 = *(short *)(unaff_r7 + 0x28);
  this = (ImageElement *)operator_new(0x98);
  uVar26 = __mulsf3(uVar26,in_stack_00000038);
  uVar21 = __floatsisf((int)sVar1);
  uVar21 = __mulsf3(uVar21,uVar29);
  uVar15 = __floatsisf((int)sVar2);
  uVar21 = __addsf3(uVar21,uVar15);
  uVar15 = __floatsisf((int)sVar3);
  __addsf3(uVar21,uVar15);
  __fixsfsi();
  uVar21 = __floatsisf();
  __mulsf3(uVar21,uVar26);
  iVar14 = __fixsfsi();
  uVar21 = __floatsisf((int)sVar4);
  uVar21 = __mulsf3(uVar21,uVar29);
  uVar15 = __floatsisf((int)sVar5);
  uVar21 = __addsf3(uVar21,uVar15);
  uVar15 = __floatsisf((int)sVar6);
  __addsf3(uVar21,uVar15);
  __fixsfsi();
  uVar21 = __floatsisf();
  __mulsf3(uVar21,uVar26);
  iVar19 = __fixsfsi();
  ImageElement::ImageElement
            (this,unaff_r7,(iVar28 - iVar27) + iVar7 + iVar20 / 2 & 0xffffU | iVar24 << 0x10,iVar14,
             iVar19,extraout_s0,extraout_s1,(uchar)uVar26,(bool)(uchar)uVar26);
  *(ImageElement **)(unaff_r5 + 0xa4) = this;
  ScreenElement::addChild(unaff_r5,(ScreenElement *)this);
  piVar23 = *(int **)(unaff_r5 + 0x7c);
  iVar27 = *piVar22;
  pcVar18 = *(code **)(*piVar23 + 0x14);
  iVar20 = *(int *)(*(int *)(unaff_r5 + 0x6c) + 0xc);
  iVar7 = SmDev();
  (*pcVar18)(piVar23,iVar20 / 2,*(undefined4 *)(iVar7 * 4 + iVar27));
  (**(code **)(**(int **)(unaff_r5 + 0x70) + 0x14))
            (*(int **)(unaff_r5 + 0x70),*(int *)(unaff_r5 + 0xc) / 2,
             *(int *)(*(int *)(unaff_r5 + 0x7c) + 8) + *(int *)(*(int *)(unaff_r5 + 0x7c) + 0x10));
  __mulsf3(in_stack_00000034,DAT_0020d7f4);
  uVar26 = __fixsfsi();
  piVar23 = *(int **)(unaff_r5 + 0x70);
  iVar7 = *piVar23;
  uVar21 = __floatsisf(**(undefined1 **)(in_stack_00000020 + DAT_0020d7f8));
  __mulsf3(uVar21,in_stack_00000028);
  uVar21 = __fixsfsi();
  (**(code **)(iVar7 + 0x18))(piVar23,uVar26,uVar21);
  *(undefined4 *)(*(int *)(unaff_r5 + 0x70) + 0x18) = 0xffffffff;
  piVar23 = *(int **)(unaff_r5 + 0x80);
  iVar20 = *(int *)(unaff_r5 + 0xc);
  pcVar18 = *(code **)(*piVar23 + 0x14);
  uVar26 = *(undefined4 *)(*(int *)(unaff_r5 + 0x7c) + 8);
  iVar7 = SmDev();
  uVar26 = __floatsisf(uVar26);
  __addsf3(uVar26,*(undefined4 *)(iVar7 * 4 + *(int *)(in_stack_00000020 + DAT_0020d7fc)));
  uVar26 = __fixsfsi();
  (*pcVar18)(piVar23,iVar20 / 2,uVar26);
  piVar23 = *(int **)(unaff_r5 + 0xac);
  iVar19 = *(int *)(unaff_r5 + 0xc);
  pcVar18 = *(code **)(*piVar23 + 0x14);
  iVar7 = SmDev();
  iVar20 = *(int *)(unaff_r5 + 0x10);
  iVar27 = *piVar22;
  iVar14 = *(int *)(iVar17 + iVar7 * 4);
  iVar7 = SmDev();
  (*pcVar18)(piVar23,iVar19 - iVar14,iVar20 - *(int *)(iVar7 * 4 + iVar27));
  piVar23 = *(int **)(unaff_r5 + 0x88);
  pSVar8 = *(ScreenElement **)(unaff_r5 + 0x9c);
  iVar20 = *(int *)(pSVar8 + 0xc);
  iVar7 = SmDev();
  iVar7 = ScreenElement::localToParentCoords(pSVar8,iVar20,*(int *)(iVar25 + iVar7 * 4));
  (**(code **)(*piVar23 + 0x14))(piVar23,iVar7 >> 0x10,(int)(short)iVar7);
  *(undefined1 *)(*(int *)(unaff_r5 + 0x88) + 0x7f) = 0x11;
  piVar23 = *(int **)(unaff_r5 + 0x8c);
  pSVar8 = *(ScreenElement **)(unaff_r5 + 0x9c);
  iVar20 = *(int *)(pSVar8 + 0xc);
  iVar7 = SmDev();
  iVar7 = ScreenElement::localToParentCoords
                    (pSVar8,iVar20,*(int *)(iVar7 * 4 + DAT_0020db54 + 0x20d880));
  (**(code **)(*piVar23 + 0x14))(piVar23,iVar7 >> 0x10,(int)(short)iVar7);
  *(undefined1 *)(*(int *)(unaff_r5 + 0x8c) + 0x7f) = 0x11;
  iVar7 = *(int *)(unaff_r5 + 0x8c);
  (**(code **)(**(int **)(unaff_r5 + 0x98) + 0x14))
            (*(int **)(unaff_r5 + 0x98),*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8));
  piVar23 = *(int **)(unaff_r5 + 0x78);
  pcVar18 = *(code **)(*piVar23 + 0x14);
  iVar17 = *(int *)(*(int *)(unaff_r5 + 0x9c) + 4);
  iVar19 = *(int *)(*(int *)(unaff_r5 + 0x9c) + 0xc);
  iVar20 = *(int *)(*(int *)(unaff_r5 + 0xac) + 8);
  iVar27 = *(int *)(*(int *)(unaff_r5 + 0xac) + 0x10);
  iVar14 = *piVar22;
  iVar7 = SmDev();
  (*pcVar18)(piVar23,iVar17 + iVar19,(iVar20 - iVar27) - *(int *)(iVar7 * 4 + iVar14));
  iVar7 = *(int *)(unaff_r5 + 0x78);
  piVar22 = *(int **)(unaff_r5 + 0x74);
  (**(code **)(*piVar22 + 0x14))
            (piVar22,*(int *)(iVar7 + 4) + (*(int *)(unaff_r5 + 0xc) - *(int *)(iVar7 + 4)) / 2,
             (*(int *)(iVar7 + 8) - *(int *)(iVar7 + 0x10) / 2) + piVar22[4] / 2);
  iVar7 = *(int *)(unaff_r5 + 0x78);
  (**(code **)(**(int **)(unaff_r5 + 0x94) + 0x14))
            (*(int **)(unaff_r5 + 0x94),*(int *)(iVar7 + 4) + *(int *)(iVar7 + 0xc),
             *(int *)(iVar7 + 8) - *(int *)(iVar7 + 0x10) / 2);
  (**(code **)(**(int **)(unaff_r5 + 0x90) + 0x14))
            (*(int **)(unaff_r5 + 0x90),
             *(int *)(*(int *)(unaff_r5 + 0x74) + 4) + *(int *)(*(int *)(unaff_r5 + 0x74) + 0xc),
             *(undefined4 *)(*(int *)(unaff_r5 + 0x94) + 8));
  *(undefined1 *)(*(int *)(unaff_r5 + 0x84) + 0x7f) = 0x12;
  iVar7 = SmDev();
  if ((iVar7 == 0) || (iVar7 = SmDev(), iVar7 == 5)) {
    piVar22 = *(int **)(unaff_r5 + 0xa8);
    (**(code **)(*piVar22 + 0x14))
              (piVar22,*(int *)(unaff_r5 + 0xc) / 2,*(undefined4 *)(unaff_r5 + 0x10));
    iVar7 = *(int *)(*(int *)(unaff_r5 + 0x6c) + 0xc);
    iVar20 = *(int *)(*(int *)(unaff_r5 + 0xa8) + 0x10) / 2 +
             *(int *)(*(int *)(unaff_r5 + 0x6c) + 0x10);
  }
  else {
    piVar22 = *(int **)(unaff_r5 + 0xa8);
    (**(code **)(*piVar22 + 0x14))
              (piVar22,*(int *)(unaff_r5 + 0xc) / 2,*(int *)(unaff_r5 + 0x10) - piVar22[4] / 2);
    iVar7 = *(int *)(*(int *)(unaff_r5 + 0x6c) + 0xc);
    iVar20 = *(int *)(*(int *)(unaff_r5 + 0x6c) + 0x10);
  }
  ScreenElement::setSize(unaff_r5,iVar7,iVar20);
  return unaff_r5;
}


