/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00247cb0 ZombieCafe::collectFranchiseFees */

/* ZombieCafe::collectFranchiseFees(FriendData*, int) */

undefined8 __thiscall
ZombieCafe::collectFranchiseFees(ZombieCafe *this,FriendData *param_1,int param_2)

{
  int iVar1;
  ZombieCafe *pZStack_20;
  FriendData *pFStack_1c;
  int iStack_18;
  
  pZStack_20 = this;
  pFStack_1c = param_1;
  iStack_18 = param_2;
  iVar1 = canCollectFranchiseFees(this,param_1);
  if (iVar1 != 0) {
    String::String((String *)&pZStack_20,(String *)(param_1 + 0x24));
    Vector<String>::addElement((Vector<String> *)(this + DAT_00247cfc),(String *)&pZStack_20);
    String::~String((String *)&pZStack_20);
    iVar1 = param_2 * 5;
    *(int *)(this + DAT_00247d00) = *(int *)(this + DAT_00247d00) + iVar1;
    ObjectiveSystem::collectFees(*(ObjectiveSystem **)(this + DAT_00247d04));
  }
  return CONCAT44(pZStack_20,iVar1);
}


