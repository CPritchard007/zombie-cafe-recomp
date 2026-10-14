/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 00223fe4 SaveDataConfirmDialog::confirmSaveData */

/* SaveDataConfirmDialog::confirmSaveData(SaveDataConfirmDialog*) */

void SaveDataConfirmDialog::confirmSaveData(SaveDataConfirmDialog *param_1)

{
  SaveDataConfirmDialog *pSVar1;
  
  if (param_1 != (SaveDataConfirmDialog *)0x0) {
    if (param_1[0xcc] == (SaveDataConfirmDialog)0x0) {
      pSVar1 = param_1 + 0xc4;
    }
    else {
      pSVar1 = param_1 + 0xc0;
    }
    if (*(code **)pSVar1 != (code *)0x0) {
      (**(code **)pSVar1)(*(undefined4 *)(param_1 + 200));
    }
    param_1[0x14] = (SaveDataConfirmDialog)0x0;
  }
  return;
}


