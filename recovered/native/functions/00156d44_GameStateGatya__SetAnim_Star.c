/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00156d44 GameStateGatya::SetAnim_Star */

/* GameStateGatya::SetAnim_Star(int) */

void __thiscall GameStateGatya::SetAnim_Star(GameStateGatya *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  CImage *pCVar6;
  GatyaEftImageElement *pGVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  code *pcVar12;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  undefined8 uVar13;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s2_02;
  float extraout_s2_03;
  float extraout_s2_04;
  float extraout_s2_05;
  float extraout_s2_06;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  float extraout_s3_02;
  float extraout_s3_03;
  float extraout_s3_04;
  float extraout_s3_05;
  float extraout_s3_06;
  float extraout_s4;
  float extraout_s4_00;
  float extraout_s4_01;
  float extraout_s4_02;
  float extraout_s4_03;
  float extraout_s4_04;
  float extraout_s4_05;
  float extraout_s4_06;
  int local_30;
  
  if ((uint)param_1 < 7) {
    cVar1 = *(char *)(DAT_00156f84 + 0x156d63 + param_1);
    iVar10 = (int)*(char *)(DAT_00156f84 + param_1 + 0x156d5c);
    if (iVar10 != 0) {
      uVar2 = __floatsisf(param_1);
      uVar2 = __mulsf3(uVar2,0x3f000000);
      uVar2 = __mulsf3(uVar2,DAT_00156f88);
      local_30 = 0;
      do {
        uVar3 = __floatsisf(local_30);
        uVar4 = __mulsf3(uVar3,DAT_00156f88);
        iVar5 = __subsf3(uVar4,uVar2);
        if (cVar1 != '\0') {
          piVar11 = *(int **)(this + 0x1c);
          pcVar12 = *(code **)(*piVar11 + 0x2c);
          pCVar6 = (CImage *)
                   PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0x18,false)
          ;
          pGVar7 = (GatyaEftImageElement *)operator_new(200);
          GatyaEftImageElement::GatyaEftImageElement
                    (pGVar7,*(ZombieCafe **)(this + 0xc),pCVar6,'\x12',true);
          (*pcVar12)(piVar11,pGVar7);
          uVar13 = (**(code **)(*(int *)pGVar7 + 0x14))(pGVar7,DAT_00156f8c,DAT_00156f8c);
          GatyaEftImageElement::SetKey
                    (pGVar7,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20),extraout_s2,extraout_s3
                     ,extraout_s4,0,iVar5,DAT_00156f90);
          uVar4 = __mulsf3(uVar3,DAT_00156f94);
          uVar8 = __addsf3(uVar4,0);
          iVar9 = __mulsf3(uVar8,DAT_00156f98);
          GatyaEftImageElement::SetKey
                    (pGVar7,extraout_s0,extraout_s1,extraout_s2_00,extraout_s3_00,extraout_s4_00,
                     iVar9,iVar5,DAT_00156f90);
          uVar4 = __addsf3(uVar4,DAT_00156f9c);
          iVar9 = __mulsf3(uVar4,DAT_00156f98);
          GatyaEftImageElement::SetKey
                    (pGVar7,extraout_s0_00,extraout_s1_00,extraout_s2_01,extraout_s3_01,
                     extraout_s4_01,iVar9,iVar5,DAT_00156f90);
          Vector<GatyaEftImageElement*>::addElement
                    (*(Vector<GatyaEftImageElement*> **)(this + 0x1e0),pGVar7);
        }
        piVar11 = *(int **)(this + 0x1c);
        pcVar12 = *(code **)(*piVar11 + 0x2c);
        pCVar6 = (CImage *)
                 PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),iVar10,false)
        ;
        pGVar7 = (GatyaEftImageElement *)operator_new(200);
        GatyaEftImageElement::GatyaEftImageElement
                  (pGVar7,*(ZombieCafe **)(this + 0xc),pCVar6,'\x12',true);
        (*pcVar12)(piVar11,pGVar7);
        uVar13 = (**(code **)(*(int *)pGVar7 + 0x14))(pGVar7,DAT_00156f8c,DAT_00156f8c);
        GatyaEftImageElement::SetKey
                  (pGVar7,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20),extraout_s2_02,
                   extraout_s3_02,extraout_s4_02,0,iVar5,DAT_00156f90);
        uVar3 = __mulsf3(uVar3,DAT_00156f94);
        uVar4 = __addsf3(uVar3,0);
        iVar9 = __mulsf3(uVar4,DAT_00156f98);
        uVar13 = GatyaEftImageElement::SetKey
                           (pGVar7,extraout_s0_01,extraout_s1_01,extraout_s2_03,extraout_s3_03,
                            extraout_s4_03,iVar9,iVar5,DAT_00156f90);
        GatyaEftImageElement::SetKey
                  (pGVar7,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20),extraout_s2_04,
                   extraout_s3_04,extraout_s4_04,iVar9,iVar5,DAT_00156f90);
        uVar4 = __addsf3(uVar3,DAT_00156f94);
        iVar9 = __mulsf3(uVar4,DAT_00156f98);
        GatyaEftImageElement::SetKey
                  (pGVar7,extraout_s0_02,extraout_s1_02,extraout_s2_05,extraout_s3_05,extraout_s4_05
                   ,iVar9,iVar5,DAT_00156f90);
        uVar3 = __addsf3(uVar3,0x41000000);
        iVar9 = __mulsf3(uVar3,DAT_00156f98);
        GatyaEftImageElement::SetKey
                  (pGVar7,extraout_s0_03,extraout_s1_03,extraout_s2_06,extraout_s3_06,extraout_s4_06
                   ,iVar9,iVar5,DAT_00156f90);
        Vector<GatyaEftImageElement*>::addElement
                  (*(Vector<GatyaEftImageElement*> **)(this + 0x1e0),pGVar7);
        local_30 = local_30 + 1;
      } while (local_30 <= param_1);
    }
  }
  return;
}


