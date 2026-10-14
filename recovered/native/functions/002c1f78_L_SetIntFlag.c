/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002c1f78 L_SetIntFlag */

/* L_SetIntFlag(CMarketingView*, char const*, int, int) */

void L_SetIntFlag(CMarketingView *param_1,char *param_2,int param_3,int param_4)

{
  int iVar1;
  CCOptions *this;
  int *piVar2;
  char acStack_9c [128];
  int local_1c;
  
  piVar2 = *(int **)(DAT_002c1fc8 + 0x2c1f84);
  local_1c = *piVar2;
  snprintf(acStack_9c,0x80,(char *)(DAT_002c1fcc + 0x2c1f98));
  iVar1 = CCOptions::GetInt(*(CCOptions **)(param_1 + 0xc0),acStack_9c,(char *)param_3,(int)param_2)
  ;
  this = *(CCOptions **)(param_1 + 0xc0);
  CCOptions::SetInt(this,acStack_9c,(char *)(iVar1 + param_4),(int)this);
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


