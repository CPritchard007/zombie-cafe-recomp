/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 000f25ac FacebookNagDialog::FacebookEventHandler */

/* FacebookNagDialog::FacebookEventHandler(ccFacebookMessageType, void*) */

void FacebookNagDialog::FacebookEventHandler(int param_1,FacebookNagDialog *param_2)

{
  if (param_1 == 2) {
    param_2[0x14] = (FacebookNagDialog)0x0;
  }
  else if (param_1 == 4) {
    param_2[0x14] = (FacebookNagDialog)0x1;
    showSuccess(param_2);
  }
  else if (param_1 == 1) {
    param_2[0x14] = (FacebookNagDialog)0x1;
    showError(param_2);
  }
  return;
}


