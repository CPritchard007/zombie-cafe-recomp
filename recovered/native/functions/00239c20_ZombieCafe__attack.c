/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239c20 ZombieCafe::attack */

/* ZombieCafe::attack(FriendData*) */

undefined8 __thiscall ZombieCafe::attack(ZombieCafe *this,FriendData *param_1)

{
  ZombieCafe *pZStack_10;
  FriendData *pFStack_c;
  
  pZStack_10 = this;
  pFStack_c = param_1;
  CapcomDate::today((CapcomDate *)&pZStack_10);
  memcpy(this + DAT_00239c38,(CapcomDate *)&pZStack_10,7);
  return CONCAT44(pFStack_c,pZStack_10);
}


