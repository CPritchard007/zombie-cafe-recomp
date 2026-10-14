/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023a1b0 ZombieCafe::timeSinceFirstFrequentPurchase */

/* ZombieCafe::timeSinceFirstFrequentPurchase() */

void ZombieCafe::timeSinceFirstFrequentPurchase(void)

{
  int in_r0;
  undefined4 in_r1;
  int local_10;
  undefined4 local_c;
  
  local_10 = in_r0;
  local_c = in_r1;
  CapcomDate::now((CapcomDate *)&local_10);
  CapcomDate::secondsBetween
            (*(undefined4 *)(in_r0 + 0xbf0),*(undefined4 *)(in_r0 + 0xbf4),local_10,local_c);
  return;
}


