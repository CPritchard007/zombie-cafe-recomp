/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000b6054 Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_StartNotifications */

void Java_com_capcom_zombiecafeandroidJP_ZombieCafeAndroid_StartNotifications(void)

{
  ZombieCafe *this;
  
  if ((*(int *)(DAT_000b606c + 0xb6064) != 0) &&
     (this = *(ZombieCafe **)(*(int *)(DAT_000b606c + 0xb6064) + 4), this != (ZombieCafe *)0x0)) {
    ZombieCafe::scheduleNotifications(this);
  }
  return;
}


