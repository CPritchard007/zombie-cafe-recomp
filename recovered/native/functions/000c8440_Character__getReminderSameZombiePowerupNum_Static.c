/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c8440 Character::getReminderSameZombiePowerupNum_Static */

/* Character::getReminderSameZombiePowerupNum_Static(int) */

uint Character::getReminderSameZombiePowerupNum_Static(int param_1)

{
  return 4U - param_1 & (int)~(4U - param_1) >> 0x1f;
}


