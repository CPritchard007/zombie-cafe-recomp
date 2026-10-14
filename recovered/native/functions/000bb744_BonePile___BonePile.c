/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bb744 BonePile::~BonePile */

/* BonePile::~BonePile() */

BonePile * __thiscall BonePile::~BonePile(BonePile *this)

{
  ~BonePile(this);
  operator_delete(this);
  return this;
}


