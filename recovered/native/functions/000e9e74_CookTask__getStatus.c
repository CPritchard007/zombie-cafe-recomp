/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000e9e74 CookTask::getStatus */

/* CookTask::getStatus() */

StringUtil * CookTask::getStatus(void)

{
  StringUtil *in_r0;
  FoodStack *this;
  int iVar1;
  int iVar2;
  int in_r1;
  
  this = *(FoodStack **)(*(int *)(in_r1 + 0x28) + 100);
  if ((this == (FoodStack *)0x0) || (iVar1 = FoodStack::getCookTimeSeconds(this), iVar1 == 0)) {
    String::String((String *)in_r0,(char *)(DAT_000e9ebc + 0xe9eb2));
  }
  else {
    iVar1 = FoodStack::getCookTimeSeconds(*(FoodStack **)(*(int *)(in_r1 + 0x28) + 100));
    iVar2 = __divsi3(*(undefined4 *)(*(int *)(in_r1 + 0x28) + 0x70),DAT_000e9eb8);
    StringUtil::createTimeString(in_r0,iVar1 + iVar2,'\x02');
  }
  return in_r0;
}


