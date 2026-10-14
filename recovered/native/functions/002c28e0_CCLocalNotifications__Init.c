/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c28e0 CCLocalNotifications::Init */

/* CCLocalNotifications::Init() */

undefined4 * CCLocalNotifications::Init(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)malloc(4);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0xffffffff;
  }
  else {
    *puVar1 = 0;
  }
  return puVar1;
}


