/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00245ad0 ZombieCafe::exiting */

/* ZombieCafe::exiting() */

void __thiscall ZombieCafe::exiting(ZombieCafe *this)

{
  int *piVar1;
  
  L_PrintLog((char *)(DAT_00245afc + 0x245ade),(char *)(DAT_00245af8 + 0x245adc));
  piVar1 = *(int **)(this + 8);
  if (*(char *)((int)piVar1 + 5) != '\0') {
    (**(code **)(*piVar1 + 0x28))(piVar1,2);
  }
  scheduleNotifications(this);
  return;
}


