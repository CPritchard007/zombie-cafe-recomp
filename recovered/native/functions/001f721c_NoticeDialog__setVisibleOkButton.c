/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 001f721c NoticeDialog::setVisibleOkButton */

/* NoticeDialog::setVisibleOkButton(bool) */

void NoticeDialog::setVisibleOkButton(bool param_1)

{
  int *piVar1;
  undefined4 in_r1;
  
  piVar1 = *(int **)(param_1 + 0x68);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))();
    piVar1 = *(int **)(param_1 + 0x70);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x20))(piVar1,in_r1);
    }
  }
  return;
}


