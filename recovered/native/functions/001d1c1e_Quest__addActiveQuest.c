/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d1c1e Quest::addActiveQuest */

/* Quest::addActiveQuest(int, double) */

undefined8 Quest::addActiveQuest(int param_1,double param_2)

{
  int iVar1;
  ActiveQuest *this;
  int in_r1;
  int iVar2;
  undefined4 in_r2;
  undefined4 in_r3;
  
  iVar1 = isExistInActiveQuests((Quest *)param_1,in_r1);
  if ((iVar1 == 0) && (*(char *)(*(int *)(in_r1 * 4 + *(int *)(param_1 + 0xc)) + 4) == '\x02')) {
    iVar1 = *(int *)(param_1 + 0x14) + 2;
    if (*(int *)(param_1 + 0x10) < iVar1) {
      iVar2 = *(int *)(param_1 + 0x10) * 2;
      if (iVar2 < iVar1) {
        iVar2 = iVar1;
      }
      Vector<ActiveQuest*>::resize((Vector<ActiveQuest*> *)(param_1 + 0x10),iVar2,-1);
    }
    this = (ActiveQuest *)operator_new(0x20);
    ActiveQuest::ActiveQuest(this,in_r1,(double)CONCAT44(in_r3,in_r2));
    this[0x18] = (ActiveQuest)0x1;
    Vector<ActiveQuest*>::addElement((Vector<ActiveQuest*> *)(param_1 + 0x10),this);
  }
  return CONCAT44(in_r3,in_r2);
}


