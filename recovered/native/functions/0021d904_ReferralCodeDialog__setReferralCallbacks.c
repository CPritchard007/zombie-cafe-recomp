/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 0021d904 ReferralCodeDialog::setReferralCallbacks */

/* ReferralCodeDialog::setReferralCallbacks(void (*)(void*), void (*)(void*, ccServerFailureCode),
   void*) */

void __thiscall
ReferralCodeDialog::setReferralCallbacks
          (ReferralCodeDialog *this,_func_void_void_ptr *param_1,
          _func_void_void_ptr_ccServerFailureCode *param_2,void *param_3)

{
  *(_func_void_void_ptr **)(this + 0x98) = param_1;
  *(_func_void_void_ptr_ccServerFailureCode **)(this + 0x9c) = param_2;
  *(void **)(this + 0xa0) = param_3;
  return;
}


