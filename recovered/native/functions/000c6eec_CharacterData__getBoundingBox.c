/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000c6eec CharacterData::getBoundingBox */

/* CharacterData::getBoundingBox(unsigned char, unsigned char) const */

undefined8 __thiscall CharacterData::getBoundingBox(CharacterData *this,uchar param_1,uchar param_2)

{
  return *(undefined8 *)(this + ((uint)param_1 * 4 + (uint)param_2 + 0xb0) * 8);
}


