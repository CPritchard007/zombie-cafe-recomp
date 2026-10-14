/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c8ca6 CharacterInstance::stopReplacementInAnimation */

/* CharacterInstance::stopReplacementInAnimation(int) */

void __thiscall CharacterInstance::stopReplacementInAnimation(CharacterInstance *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_24 [24];
  
  iVar3 = 0;
  iVar2 = 0;
  do {
    if (*(int *)(this + 0x60) + 1 <= iVar2) {
LAB_000c8cd4:
      if (*(ToonAnimation **)(this + 0x90) != (ToonAnimation *)0x0) {
        ToonAnimation::stopReplacement(*(ToonAnimation **)(this + 0x90),param_1);
      }
      return;
    }
    piVar1 = (int *)(*(int *)(this + 100) + iVar3);
    iVar3 = iVar3 + 0x14;
    if (*piVar1 == param_1) {
      Vector<ToonAnimation::ReplacementImage>::removeElementAt((int)auStack_24);
      goto LAB_000c8cd4;
    }
    iVar2 = iVar2 + 1;
  } while( true );
}


