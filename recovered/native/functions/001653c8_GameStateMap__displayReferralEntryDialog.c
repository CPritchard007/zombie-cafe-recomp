/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001653c8 GameStateMap::displayReferralEntryDialog */

/* GameStateMap::displayReferralEntryDialog(void*) */

void GameStateMap::displayReferralEntryDialog(void *param_1)

{
  int iVar1;
  
  iVar1 = CapcomApp::getInstance();
  if (param_1 == *(void **)(*(int *)(iVar1 + 4) + 8)) {
    ReferralCodeDialog::setReferralCallbacks
              (*(ReferralCodeDialog **)((int)param_1 + 0x448),
               *(_func_void_void_ptr **)(DAT_0016540c + 0x1653e4),
               *(_func_void_void_ptr_ccServerFailureCode **)(DAT_00165410 + 0x1653e6),param_1);
    ReferralCodeDialog::setCancelCallback
              (*(ReferralCodeDialog **)((int)param_1 + 0x448),
               *(_func_void_void_ptr **)(DAT_00165414 + 0x1653fa),param_1);
    (**(code **)(**(int **)((int)param_1 + 0x448) + 0x20))(*(int **)((int)param_1 + 0x448),1);
  }
  return;
}


