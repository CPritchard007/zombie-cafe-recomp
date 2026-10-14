/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b6cb8 CCServer::GetGiftIndex */

/* CCServer::GetGiftIndex(void*) */

void CCServer::GetGiftIndex(void *param_1)

{
  undefined4 in_r3;
  undefined4 in_lr;
  
  CCOptions::GetUInt64
            (*(CCOptions **)((int)param_1 + 8),(void *)(DAT_002b6ccc + 0x2b6cc6),(char *)0x0,
             CONCAT44(in_lr,in_r3));
  return;
}


