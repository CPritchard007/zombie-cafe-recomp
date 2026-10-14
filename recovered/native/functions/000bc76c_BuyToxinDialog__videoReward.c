/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000bc76c BuyToxinDialog::videoReward */

/* BuyToxinDialog::videoReward(void*, unsigned int, unsigned int) */

void BuyToxinDialog::videoReward(void *param_1,uint param_2,uint param_3)

{
  ZombieCafe::addToxin(*(ZombieCafe **)((int)param_1 + 0x68),param_3,false);
  return;
}


