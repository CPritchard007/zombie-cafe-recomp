/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00238604 CLock::~CLock */

/* CLock::~CLock() */

CLock * __thiscall CLock::~CLock(CLock *this)

{
  pthread_mutex_destroy((pthread_mutex_t *)this);
  return this;
}


