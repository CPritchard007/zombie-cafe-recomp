/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029ebc0 ImageMap::duplicate */

/* ImageMap::duplicate() const */

ImageMap * __thiscall ImageMap::duplicate(ImageMap *this)

{
  ImageMap *this_00;
  
  this_00 = (ImageMap *)operator_new(0x18);
  ImageMap(this_00);
  *(undefined4 *)this_00 = *(undefined4 *)this;
  *(undefined4 *)(this_00 + 4) = *(undefined4 *)(this + 4);
  *(char *)(*(int *)this + 5) = *(char *)(*(int *)this + 5) + '\x01';
  return this_00;
}


