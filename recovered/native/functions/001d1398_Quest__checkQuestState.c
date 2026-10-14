/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d1398 Quest::checkQuestState */

/* Quest::checkQuestState(int) */

undefined1 __thiscall Quest::checkQuestState(Quest *this,int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 * 4 + *(int *)(this + 0xc));
  cVar1 = *(char *)(iVar2 + 4);
  if (cVar1 == '\0') {
    checkQuestStateInSleep(this,param_1);
  }
  else if (cVar1 == '\x02') {
    checkQuestStateInActivate((int)this);
  }
  else if (cVar1 == '\x01') {
    checkQuestStateInReady((int)this);
  }
  else if (cVar1 == '\x04') {
    checkQuestStateInFinish((int)this);
  }
  return *(undefined1 *)(iVar2 + 4);
}


