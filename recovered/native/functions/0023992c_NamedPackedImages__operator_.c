/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023992c NamedPackedImages::operator= */

/* NamedPackedImages::TEMPNAMEPLACEHOLDERVALUE(NamedPackedImages const&) */

undefined8 __thiscall
NamedPackedImages::operator=(NamedPackedImages *this,NamedPackedImages *param_1)

{
  NamedPackedImages *pNStack_18;
  NamedPackedImages *pNStack_14;
  
  pNStack_18 = this;
  pNStack_14 = param_1;
  String::String((String *)&pNStack_18,(String *)param_1);
  String::operator=((String *)this,(String *)&pNStack_18);
  String::~String((String *)&pNStack_18);
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  return CONCAT44(pNStack_18,this);
}


