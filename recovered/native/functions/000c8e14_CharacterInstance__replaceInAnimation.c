/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c8e14 CharacterInstance::replaceInAnimation */

/* CharacterInstance::replaceInAnimation(int, CImage*, float, unsigned char, bool, bool, long) */

void __thiscall
CharacterInstance::replaceInAnimation
          (CharacterInstance *this,int param_1,CImage *param_2,float param_3,uchar param_4,
          bool param_5,bool param_6,long param_7)

{
  undefined4 in_stack_0000000c;
  undefined1 local_44;
  undefined1 local_34 [2];
  undefined1 uStack_32;
  undefined1 local_20 [2];
  undefined1 uStack_1e;
  
  local_44 = (undefined1)param_7;
  _local_34 = CONCAT12(local_44,CONCAT11(param_6,param_5));
  Vector<ToonAnimation::ReplacementImage>::addElement(this + 0x5c,param_1,param_2,param_4,_local_34)
  ;
  if (*(int *)(this + 0x90) != 0) {
    _local_20 = CONCAT12(local_44,CONCAT11(param_6,param_5));
    Vector<ToonAnimation::ReplacementImage>::addElement
              (*(int *)(this + 0x90) + 0x30,param_1,param_2,param_4,_local_20,in_stack_0000000c);
  }
  return;
}


