/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a4670 GatyaEftFallImageElement::TickFall */

/* GatyaEftFallImageElement::TickFall(int) */

undefined8 __thiscall GatyaEftFallImageElement::TickFall(GatyaEftFallImageElement *this,int param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar2 = __floatsisf(param_1);
  uVar2 = __divsf3(uVar2,DAT_002a4708);
  uVar2 = __divsf3(uVar2,DAT_002a470c);
  uVar3 = __addsf3(uVar2,*(undefined4 *)(this + 0xa4));
  *(undefined4 *)(this + 0xa4) = uVar3;
  uVar4 = __mulsf3(uVar2,*(undefined4 *)(this + 0xa0));
  uVar4 = __addsf3(uVar4,*(undefined4 *)(this + 0x98));
  *(undefined4 *)(this + 0x98) = uVar4;
  uVar3 = __mulsf3(uVar3,uVar2);
  uVar3 = __addsf3(uVar3,*(undefined4 *)(this + 0x9c));
  *(undefined4 *)(this + 0x9c) = uVar3;
  uVar2 = __mulsf3(uVar2,*(undefined4 *)(this + 0xac));
  uVar2 = __addsf3(*(undefined4 *)(this + 0xa8),uVar2);
  *(undefined4 *)(this + 0xa8) = uVar2;
  uVar1 = __fixsfsi(uVar3);
  iVar5 = __fixsfsi(uVar4);
  uVar6 = (**(code **)(*(int *)this + 0x14))
                    (this,(int)((uint)uVar1 | iVar5 << 0x10) >> 0x10,(int)(short)uVar1);
  ImageElement::setScale((ImageElement *)this,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
  return CONCAT44(uVar3,uVar4);
}


