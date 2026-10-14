/* Decompiled reference pseudocode. Not original or buildable C++. */
/* 002398bc L_DlcRequestFailCallback */

/* L_DlcRequestFailCallback(void*, ccDlcFailureCode) */

void L_DlcRequestFailCallback(int param_1)

{
  *(undefined4 *)(param_1 + DAT_002398dc + 4) = 0xffffffff;
  if (*(code **)(param_1 + DAT_002398e0) != (code *)0x0) {
    (**(code **)(param_1 + DAT_002398e0))(*(undefined4 *)(param_1 + 0x970));
  }
  return;
}


