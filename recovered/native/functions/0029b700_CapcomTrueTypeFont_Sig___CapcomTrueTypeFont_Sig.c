/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029b700 CapcomTrueTypeFont_Sig::~CapcomTrueTypeFont_Sig */

/* CapcomTrueTypeFont_Sig::~CapcomTrueTypeFont_Sig() */

CapcomTrueTypeFont_Sig * __thiscall
CapcomTrueTypeFont_Sig::~CapcomTrueTypeFont_Sig(CapcomTrueTypeFont_Sig *this)

{
  pthread_mutex_destroy((pthread_mutex_t *)this);
  return this;
}


