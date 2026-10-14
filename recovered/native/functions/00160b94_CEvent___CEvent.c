/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00160b94 CEvent::~CEvent */

/* CEvent::~CEvent() */

CEvent * __thiscall CEvent::~CEvent(CEvent *this)

{
  pthread_mutex_destroy((pthread_mutex_t *)this);
  pthread_cond_destroy((pthread_cond_t *)(this + 4));
  return this;
}


