/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a7f32 ToonAnimation::setData */

/* ToonAnimation::setData(ToonAnimation::Data*) */

void __thiscall ToonAnimation::setData(ToonAnimation *this,Data *param_1)

{
  short sVar1;
  undefined4 uVar2;
  Data *this_00;
  
  this_00 = *(Data **)(this + 0x20);
  if ((this_00 != (Data *)0x0) &&
     (sVar1 = *(short *)(this_00 + 4), *(short *)(this_00 + 4) = sVar1 + -1, (short)(sVar1 + -1) < 1
     )) {
    Data::~Data(this_00);
    operator_delete(this_00);
  }
  *(Data **)(this + 0x20) = param_1;
  if (param_1 != (Data *)0x0) {
    *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
    uVar2 = __udivsi3(1000,*(undefined4 *)(*(int *)param_1 + 4));
    *(undefined4 *)(this + 0xc) = uVar2;
    this[8] = SUB41(*(undefined4 *)(*(int *)param_1 + 0x1c),0);
  }
  (**(code **)(*(int *)this + 0x10))(this);
  return;
}


