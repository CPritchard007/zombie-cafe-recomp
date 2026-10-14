/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f4990 MessageElement::paint */

/* MessageElement::paint(CapcomGraphics*) */

void __thiscall MessageElement::paint(MessageElement *this,CapcomGraphics *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  int iVar4;
  
  lVar3 = **(long **)(DAT_001f49e4 + 0x1f499c);
  iVar1 = __divsi3(*(int *)(this + 0x8c) << 0x10,(int)**(short **)(DAT_001f49e8 + 0x1f49ac));
  uVar2 = CFColor::interpolate(lVar3,0,iVar1,0x8000);
  *(undefined4 *)(this + 0x18) = uVar2;
  iVar4 = *(int *)(this + 0x7c);
  iVar1 = SmDev();
  *(char *)(iVar4 + 0x86) = (char)*(undefined4 *)(iVar1 * 4 + *(int *)(DAT_001f49ec + 0x1f49d4));
  ScreenElement::paint((ScreenElement *)this,param_1);
  return;
}


