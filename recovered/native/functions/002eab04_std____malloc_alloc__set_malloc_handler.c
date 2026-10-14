/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002eab04 std::__malloc_alloc::set_malloc_handler */

/* std::__malloc_alloc::set_malloc_handler(void (*)()) */

undefined4 std::__malloc_alloc::set_malloc_handler(_func_void *param_1)

{
  pthread_mutex_t *__mutex;
  undefined4 uVar1;
  
  __mutex = (pthread_mutex_t *)(DAT_002eab24 + 0x2eab0e);
  pthread_mutex_lock(__mutex);
  uVar1 = *(undefined4 *)(DAT_002eab28 + 0x2eab1a);
  *(undefined4 *)(DAT_002eab28 + 0x2eab1a) = param_1;
  pthread_mutex_unlock(__mutex);
  return uVar1;
}


