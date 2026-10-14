/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00190aa2 FUN_00190aa2 */

undefined4 FUN_00190aa2(void)

{
  CImage *pCVar1;
  ImageElement *this;
  ZombieCafe *this_00;
  PullMenuElement *pPVar2;
  int iVar3;
  int unaff_r5;
  int unaff_r7;
  undefined4 in_cr0;
  undefined4 in_cr6;
  undefined4 in_cr9;
  undefined4 in_cr15;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar4;
  undefined4 uStack00000024;
  
  uStack00000024 = *(undefined4 *)(**(int **)(unaff_r5 + 0x14) + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + unaff_r7),0x22,false);
  this = (ImageElement *)operator_new(0x98);
  pPVar2 = DAT_00190b1c;
  ImageElement::ImageElement(this,pCVar1,extraout_s0,extraout_s1,(uchar)DAT_00190b1c,false);
  uVar4 = FUN_00190162();
  coprocessor_moveto(0,1,0,(int)uVar4,in_cr15,in_cr9);
  this_00 = (ZombieCafe *)coprocessor_movefromRt(0,1,0,in_cr0,in_cr9);
  coprocessor_moveto(0,1,0,this_00,in_cr6,in_cr9);
  ZombieCafe::putZombieInMeetlocker(this_00,(Character *)((ulonglong)uVar4 >> 0x20),pPVar2);
  ZombieCafe::save();
  iVar3 = **(int **)(DAT_00191164 + 0x191108);
  if (0 < iVar3) {
    iVar3 = iVar3 + -1;
    **(int **)(DAT_00191164 + 0x191108) = iVar3;
    if (iVar3 == 0) {
      *(undefined4 *)(unaff_r7 + 0x14) = 0;
      this[0x68] = (ImageElement)0x0;
    }
  }
  *(int *)(this + 0xb4) = *(int *)(this + 0xb4) + 1;
  return 1;
}


