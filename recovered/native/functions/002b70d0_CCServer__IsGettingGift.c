/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002b70d0 CCServer::IsGettingGift */

/* CCServer::IsGettingGift(void*, int) */

undefined4 CCServer::IsGettingGift(void *param_1,int param_2)

{
  if (param_2 != -1) {
    *(int *)((int)param_1 + 0x360) = param_2;
  }
  return *(undefined4 *)((int)param_1 + 0x360);
}


