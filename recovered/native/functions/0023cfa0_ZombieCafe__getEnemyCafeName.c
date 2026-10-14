/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023cfa0 ZombieCafe::getEnemyCafeName */

/* ZombieCafe::getEnemyCafeName(int) */

undefined8 ZombieCafe::getEnemyCafeName(int param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  ZombieCafe *in_r1;
  int extraout_r1;
  undefined4 in_r2;
  int aiStack_20 [3];
  
  aiStack_20[0] = param_1;
  __aeabi_idivmod(in_r2,**(undefined1 **)(DAT_0023d010 + 0x23cfac));
  bVar1 = *(byte *)(*(int *)(in_r1 + DAT_0023d014) + extraout_r1);
  iVar2 = isBossCafeTheme(in_r1,(uint)bVar1);
  if (iVar2 == 0) {
    iVar2 = *(int *)(in_r1 + 0x6a0);
    String::String((String *)aiStack_20,(char *)(DAT_0023d018 + 0x23cfea));
    String::operator+((String *)param_1,iVar2 + extraout_r1 * 8,(String *)aiStack_20);
    String::~String((String *)aiStack_20);
  }
  else {
    pcVar3 = (char *)getBossName(in_r1,(uint)bVar1);
    String::String((String *)param_1,pcVar3);
  }
  return CONCAT44(aiStack_20[0],param_1);
}


