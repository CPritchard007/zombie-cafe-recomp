/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a8032 ToonAnimation::calculateBoundingBox */

/* ToonAnimation::calculateBoundingBox(int) */

void __thiscall ToonAnimation::calculateBoundingBox(ToonAnimation *this,int param_1)

{
  Data::calculateBoundingBox
            (*(Data **)(this + 0x20),*(CImage ***)(this + 0x28),param_1,(Vector *)(this + 0x30));
  return;
}


