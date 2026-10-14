/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e5b74 LotteryDialog::resetButtonDisplay */

/* LotteryDialog::resetButtonDisplay(int, int) */

void __thiscall LotteryDialog::resetButtonDisplay(LotteryDialog *this,int param_1,int param_2)

{
  code *pcVar1;
  CImage *pCVar2;
  ImageElement *pIVar3;
  BitmapTextElement *pBVar4;
  int iVar5;
  float extraout_s0;
  float extraout_s1;
  undefined4 uVar6;
  undefined4 uVar7;
  String aSStack_20 [12];
  
  pcVar1 = *(code **)(*(int *)this + 0x2c);
  if (*(char *)(*(int *)(DAT_001e5cf4 + 0x1e5b80) + param_2) == '\0') {
    pCVar2 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0x60) + DAT_001e5cf8),0x1c,false);
    pIVar3 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar3,pCVar2,'\t',true);
  }
  else {
    pCVar2 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0x60) + DAT_001e5cf8),0x24,false);
    pIVar3 = (ImageElement *)operator_new(0x98);
    ImageElement::ImageElement(pIVar3,pCVar2,'\t',true);
  }
  *(ImageElement **)(this + (param_1 + 0x5c) * 4) = pIVar3;
  (*pcVar1)(this,pIVar3);
  (**(code **)(**(int **)(this + (param_1 + 0x5c) * 4) + 0x14))
            (*(int **)(this + (param_1 + 0x5c) * 4),*(int *)(this + 0xc) << 1,
             *(int *)(this + 0x10) << 1);
  pcVar1 = *(code **)(*(int *)this + 0x2c);
  String::valueOf((int)aSStack_20);
  pBVar4 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement
            (pBVar4,aSStack_20,*(undefined4 *)(*(int *)(this + 0x60) + DAT_001e5cfc),0xffffffff,1,1,
             0x12,0,0);
  *(BitmapTextElement **)(this + (param_1 + 0x3e) * 4) = pBVar4;
  (*pcVar1)(this,pBVar4);
  String::~String(aSStack_20);
  (**(code **)(**(int **)(this + (param_1 + 0x3e) * 4) + 0x14))
            (*(int **)(this + (param_1 + 0x3e) * 4),*(int *)(this + 0xc) << 1,
             *(int *)(this + 0x10) << 1);
  iVar5 = *(int *)(*(int *)(this + (param_2 + 0x88) * 4 + 4) * 4 + *(int *)(DAT_001e5d00 + 0x1e5c68)
                  );
  if (iVar5 != -1) {
    pcVar1 = *(code **)(*(int *)this + 0x2c);
    pCVar2 = (CImage *)
             PackedImage::getImage
                       (*(PackedImage **)(*(int *)(this + 0x60) + DAT_001e5d04),iVar5,false);
    pIVar3 = (ImageElement *)operator_new(0x98);
    uVar6 = 0x12;
    uVar7 = 1;
    ImageElement::ImageElement(pIVar3,pCVar2,extraout_s0,extraout_s1,'\0',false);
    iVar5 = param_1 + 0x4c;
    *(ImageElement **)(this + iVar5 * 4 + 4) = pIVar3;
    (*pcVar1)(this,pIVar3);
    pcVar1 = *(code **)(**(int **)(this + iVar5 * 4 + 4) + 0x14);
    (*pcVar1)(*(int **)(this + iVar5 * 4 + 4),*(int *)(this + 0xc) << 1,*(int *)(this + 0x10) << 1,
              pcVar1,uVar6,uVar7);
    (**(code **)(**(int **)(this + iVar5 * 4 + 4) + 0x20))(*(int **)(this + iVar5 * 4 + 4),1);
  }
  return;
}


