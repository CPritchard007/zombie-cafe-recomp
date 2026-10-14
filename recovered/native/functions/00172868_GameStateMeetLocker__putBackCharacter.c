/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00172868 GameStateMeetLocker::putBackCharacter */

/* GameStateMeetLocker::putBackCharacter(int) */

void __thiscall GameStateMeetLocker::putBackCharacter(GameStateMeetLocker *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = (param_1 + 0x2e) * 4;
  if (*(int *)(this + iVar3) != 0) {
    Vector<Character*>::removeElement
              ((Vector<Character*> *)(*(int *)(this + 0xc) + 0x5a0),
               *(Character **)(*(int *)(this + iVar3) + 0x8c));
    iVar2 = *(int *)(this + 0xc);
    uVar4 = *(undefined4 *)(*(int *)(this + iVar3) + 0x8c);
    iVar3 = *(int *)((Vector<Character*> *)(iVar2 + DAT_001728d4) + 4) + 2;
    if (*(int *)(iVar2 + DAT_001728d4) < iVar3) {
      iVar1 = *(int *)(iVar2 + DAT_001728d4) * 2;
      if (iVar1 < iVar3) {
        iVar1 = iVar3;
      }
      Vector<Character*>::resize((Vector<Character*> *)(iVar2 + DAT_001728d4),iVar1,-1);
    }
    iVar2 = iVar2 + DAT_001728d4;
    iVar3 = *(int *)(iVar2 + 4) + 1;
    *(int *)(iVar2 + 4) = iVar3;
    *(undefined4 *)(iVar3 * 4 + *(int *)(iVar2 + 8)) = uVar4;
    unSelectCharacter(this);
    releaseCharacter(this,param_1);
  }
  return;
}


