/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00156fa4 GameStateGatya::tickStepEffect */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GameStateGatya::tickStepEffect(long) */

void GameStateGatya::tickStepEffect(long param_1)

{
  long lVar1;
  GatyaEftImageElement *pGVar2;
  int iVar3;
  int *piVar4;
  Vector<GatyaEftCharacterInstance*> *pVVar5;
  GatyaEftCharacterInstance *this;
  CImage *pCVar6;
  Vector<GatyaEftImageElement*> *this_00;
  long in_r1;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  GameStateGatya *pGVar10;
  code *pcVar11;
  ZombieCafe *pZVar12;
  void *pvVar13;
  uint uVar14;
  int unaff_r6;
  Character *unaff_r7;
  char cVar15;
  undefined1 uVar16;
  char cVar17;
  float in_s0;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  float extraout_s0_08;
  float extraout_s0_09;
  float extraout_s0_10;
  float extraout_s0_11;
  float extraout_s0_12;
  float extraout_s0_13;
  float extraout_s0_14;
  float extraout_s0_15;
  float extraout_s0_16;
  float extraout_s0_17;
  float extraout_s0_18;
  float extraout_s0_19;
  float extraout_s0_20;
  float extraout_s0_21;
  float extraout_s0_22;
  float extraout_s0_23;
  float extraout_s0_24;
  float extraout_s0_25;
  float extraout_s0_26;
  float extraout_s0_27;
  float extraout_s0_28;
  float extraout_s0_29;
  float extraout_s0_30;
  float fVar18;
  float extraout_s0_31;
  undefined8 uVar19;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s2_02;
  float extraout_s2_03;
  float extraout_s2_04;
  float extraout_s2_05;
  float extraout_s2_06;
  float extraout_s2_07;
  float extraout_s2_08;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  float extraout_s3_02;
  float extraout_s3_03;
  float extraout_s3_04;
  float extraout_s3_05;
  float extraout_s3_06;
  float extraout_s3_07;
  float extraout_s3_08;
  float extraout_s4;
  float extraout_s4_00;
  float extraout_s4_01;
  float extraout_s4_02;
  float extraout_s4_03;
  float extraout_s4_04;
  float extraout_s4_05;
  float extraout_s4_06;
  float extraout_s4_07;
  float extraout_s4_08;
  int local_38;
  GatyaEftImageElement *pGStack_34;
  int *piStack_2c;
  code *pcStack_28;
  String aSStack_20 [12];
  
  iVar8 = *(int *)(param_1 + iRam00157018);
  local_38 = iRam0015701c + 0x156fb2;
  cVar17 = SBORROW4(iVar8,0x13000);
  cVar15 = iVar8 + -0x13000 < 0;
  uVar16 = iVar8 == 0x13000;
  lVar1 = param_1;
  if ((bool)uVar16) {
    lVar1 = FUN_00157b64();
    in_s0 = extraout_s0;
  }
  if ((bool)uVar16 || cVar15 != cVar17) {
    if (iVar8 == 0x10000) {
      pVVar5 = (Vector<GatyaEftCharacterInstance*> *)operator_new(0xc);
      Vector<GatyaEftCharacterInstance*>::Vector(pVVar5);
      *(Vector<GatyaEftCharacterInstance*> **)(param_1 + 0x1d8) = pVVar5;
      unaff_r6 = 0;
      uVar14 = param_1;
      goto LAB_00157670;
    }
    if (0x10000 < iVar8) {
      if (iVar8 != 0x11000) {
        if (iVar8 == 0x12000) {
          FUN_00157aec();
          goto LAB_00156ff0;
        }
        goto LAB_00157038;
      }
      *(undefined1 *)(lVar1 + _LAB_001576c4) = 0;
      pGVar10 = *(GameStateGatya **)(lVar1 + 0x1d8);
      if (*(int *)(pGVar10 + 4) == -1) {
        pGVar10 = (GameStateGatya *)&__DT_SYMTAB[0xfee].st_info;
        uVar19 = FUN_00157ee6();
        lVar1 = (long)uVar19;
        uVar14 = (uint)unaff_r7 >> 0x18;
        iVar8 = (int)unaff_r7 << 0x15;
        param_1 = (long)pGVar10;
        in_s0 = extraout_s0_31;
        if (((uint)unaff_r7 & 0x800) == 0 || lVar1 == 0) {
          while( true ) {
            uVar7 = __mulsf3((int)uVar19,(int)((ulonglong)uVar19 >> 0x20));
            __addsf3(iVar8,uVar7);
            this = (GatyaEftCharacterInstance *)operator_new(0x104);
            uVar19 = __floatsisf((local_38 >> 0x10) - (local_38 >> 0x1f) >> 1);
            fVar18 = (float)GatyaEftCharacterInstance::GatyaEftCharacterInstance
                                      (this,unaff_r7,(CFPathFinder *)0x0,(float)uVar19,
                                       (float)((ulonglong)uVar19 >> 0x20));
            CharacterInstance::setScale((CharacterInstance *)this,fVar18);
            CharacterInstance::setCurrentAnimation((CharacterInstance *)this,'\x01','\x01',false);
            Vector<GatyaEftCharacterInstance*>::addElement
                      (*(Vector<GatyaEftCharacterInstance*> **)(uVar14 + 0x1d8),this);
            unaff_r6 = unaff_r6 + 1;
LAB_00157670:
            if (*(int *)(*(int *)(uVar14 + 0xeb0) + 4) + 1 <= unaff_r6) break;
            uVar7 = *(undefined4 *)
                     (*(int *)(unaff_r6 * 4 + *(int *)(*(int *)(uVar14 + 0xeb0) + 8)) * 4 +
                     *(int *)(*(int *)(uVar14 + 0xc) + _LAB_001576b4));
            String::String(aSStack_20,(char *)(_LAB_001576b8 + 0x1575de));
            unaff_r7 = (Character *)operator_new(0x6c);
            Character::Character(unaff_r7,uVar7,2,1,aSStack_20);
            String::~String(aSStack_20);
            local_38 = *(int *)(*(int *)(uVar14 + 0xc) + 0x10);
            iVar8 = __floatsisf((int)(short)local_38 / 2);
            uVar19 = CONCAT44(_LAB_001576c0,*(undefined4 *)(uVar14 + _LAB_001576bc));
          }
          pVVar5 = (Vector<GatyaEftCharacterInstance*> *)operator_new(0xc);
          Vector<GatyaEftCharacterInstance*>::Vector(pVVar5);
          *(Vector<GatyaEftCharacterInstance*> **)(uVar14 + 0x1dc) = pVVar5;
          *(undefined4 *)(uVar14 + DAT_00157c00) = 0x11000;
          FUN_00157ee8();
          return;
        }
      }
      *(undefined4 *)(**(int **)(pGVar10 + 8) + 0xe0) = 1;
      uVar14 = (uint)*(byte *)(**(int **)(**(int **)(*(int *)(lVar1 + 0x1d8) + 8) + 0x8c) + 0xb40);
      if (uVar14 == 5) {
        SetTextAnim_RARE00((GameStateGatya *)param_1,in_s0);
        fVar18 = (float)SetAnim_Star((GameStateGatya *)param_1,
                                     (uint)*(byte *)(**(int **)(**(int **)(*(int *)(param_1 + 0x1d8)
                                                                          + 8) + 0x8c) + 0xb40));
        SetSonicBoom((GameStateGatya *)param_1,fVar18);
        if (*(int *)(param_1 + 0x1ac) != 0) {
          (**(code **)(**(int **)(param_1 + 0x14) + 0x34))();
          if (*(int **)(*(int *)(param_1 + 0x1ac) + 100) != (int *)0x0) {
            (**(code **)(**(int **)(*(int *)(param_1 + 0x1ac) + 100) + 4))();
          }
          if (*(int **)(param_1 + 0x1ac) != (int *)0x0) {
            (**(code **)(**(int **)(param_1 + 0x1ac) + 4))();
          }
          *(undefined4 *)(param_1 + 0x1ac) = 0;
        }
        piStack_2c = *(int **)(param_1 + 0x14);
        pcStack_28 = *(code **)(*piStack_2c + 0x2c);
        pCVar6 = (CImage *)
                 PackedImage::getImage
                           (*(PackedImage **)(*(int *)(param_1 + 0xc) + 0x810),0x1a,false);
        pGStack_34 = (GatyaEftImageElement *)operator_new(200);
        GatyaEftImageElement::GatyaEftImageElement
                  (pGStack_34,*(ZombieCafe **)(param_1 + 0xc),pCVar6,'\x12',true);
LAB_0015791a:
        *(GatyaEftImageElement **)(param_1 + 0x1ac) = pGStack_34;
        (*pcStack_28)(piStack_2c,pGStack_34);
        uVar19 = (**(code **)(**(int **)(param_1 + 0x1ac) + 0x14))
                           (*(int **)(param_1 + 0x1ac),DAT_00157bd0,DAT_00157bd0);
        uVar19 = GatyaEftImageElement::SetKey
                           (*(GatyaEftImageElement **)(param_1 + 0x1ac),(float)uVar19,
                            (float)((ulonglong)uVar19 >> 0x20),extraout_s2_01,extraout_s3_01,
                            extraout_s4_01,0,0,DAT_00157bd8);
        GatyaEftImageElement::SetKey
                  (*(GatyaEftImageElement **)(param_1 + 0x1ac),(float)uVar19,
                   (float)((ulonglong)uVar19 >> 0x20),extraout_s2_02,extraout_s3_02,extraout_s4_02,
                   DAT_00157be0,0,DAT_00157bd8);
        iVar8 = 0x29;
      }
      else {
        if (uVar14 == 6) {
          SetTextAnim_RARE01((GameStateGatya *)param_1,in_s0);
          fVar18 = (float)SetAnim_Star((GameStateGatya *)param_1,
                                       (uint)*(byte *)(**(int **)(**(int **)(*(int *)(param_1 +
                                                                                     0x1d8) + 8) +
                                                                 0x8c) + 0xb40));
          SetSonicBoom((GameStateGatya *)param_1,fVar18);
          if (*(int *)(param_1 + 0x1ac) != 0) {
            (**(code **)(**(int **)(param_1 + 0x14) + 0x34))();
            if (*(int **)(*(int *)(param_1 + 0x1ac) + 100) != (int *)0x0) {
              (**(code **)(**(int **)(*(int *)(param_1 + 0x1ac) + 100) + 4))();
            }
            if (*(int **)(param_1 + 0x1ac) != (int *)0x0) {
              (**(code **)(**(int **)(param_1 + 0x1ac) + 4))();
            }
            *(undefined4 *)(param_1 + 0x1ac) = 0;
          }
          piStack_2c = *(int **)(param_1 + 0x14);
          pcStack_28 = *(code **)(*piStack_2c + 0x2c);
          pCVar6 = (CImage *)
                   PackedImage::getImage
                             (*(PackedImage **)(*(int *)(param_1 + 0xc) + 0x810),0x1a,false);
          pGStack_34 = (GatyaEftImageElement *)operator_new(200);
          GatyaEftImageElement::GatyaEftImageElement
                    (pGStack_34,*(ZombieCafe **)(param_1 + 0xc),pCVar6,'\x12',true);
          goto LAB_0015791a;
        }
        uVar7 = __floatsisf(uVar14 + 1);
        uVar7 = __mulsf3(uVar7,DAT_00157870);
        uVar7 = __addsf3(uVar7,DAT_00157870);
        fVar18 = (float)__mulsf3(uVar7,DAT_00157874);
        SetTextAnim_GET((GameStateGatya *)param_1,fVar18);
        SetAnim_Star((GameStateGatya *)param_1,
                     (uint)*(byte *)(**(int **)(**(int **)(*(int *)(param_1 + 0x1d8) + 8) + 0x8c) +
                                    0xb40));
        if (*(int *)(param_1 + 0x1ac) != 0) {
          (**(code **)(**(int **)(param_1 + 0x14) + 0x34))();
          if (*(int **)(*(int *)(param_1 + 0x1ac) + 100) != (int *)0x0) {
            (**(code **)(**(int **)(*(int *)(param_1 + 0x1ac) + 100) + 4))();
          }
          if (*(int **)(param_1 + 0x1ac) != (int *)0x0) {
            (**(code **)(**(int **)(param_1 + 0x1ac) + 4))();
          }
          *(undefined4 *)(param_1 + 0x1ac) = 0;
        }
        piVar4 = *(int **)(param_1 + 0x14);
        pcVar11 = *(code **)(*piVar4 + 0x2c);
        pCVar6 = (CImage *)
                 PackedImage::getImage
                           (*(PackedImage **)(*(int *)(param_1 + 0xc) + 0x810),0x10,false);
        pGVar2 = (GatyaEftImageElement *)operator_new(200);
        GatyaEftImageElement::GatyaEftImageElement
                  (pGVar2,*(ZombieCafe **)(param_1 + 0xc),pCVar6,'\x12',true);
        *(GatyaEftImageElement **)(param_1 + 0x1ac) = pGVar2;
        (*pcVar11)(piVar4,pGVar2);
        uVar19 = (**(code **)(**(int **)(param_1 + 0x1ac) + 0x14))
                           (*(int **)(param_1 + 0x1ac),DAT_00157878,DAT_00157878);
        uVar19 = GatyaEftImageElement::SetKey
                           (*(GatyaEftImageElement **)(param_1 + 0x1ac),(float)uVar19,
                            (float)((ulonglong)uVar19 >> 0x20),extraout_s2,extraout_s3,extraout_s4,0
                            ,0,DAT_00157880);
        GatyaEftImageElement::SetKey
                  (*(GatyaEftImageElement **)(param_1 + 0x1ac),(float)uVar19,
                   (float)((ulonglong)uVar19 >> 0x20),extraout_s2_00,extraout_s3_00,extraout_s4_00,
                   DAT_00157888,0,DAT_00157880);
        iVar8 = 0x14;
      }
      this_00 = (Vector<GatyaEftImageElement*> *)operator_new(0xc);
      Vector<GatyaEftImageElement*>::Vector(this_00);
      *(Vector<GatyaEftImageElement*> **)(param_1 + 0x1e4) = this_00;
      piVar4 = *(int **)(param_1 + 0x18);
      pcVar11 = *(code **)(*piVar4 + 0x2c);
      pCVar6 = (CImage *)
               PackedImage::getImage(*(PackedImage **)(*(int *)(param_1 + 0xc) + 0x810),iVar8,false)
      ;
      pGVar2 = (GatyaEftImageElement *)operator_new(200);
      GatyaEftImageElement::GatyaEftImageElement
                (pGVar2,*(ZombieCafe **)(param_1 + 0xc),pCVar6,'\x12',true);
      (*pcVar11)(piVar4,pGVar2);
      fVar18 = (float)(**(code **)(*(int *)pGVar2 + 0x14))(pGVar2,DAT_00157bd0,DAT_00157bd0);
      uVar19 = ImageElement::setRot((ImageElement *)pGVar2,fVar18);
      *(undefined4 *)(pGVar2 + 0xb0) = DAT_00157be8;
      uVar19 = GatyaEftImageElement::SetKey
                         (pGVar2,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20),extraout_s2_03,
                          extraout_s3_03,extraout_s4_03,0,0x3f800000,DAT_00157bec);
      uVar19 = GatyaEftImageElement::SetKey
                         (pGVar2,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20),extraout_s2_04,
                          extraout_s3_04,extraout_s4_04,DAT_00157be0,0x3f800000,DAT_00157bec);
      GatyaEftImageElement::SetKey
                (pGVar2,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20),extraout_s2_05,
                 extraout_s3_05,extraout_s4_05,DAT_00157bf0,0x3f800000,DAT_00157bec);
      pGVar2[0xa8] = (GatyaEftImageElement)0x1;
      Vector<GatyaEftImageElement*>::addElement
                (*(Vector<GatyaEftImageElement*> **)(param_1 + 0x1e4),pGVar2);
      piVar4 = *(int **)(param_1 + 0x18);
      pcVar11 = *(code **)(*piVar4 + 0x2c);
      pCVar6 = (CImage *)
               PackedImage::getImage(*(PackedImage **)(*(int *)(param_1 + 0xc) + 0x810),iVar8,false)
      ;
      pGVar2 = (GatyaEftImageElement *)operator_new(200);
      GatyaEftImageElement::GatyaEftImageElement
                (pGVar2,*(ZombieCafe **)(param_1 + 0xc),pCVar6,'\x12',true);
      (*pcVar11)(piVar4,pGVar2);
      fVar18 = (float)(**(code **)(*(int *)pGVar2 + 0x14))(pGVar2,DAT_00157bd0,DAT_00157bd0);
      uVar19 = ImageElement::setRot((ImageElement *)pGVar2,fVar18);
      *(undefined4 *)(pGVar2 + 0xb0) = DAT_00157bf8;
      uVar19 = GatyaEftImageElement::SetKey
                         (pGVar2,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20),extraout_s2_06,
                          extraout_s3_06,extraout_s4_06,0,0x3f800000,DAT_00157bec);
      uVar19 = GatyaEftImageElement::SetKey
                         (pGVar2,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20),extraout_s2_07,
                          extraout_s3_07,extraout_s4_07,DAT_00157be0,0x3f800000,DAT_00157bec);
      GatyaEftImageElement::SetKey
                (pGVar2,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20),extraout_s2_08,
                 extraout_s3_08,extraout_s4_08,DAT_00157bf0,0x3f800000,DAT_00157bec);
      pGVar2[0xa8] = (GatyaEftImageElement)0x1;
      Vector<GatyaEftImageElement*>::addElement
                (*(Vector<GatyaEftImageElement*> **)(param_1 + 0x1e4),pGVar2);
      *(undefined4 *)(param_1 + DAT_00157c00) = 0x12000;
      pZVar12 = *(ZombieCafe **)(param_1 + 0xc);
      iVar8 = ZombieCafe::touchUpEvent(pZVar12);
      if ((iVar8 != 0) &&
         (*(int *)(pZVar12 + DAT_00157c08) <= (int)**(short **)(local_38 + DAT_00157c04))) {
        *(GameStateGatya *)(param_1 + DAT_00157c0c) = (GameStateGatya)0x1;
      }
      uVar7 = __floatsisf(in_r1);
      fVar18 = (float)__divsf3(uVar7,DAT_00157c10);
      fVar18 = (float)PlayEffectKeyAnimation_Back((GameStateGatya *)param_1,in_r1,fVar18);
      if (*(GameStateGatya *)(param_1 + DAT_00157c0c) != (GameStateGatya)0x0) {
        *(undefined4 *)(**(int **)(*(int *)(param_1 + 0x1d8) + 8) + 0xe8) = 1;
      }
      PlayEffectKeyAnimation_Birth((GameStateGatya *)param_1,fVar18);
      if (*(int *)(**(int **)(*(int *)(param_1 + 0x1d8) + 8) + 0xe4) != 1) {
        FUN_00157ee8();
        return;
      }
      iVar8 = 0x98;
      goto LAB_00157b5c;
    }
    if (iVar8 != 0x1000) goto LAB_00157038;
  }
  else {
LAB_00156ff0:
    cVar17 = SBORROW4(iVar8,0x20000);
    cVar15 = iVar8 + -0x20000 < 0;
    uVar16 = iVar8 == 0x20000;
    if ((bool)uVar16) {
      FUN_00157dfe();
    }
    if ((bool)uVar16 || cVar15 != cVar17) {
      if (iVar8 == 0x14000) {
        FUN_00157c14();
      }
      if (iVar8 != 0x15000) goto LAB_00157038;
      FUN_00157ce8();
    }
    if (iVar8 == 0x30000) {
      FUN_00157eb6();
    }
    if (iVar8 == 0x40000) {
      FUN_00157eda();
    }
LAB_00157038:
    initEffectScreen((GameStateGatya *)param_1);
    fVar18 = (float)(**(code **)(*(int *)param_1 + 0x10))(param_1);
    *(undefined1 *)(param_1 + DAT_00157350) = 0;
    *(undefined1 *)(param_1 + DAT_00157354) = 0;
    SetTickWait((GameStateGatya *)param_1,fVar18);
    *(undefined4 *)(param_1 + DAT_0015735c) = 0x1000;
  }
  uVar7 = __floatsisf(in_r1);
  fVar18 = (float)__divsf3(uVar7,DAT_00157360);
  pGVar2 = *(GatyaEftImageElement **)(param_1 + 0x1ac);
  if (pGVar2 == (GatyaEftImageElement *)0x0) {
    pGVar2 = (GatyaEftImageElement *)FUN_00157fee();
    fVar18 = extraout_s0_00;
  }
  iVar8 = GatyaEftImageElement::PlayEffectKeyAnimation(pGVar2,fVar18);
  fVar18 = extraout_s0_01;
  if (iVar8 != 0) {
    iVar8 = FUN_00157fee();
    fVar18 = extraout_s0_02;
  }
  if ((*(GatyaEftImageElement **)(param_1 + 0x1a4) != (GatyaEftImageElement *)0x0) &&
     (iVar3 = GatyaEftImageElement::PlayEffectKeyAnimation
                        (*(GatyaEftImageElement **)(param_1 + 0x1a4),fVar18),
     fVar18 = extraout_s0_03, iVar3 == 0)) {
    iVar8 = 0;
  }
  if ((*(GatyaEftImageElement **)(param_1 + 0x1a8) != (GatyaEftImageElement *)0x0) &&
     (iVar3 = GatyaEftImageElement::PlayEffectKeyAnimation
                        (*(GatyaEftImageElement **)(param_1 + 0x1a8),fVar18),
     fVar18 = extraout_s0_04, iVar3 == 0)) {
    iVar8 = 0;
  }
  if ((*(GatyaEftImageElement **)(param_1 + 0x1a0) != (GatyaEftImageElement *)0x0) &&
     (iVar3 = GatyaEftImageElement::PlayEffectKeyAnimation
                        (*(GatyaEftImageElement **)(param_1 + 0x1a0),fVar18),
     fVar18 = extraout_s0_05, iVar3 == 0)) {
    iVar8 = 0;
  }
  if ((*(GatyaEftImageElement **)(param_1 + 0x194) != (GatyaEftImageElement *)0x0) &&
     (iVar3 = GatyaEftImageElement::PlayEffectKeyAnimation
                        (*(GatyaEftImageElement **)(param_1 + 0x194),fVar18),
     fVar18 = extraout_s0_06, iVar3 == 0)) {
    iVar8 = 0;
  }
  if ((*(GatyaEftImageElement **)(param_1 + 0x198) != (GatyaEftImageElement *)0x0) &&
     (iVar3 = GatyaEftImageElement::PlayEffectKeyAnimation
                        (*(GatyaEftImageElement **)(param_1 + 0x198),fVar18),
     fVar18 = extraout_s0_07, iVar3 == 0)) {
    iVar8 = 0;
  }
  if ((*(GatyaEftImageElement **)(param_1 + 0x19c) != (GatyaEftImageElement *)0x0) &&
     (iVar3 = GatyaEftImageElement::PlayEffectKeyAnimation
                        (*(GatyaEftImageElement **)(param_1 + 0x19c),fVar18),
     fVar18 = extraout_s0_08, iVar3 == 0)) {
    iVar8 = 0;
  }
  if ((*(GatyaEftImageElement **)(param_1 + 0x164) != (GatyaEftImageElement *)0x0) &&
     (iVar3 = GatyaEftImageElement::PlayEffectKeyAnimation
                        (*(GatyaEftImageElement **)(param_1 + 0x164),fVar18),
     fVar18 = extraout_s0_09, iVar3 == 0)) {
    iVar8 = 0;
  }
  if ((*(GatyaEftImageElement **)(param_1 + 0x168) != (GatyaEftImageElement *)0x0) &&
     (iVar3 = GatyaEftImageElement::PlayEffectKeyAnimation
                        (*(GatyaEftImageElement **)(param_1 + 0x168),fVar18),
     fVar18 = extraout_s0_10, iVar3 == 0)) {
    iVar8 = 0;
  }
  if ((*(GatyaEftImageElement **)(param_1 + 0x16c) != (GatyaEftImageElement *)0x0) &&
     (iVar3 = GatyaEftImageElement::PlayEffectKeyAnimation
                        (*(GatyaEftImageElement **)(param_1 + 0x16c),fVar18),
     fVar18 = extraout_s0_11, iVar3 == 0)) {
    iVar8 = 0;
  }
  if ((*(GatyaEftImageElement **)(param_1 + 0x170) != (GatyaEftImageElement *)0x0) &&
     (iVar3 = GatyaEftImageElement::PlayEffectKeyAnimation
                        (*(GatyaEftImageElement **)(param_1 + 0x170),fVar18),
     fVar18 = extraout_s0_12, iVar3 == 0)) {
    iVar8 = 0;
  }
  if ((*(GatyaEftImageElement **)(param_1 + 0x174) != (GatyaEftImageElement *)0x0) &&
     (iVar3 = GatyaEftImageElement::PlayEffectKeyAnimation
                        (*(GatyaEftImageElement **)(param_1 + 0x174),fVar18),
     fVar18 = extraout_s0_13, iVar3 == 0)) {
    iVar8 = 0;
  }
  if ((*(GatyaEftImageElement **)(param_1 + 0x178) != (GatyaEftImageElement *)0x0) &&
     (iVar3 = GatyaEftImageElement::PlayEffectKeyAnimation
                        (*(GatyaEftImageElement **)(param_1 + 0x178),fVar18),
     fVar18 = extraout_s0_14, iVar3 == 0)) {
    iVar8 = 0;
  }
  if ((*(GatyaEftImageElement **)(param_1 + 0x17c) != (GatyaEftImageElement *)0x0) &&
     (iVar3 = GatyaEftImageElement::PlayEffectKeyAnimation
                        (*(GatyaEftImageElement **)(param_1 + 0x17c),fVar18),
     fVar18 = extraout_s0_15, iVar3 == 0)) {
    iVar8 = 0;
  }
  if ((*(GatyaEftImageElement **)(param_1 + 0x180) != (GatyaEftImageElement *)0x0) &&
     (iVar3 = GatyaEftImageElement::PlayEffectKeyAnimation
                        (*(GatyaEftImageElement **)(param_1 + 0x180),fVar18),
     fVar18 = extraout_s0_16, iVar3 == 0)) {
    iVar8 = 0;
  }
  if ((*(GatyaEftImageElement **)(param_1 + 0x184) != (GatyaEftImageElement *)0x0) &&
     (iVar3 = GatyaEftImageElement::PlayEffectKeyAnimation
                        (*(GatyaEftImageElement **)(param_1 + 0x184),fVar18),
     fVar18 = extraout_s0_17, iVar3 == 0)) {
    iVar8 = 0;
  }
  if ((*(GatyaEftImageElement **)(param_1 + 0x188) != (GatyaEftImageElement *)0x0) &&
     (iVar3 = GatyaEftImageElement::PlayEffectKeyAnimation
                        (*(GatyaEftImageElement **)(param_1 + 0x188),fVar18),
     fVar18 = extraout_s0_18, iVar3 == 0)) {
    iVar8 = 0;
  }
  if ((*(GatyaEftImageElement **)(param_1 + 0x18c) != (GatyaEftImageElement *)0x0) &&
     (iVar3 = GatyaEftImageElement::PlayEffectKeyAnimation
                        (*(GatyaEftImageElement **)(param_1 + 0x18c),fVar18),
     fVar18 = extraout_s0_19, iVar3 == 0)) {
    iVar8 = 0;
  }
  if ((*(GatyaEftImageElement **)(param_1 + 400) != (GatyaEftImageElement *)0x0) &&
     (iVar3 = GatyaEftImageElement::PlayEffectKeyAnimation
                        (*(GatyaEftImageElement **)(param_1 + 400),fVar18), fVar18 = extraout_s0_20,
     iVar3 == 0)) {
    iVar8 = 0;
  }
  if ((*(GatyaEftImageElement **)(param_1 + 0x15c) != (GatyaEftImageElement *)0x0) &&
     (iVar3 = GatyaEftImageElement::PlayEffectKeyAnimation
                        (*(GatyaEftImageElement **)(param_1 + 0x15c),fVar18),
     fVar18 = extraout_s0_21, iVar3 == 0)) {
    iVar8 = 0;
  }
  if ((*(GatyaEftImageElement **)(param_1 + 0x1b0) != (GatyaEftImageElement *)0x0) &&
     (iVar3 = GatyaEftImageElement::PlayEffectKeyAnimation
                        (*(GatyaEftImageElement **)(param_1 + 0x1b0),fVar18),
     fVar18 = extraout_s0_22, iVar3 == 0)) {
    iVar8 = 0;
  }
  if ((*(GatyaEftImageElement **)(param_1 + 0x1b4) != (GatyaEftImageElement *)0x0) &&
     (iVar3 = GatyaEftImageElement::PlayEffectKeyAnimation
                        (*(GatyaEftImageElement **)(param_1 + 0x1b4),fVar18),
     fVar18 = extraout_s0_23, iVar3 == 0)) {
    iVar8 = 0;
  }
  if ((*(GatyaEftImageElement **)(param_1 + 0x1b8) != (GatyaEftImageElement *)0x0) &&
     (iVar3 = GatyaEftImageElement::PlayEffectKeyAnimation
                        (*(GatyaEftImageElement **)(param_1 + 0x1b8),fVar18),
     fVar18 = extraout_s0_24, iVar3 == 0)) {
    iVar8 = 0;
  }
  if ((*(GatyaEftImageElement **)(param_1 + 0x1bc) != (GatyaEftImageElement *)0x0) &&
     (iVar3 = GatyaEftImageElement::PlayEffectKeyAnimation
                        (*(GatyaEftImageElement **)(param_1 + 0x1bc),fVar18),
     fVar18 = extraout_s0_25, iVar3 == 0)) {
    iVar8 = 0;
  }
  if ((*(GatyaEftImageElement **)(param_1 + 0x1c0) != (GatyaEftImageElement *)0x0) &&
     (iVar3 = GatyaEftImageElement::PlayEffectKeyAnimation
                        (*(GatyaEftImageElement **)(param_1 + 0x1c0),fVar18),
     fVar18 = extraout_s0_26, iVar3 == 0)) {
    iVar8 = 0;
  }
  if ((*(GatyaEftImageElement **)(param_1 + 0x1c4) != (GatyaEftImageElement *)0x0) &&
     (iVar3 = GatyaEftImageElement::PlayEffectKeyAnimation
                        (*(GatyaEftImageElement **)(param_1 + 0x1c4),fVar18),
     fVar18 = extraout_s0_27, iVar3 == 0)) {
    iVar8 = 0;
  }
  if ((*(GatyaEftImageElement **)(param_1 + 0x1c8) != (GatyaEftImageElement *)0x0) &&
     (iVar3 = GatyaEftImageElement::PlayEffectKeyAnimation
                        (*(GatyaEftImageElement **)(param_1 + 0x1c8),fVar18),
     fVar18 = extraout_s0_28, iVar3 == 0)) {
    iVar8 = 0;
  }
  if ((*(GatyaEftImageElement **)(param_1 + 0x1cc) != (GatyaEftImageElement *)0x0) &&
     (iVar3 = GatyaEftImageElement::PlayEffectKeyAnimation
                        (*(GatyaEftImageElement **)(param_1 + 0x1cc),fVar18),
     fVar18 = extraout_s0_29, iVar3 == 0)) {
    iVar8 = 0;
  }
  if ((*(int *)(*(int *)(param_1 + 0x164) + 0xac) == 1) &&
     (*(char *)(param_1 + DAT_00157354) == '\0')) {
    *(undefined1 *)(param_1 + DAT_00157354) = 1;
    fVar18 = (float)ZombieCafe::stopMusic(fVar18);
    ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(param_1 + 0xc),0,2,fVar18,false);
  }
  pZVar12 = *(ZombieCafe **)(param_1 + 0xc);
  iVar3 = ZombieCafe::touchUpEvent(pZVar12);
  fVar18 = extraout_s0_30;
  if ((iVar3 != 0) &&
     (*(int *)(pZVar12 + DAT_00157368) <= (int)**(short **)(local_38 + DAT_00157364))) {
    if (*(GatyaEftImageElement **)(param_1 + 0x1ac) != (GatyaEftImageElement *)0x0) {
      fVar18 = (float)GatyaEftImageElement::PlayEffectKeyAnimation
                                (*(GatyaEftImageElement **)(param_1 + 0x1ac),extraout_s0_30);
    }
    if (*(GatyaEftImageElement **)(param_1 + 0x1a4) != (GatyaEftImageElement *)0x0) {
      fVar18 = (float)GatyaEftImageElement::PlayEffectKeyAnimation
                                (*(GatyaEftImageElement **)(param_1 + 0x1a4),fVar18);
    }
    if (*(GatyaEftImageElement **)(param_1 + 0x1a8) != (GatyaEftImageElement *)0x0) {
      fVar18 = (float)GatyaEftImageElement::PlayEffectKeyAnimation
                                (*(GatyaEftImageElement **)(param_1 + 0x1a8),fVar18);
    }
    if (*(GatyaEftImageElement **)(param_1 + 0x1a0) != (GatyaEftImageElement *)0x0) {
      fVar18 = (float)GatyaEftImageElement::PlayEffectKeyAnimation
                                (*(GatyaEftImageElement **)(param_1 + 0x1a0),fVar18);
    }
    if (*(GatyaEftImageElement **)(param_1 + 0x194) != (GatyaEftImageElement *)0x0) {
      fVar18 = (float)GatyaEftImageElement::PlayEffectKeyAnimation
                                (*(GatyaEftImageElement **)(param_1 + 0x194),fVar18);
    }
    if (*(GatyaEftImageElement **)(param_1 + 0x198) != (GatyaEftImageElement *)0x0) {
      fVar18 = (float)GatyaEftImageElement::PlayEffectKeyAnimation
                                (*(GatyaEftImageElement **)(param_1 + 0x198),fVar18);
    }
    if (*(GatyaEftImageElement **)(param_1 + 0x19c) != (GatyaEftImageElement *)0x0) {
      fVar18 = (float)GatyaEftImageElement::PlayEffectKeyAnimation
                                (*(GatyaEftImageElement **)(param_1 + 0x19c),fVar18);
    }
    if (*(GatyaEftImageElement **)(param_1 + 0x164) != (GatyaEftImageElement *)0x0) {
      fVar18 = (float)GatyaEftImageElement::PlayEffectKeyAnimation
                                (*(GatyaEftImageElement **)(param_1 + 0x164),fVar18);
    }
    if (*(GatyaEftImageElement **)(param_1 + 0x168) != (GatyaEftImageElement *)0x0) {
      fVar18 = (float)GatyaEftImageElement::PlayEffectKeyAnimation
                                (*(GatyaEftImageElement **)(param_1 + 0x168),fVar18);
    }
    if (*(GatyaEftImageElement **)(param_1 + 0x16c) != (GatyaEftImageElement *)0x0) {
      fVar18 = (float)GatyaEftImageElement::PlayEffectKeyAnimation
                                (*(GatyaEftImageElement **)(param_1 + 0x16c),fVar18);
    }
    if (*(GatyaEftImageElement **)(param_1 + 0x170) != (GatyaEftImageElement *)0x0) {
      fVar18 = (float)GatyaEftImageElement::PlayEffectKeyAnimation
                                (*(GatyaEftImageElement **)(param_1 + 0x170),fVar18);
    }
    if (*(GatyaEftImageElement **)(param_1 + 0x174) != (GatyaEftImageElement *)0x0) {
      fVar18 = (float)GatyaEftImageElement::PlayEffectKeyAnimation
                                (*(GatyaEftImageElement **)(param_1 + 0x174),fVar18);
    }
    if (*(GatyaEftImageElement **)(param_1 + 0x178) != (GatyaEftImageElement *)0x0) {
      fVar18 = (float)GatyaEftImageElement::PlayEffectKeyAnimation
                                (*(GatyaEftImageElement **)(param_1 + 0x178),fVar18);
    }
    if (*(GatyaEftImageElement **)(param_1 + 0x17c) != (GatyaEftImageElement *)0x0) {
      fVar18 = (float)GatyaEftImageElement::PlayEffectKeyAnimation
                                (*(GatyaEftImageElement **)(param_1 + 0x17c),fVar18);
    }
    if (*(GatyaEftImageElement **)(param_1 + 0x180) != (GatyaEftImageElement *)0x0) {
      fVar18 = (float)GatyaEftImageElement::PlayEffectKeyAnimation
                                (*(GatyaEftImageElement **)(param_1 + 0x180),fVar18);
    }
    if (*(GatyaEftImageElement **)(param_1 + 0x184) != (GatyaEftImageElement *)0x0) {
      fVar18 = (float)GatyaEftImageElement::PlayEffectKeyAnimation
                                (*(GatyaEftImageElement **)(param_1 + 0x184),fVar18);
    }
    if (*(GatyaEftImageElement **)(param_1 + 0x188) != (GatyaEftImageElement *)0x0) {
      fVar18 = (float)GatyaEftImageElement::PlayEffectKeyAnimation
                                (*(GatyaEftImageElement **)(param_1 + 0x188),fVar18);
    }
    if (*(GatyaEftImageElement **)(param_1 + 0x18c) != (GatyaEftImageElement *)0x0) {
      fVar18 = (float)GatyaEftImageElement::PlayEffectKeyAnimation
                                (*(GatyaEftImageElement **)(param_1 + 0x18c),fVar18);
    }
    if (*(GatyaEftImageElement **)(param_1 + 400) != (GatyaEftImageElement *)0x0) {
      fVar18 = (float)GatyaEftImageElement::PlayEffectKeyAnimation
                                (*(GatyaEftImageElement **)(param_1 + 400),fVar18);
    }
    if (*(GatyaEftImageElement **)(param_1 + 0x15c) != (GatyaEftImageElement *)0x0) {
      fVar18 = (float)GatyaEftImageElement::PlayEffectKeyAnimation
                                (*(GatyaEftImageElement **)(param_1 + 0x15c),fVar18);
    }
    if (*(GatyaEftImageElement **)(param_1 + 0x1b0) != (GatyaEftImageElement *)0x0) {
      fVar18 = (float)GatyaEftImageElement::PlayEffectKeyAnimation
                                (*(GatyaEftImageElement **)(param_1 + 0x1b0),fVar18);
    }
    if (*(GatyaEftImageElement **)(param_1 + 0x1b4) != (GatyaEftImageElement *)0x0) {
      fVar18 = (float)GatyaEftImageElement::PlayEffectKeyAnimation
                                (*(GatyaEftImageElement **)(param_1 + 0x1b4),fVar18);
    }
    if (*(GatyaEftImageElement **)(param_1 + 0x1b8) != (GatyaEftImageElement *)0x0) {
      fVar18 = (float)GatyaEftImageElement::PlayEffectKeyAnimation
                                (*(GatyaEftImageElement **)(param_1 + 0x1b8),fVar18);
    }
    if (*(GatyaEftImageElement **)(param_1 + 0x1bc) != (GatyaEftImageElement *)0x0) {
      fVar18 = (float)GatyaEftImageElement::PlayEffectKeyAnimation
                                (*(GatyaEftImageElement **)(param_1 + 0x1bc),fVar18);
    }
    if (*(GatyaEftImageElement **)(param_1 + 0x1c0) != (GatyaEftImageElement *)0x0) {
      fVar18 = (float)GatyaEftImageElement::PlayEffectKeyAnimation
                                (*(GatyaEftImageElement **)(param_1 + 0x1c0),fVar18);
    }
    if (*(GatyaEftImageElement **)(param_1 + 0x1c4) != (GatyaEftImageElement *)0x0) {
      fVar18 = (float)GatyaEftImageElement::PlayEffectKeyAnimation
                                (*(GatyaEftImageElement **)(param_1 + 0x1c4),fVar18);
    }
    if (*(GatyaEftImageElement **)(param_1 + 0x1c8) != (GatyaEftImageElement *)0x0) {
      fVar18 = (float)GatyaEftImageElement::PlayEffectKeyAnimation
                                (*(GatyaEftImageElement **)(param_1 + 0x1c8),fVar18);
    }
    if (*(GatyaEftImageElement **)(param_1 + 0x1cc) != (GatyaEftImageElement *)0x0) {
      fVar18 = (float)GatyaEftImageElement::PlayEffectKeyAnimation
                                (*(GatyaEftImageElement **)(param_1 + 0x1cc),fVar18);
    }
  }
  if (iVar8 == 0) {
    fVar18 = (float)FUN_00157ee8();
  }
  if (*(char *)(param_1 + _LAB_001576b0) == '\0') {
    *(undefined1 *)(param_1 + _LAB_001576b0) = 1;
    fVar18 = (float)ZombieCafe::stopMusic(fVar18);
    ZombieCafe::loadAndPlayMusic(*(ZombieCafe **)(param_1 + 0xc),0,2,fVar18,false);
  }
  iVar8 = 0;
  if (*(int *)(param_1 + 0x1d0) != 0) {
    for (; iVar3 = *(int *)(param_1 + 0x1d0), iVar8 < *(int *)(iVar3 + 4) + 1; iVar8 = iVar8 + 1) {
      iVar9 = iVar8 * 4;
      (**(code **)(**(int **)(param_1 + 0x160) + 0x34))
                (*(int **)(param_1 + 0x160),*(undefined4 *)(*(int *)(iVar3 + 8) + iVar9));
      piVar4 = *(int **)(*(int *)(*(int *)(*(int *)(param_1 + 0x1d0) + 8) + iVar9) + 100);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))();
      }
      piVar4 = *(int **)(*(int *)(*(int *)(param_1 + 0x1d0) + 8) + iVar9);
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))();
      }
    }
    *(undefined4 *)(iVar3 + 4) = 0xffffffff;
  }
  pvVar13 = *(void **)(param_1 + 0x1d0);
  if (pvVar13 != (void *)0x0) {
    if (*(void **)((int)pvVar13 + 8) != (void *)0x0) {
      operator_delete__(*(void **)((int)pvVar13 + 8));
    }
    operator_delete(pvVar13);
    *(undefined4 *)(param_1 + 0x1d0) = 0;
  }
  iVar8 = 0x80;
LAB_00157b5c:
  *(int *)(param_1 + DAT_00157c00) = iVar8 << 9;
  FUN_00157ee8();
  return;
}


