/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002a0134 ResourceManager::ImageResource::load */

/* ResourceManager::ImageResource::load() */

void __thiscall ResourceManager::ImageResource::load(ImageResource *this)

{
  char *__src;
  CFTexture *this_00;
  int iVar1;
  int *piVar2;
  Resource aRStack_60 [8];
  int local_58 [2];
  char acStack_50 [52];
  int local_1c;
  
  piVar2 = *(int **)(DAT_002a01c0 + 0x2a0140);
  local_1c = *piVar2;
  if (this[0x12] == (ImageResource)0x0) {
    *(undefined4 *)(this + 0x18) = 0;
    __src = (char *)String::getBytes((String *)(this + 8));
    strcpy(acStack_50,__src);
    L_PrintLog((char *)(DAT_002a01c4 + 0x2a0164),acStack_50);
    this_00 = (CFTexture *)(this + 0x20);
    Resource::loadImage(aRStack_60,acStack_50,(int)*(short *)(this + 0x10));
    CFTexture::releaseRef(this_00);
    CFTexture::init(this_00,aRStack_60);
    CFTexture::~CFTexture((CFTexture *)aRStack_60);
    *(CFTexture **)(this + 0x14) = this_00;
    CFTexture::CFTexture((CFTexture *)local_58,(ccTexture2D *)0x0);
    iVar1 = *(int *)(this + 0x20);
    CFTexture::~CFTexture((CFTexture *)local_58);
    if (iVar1 != local_58[0]) {
      this[0x12] = (ImageResource)0x1;
    }
  }
  if (local_1c != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


