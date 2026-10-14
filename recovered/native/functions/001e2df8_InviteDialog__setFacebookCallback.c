/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001e2df8 InviteDialog::setFacebookCallback */

/* InviteDialog::setFacebookCallback(void (*)(void*), void*) */

void __thiscall
InviteDialog::setFacebookCallback(InviteDialog *this,_func_void_void_ptr *param_1,void *param_2)

{
  *(_func_void_void_ptr **)(this + 0x70) = param_1;
  *(void **)(this + 0x74) = param_2;
  return;
}


