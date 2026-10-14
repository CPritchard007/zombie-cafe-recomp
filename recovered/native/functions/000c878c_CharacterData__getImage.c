/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c878c CharacterData::getImage */

/* CharacterData::getImage(int, int) */

undefined4 __thiscall CharacterData::getImage(CharacterData *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_48;
  undefined4 local_44;
  byte local_34;
  undefined1 auStack_30 [28];
  
  iVar1 = DAT_000c87e4;
  iVar2 = 0;
  while( true ) {
    if (*(int *)(this + iVar1 + 4) + 1 <= iVar2) {
      return *(undefined4 *)(param_1 * 4 + *(int *)(this + (param_2 + 0x15a) * 4));
    }
    Vector<CharacterData::ReplacementImageWithForm>::elementAt((int)auStack_30);
    memcpy(&local_48,auStack_30,0x15);
    if ((local_48 == param_1) && ((uint)local_34 == param_2)) break;
    iVar2 = iVar2 + 1;
  }
  return local_44;
}


