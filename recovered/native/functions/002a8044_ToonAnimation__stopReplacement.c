/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a8044 ToonAnimation::stopReplacement */

/* ToonAnimation::stopReplacement(int) */

void __thiscall ToonAnimation::stopReplacement(ToonAnimation *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_24 [24];
  
  iVar3 = 0;
  iVar2 = 0;
  while( true ) {
    if (*(int *)(this + 0x34) + 1 <= iVar2) {
      return;
    }
    piVar1 = (int *)(*(int *)(this + 0x38) + iVar3);
    iVar3 = iVar3 + 0x14;
    if (*piVar1 == param_1) break;
    iVar2 = iVar2 + 1;
  }
  Vector<ToonAnimation::ReplacementImage>::removeElementAt((int)auStack_24);
  return;
}


