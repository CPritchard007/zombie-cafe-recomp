/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00245070 ZombieCafe::isAddFridgeFood */

/* ZombieCafe::isAddFridgeFood() */

int __thiscall ZombieCafe::isAddFridgeFood(ZombieCafe *this)

{
  return (uint)(*(uint *)(this + DAT_00245084 + 4) < 499) -
         ((int)*(uint *)(this + DAT_00245084 + 4) >> 0x1f);
}


