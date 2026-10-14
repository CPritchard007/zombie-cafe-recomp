/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b6c7c CCServer::CanAcceptGift */

/* CCServer::CanAcceptGift(void*, unsigned long long) */

undefined4 CCServer::CanAcceptGift(void *param_1,ulonglong param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  char *in_r2;
  int in_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  
  pcVar1 = (char *)CCOptions::GetUInt64
                             (*(CCOptions **)((int)param_1 + 8),(void *)(DAT_002b6cb0 + 0x2b6c8c),
                              (char *)0x0,CONCAT44(unaff_r5,unaff_r4));
  if ((in_r3 == 0) && (in_r2 <= pcVar1)) {
    uVar2 = 0;
  }
  else {
    CCOptions::SetUInt64
              (*(CCOptions **)((int)param_1 + 8),(void *)(DAT_002b6cb4 + 0x2b6ca4),in_r2,
               CONCAT44(unaff_r5,unaff_r4));
    uVar2 = 1;
  }
  return uVar2;
}


