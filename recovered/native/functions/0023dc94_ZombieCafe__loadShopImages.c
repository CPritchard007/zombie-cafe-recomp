/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0023dc94 ZombieCafe::loadShopImages */

/* ZombieCafe::loadShopImages() */

void __thiscall ZombieCafe::loadShopImages(ZombieCafe *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  String aSStack_64 [8];
  String aSStack_5c [8];
  char acStack_54 [64];
  int local_14;
  
  iVar1 = DAT_0023dd40;
  piVar4 = *(int **)(DAT_0023dd3c + 0x23dca0);
  local_14 = *piVar4;
  if (*(CImage **)(this + DAT_0023dd40) == (CImage *)0x0) {
    L_PrintLog((char *)(DAT_0023dd44 + 0x23dcb4),(char *)(DAT_0023dd48 + 0x23dcb6));
    iVar2 = SmDev();
    String::String(aSStack_64,(String *)(iVar2 * 8 + *(int *)(DAT_0023dd4c + 0x23dcc6)));
    iVar2 = SmDev();
    String::String(aSStack_5c,(String *)(iVar2 * 8 + *(int *)(DAT_0023dd50 + 0x23dcda)));
    uVar3 = PackedImage::createPackedImage(aSStack_64,0,aSStack_5c,0);
    *(undefined4 *)(this + iVar1) = uVar3;
    String::~String(aSStack_5c);
    String::~String(aSStack_64);
  }
  else {
    uVar3 = CImage::getRefCount(*(CImage **)(this + DAT_0023dd40));
    snprintf(acStack_54,0x40,(char *)(DAT_0023dd54 + 0x23dd0a),uVar3);
    L_PrintLog((char *)(DAT_0023dd58 + 0x23dd16),acStack_54);
  }
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


