/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029d6a4 CImage::createImage */

/* CImage::createImage(String, int) */

void CImage::createImage(String *param_1,undefined4 param_2)

{
  char *__src;
  Resource *this;
  int iVar1;
  CImage *pCVar2;
  int *piVar3;
  CFTexture *this_00;
  undefined4 uVar4;
  undefined4 local_144;
  String aSStack_134 [8];
  CFTexture aCStack_12c [8];
  String aSStack_124 [8];
  char acStack_11c [256];
  int local_1c;
  
  piVar3 = *(int **)(DAT_0029d790 + 0x29d6b0);
  local_1c = *piVar3;
  __src = (char *)String::getBytes(param_1);
  strcpy(acStack_11c,__src);
  L_PrintLog((char *)(DAT_0029d794 + 0x29d6ca),acStack_11c);
  String::String(aSStack_134,param_1);
  this = (Resource *)ResourceManager::loadImage(aSStack_134,param_2);
  String::~String(aSStack_134);
  this_00 = *(CFTexture **)(this + 0x14);
  iVar1 = CFTexture::getCCTexture2D(this_00);
  sprintf(acStack_11c,(char *)(DAT_0029d798 + 0x29d6f8),*(undefined4 *)(iVar1 + 0x14),
          *(undefined4 *)(iVar1 + 0x18));
  L_PrintLog((char *)(DAT_0029d79c + 0x29d704),acStack_11c);
  CFTexture::CFTexture(aCStack_12c,this_00);
  if (*(int *)this_00 == 0) {
    uVar4 = 0;
    local_144 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)this_00 + 4);
    uVar4 = *(undefined4 *)(iVar1 + 0x14);
    local_144 = *(undefined4 *)(iVar1 + 0x18);
  }
  pCVar2 = (CImage *)operator_new(0x34);
  CImage(pCVar2,aCStack_12c,uVar4,local_144);
  CFTexture::~CFTexture(aCStack_12c);
  String::String(aSStack_124,param_1);
  String::operator=((String *)(pCVar2 + 4),aSStack_124);
  String::~String(aSStack_124);
  *(undefined4 *)(pCVar2 + 0xc) = param_2;
  ResourceManager::Resource::releaseHandle(this);
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(pCVar2);
  }
  return;
}


