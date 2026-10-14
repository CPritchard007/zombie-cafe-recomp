/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00239f1c ZombieCafe::removeNotifications */

/* ZombieCafe::removeNotifications() */

void ZombieCafe::removeNotifications(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)CCLocalNotifications::Init();
  CCLocalNotifications::DeleteAllNotes(pvVar1);
  CCLocalNotifications::Free(pvVar1);
  return;
}


