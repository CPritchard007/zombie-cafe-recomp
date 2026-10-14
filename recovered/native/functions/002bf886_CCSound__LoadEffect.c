/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bf886 CCSound::LoadEffect */

/* CCSound::LoadEffect(void*, char const*, unsigned int) */

void CCSound::LoadEffect(void *param_1,char *param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_3 + 1;
  if (param_3 + 1 < *(uint *)((int)param_1 + 0x1c)) {
    uVar1 = *(uint *)((int)param_1 + 0x1c);
  }
  *(uint *)((int)param_1 + 0x1c) = uVar1;
  L_LoadIntoEffect(param_2,(SSoundEffect *)(*(int *)((int)param_1 + 0x24) + param_3 * 0x118));
  return;
}


