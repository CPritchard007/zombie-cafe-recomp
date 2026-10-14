/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0029c498 _INIT_94 */

void _INIT_94(void)

{
  int iVar1;
  CFTexture *this;
  pthread_mutex_t *__mutex;
  undefined4 uVar2;
  
  iVar1 = DAT_0029c4e4;
  this = (CFTexture *)(DAT_0029c4e0 + 0x29c4a2);
  CFTexture::CFTexture(this);
  iVar1 = iVar1 + 0x29c4ac;
  uVar2 = *(undefined4 *)(iVar1 + DAT_0029c4ec);
  __aeabi_atexit(this,*(undefined4 *)(iVar1 + DAT_0029c4e8),uVar2);
  __mutex = *(pthread_mutex_t **)(iVar1 + DAT_0029c4f0);
  pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
  (__mutex->__data).__lock = 0;
  __aeabi_atexit(__mutex,*(undefined4 *)(iVar1 + DAT_0029c4f4),uVar2);
  CapcomFontEffect::CapcomFontEffect(*(CapcomFontEffect **)(iVar1 + DAT_0029c4f8));
  return;
}


