/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c2914 CCLocalNotifications::Schedule */

/* CCLocalNotifications::Schedule(void*, unsigned int, unsigned int, char const*, char const*, char
   const*) */

int CCLocalNotifications::Schedule
              (void *param_1,uint param_2,uint param_3,char *param_4,char *param_5,char *param_6)

{
  int iVar1;
  
                    /* WARNING: Load size is inaccurate */
  iVar1 = *param_1;
  if (iVar1 != 0) {
    DeleteScheduledNote(param_1,param_2);
    iVar1 = 1;
  }
  return iVar1;
}


