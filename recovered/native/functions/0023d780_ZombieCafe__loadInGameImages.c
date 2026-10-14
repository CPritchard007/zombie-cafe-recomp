/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023d780 ZombieCafe::loadInGameImages */

/* ZombieCafe::loadInGameImages() */

void __thiscall ZombieCafe::loadInGameImages(ZombieCafe *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  String aSStack_64 [8];
  String aSStack_5c [8];
  char acStack_54 [64];
  int local_14;
  
  iVar1 = DAT_0023d834;
  piVar4 = *(int **)(DAT_0023d830 + 0x23d78c);
  local_14 = *piVar4;
  if (*(CImage **)(this + DAT_0023d834) == (CImage *)0x0) {
    L_PrintLog((char *)(DAT_0023d838 + 0x23d7a0),(char *)(DAT_0023d83c + 0x23d7a2));
    iVar2 = SmDev();
    String::String(aSStack_64,(String *)(iVar2 * 8 + *(int *)(DAT_0023d840 + 0x23d7b2)));
    iVar2 = SmDev();
    String::String(aSStack_5c,(String *)(iVar2 * 8 + *(int *)(DAT_0023d844 + 0x23d7c6)));
    uVar3 = PackedImage::createPackedImage(aSStack_64,0,aSStack_5c,0);
    *(undefined4 *)(this + iVar1) = uVar3;
    String::~String(aSStack_5c);
    String::~String(aSStack_64);
  }
  else {
    uVar3 = CImage::getRefCount(*(CImage **)(this + DAT_0023d834));
    snprintf(acStack_54,0x40,(char *)(DAT_0023d848 + 0x23d7f6),uVar3);
    L_PrintLog((char *)(DAT_0023d84c + 0x23d802),acStack_54);
  }
  loadDialogImages(this);
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


