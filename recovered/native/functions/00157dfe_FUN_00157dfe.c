/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00157dfe FUN_00157dfe */

void FUN_00157dfe(void)

{
  undefined4 uVar1;
  int iVar2;
  CImage *pCVar3;
  GatyaEftImageElement *this;
  code *pcVar4;
  GameStateGatya *unaff_r5;
  int *piVar5;
  float fVar6;
  undefined8 uVar7;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s4;
  float extraout_s4_00;
  long in_stack_00000020;
  
  uVar1 = __floatsisf(in_stack_00000020);
  fVar6 = (float)__divsf3(uVar1,DAT_00157f84);
  fVar6 = (float)GameStateGatya::PlayEffectKeyAnimation_Back(unaff_r5,in_stack_00000020,fVar6);
  GameStateGatya::PlayEffectKeyAnimation_Birth(unaff_r5,fVar6);
  iVar2 = GameStateGatya::CheckTickWait((int)unaff_r5);
  if (iVar2 == 0) {
    iVar2 = 0;
    *(int *)(unaff_r5 + DAT_00157fa0) = *(int *)(unaff_r5 + DAT_00157fa0) + 1;
    if (*(int *)(unaff_r5 + 0x1d8) != 0) {
      for (; iVar2 < *(int *)(*(int *)(unaff_r5 + 0x1d8) + 4) + 1; iVar2 = iVar2 + 1) {
        GatyaEftCharacterInstance::TickAnimation
                  (*(GatyaEftCharacterInstance **)
                    (*(int *)(*(int *)(unaff_r5 + 0x1d8) + 8) + iVar2 * 4),in_stack_00000020);
        piVar5 = *(int **)(*(int *)(*(int *)(unaff_r5 + 0x1d8) + 8) + iVar2 * 4);
        (**(code **)(*piVar5 + 0x1c))(piVar5,in_stack_00000020);
      }
    }
    iVar2 = 0;
    if (*(int *)(unaff_r5 + 0x1dc) != 0) {
      for (; iVar2 < *(int *)(*(int *)(unaff_r5 + 0x1dc) + 4) + 1; iVar2 = iVar2 + 1) {
        GatyaEftCharacterInstance::TickAnimation
                  (*(GatyaEftCharacterInstance **)
                    (iVar2 * 4 + *(int *)(*(int *)(unaff_r5 + 0x1dc) + 8)),in_stack_00000020);
      }
    }
    if (*(ImageElement **)(unaff_r5 + 0x1b0) != (ImageElement *)0x0) {
      ImageElement::updateColor(*(ImageElement **)(unaff_r5 + 0x1b0));
    }
    if (*(ImageElement **)(unaff_r5 + 0x1d4) != (ImageElement *)0x0) {
      ImageElement::updateColor(*(ImageElement **)(unaff_r5 + 0x1d4));
    }
    iVar2 = 0;
    if (*(int *)(unaff_r5 + 0x1d0) != 0) {
      for (; iVar2 < *(int *)(*(int *)(unaff_r5 + 0x1d0) + 4) + 1; iVar2 = iVar2 + 1) {
        GatyaEftFallImageElement::TickFall
                  (*(GatyaEftFallImageElement **)
                    (iVar2 * 4 + *(int *)(*(int *)(unaff_r5 + 0x1d0) + 8)),in_stack_00000020);
      }
    }
    return;
  }
  piVar5 = *(int **)(unaff_r5 + 0x20);
  pcVar4 = *(code **)(*piVar5 + 0x2c);
  pCVar3 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + 0x810),0xf,false);
  this = (GatyaEftImageElement *)operator_new(200);
  GatyaEftImageElement::GatyaEftImageElement
            (this,*(ZombieCafe **)(unaff_r5 + 0xc),pCVar3,'\x12',true);
  *(GatyaEftImageElement **)(unaff_r5 + 0x1d4) = this;
  (*pcVar4)(piVar5,this);
  uVar7 = (**(code **)(**(int **)(unaff_r5 + 0x1d4) + 0x14))
                    (*(int **)(unaff_r5 + 0x1d4),DAT_00157f8c,DAT_00157f8c);
  uVar7 = GatyaEftImageElement::SetKey
                    (*(GatyaEftImageElement **)(unaff_r5 + 0x1d4),(float)uVar7,
                     (float)((ulonglong)uVar7 >> 0x20),extraout_s2,extraout_s3,extraout_s4,0,
                     0x3f800000,DAT_00157f94);
  GatyaEftImageElement::SetKey
            (*(GatyaEftImageElement **)(unaff_r5 + 0x1d4),(float)uVar7,
             (float)((ulonglong)uVar7 >> 0x20),extraout_s2_00,extraout_s3_00,extraout_s4_00,
             DAT_00157f98,0x3f800000,DAT_00157f94);
  *(undefined4 *)(unaff_r5 + DAT_00157c00) = 0x30000;
  FUN_00157ee8();
  return;
}


