/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023d6b8 ZombieCafe::loadDialogImages */

/* ZombieCafe::loadDialogImages() */

void __thiscall ZombieCafe::loadDialogImages(ZombieCafe *this)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  String aSStack_64 [8];
  String aSStack_5c [8];
  char acStack_54 [64];
  int local_14;
  
  piVar3 = *(int **)(DAT_0023d764 + 0x23d6c4);
  local_14 = *piVar3;
  if (*(CImage **)(this + 0x7f0) == (CImage *)0x0) {
    L_PrintLog((char *)(DAT_0023d768 + 0x23d6da),(char *)(DAT_0023d76c + 0x23d6dc));
    iVar1 = SmDev();
    String::String(aSStack_64,(String *)(iVar1 * 8 + *(int *)(DAT_0023d770 + 0x23d6ec)));
    iVar1 = SmDev();
    String::String(aSStack_5c,(String *)(iVar1 * 8 + *(int *)(DAT_0023d774 + 0x23d700)));
    uVar2 = PackedImage::createPackedImage(aSStack_64,0,aSStack_5c,0);
    *(undefined4 *)(this + 0x7f0) = uVar2;
    String::~String(aSStack_5c);
    String::~String(aSStack_64);
  }
  else {
    uVar2 = CImage::getRefCount(*(CImage **)(this + 0x7f0));
    snprintf(acStack_54,0x40,(char *)(DAT_0023d778 + 0x23d730),uVar2);
    L_PrintLog((char *)(DAT_0023d77c + 0x23d73c),acStack_54);
  }
  if (local_14 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


