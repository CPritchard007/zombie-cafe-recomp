/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0024a5b8 ZombieCafe::ClearPicGiftBox */

/* ZombieCafe::ClearPicGiftBox() */

void __thiscall ZombieCafe::ClearPicGiftBox(ZombieCafe *this)

{
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  
  while (iVar1 = *(int *)(this + 0x674), iVar1 != -1) {
    if (-1 < iVar1) {
      puVar2 = (undefined4 *)(*(int *)(this + 0x678) + iVar1 * 4);
      pvVar3 = (void *)*puVar2;
      *puVar2 = 0;
      Vector<PicGiftBoxInfo*>::move((Vector<PicGiftBoxInfo*> *)(this + 0x670),iVar1 + 1,-1);
      *(int *)(this + 0x674) = *(int *)(this + 0x674) + -1;
      if (pvVar3 != (void *)0x0) {
        String::~String((String *)((int)pvVar3 + 0x10));
        operator_delete(pvVar3);
      }
    }
  }
  return;
}


