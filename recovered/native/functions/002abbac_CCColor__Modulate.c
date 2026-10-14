/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002abbac CCColor::Modulate */

/* CCColor::Modulate(unsigned int, unsigned int) */

void __thiscall CCColor::Modulate(CCColor *this,uint param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = __udivsi3((param_1 & 0xff) * ((uint)this & 0xff),0xff,param_2,param_1 & 0xff,this,param_1,
                    param_2);
  uVar2 = __udivsi3((param_1 >> 8 & 0xff) * ((uint)this >> 8 & 0xff),0xff);
  uVar3 = __udivsi3((param_1 >> 0x10 & 0xff) * ((uint)this >> 0x10 & 0xff),0xff);
  uVar4 = __udivsi3((param_1 >> 0x18) * ((uint)this >> 0x18),0xff);
  FUN_002ab86c(uVar1,uVar2,uVar3,uVar4);
  return;
}


