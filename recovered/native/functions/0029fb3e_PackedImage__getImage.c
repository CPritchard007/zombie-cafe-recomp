/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029fb3e PackedImage::getImage */

/* PackedImage::getImage(String, bool) const */

undefined4 __thiscall PackedImage::getImage(PackedImage *this,String *param_2,bool param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  String aSStack_20 [12];
  
  iVar3 = 0;
  while( true ) {
    if (*(short *)(this + 0x38) <= iVar3) {
      return 0;
    }
    String::String(aSStack_20,(String *)(*(int *)(this + 0x34) + iVar3 * 0x18));
    iVar1 = String::equals(param_2,aSStack_20);
    String::~String(aSStack_20);
    if (iVar1 != 0) break;
    iVar3 = iVar3 + 1;
  }
  uVar2 = getImage(this,iVar3,param_3);
  return uVar2;
}


