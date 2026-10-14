/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b6c68 CCServer::OverrideGiftIndex */

/* CCServer::OverrideGiftIndex(void*, unsigned long long) */

void CCServer::OverrideGiftIndex(void *param_1,ulonglong param_2)

{
  char *in_r2;
  undefined4 in_r3;
  undefined4 in_lr;
  
  CCOptions::SetUInt64
            (*(CCOptions **)((int)param_1 + 8),(void *)(DAT_002b6c78 + 0x2b6c72),in_r2,
             CONCAT44(in_lr,in_r3));
  return;
}


