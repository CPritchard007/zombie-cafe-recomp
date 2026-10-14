/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001a7b34 FUN_001a7b34 */

void FUN_001a7b34(void)

{
  CImage *pCVar1;
  ImageElement *this;
  int unaff_r5;
  int unaff_r6;
  float extraout_s0;
  float extraout_s1;
  undefined4 uStack00000024;
  
  uStack00000024 = *(undefined4 *)(**(int **)(unaff_r5 + 0x14) + 0x2c);
  pCVar1 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + unaff_r6),0x22,false);
  this = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement
            (this,pCVar1,extraout_s0,extraout_s1,(uchar)DAT_001a7b70,SUB41(DAT_001a7b74,0));
  FUN_001a6d90();
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


