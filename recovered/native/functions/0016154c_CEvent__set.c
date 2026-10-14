/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0016154c CEvent::set */

/* CEvent::set(int) */

void __thiscall CEvent::set(CEvent *this,int param_1)

{
  pthread_mutex_lock((pthread_mutex_t *)this);
  if (*(int *)(this + 8) != param_1) {
    *(int *)(this + 8) = param_1;
    pthread_cond_signal((pthread_cond_t *)(this + 4));
  }
  pthread_mutex_unlock((pthread_mutex_t *)this);
  return;
}


