/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bef80 CCCarousel::GetButtonPos */

/* CCCarousel::GetButtonPos(ccCarousel*, unsigned int) */

undefined8 __thiscall CCCarousel::GetButtonPos(CCCarousel *this,ccCarousel *param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 unaff_r4;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  CCCarousel *pCVar6;
  
  pCVar6 = this;
  uVar1 = L_ScaleFactor((ccCarousel *)this,(uint)param_1);
  iVar2 = __aeabi_fcmplt(uVar1,DAT_002bf068);
  if ((iVar2 == 0) && (iVar2 = __aeabi_fcmpgt(uVar1,0x3f800000), iVar2 == 0)) {
    iVar2 = __aeabi_fcmpgt(uVar1,0);
    if (iVar2 == 0) {
      dVar3 = (double)__extendsfdf2(*(undefined4 *)(this + 0xc));
      uVar4 = __extendsfdf2(*(undefined4 *)(this + 0x10));
      __addsf3(uVar1,0x3f800000);
      uVar1 = __extendsfdf2();
      pow(dVar3,(double)CONCAT44(unaff_r4,param_2));
      uVar5 = __subdf3(DAT_002bf060,DAT_002bf064,uVar1,extraout_r1_00);
      uVar4 = __muldf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)uVar5,
                       (int)((ulonglong)uVar5 >> 0x20));
      pCVar6 = SUB84(dVar3,0);
      __subdf3(pCVar6,(int)((ulonglong)dVar3 >> 0x20),(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
    }
    else {
      dVar3 = (double)__extendsfdf2(*(undefined4 *)(this + 0xc));
      uVar4 = __extendsfdf2(*(undefined4 *)(this + 0x10));
      __subsf3(0x3f800000,uVar1);
      uVar1 = __extendsfdf2();
      pow(dVar3,(double)CONCAT44(unaff_r4,param_2));
      uVar5 = __subdf3(DAT_002bf060,DAT_002bf064,uVar1,extraout_r1);
      uVar4 = __muldf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),(int)uVar5,
                       (int)((ulonglong)uVar5 >> 0x20));
      pCVar6 = SUB84(dVar3,0);
      __adddf3(pCVar6,(int)((ulonglong)dVar3 >> 0x20),(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
    }
    uVar1 = __truncdfsf2();
  }
  else {
    uVar1 = 0;
  }
  return CONCAT44(pCVar6,uVar1);
}


