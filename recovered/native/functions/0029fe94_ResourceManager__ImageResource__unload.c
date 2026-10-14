/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029fe94 ResourceManager::ImageResource::unload */

/* ResourceManager::ImageResource::unload() */

void __thiscall ResourceManager::ImageResource::unload(ImageResource *this)

{
  if (this[0x12] != (ImageResource)0x0) {
    CFTexture::releaseRef((CFTexture *)(this + 0x20));
    CFTexture::init((CFTexture *)(this + 0x20),(ccTexture2D *)0x0);
    this[0x12] = (ImageResource)0x0;
  }
  return;
}


