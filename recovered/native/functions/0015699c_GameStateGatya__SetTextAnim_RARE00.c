/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0015699c GameStateGatya::SetTextAnim_RARE00 */

/* GameStateGatya::SetTextAnim_RARE00(float) */

void __thiscall GameStateGatya::SetTextAnim_RARE00(GameStateGatya *this,float param_1)

{
  Vector<GatyaEftImageElement*> *this_00;
  CImage *pCVar1;
  GatyaEftImageElement *this_01;
  int iVar2;
  undefined4 in_r1;
  code *pcVar3;
  int *piVar4;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  undefined8 uVar5;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s2_02;
  float extraout_s2_03;
  float extraout_s2_04;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  float extraout_s3_02;
  float extraout_s3_03;
  float extraout_s3_04;
  float extraout_s4;
  float extraout_s4_00;
  float extraout_s4_01;
  float extraout_s4_02;
  float extraout_s4_03;
  float extraout_s4_04;
  
  this_00 = (Vector<GatyaEftImageElement*> *)operator_new(0xc);
  Vector<GatyaEftImageElement*>::Vector(this_00);
  *(Vector<GatyaEftImageElement*> **)(this + 0x1e0) = this_00;
  piVar4 = *(int **)(this + 0x1c);
  pcVar3 = *(code **)(*piVar4 + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(this + 0xc) + 0x810),0x16,false);
  this_01 = (GatyaEftImageElement *)operator_new(200);
  GatyaEftImageElement::GatyaEftImageElement
            (this_01,*(ZombieCafe **)(this + 0xc),pCVar1,'\x12',true);
  (*pcVar3)(piVar4,this_01);
  uVar5 = (**(code **)(*(int *)this_01 + 0x14))(this_01,DAT_00156ad8,DAT_00156ad8);
  GatyaEftImageElement::SetKey
            (this_01,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20),extraout_s2,extraout_s3,
             extraout_s4,0,0,DAT_00156ae0);
  iVar2 = __addsf3(in_r1,0);
  uVar5 = GatyaEftImageElement::SetKey
                    (this_01,extraout_s0,extraout_s1,extraout_s2_00,extraout_s3_00,extraout_s4_00,
                     iVar2,0,DAT_00156ae0);
  GatyaEftImageElement::SetKey
            (this_01,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20),extraout_s2_01,extraout_s3_01,
             extraout_s4_01,iVar2,0,DAT_00156ae0);
  iVar2 = __addsf3(in_r1,DAT_00156ae8);
  GatyaEftImageElement::SetKey
            (this_01,extraout_s0_00,extraout_s1_00,extraout_s2_02,extraout_s3_02,extraout_s4_02,
             iVar2,0,DAT_00156ae0);
  iVar2 = __addsf3(in_r1,DAT_00156aec);
  GatyaEftImageElement::SetKey
            (this_01,extraout_s0_01,extraout_s1_01,extraout_s2_03,extraout_s3_03,extraout_s4_03,
             iVar2,0,DAT_00156ae0);
  iVar2 = __addsf3(in_r1,DAT_00156af4);
  GatyaEftImageElement::SetKey
            (this_01,extraout_s0_02,extraout_s1_02,extraout_s2_04,extraout_s3_04,extraout_s4_04,
             iVar2,0,DAT_00156ae0);
  Vector<GatyaEftImageElement*>::addElement
            (*(Vector<GatyaEftImageElement*> **)(this + 0x1e0),this_01);
  return;
}


