/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bb710 BonePile::~BonePile */

/* BonePile::~BonePile() */

BonePile * __thiscall BonePile::~BonePile(BonePile *this)

{
  *(int *)this = *(int *)(DAT_000bb740 + 0xbb71a) + 8;
  if (*(int **)(this + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0x38) + 4))();
  }
  CafeObject::~CafeObject((CafeObject *)this);
  return this;
}


