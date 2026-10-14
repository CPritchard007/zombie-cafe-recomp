/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029b5ca CapcomSound::~CapcomSound */

/* CapcomSound::~CapcomSound() */

CapcomSound * __thiscall CapcomSound::~CapcomSound(CapcomSound *this)

{
  stopAllSounds(this);
  return this;
}


