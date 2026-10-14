/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c98f8 CharacterData::replaceInAnimation */

/* CharacterData::replaceInAnimation(unsigned char, int, CImage*, float, unsigned char, bool, bool)
    */

void __thiscall
CharacterData::replaceInAnimation
          (CharacterData *this,uchar param_1,int param_2,CImage *param_3,float param_4,uchar param_5
          ,bool param_6,bool param_7)

{
  undefined3 in_stack_00000001;
  undefined1 in_stack_0000000c;
  undefined1 local_24 [16];
  
  local_24[1] = param_7;
  local_24[0] = param_6;
  local_24[2] = in_stack_0000000c;
  Vector<CharacterData::ReplacementImageWithForm>::addElement
            (this + DAT_000c9940,param_2,param_3,_param_5,local_24._0_3_,0xffffffff,param_1);
  return;
}


