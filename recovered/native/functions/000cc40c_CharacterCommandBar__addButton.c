/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000cc40c CharacterCommandBar::addButton */

/* CharacterCommandBar::addButton(void (*)(void*, ScreenElement*), void*, int) */

CommandButton * __thiscall
CharacterCommandBar::addButton
          (CharacterCommandBar *this,_func_void_void_ptr_ScreenElement_ptr *param_1,void *param_2,
          int param_3)

{
  CImage *pCVar1;
  ZCImageButton *this_00;
  int iVar2;
  CommandButton *this_01;
  int iVar3;
  void *pvVar4;
  CapcomLinkedList<ScreenElement*> *this_02;
  
  pCVar1 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(this + 0x60) + DAT_000cc4dc),param_3,false);
  this_00 = (ZCImageButton *)operator_new(0xa0);
  ZCImageButton::ZCImageButton(this_00,'!',pCVar1,(CImage *)0x0,0,0,true);
  iVar3 = *(int *)(this + 0x60);
  iVar2 = SmDev();
  pvVar4 = *(void **)((*(int *)(DAT_000cc4e0 + iVar2 * 4 + 0xcc462) + 0x136) * 4 + iVar3);
  this_01 = (CommandButton *)operator_new(0x18);
  CommandButton::CommandButton(this_01,this_00,pvVar4,*(CImage **)(this + 0xd0),param_1,param_2);
  this_02 = (CapcomLinkedList<ScreenElement*> *)(this + 0x88);
  CapcomLinkedList<CImage*>::add
            ((CapcomLinkedList<CImage*> *)(this + 0x9c),*(CImage **)(this_00 + 0x60));
  CapcomLinkedList<ScreenElement*>::add(this_02,(ScreenElement *)this_00);
  CapcomLinkedList<ScreenElement*>::add(this_02,*(ScreenElement **)(this_01 + 4));
  CapcomLinkedList<ScreenElement*>::add(this_02,*(ScreenElement **)(this_01 + 0xc));
  CapcomLinkedList<CImage*>::add
            ((CapcomLinkedList<CImage*> *)(this + 0x9c),*(CImage **)(*(int *)(this_01 + 8) + 100));
  CapcomLinkedList<ScreenElement*>::add(this_02,*(ScreenElement **)(this_01 + 8));
  (**(code **)(*(int *)this + 0x2c))(this,this_00);
  (**(code **)(*(int *)this_00 + 0x20))(this_00,0);
  return this_01;
}


