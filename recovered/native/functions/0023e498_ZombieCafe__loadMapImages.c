/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023e498 ZombieCafe::loadMapImages */

/* ZombieCafe::loadMapImages() */

void __thiscall ZombieCafe::loadMapImages(ZombieCafe *this)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  String aSStack_64 [8];
  String aSStack_5c [8];
  char acStack_54 [64];
  int local_14;
  
  piVar3 = *(int **)(DAT_0023e544 + 0x23e4a4);
  local_14 = *piVar3;
  if (*(CImage **)(this + 0x7f8) == (CImage *)0x0) {
    L_PrintLog((char *)(DAT_0023e548 + 0x23e4ba),(char *)(DAT_0023e54c + 0x23e4bc));
    iVar1 = SmDev();
    String::String(aSStack_64,(String *)(iVar1 * 8 + *(int *)(DAT_0023e550 + 0x23e4cc)));
    iVar1 = SmDev();
    String::String(aSStack_5c,(String *)(iVar1 * 8 + *(int *)(DAT_0023e554 + 0x23e4e0)));
    uVar2 = PackedImage::createPackedImage(aSStack_64,0,aSStack_5c,0);
    *(undefined4 *)(this + 0x7f8) = uVar2;
    String::~String(aSStack_5c);
    String::~String(aSStack_64);
  }
  else {
    uVar2 = CImage::getRefCount(*(CImage **)(this + 0x7f8));
    snprintf(acStack_54,0x40,(char *)(DAT_0023e558 + 0x23e510),uVar2);
    L_PrintLog((char *)(DAT_0023e55c + 0x23e51c),acStack_54);
  }
  if (local_14 != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


