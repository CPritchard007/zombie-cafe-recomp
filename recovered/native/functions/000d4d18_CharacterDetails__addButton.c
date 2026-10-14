/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000d4d18 CharacterDetails::addButton */

/* CharacterDetails::addButton(void (*)(void*, ScreenElement*), void*, int) */

ImageElement * __thiscall
CharacterDetails::addButton
          (CharacterDetails *this,_func_void_void_ptr_ScreenElement_ptr *param_1,void *param_2,
          int param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  CImage *pCVar3;
  ImageElement *this_00;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  pCVar3 = (CImage *)
           PackedImage::getImage
                     (*(PackedImage **)(*(int *)(this + 0x78) + DAT_000d4de8),param_3,false);
  uVar1 = **(undefined2 **)(DAT_000d4dec + 0xd4d3c);
  uVar2 = *(undefined2 *)(this + 0x140);
  this_00 = (ImageElement *)operator_new(0x98);
  ImageElement::ImageElement(this_00,pCVar3,CONCAT22(uVar2,uVar1),'!',true);
  *(short *)(this + 0x140) =
       (*(short *)(this + 0x140) - (short)*(int *)(this_00 + 0xc)) -
       (short)(*(int *)(this_00 + 0xc) >> 2);
  CapcomLinkedList<CImage*>::add
            ((CapcomLinkedList<CImage*> *)(this + 0x158),*(CImage **)(this_00 + 100));
  CapcomLinkedList<ScreenElement*>::add
            ((CapcomLinkedList<ScreenElement*> *)(this + 0x144),(ScreenElement *)this_00);
  puVar4 = (undefined4 *)operator_new(0xc);
  puVar4[1] = param_1;
  puVar4[2] = param_2;
  *puVar4 = this_00;
  iVar6 = *(int *)(this + 300) + 2;
  if (*(int *)(this + 0x128) < iVar6) {
    iVar5 = *(int *)(this + 0x128) * 2;
    if (iVar5 < iVar6) {
      iVar5 = iVar6;
    }
    Vector<ActionElement*>::resize((Vector<ActionElement*> *)(this + 0x128),iVar5,-1);
  }
  iVar6 = *(int *)(this + 300);
  *(int *)(this + 300) = iVar6 + 1;
  *(undefined4 **)((iVar6 + 1) * 4 + *(int *)(this + 0x130)) = puVar4;
  (**(code **)(*(int *)this + 0x2c))(this,this_00);
  layout(this);
  return this_00;
}


