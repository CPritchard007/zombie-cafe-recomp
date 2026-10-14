/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001d1bc8 Quest::addActiveQuest */

/* Quest::addActiveQuest(bool, int, double) */

double Quest::addActiveQuest(bool param_1,int param_2,double param_3)

{
  uint uVar1;
  ActiveQuest *this;
  int iVar2;
  int in_r2;
  int iVar3;
  
  uVar1 = (uint)param_1;
  iVar3 = *(int *)(uVar1 + 0x14) + 2;
  if (*(int *)(uVar1 + 0x10) < iVar3) {
    iVar2 = *(int *)(uVar1 + 0x10) * 2;
    if (iVar2 < iVar3) {
      iVar2 = iVar3;
    }
    Vector<ActiveQuest*>::resize((Vector<ActiveQuest*> *)(uVar1 + 0x10),iVar2,-1);
  }
  this = (ActiveQuest *)operator_new(0x20);
  ActiveQuest::ActiveQuest(this,SUB41(param_2,0),in_r2,param_3);
  this[0x18] = (ActiveQuest)0x1;
  Vector<ActiveQuest*>::addElement((Vector<ActiveQuest*> *)(uVar1 + 0x10),this);
  return param_3;
}


