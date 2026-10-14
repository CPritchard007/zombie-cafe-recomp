/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cb434 CommandButton::CommandButton */

/* CommandButton::CommandButton(ZCImageButton*, void*, CImage*, void (*)(void*, ScreenElement*),
   void*) */

CommandButton * __thiscall
CommandButton::CommandButton
          (CommandButton *this,ZCImageButton *param_1,void *param_2,CImage *param_3,
          _func_void_void_ptr_ScreenElement_ptr *param_4,void *param_5)

{
  ImageElement *pIVar1;
  BitmapTextElement *pBVar2;
  int iVar3;
  CImage *pCVar4;
  String aSStack_20 [12];
  
  *(ZCImageButton **)this = param_1;
  *(_func_void_void_ptr_ScreenElement_ptr **)(this + 0x10) = param_4;
  *(void **)(this + 0x14) = param_5;
  pIVar1 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar1,param_3,0,'\t',true);
  *(ImageElement **)(this + 4) = pIVar1;
  (**(code **)(*(int *)pIVar1 + 0x20))(pIVar1,0);
  String::String(aSStack_20,0);
  pBVar2 = (BitmapTextElement *)operator_new(0xc0);
  BitmapTextElement::BitmapTextElement(pBVar2,aSStack_20,param_2,0xff000000,0xffffffff,0,0,0xc,0,0);
  *(BitmapTextElement **)(this + 0xc) = pBVar2;
  String::~String(aSStack_20);
  *(undefined1 *)(*(int *)(this + 0xc) + 0xb0) = 1;
  (**(code **)(**(int **)(this + 0xc) + 0x20))(*(int **)(this + 0xc),0);
  (**(code **)(**(int **)this + 0x2c))(*(int **)this,*(undefined4 *)(this + 4));
  (**(code **)(**(int **)this + 0x2c))(*(int **)this,*(undefined4 *)(this + 0xc));
  iVar3 = CapcomApp::getInstance();
  pCVar4 = (CImage *)
           PackedImage::getImage(*(PackedImage **)(*(int *)(iVar3 + 4) + DAT_000cb528),0x1e,false);
  pIVar1 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(pIVar1,pCVar4,0,'\t',true);
  *(ImageElement **)(this + 8) = pIVar1;
  (**(code **)(*(int *)pIVar1 + 0x20))(pIVar1,0);
  (**(code **)(**(int **)this + 0x2c))(*(int **)this,*(undefined4 *)(this + 8));
  return this;
}


