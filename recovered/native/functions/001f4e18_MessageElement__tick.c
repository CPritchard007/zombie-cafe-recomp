/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f4e18 MessageElement::tick */

/* MessageElement::tick(long) */

undefined8 __thiscall MessageElement::tick(MessageElement *this,long param_1)

{
  byte bVar1;
  int iVar2;
  MessageElement MVar3;
  MessageElement *pMVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float fVar8;
  float extraout_s1;
  float extraout_s1_00;
  float fVar9;
  float extraout_s1_01;
  MessageElement *local_20;
  
  local_20 = this;
  if (this[0x14] == (MessageElement)0x0) goto LAB_001f4f1e;
  ScreenElement::tick((long)this);
  pMVar4 = this + 0x88;
  *(int *)pMVar4 = *(int *)pMVar4 - param_1;
  *(undefined1 *)(*(int *)(this + 0x84) + DAT_001f4f20) = 1;
  if (*(int *)pMVar4 < 0) {
    iVar5 = *(int *)(this + 0x84);
    iVar6 = *(int *)(iVar5 + DAT_001f4f24);
    if ((((iVar6 != 0) && (*(int *)(iVar5 + 0x4b8) == 0)) &&
        (*(int *)(iVar5 + DAT_001f4f2c) <= (int)**(short **)(DAT_001f4f28 + 0x1f4e60))) &&
       ((iVar2 = __aeabi_fcmpgt(*(undefined4 *)(iVar5 + DAT_001f4f30),0), fVar8 = extraout_s0,
        fVar9 = extraout_s1, iVar2 == 0 ||
        (iVar5 = __aeabi_fcmpgt(*(undefined4 *)(iVar5 + 0x4c0),0), fVar8 = extraout_s0_00,
        fVar9 = extraout_s1_00, iVar5 == 0)))) {
      iVar5 = ZCImageButton::contains
                        (*(ZCImageButton **)(this + 0x74),iVar6 >> 0x10,(int)(short)iVar6,fVar8,
                         fVar9);
      fVar8 = extraout_s0_01;
      if (iVar5 == 0) {
        local_20 = (MessageElement *)0x3f800000;
        iVar5 = ZCImageButton::contains
                          (*(ZCImageButton **)(this + 0x78),
                           *(int *)(*(int *)(this + 0x84) + DAT_001f4f24) >> 0x10,
                           (int)(short)*(int *)(*(int *)(this + 0x84) + DAT_001f4f24),extraout_s0_01
                           ,extraout_s1_01);
        fVar8 = extraout_s0_02;
        if (iVar5 == 0) goto LAB_001f4ee0;
      }
      local_20 = (MessageElement *)0x3f800000;
      ZombieCafe::playEffect(*(int *)(this + 0x84),fVar8);
      *(undefined4 *)(this + 0x88) = **(undefined4 **)(DAT_001f4f34 + 0x1f4f08);
      iVar5 = *(int *)(this + 0x7c);
      if (*(int *)(iVar5 + 0x70) == 0) {
        MVar3 = (MessageElement)0x0;
      }
      else {
        bVar1 = *(byte *)(iVar5 + 0x85);
        iVar6 = __divsi3(*(int *)(*(int *)(iVar5 + 0x70) + 4) + 1,*(undefined1 *)(iVar5 + 0x86));
        if ((int)(uint)bVar1 < iVar6) {
          *(byte *)(iVar5 + 0x85) = bVar1 + 1;
          MVar3 = (MessageElement)0x1;
        }
        else {
          MVar3 = (MessageElement)0x0;
        }
      }
      this[0x14] = MVar3;
      setButtonVisibilities();
    }
  }
LAB_001f4ee0:
  uVar7 = *(int *)(this + 0x8c) - param_1;
  *(uint *)(this + 0x8c) = uVar7 & (int)~uVar7 >> 0x1f;
LAB_001f4f1e:
  return CONCAT44(param_1,local_20);
}


