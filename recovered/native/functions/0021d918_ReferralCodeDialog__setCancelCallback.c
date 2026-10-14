/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0021d918 ReferralCodeDialog::setCancelCallback */

/* ReferralCodeDialog::setCancelCallback(void (*)(void*), void*) */

void __thiscall
ReferralCodeDialog::setCancelCallback
          (ReferralCodeDialog *this,_func_void_void_ptr *param_1,void *param_2)

{
  *(_func_void_void_ptr **)(this + 0x90) = param_1;
  *(void **)(this + 0x94) = param_2;
  return;
}


