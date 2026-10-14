/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016afba FUN_0016afba */

void FUN_0016afba(void)

{
  undefined4 uVar1;
  int iVar2;
  BitmapTextElement *pBVar3;
  CImage *pCVar4;
  ImageElement *this;
  undefined4 unaff_r4;
  int *piVar5;
  int unaff_r5;
  undefined4 unaff_r6;
  int iVar6;
  code *pcVar7;
  code *in_stack_00000018;
  int in_stack_0000001c;
  
  *(undefined4 *)(unaff_r5 + 0x22c) = unaff_r6;
  (*in_stack_00000018)(unaff_r4,unaff_r6);
  *(undefined4 *)(unaff_r5 + 0x230) = 0;
  *(undefined4 *)(unaff_r5 + 0x238) = 0;
  *(undefined4 *)(unaff_r5 + 0x23c) = 0;
  *(undefined4 *)(unaff_r5 + 0x240) = 0;
  *(undefined4 *)(unaff_r5 + 0x244) = 0;
  *(undefined1 *)(*(int *)(unaff_r5 + 0x24c) + 0x7f) = 0x11;
  TrueTypeTextElement::setBaseTransform
            (*(TrueTypeTextElement **)(unaff_r5 + 0x24c),(ccMat2x3 *)(unaff_r5 + 0x3f0));
  piVar5 = *(int **)(unaff_r5 + 0x24c);
  pcVar7 = *(code **)(*piVar5 + 0x18);
  uVar1 = __floatsisf(*(undefined4 *)(*(int *)(unaff_r5 + 0x22c) + 0xc));
  iVar2 = SmDev();
  __addsf3(uVar1,*(undefined4 *)(iVar2 * 4 + *(int *)(DAT_0016b354 + 0x16b0ac)));
  uVar1 = __fixsfsi();
  (*pcVar7)(piVar5,uVar1,*(undefined4 *)(*(int *)(unaff_r5 + 0x22c) + 0x10));
  iVar2 = SmDev();
  if ((iVar2 == 3) || (iVar2 = SmDev(), iVar2 == 4)) {
    *(undefined1 *)(*(int *)(unaff_r5 + 0x24c) + 0xc4) = 0;
  }
  piVar5 = *(int **)(unaff_r5 + 0x14);
  pcVar7 = *(code **)(*piVar5 + 0x2c);
  Vector<String>::elementAt((int)&stack0x0000010c);
  String::valueOf((int)&stack0x00000114);
  String::operator+((String *)&stack0x0000011c,&stack0x0000010c,&stack0x00000114);
  iVar6 = *(int *)(unaff_r5 + 0xc);
  iVar2 = SmDev();
  uVar1 = *(undefined4 *)((*(int *)(DAT_0016b35c + iVar2 * 4 + 0x16b146) + 0x136) * 4 + iVar6);
  pBVar3 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar3,&stack0x0000011c,uVar1,0xffffffff);
  *(BitmapTextElement **)(unaff_r5 + 0x250) = pBVar3;
  (*pcVar7)(piVar5,pBVar3);
  String::~String((String *)&stack0x0000011c);
  String::~String((String *)&stack0x00000114);
  String::~String((String *)&stack0x0000010c);
  *(undefined1 *)(*(int *)(unaff_r5 + 0x250) + 0x7f) = 0x11;
  BitmapTextElement::setBaseTransform
            (*(BitmapTextElement **)(unaff_r5 + 0x250),(ccMat2x3 *)(unaff_r5 + 0x3d8));
  (**(code **)(**(int **)(unaff_r5 + 0x250) + 0x18))
            (*(int **)(unaff_r5 + 0x250),*(undefined4 *)(*(int *)(unaff_r5 + 0x22c) + 0xc),
             *(undefined4 *)(*(int *)(unaff_r5 + 0x22c) + 0x10));
  *(undefined4 *)(unaff_r5 + 0x278) = 0;
  piVar5 = *(int **)(unaff_r5 + 0x14);
  pcVar7 = *(code **)(*piVar5 + 0x2c);
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(unaff_r5 + 0xc) + 0x7f8),0x2b,false);
  this = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(this,pCVar4,'\f',true);
  *(ImageElement **)(unaff_r5 + 0x234) = this;
  (*pcVar7)(piVar5,this);
  (**(code **)(**(int **)(unaff_r5 + 0x234) + 0x20))(*(int **)(unaff_r5 + 0x234),1);
  if (in_stack_0000001c != 8) {
    FUN_0016b340();
    return;
  }
  (**(code **)(**(int **)(unaff_r5 + 0x234) + 0x20))(*(int **)(unaff_r5 + 0x234),0);
  FUN_0016b340();
  return;
}


