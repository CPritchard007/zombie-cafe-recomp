/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002bf9d8 CCSound::Init */

/* CCSound::Init(unsigned int, unsigned int) */

undefined4 CCSound::Init(uint param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = Init(param_1,param_2,1);
  *(undefined4 *)(DAT_002bf9ec + 0x2bf9e6) = uVar1;
  return 1;
}


