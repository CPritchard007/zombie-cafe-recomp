/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00238ec0 ZombieCafe::GetEntryInfoSuccess */

/* ZombieCafe::GetEntryInfoSuccess(void*, unsigned char const*, unsigned int) */

void ZombieCafe::GetEntryInfoSuccess(void *param_1,uchar *param_2,uint param_3)

{
  javaAppDriverGetEntryParse(param_2);
  **(char **)(DAT_00238ef4 + 0x238eda) =
       ((char)((int)**(uint **)(DAT_00238ef0 + 0x238ed4) >> 0x1f) -
       (char)((int)**(uint **)(DAT_00238eec + 0x238ed2) >> 0x1f)) +
       (**(uint **)(DAT_00238eec + 0x238ed2) <= **(uint **)(DAT_00238ef0 + 0x238ed4));
  return;
}


